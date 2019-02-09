#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-9.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("Bool") ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@booleanDeclarationAST enterInContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_booleanDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                  GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                  GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_uint_31_TypeProxy_2862 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint1"), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 53)).getter_location (SOURCE_FILE ("type-bool.galgas", 53))  COMMA_SOURCE_FILE ("type-bool.galgas", 53)), var_uint_31_TypeProxy_2862 COMMA_SOURCE_FILE ("type-bool.galgas", 53)) ;
  }
  GALGAS_routineMapCTXT var_routineMap_2917 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 55)) ;
  {
  GALGAS_lstring joker_3142 ; // Joker input parameter
  extensionSetter_addFunctionWithoutArgument (var_routineMap_2917, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)), GALGAS_string ("uint1").getter_nowhere (SOURCE_FILE ("type-bool.galgas", 59)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-bool.galgas", 60)), var_uint_31_TypeProxy_2862, joker_3142, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 57)) ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-bool.galgas", 73)) ;
  temp_0.addAssign_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73))  COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  GALGAS_PLMType var_booleanType_3209 = GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 66)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 67)), var_routineMap_2917, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 69)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 70)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-bool.galgas", 71)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-bool.galgas", 72)), temp_0, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-bool.galgas", 74)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-bool.galgas", 74)) COMMA_SOURCE_FILE ("type-bool.galgas", 74)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-bool.galgas", 74)) COMMA_SOURCE_FILE ("type-bool.galgas", 74)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("type-bool.galgas", 76)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77))  COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 81)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 81)), var_booleanType_3209, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  GALGAS_PLMType var_selfType_3781 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 85)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  GALGAS_lstring var_boolBoolOp_3888 = function_combineTypeNamesForInfixOperator (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_boolBoolOp_3888, var_selfType_3781, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-bool.galgas", 90))  COMMA_SOURCE_FILE ("type-bool.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_boolBoolOp_3888, var_selfType_3781, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-bool.galgas", 100))  COMMA_SOURCE_FILE ("type-bool.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 97)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_boolBoolOp_3888, var_selfType_3781, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-bool.galgas", 105))  COMMA_SOURCE_FILE ("type-bool.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 102)) ;
  }
  {
  ioArgument_ioContext.mProperty_mBooleanXorOperatorMap.setter_insertKey (var_boolBoolOp_3888, var_selfType_3781, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-bool.galgas", 120))  COMMA_SOURCE_FILE ("type-bool.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_boolBoolOp_3888, var_selfType_3781, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-bool.galgas", 125))  COMMA_SOURCE_FILE ("type-bool.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 122)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_boolBoolOp_3888, var_selfType_3781, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-bool.galgas", 130))  COMMA_SOURCE_FILE ("type-bool.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNotOperatorMap.setter_insertKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 133)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 132)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_basicIntegerAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 137)).add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 137)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 137)).add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 137)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 137)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i1")  COMMA_SOURCE_FILE ("type-bool.galgas", 136))  COMMA_SOURCE_FILE ("type-bool.galgas", 136)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_booleanDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_booleanDeclarationAST.mSlotID,
                                       extensionMethod_booleanDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_booleanDeclarationAST_enterInContext (defineExtensionMethod_booleanDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@basicIntegerAssignFunctionIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_basicIntegerAssignFunctionIR * object = (const cPtr_basicIntegerAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_basicIntegerAssignFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-bool.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (GALGAS_string ("* %target, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)).add_operation (GALGAS_string ("* %source) alwaysinline {\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 160)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 161)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 161)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 161)).add_operation (GALGAS_string ("* %source\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 161)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 162)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 162)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 162)).add_operation (GALGAS_string ("* %target\n"), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 164)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_basicIntegerAssignFunctionIR.mSlotID,
                                           extensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_basicIntegerAssignFunctionIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mEnumerationName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 54)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 54)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 54)) ;
  }
  GALGAS_bigint var_maxValue_2402 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 56)) ;
  cEnumerator_enumerationConstantList enumerator_2440 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_2440.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsStrictInf, var_maxValue_2402.objectCompare (enumerator_2440.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_maxValue_2402 = enumerator_2440.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2440.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2540 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)).isValid ()) {
    uint32_t variant_2551 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)).uintValue () ;
    bool loop_2551 = true ;
    while (loop_2551) {
      loop_2551 = GALGAS_bool (kIsStrictSup, var_maxValue_2402.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)))).isValid () ;
      if (loop_2551) {
        loop_2551 = GALGAS_bool (kIsStrictSup, var_maxValue_2402.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)))).boolValue () ;
      }
      if (loop_2551 && (0 == variant_2551)) {
        loop_2551 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
      }
      if (loop_2551) {
        variant_2551 -- ;
        var_representationBitCount_2540.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
        var_maxValue_2402 = var_maxValue_2402.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 65)) ;
      }
    }
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mEnumerationName, GALGAS_string ("UInt").add_operation (var_representationBitCount_2540.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 67)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_enumerationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outLocation = object->mProperty_mEnumerationName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                  extensionGetter_enumerationDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 79)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumerationDeclarationAST enterInContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                      const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                      GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                      GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                      GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                      GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                      GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  GALGAS_classConstantMap var_enumConstantMap_4722 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 107)) ;
  GALGAS_bigint var_maxValue_4746 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 108)) ;
  cEnumerator_enumerationConstantList enumerator_4787 (object->mProperty_mCaseNameList, kENUMERATION_UP) ;
  while (enumerator_4787.hasCurrentObject ()) {
    {
    var_enumConstantMap_4722.setter_insertKey (enumerator_4787.current_mConstantName (HERE), enumerator_4787.current_mConstantValue (HERE), object->mProperty_mEnumerationName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
    }
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictInf, var_maxValue_4746.objectCompare (enumerator_4787.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_maxValue_4746 = enumerator_4787.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4787.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_5003 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)).isValid ()) {
    uint32_t variant_5014 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)).uintValue () ;
    bool loop_5014 = true ;
    while (loop_5014) {
      loop_5014 = GALGAS_bool (kIsStrictSup, var_maxValue_4746.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)))).isValid () ;
      if (loop_5014) {
        loop_5014 = GALGAS_bool (kIsStrictSup, var_maxValue_4746.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)))).boolValue () ;
      }
      if (loop_5014 && (0 == variant_5014)) {
        loop_5014 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)) ;
      }
      if (loop_5014) {
        variant_5014 -- ;
        var_representationBitCount_5003.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 118)) ;
        var_maxValue_4746 = var_maxValue_4746.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)) ;
      }
    }
  }
  GALGAS_routineMapCTXT var_routineMap_5198 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_5242 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_5270 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("UInt").add_operation (var_representationBitCount_5003.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 126))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 124)) ;
  GALGAS_lstring var_conversionToUIntN_5677 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_5242, object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 129)), GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_representationBitCount_5003.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), object->mProperty_mEnumerationName.getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 130))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 130)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 131)), GALGAS_bool (true), var_integerTypeProxy_5270, var_conversionToUIntN_5677, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_5677, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_5003.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 136)) ;
  {
  routine_enterEnumerationComparisonOperators (object->mProperty_mEnumerationName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  }
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enumeration-declaration.galgas", 153)) ;
  temp_1.addAssign_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 153))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 153)) ;
  GALGAS_PLMType var_enumerationType_6062 = GALGAS_PLMType::constructor_new (var_propertyGetterMap_5242, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 147)), var_routineMap_5198, var_enumConstantMap_4722, GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 150)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 151)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 152)), temp_1, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 154)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 154)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 155)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_5003  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 156)), object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 157))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mEnumerationName, var_enumerationType_6062, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 159)) ;
  }
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mEnumerationName, var_enumerationType_6062, ioArgument_ioContext.getter_mTypeMap (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 163)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_basicIntegerAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)).add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)).add_operation (object->mProperty_mEnumerationName.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 170)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 170)), GALGAS_bool (false), GALGAS_bool (false), callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) var_enumerationType_6062.ptr (), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 173))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 169))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 169)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Routine 'enterEnumerationComparisonOperators'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterEnumerationComparisonOperators (GALGAS_lstring inArgument_inTypeName,
                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_key_7278 = function_combineTypeNamesForInfixOperator (inArgument_inTypeName.getter_string (HERE), inArgument_inTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 183)) ;
  GALGAS_PLMType var_booleanType_7371 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 184)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_key_7278, var_booleanType_7371, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-enumeration-declaration.galgas", 188))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 185)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_key_7278, var_booleanType_7371, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-enumeration-declaration.galgas", 198))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 195)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_key_7278, var_booleanType_7371, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-enumeration-declaration.galgas", 203))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 200)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumToUintRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumToUintRoutineIR * object = (const cPtr_enumToUintRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumToUintRoutineIR) ;
  GALGAS_string var_routineLLVMName_9002 = function_llvmNameForFunction (object->mProperty_mRoutineMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233)).add_operation (var_routineLLVMName_9002, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 234)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)).add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mEnumerationLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 236)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 237)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_enumToUintRoutineIR.mSlotID,
                                           extensionMethod_enumToUintRoutineIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumToUintRoutineIR_llvmCodeGeneration (defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mReceiverTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 323)) ;
  }
  cEnumerator_structurePropertyListAST enumerator_10507 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_10507.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_10507.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mReceiverTypeName, enumerator_10507.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 327)) ;
        }
      }
    }
    switch (enumerator_10507.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_10854 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_10507.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_10854->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 332)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_10999 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_10507.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_10999->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mReceiverTypeName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 334)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_11131 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_10507.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_11131->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 336)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_11270 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_10507.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_11270->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 338)) ;
      }
      break ;
    }
    enumerator_10507.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_11353 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_11353.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_11426 (enumerator_11353.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_11426.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_11426.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 344)) ;
      }
      enumerator_11426.gotoNextObject () ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_11353.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_11353.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 347)) ;
        }
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_11353.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
    enumerator_11353.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 352)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 353)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outRepresentation = object->mProperty_mReceiverTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
//---
  return result_outRepresentation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_location extensionGetter_structureDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  result_outLocation = object->mProperty_mReceiverTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                  extensionGetter_structureDeclarationAST_locationForErrorSignaling) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_structureDeclarationAST_locationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@structureDeclarationAST enterInContext'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  GALGAS_propertyList var_propertyList_13887 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 400)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_13931 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 401)) ;
  GALGAS_propertySetterMap var_propertySetterMap_13975 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 402)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_14023 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
  GALGAS_constructorSignature var_constructorSignature_14073 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 404)) ;
  GALGAS_string var_constructorKey_14103 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_14127 = GALGAS_bool (true) ;
  cEnumerator_structurePropertyListAST enumerator_14178 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_14178.hasCurrentObject ()) {
    extensionMethod_enterPropertyInContext (enumerator_14178.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 412)), ioArgument_ioDecoratedRoutineList, var_propertyList_13887, var_propertyGetterMap_13931, var_propertySetterMap_13975, var_sortedOperandIRList_14023, var_constructorSignature_14073, var_constructorKey_14103, var_canBeCopied_14127, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
    enumerator_14178.gotoNextObject () ;
  }
  var_constructorKey_14103.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 423)) ;
  GALGAS_constructorMap var_constructorMap_14710 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 425)) ;
  {
  var_constructorMap_14710.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_14103, object->mProperty_mReceiverTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 427)), var_constructorSignature_14073, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_14023  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 426)) ;
  }
  GALGAS_PLMTypeAttributes var_typeAttributes_14984 = GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 432)) ;
  cEnumerator_lstringlist enumerator_15119 (object->mProperty_mAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_15119.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_15119.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 435)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_typeAttributes_14984.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 436)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_15119.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 437)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_canBeCopied_14127.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 438)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (object->mProperty_mReceiverTypeName.getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 439)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 439)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_15119.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 442)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 442)) ;
    }
    enumerator_15119.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_14127 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 445)).boolEnum () ;
    if (kBoolTrue == test_6) {
      var_typeAttributes_14984 = var_typeAttributes_14984.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 446)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 446)) ;
    }
  }
  GALGAS_routineMapCTXT var_routineMapCTXT_15680 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 449)) ;
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 452)), var_routineMapCTXT_15680, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
  extensionMethod_enterSystemRoutineInContext (object->mProperty_mSystemRoutineListAST, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 461)), var_routineMapCTXT_15680, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 459)) ;
  GALGAS_guardMapCTXT var_guardMap_16376 = GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 468)) ;
  extensionMethod_enterGuardsInContext (object->mProperty_mGuardListAST, object->mProperty_mReceiverTypeName, object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 471)), ioArgument_ioContext, var_guardMap_16376, ioArgument_ioDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
  GALGAS_stringset temp_7 ;
  const enumGalgasBool test_8 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_14127 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 485)).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_stringset temp_9 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 485)) ;
    temp_9.addAssign_operation (object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 485))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 485)) ;
    temp_7 = temp_9 ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 485)) ;
  }
  GALGAS_PLMType var_structureType_16674 = GALGAS_PLMType::constructor_new (var_propertyGetterMap_13931, var_propertySetterMap_13975, var_routineMapCTXT_15680, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 481)), var_constructorMap_14710, var_guardMap_16376, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 484)), temp_7, var_typeAttributes_14984, object->mProperty_mPLMTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 487)), GALGAS_typeKind::constructor_structure (var_propertyList_13887  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 488)), object->mProperty_mLLVMBaseTypeName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 489))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 477)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mReceiverTypeName, var_structureType_16674, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 491)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) var_structureType_16674.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 497)), var_propertyList_13887  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 496))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 496)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = object->mProperty_mGenerateAssignmentRoutine.operator_and (var_canBeCopied_14127 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 501)).boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_structureTypeAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)).add_operation (object->mProperty_mPLMTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)).add_operation (object->mProperty_mPLMTypeSpecificName.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)).getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 503)), GALGAS_bool (false), GALGAS_bool (false), var_structureType_16674  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMSructureTypeDefinitionIR * object = (const cPtr_userLLVMSructureTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMSructureTypeDefinitionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(object->mProperty_mLLVMDefinedTypeName.add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)) ;
  cEnumerator_propertyList enumerator_26102 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_26102.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_26102.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)) ;
    if (enumerator_26102.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    enumerator_26102.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureTypeAssignFunctionIR * object = (const cPtr_structureTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_structureTypeAssignFunctionIR) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_26905 = callExtensionGetter_arcList ((const cPtr_PLMType *) object->mProperty_mStructureType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  GALGAS_string var_structureTypeLLVMTypeName_26968 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mStructureType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_structureTypeLLVMTypeName_26968.add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)) ;
  cEnumerator_arcAssignmentList enumerator_27349 (var_arcAssignmentList_26905, kENUMERATION_UP) ;
  while (enumerator_27349.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_27381 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_27349.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    GALGAS_string var_llvmVarName_27431 = GALGAS_string ("%arc.retain.").add_operation (enumerator_27349.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_27431, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)) ;
    cEnumerator_uintlist enumerator_27739 (enumerator_27349.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_27739.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_27739.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)) ;
      enumerator_27739.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_27349.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    GALGAS_string var_llvmLoadedVarName_27857 = var_llvmVarName_27431.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_27857, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_propertyTypeLLVMName_27381, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_propertyTypeLLVMName_27381, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_llvmVarName_27431, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_27381, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (var_llvmLoadedVarName_27857, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 767)) ;
    enumerator_27349.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_28196 (var_arcAssignmentList_26905, kENUMERATION_UP) ;
  while (enumerator_28196.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_28219 = GALGAS_string ("%arc.release.").add_operation (enumerator_28196.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_28219, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)) ;
    cEnumerator_uintlist enumerator_28528 (enumerator_28196.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_28528.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_28528.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)) ;
      enumerator_28528.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_28196.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    GALGAS_string var_propertyTypeLLVMName_28649 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_28196.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    GALGAS_string var_llvmLoadedVarName_28705 = var_llvmVarName_28219.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_28705, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_propertyTypeLLVMName_28649, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_propertyTypeLLVMName_28649, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_llvmVarName_28219, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_28649, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (var_llvmLoadedVarName_28705, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)) ;
    enumerator_28196.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)).add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_26968, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 821)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 822)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

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
  cEnumerator_structurePropertyListAST enumerator_2743 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_2743.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_2743.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncToolName, enumerator_2743.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 63)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = enumerator_2743.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_2743.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 66)), GALGAS_string ("a sync tool property cannot be public (should be private)"), fixItArray3  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
    }
    switch (enumerator_2743.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_3196 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3196->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 71)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_3337 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3337->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), object->mProperty_mSyncToolName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 73)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_3469 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_3469->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 75)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_3608 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_2743.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_3608->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 77)) ;
      }
      break ;
    }
    enumerator_2743.gotoNextObject () ;
  }
  cEnumerator_functionDeclarationListAST enumerator_3691 (object->mProperty_mFunctionDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_3691.hasCurrentObject ()) {
    cEnumerator_routineFormalArgumentListAST enumerator_3764 (enumerator_3691.current_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_3764.hasCurrentObject ()) {
      {
      ioArgument_ioGraph.setter_noteNode (enumerator_3764.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 83)) ;
      }
      enumerator_3764.gotoNextObject () ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, enumerator_3691.current_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        ioArgument_ioGraph.setter_noteNode (enumerator_3691.current_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 86)) ;
        }
      }
    }
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_3691.current_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 88)) ;
    enumerator_3691.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mSystemRoutineListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 91)) ;
  extensionMethod_noteTypesInPrecedenceGraph (object->mProperty_mGuardListAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 92)) ;
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
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 98)) ;
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
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_5816 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 123)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_5860 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 124)) ;
  GALGAS_propertySetterMap var_propertySetterMap_5904 = GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 125)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_5952 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 126)) ;
  GALGAS_constructorSignature var_constructorSignature_6002 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 127)) ;
  GALGAS_string var_constructorKey_6032 = GALGAS_string ("(") ;
  cEnumerator_structurePropertyListAST enumerator_6082 (object->mProperty_mStructurePropertyListAST, kENUMERATION_UP) ;
  while (enumerator_6082.hasCurrentObject ()) {
    GALGAS_bool joker_6468 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 142)) ;
    extensionMethod_enterPropertyInContext (enumerator_6082.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 134)), ioArgument_ioDecoratedRoutineList, var_propertyList_5816, var_propertyGetterMap_5860, var_propertySetterMap_5904, var_sortedOperandIRList_5952, var_constructorSignature_6002, var_constructorKey_6032, joker_6468, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 130)) ;
    enumerator_6082.gotoNextObject () ;
  }
  var_constructorKey_6032.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 145)) ;
  GALGAS_constructorMap var_constructorMap_6596 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 147)) ;
  {
  var_constructorMap_6596.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_6032, object->mProperty_mSyncToolName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 149)), var_constructorSignature_6002, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_5952  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 148)) ;
  }
  GALGAS_routineMapCTXT var_routineMapCTXT_6877 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 154)) ;
  extensionMethod_enterFunctionsInPropertyMap (object->mProperty_mFunctionDeclarationListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 157)), var_routineMapCTXT_6877, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 155)) ;
  extensionMethod_enterSystemRoutineInContext (object->mProperty_mSystemRoutineListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 166)), var_routineMapCTXT_6877, ioArgument_ioContext, ioArgument_ioDecoratedRoutineList, ioArgument_ioRoutineListIR, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 164)) ;
  GALGAS_guardMapCTXT var_guardMap_7557 = GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 173)) ;
  extensionMethod_enterGuardsInContext (object->mProperty_mGuardListAST, object->mProperty_mSyncToolName, object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 176)), ioArgument_ioContext, var_guardMap_7557, ioArgument_ioDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 174)) ;
  GALGAS_PLMType var_structureType_7847 = GALGAS_PLMType::constructor_new (var_propertyGetterMap_5860, var_propertySetterMap_5904, var_routineMapCTXT_6877, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 186)), var_constructorMap_6596, var_guardMap_7557, GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 189)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-sync-declaration.galgas", 190)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 191)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 192)), GALGAS_typeKind::constructor_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 193)), object->mProperty_mSyncToolName.getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 194))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 182)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mSyncToolName, var_structureType_7847, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 196)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) var_structureType_7847.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 202)), var_propertyList_5816  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 201))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 201)) ;
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
  GALGAS_lstring var_integerTypeName_1432 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_integerTypeName_1432, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_integerTypeName_1432, function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 46)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)).left_shift_operation (constinArgument_inBitCount COMMA_SOURCE_FILE ("type-integer.galgas", 56)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 56)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
                                                                  GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                  GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_3797 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 77)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 77)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3917 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3797, var_selfTypeProxy_3917 COMMA_SOURCE_FILE ("type-integer.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_4028 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 79))  COMMA_SOURCE_FILE ("type-integer.galgas", 79)), var_boolTypeProxy_4028 COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  GALGAS_bigint var_min_4096 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 81)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  GALGAS_bigint var_max_4151 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 82)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  GALGAS_string var_llvmTypeName_4269 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  GALGAS_routineMapCTXT var_routineMap_4312 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 85)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_4356 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 86)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring var_routineLLVMName_4697 ;
      {
      extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 90)), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 91)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 92)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_4697, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 89)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_4697, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 97))  COMMA_SOURCE_FILE ("type-integer.galgas", 97)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 106)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_routineLLVMName_5261 ;
      {
      extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 108)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 109)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 109)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 110)), GALGAS_bool (true), var_boolTypeProxy_4028, var_routineLLVMName_5261, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 107)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_uint_31_ToBoolFunctionIR::constructor_new (var_routineLLVMName_5261, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269  COMMA_SOURCE_FILE ("type-integer.galgas", 115))  COMMA_SOURCE_FILE ("type-integer.galgas", 115)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_5717 ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 124)), GALGAS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 123)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 131))  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 140)), GALGAS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 141)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 142)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 147))  COMMA_SOURCE_FILE ("type-integer.galgas", 147)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 156)), GALGAS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 157)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 158)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 155)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 163))  COMMA_SOURCE_FILE ("type-integer.galgas", 163)) ;
  {
  extensionSetter_addPropertyGetter (var_propertyGetterMap_4356, var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 172)), GALGAS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 173)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 174)), GALGAS_bool (true), var_selfTypeProxy_3917, var_routineLLVMName_5717, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5717, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 179))  COMMA_SOURCE_FILE ("type-integer.galgas", 179)) ;
  GALGAS_classConstantMap var_classConstantMap_7357 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 187)) ;
  {
  var_classConstantMap_7357.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 188)), var_min_4096, var_integerTypeName_3797, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 188)) ;
  }
  {
  var_classConstantMap_7357.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 189)), var_max_4151, var_integerTypeName_3797, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 189)) ;
  }
  GALGAS_constructorMap var_constructorMap_7596 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 191)) ;
  {
  var_constructorMap_7596.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 192)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 192))  COMMA_SOURCE_FILE ("type-integer.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 202)) ;
  temp_4.addAssign_operation (var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 202))  COMMA_SOURCE_FILE ("type-integer.galgas", 202)) ;
  GALGAS_PLMType var_integerType_7750 = GALGAS_PLMType::constructor_new (var_propertyGetterMap_4356, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 196)), var_routineMap_4312, var_classConstantMap_7357, var_constructorMap_7596, GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 200)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-integer.galgas", 201)), temp_4, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 203)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-integer.galgas", 203)) COMMA_SOURCE_FILE ("type-integer.galgas", 203)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 203)) COMMA_SOURCE_FILE ("type-integer.galgas", 203)).operator_or (GALGAS_PLMTypeAttributes::constructor_comparable (SOURCE_FILE ("type-integer.galgas", 203)) COMMA_SOURCE_FILE ("type-integer.galgas", 203)), var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 204)), GALGAS_typeKind::constructor_integer (var_min_4096, var_max_4151, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 205)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 205)), var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 206))  COMMA_SOURCE_FILE ("type-integer.galgas", 194)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3797, var_integerType_7750, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 208)) ;
  }
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mValuedObjectMap, var_integerTypeName_3797, var_integerType_7750, ioArgument_ioContext.getter_mTypeMap (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_3797, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 218)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_3797, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 224)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_3797, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 230)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerTypeAssignFunctionIR::constructor_new (function_assignmentPrefix (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)).add_operation (var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)).add_operation (var_integerTypeName_3797.getter_string (SOURCE_FILE ("type-integer.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 237)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 237)), GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4269  COMMA_SOURCE_FILE ("type-integer.galgas", 236))  COMMA_SOURCE_FILE ("type-integer.galgas", 236)) ;
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
  GALGAS_PLMType var_selfType_10953 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 275)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 275)) ;
  GALGAS_PLMType var_booleanType_11053 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  GALGAS_lstring var_intIntOp_11125 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 278)), constinArgument_inIntegerTypeName.getter_string (SOURCE_FILE ("type-integer.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_11125, var_booleanType_11053, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 282))  COMMA_SOURCE_FILE ("type-integer.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 287)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 287)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_11125, var_booleanType_11053, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 284)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 292)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 292)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_11125, var_booleanType_11053, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 295)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 299))  COMMA_SOURCE_FILE ("type-integer.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 296)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 304))  COMMA_SOURCE_FILE ("type-integer.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 301)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 309))  COMMA_SOURCE_FILE ("type-integer.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 306)) ;
      }
      {
      ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 311)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inIsSigned.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 317)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 325)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 325)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 330))  COMMA_SOURCE_FILE ("type-integer.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 327)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_8 ;
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 335)) ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 335)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_8  COMMA_SOURCE_FILE ("type-integer.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 340))  COMMA_SOURCE_FILE ("type-integer.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 345)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 345)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 350))  COMMA_SOURCE_FILE ("type-integer.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 355)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 355)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 360)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 357)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 365)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 365)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 362)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 370)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 370)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 367)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 376))  COMMA_SOURCE_FILE ("type-integer.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 381)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 381)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_11125, var_selfType_10953, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 401)) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 401)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_left_15190 ;
      GALGAS_PLMType joker_15164_1 ; // Joker input parameter
      constinArgument_inLeftOperand.method_literalInteger (joker_15164_1, var_left_15190, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
      GALGAS_bigint var_right_15255 ;
      GALGAS_PLMType joker_15228_1 ; // Joker input parameter
      constinArgument_inRightOperand.method_literalInteger (joker_15228_1, var_right_15255, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 403)) ;
      const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
      GALGAS_bigint var_resultValue_15276 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_15190, var_right_15255, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 404)) ;
      outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_15276  COMMA_SOURCE_FILE ("type-integer.galgas", 405)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
  GALGAS_PLMType var_selfType_16221 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 430)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 430)) ;
  GALGAS_PLMType var_booleanType_16321 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 431)) ;
  GALGAS_lstring var_intLiteralOp_16397 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_booleanType_16321, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 437))  COMMA_SOURCE_FILE ("type-integer.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 434)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 442)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 442)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_booleanType_16321, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 439)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 447)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 447)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_booleanType_16321, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 444)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 454))  COMMA_SOURCE_FILE ("type-integer.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 451)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 459))  COMMA_SOURCE_FILE ("type-integer.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 456)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 464))  COMMA_SOURCE_FILE ("type-integer.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 461)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_5 ;
  const enumGalgasBool test_6 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 471)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 471)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_5  COMMA_SOURCE_FILE ("type-integer.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 476))  COMMA_SOURCE_FILE ("type-integer.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 473)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_7 ;
  const enumGalgasBool test_8 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 481)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 481)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-integer.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 478)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 486))  COMMA_SOURCE_FILE ("type-integer.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 483)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 491)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 491)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 488)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 496))  COMMA_SOURCE_FILE ("type-integer.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 493)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 501)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 501)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 498)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 506)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 506)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 503)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 511)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 511)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 508)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 516)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 516)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 513)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 522))  COMMA_SOURCE_FILE ("type-integer.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 519)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 527)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 527)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_16397, var_selfType_16221, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 524)) ;
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
  GALGAS_bigint var_rightLiteralValue_20314 ;
  GALGAS_PLMType joker_20275_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_20275_1, var_rightLiteralValue_20314, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 548)) ;
  GALGAS_bigint var_min_20373 ;
  GALGAS_bigint var_max_20394 ;
  GALGAS_bool joker_20396_2 ; // Joker input parameter
  GALGAS_uint joker_20396_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 549)).getter_kind (HERE).method_integer (var_min_20373, var_max_20394, joker_20396_2, joker_20396_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 549)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_rightLiteralValue_20314.objectCompare (var_min_20373)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_20373.getter_string (SOURCE_FILE ("type-integer.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 551)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 551)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 551)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_rightLiteralValue_20314.objectCompare (var_max_20394)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_20394.getter_string (SOURCE_FILE ("type-integer.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 553)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 553)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 553)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 554)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bigint var_leftLiteralValue_20820 ;
          GALGAS_PLMType joker_20782_1 ; // Joker input parameter
          constinArgument_inLeftOperand.method_literalInteger (joker_20782_1, var_leftLiteralValue_20820, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 555)) ;
          const GALGAS_integerObject_5F_literal_5F_infixOperator temp_5 = object ;
          GALGAS_bigint var_resultValue_20841 = callExtensionGetter_performStaticOperation ((const cPtr_integerObject_5F_literal_5F_infixOperator *) temp_5.ptr (), var_leftLiteralValue_20820, var_rightLiteralValue_20314, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 556)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_20841  COMMA_SOURCE_FILE ("type-integer.galgas", 557)) ;
        }
      }
      if (kBoolFalse == test_4) {
        {
        routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 559)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 562)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 560)) ;
        }
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
  GALGAS_PLMType var_selfType_21789 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 581)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 581)) ;
  GALGAS_lstring var_intLiteralOp_21921 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 583)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 583)) ;
  GALGAS_PLMType var_booleanType_22028 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 584)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_booleanType_22028, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 588))  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 593)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_booleanType_22028, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 590)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 598)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_booleanType_22028, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 601)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 605))  COMMA_SOURCE_FILE ("type-integer.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
      }
      {
      ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 610))  COMMA_SOURCE_FILE ("type-integer.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)) ;
      }
      {
      ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 615))  COMMA_SOURCE_FILE ("type-integer.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 612)) ;
      }
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_5 ;
  const enumGalgasBool test_6 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 622)) ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 622)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_5  COMMA_SOURCE_FILE ("type-integer.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 619)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 627))  COMMA_SOURCE_FILE ("type-integer.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 624)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_7 ;
  const enumGalgasBool test_8 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 632)) ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 632)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_7  COMMA_SOURCE_FILE ("type-integer.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 629)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 637))  COMMA_SOURCE_FILE ("type-integer.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 634)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 642)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 642)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 639)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 647))  COMMA_SOURCE_FILE ("type-integer.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 644)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 652)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 652)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 649)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 657)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 657)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 654)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 662)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 662)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 659)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 667)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 667)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 664)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 673))  COMMA_SOURCE_FILE ("type-integer.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 670)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 678)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 678)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_21921, var_selfType_21789, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 675)) ;
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
  GALGAS_bigint var_leftLiteralValue_25855 ;
  GALGAS_PLMType joker_25817_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_25817_1, var_leftLiteralValue_25855, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 699)) ;
  GALGAS_bigint var_min_25915 ;
  GALGAS_bigint var_max_25936 ;
  GALGAS_bool joker_25938_2 ; // Joker input parameter
  GALGAS_uint joker_25938_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 700)).getter_kind (HERE).method_integer (var_min_25915, var_max_25936, joker_25938_2, joker_25938_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 700)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_leftLiteralValue_25855.objectCompare (var_min_25915)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_25915.getter_string (SOURCE_FILE ("type-integer.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 702)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 702)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 702)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_leftLiteralValue_25855.objectCompare (var_max_25936)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_25936.getter_string (SOURCE_FILE ("type-integer.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 704)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 704)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 704)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 705)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bigint var_rightLiteralValue_26361 ;
          GALGAS_PLMType joker_26322_1 ; // Joker input parameter
          constinArgument_inRightOperand.method_literalInteger (joker_26322_1, var_rightLiteralValue_26361, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 706)) ;
          const GALGAS_literal_5F_integerObject_5F_infixOperator temp_5 = object ;
          GALGAS_bigint var_resultValue_26382 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_integerObject_5F_infixOperator *) temp_5.ptr (), var_leftLiteralValue_25855, var_rightLiteralValue_26361, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 707)) ;
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_26382  COMMA_SOURCE_FILE ("type-integer.galgas", 708)) ;
        }
      }
      if (kBoolFalse == test_4) {
        {
        routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 710)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 713)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 711)) ;
        }
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 737)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 737)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 737)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 737)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 738)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 738)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 738)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 739)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 739)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 739)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 739)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 739)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 740)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 741)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)).add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 760)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 761)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 761)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 762)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 763)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 764)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 764)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 765)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 765)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 766)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (object->mProperty_mLLVMTypeName.add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (object->mProperty_mIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 768))  COMMA_SOURCE_FILE ("type-integer.galgas", 767)) ;
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
//                    Overriding extension method '@integerTypeAssignFunctionIR llvmCodeGeneration'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerTypeAssignFunctionIR * object = (const cPtr_integerTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerTypeAssignFunctionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 786)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 787)).add_operation (GALGAS_string ("* %outTarget, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 787)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 787)).add_operation (GALGAS_string ("* %inSource) alwaysinline {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 787)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 789)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 789)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 789)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 790)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using load/store\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 795)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 795)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 795)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 795)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 796)).add_operation (GALGAS_string (" %value, "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 796)).add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 796)).add_operation (GALGAS_string ("* %outTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy using copy function\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)).add_operation (GALGAS_string ("* %outTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (object->mProperty_mLLVMTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add nsw nuw i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 806)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_integerTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

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
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_2698 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 47)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 47)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_2698, function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 49)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 54)) ;
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
  GALGAS_lstring var_literalIntegerTypeName_3164 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
  GALGAS_lstring var_intIntOp_3237 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3164.getter_string (HERE), var_literalIntegerTypeName_3164.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 66)) ;
  GALGAS_PLMType var_selfType_3351 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3164, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 67)) ;
  GALGAS_PLMType var_booleanType_3487 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3237, var_booleanType_3487, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 73))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 70)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3237, var_booleanType_3487, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 83))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 80)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3237, var_booleanType_3487, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 88))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 85)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3164, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 116)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3164, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 127))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 124)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 132))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 129)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 137))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 134)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 142))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 139)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 147))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 144)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 152))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 149)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 157))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 154)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 162))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 159)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 167))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 164)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 172))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 169)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 178))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3237, var_selfType_3351, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 183))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)) ;
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
  GALGAS_bigint var_leftValue_7665 ;
  GALGAS_PLMType joker_7634_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_7634_1, var_leftValue_7665, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 205)) ;
  GALGAS_bigint var_rightValue_7733 ;
  GALGAS_PLMType joker_7701_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_7701_1, var_rightValue_7733, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 206)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_7747 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_7665, var_rightValue_7733, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 207)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7747  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 208)) ;
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
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1179, GALGAS_string ("UInt8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
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
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
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
                                                                     GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                     GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  GALGAS_PLMTypeAttributes var_opaqueTypeAttributes_4314 = GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 90)) ;
  GALGAS_bool var_copyable_4337 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4381 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4381.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_4381.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_opaqueTypeAttributes_4314.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 94)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4381.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 95)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 95)) ;
          }
        }
        if (kBoolFalse == test_1) {
          var_opaqueTypeAttributes_4314 = var_opaqueTypeAttributes_4314.operator_or (GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 97)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 97)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_4381.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 99)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_copyable_4337.boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_4381.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 101)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 101)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_copyable_4337 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4314 = var_opaqueTypeAttributes_4314.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 104)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 104)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_4381.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 107)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)) ;
      }
    }
    enumerator_4381.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5310 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSizeExpression, object->mProperty_mSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 118)), var_sizeExpressionIR_5310, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 113)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_sizeExpressionIR_5310.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 121)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not a literal integer"), fixItArray8  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 122)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_constructorMap var_constructorMap_5491 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_opaqueTypeAttributes_4314.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 125)).boolEnum () ;
      if (kBoolTrue == test_9) {
        {
        var_constructorMap_5491.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 126)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 126)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5688 ;
    GALGAS_PLMType joker_5667_1 ; // Joker input parameter
    var_sizeExpressionIR_5310.method_literalInteger (joker_5667_1, var_bitSize_5688, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    GALGAS_stringset temp_10 ;
    const enumGalgasBool test_11 = var_copyable_4337.boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_stringset temp_12 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
      temp_12.addAssign_operation (object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 137))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
      temp_10 = temp_12 ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
    }
    GALGAS_PLMType var_opaqueType_5708 = GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 131)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 132)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), var_constructorMap_5491, GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 135)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 136)), temp_10, var_opaqueTypeAttributes_4314, object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 139)), GALGAS_typeKind::constructor_opaque (var_bitSize_5688  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)), object->mProperty_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 141))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, var_opaqueType_5708, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 143)) ;
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
  result_outRepresentation = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 295)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 295)) ;
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
  result_result = object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 301)).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 301)) ;
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
  GALGAS_lstring var_nodeName_11840 = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupList.getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_11840, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 309)) ;
  }
  cEnumerator_controlRegisterDeclarationList enumerator_12032 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_12032.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_11840, enumerator_12032.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 313)) ;
    }
    GALGAS_stringlist var_split_12226 = enumerator_12032.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("UInt") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 315)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_bool test_2 = GALGAS_bool (kIsEqual, var_split_12226.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 316)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = var_split_12226.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 316)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 316)) ;
      }
      test_1 = test_2.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_uint var_n_12388 = var_split_12226.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsStrictSup, var_n_12388.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_lstring var_bitSizeTypeName_12487 = GALGAS_lstring::constructor_new (GALGAS_string ("UInt").add_operation (var_n_12388.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 319)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)), enumerator_12032.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 319))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_11840, var_bitSizeTypeName_12487 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 320)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_12729 (enumerator_12032.current (HERE).getter_mRegisterBitSliceList (HERE), kENUMERATION_UP) ;
    while (enumerator_12729.hasCurrentObject ()) {
      switch (enumerator_12729.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_12939 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_12729.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_12939->mAssociatedValue1 ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsSupOrEqual, extractedValue_count.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)), extractedValue_count.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 329)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_12729.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13013 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 334)), var_nodeName_11840.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 334)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_11840, var_rootNode_13013 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 335)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_13226 (enumerator_12032.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_13226.hasCurrentObject ()) {
      switch (enumerator_13226.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_13543 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_13226.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_13543->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_13543->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_11840, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 341)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_11840, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 342)) ;
        }
        break ;
      }
      enumerator_13226.gotoNextObject () ;
    }
    enumerator_12032.gotoNextObject () ;
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
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 391)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_15473 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_15473->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 396)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 396)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 398)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 398)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 400)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 400)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 402)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 404)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 404)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 406)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 406)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 408)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 408)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 410)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 410)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 412)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 412)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 414)), GALGAS_string ("a register should be an IntXX or an UIntXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 414)) ;
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
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 432)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 433)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 434)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_shiftCount_17433 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterBitSliceList enumerator_17476 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
      while (enumerator_17476.hasCurrentObject ()) {
        switch (enumerator_17476.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_17671 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_17476.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_count = extractPtr_17671->mAssociatedValue0 ;
            var_shiftCount_17433 = var_shiftCount_17433.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 439)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 440)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 440)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_18192 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_17476.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_name = extractPtr_18192->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_count = extractPtr_18192->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_17745 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_17745, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 443)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_17433, var_bitCount_17745, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 444)) ;
            }
            GALGAS_bigint var_mask_17981 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)).left_shift_operation (var_bitCount_17745 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)).left_shift_operation (var_shiftCount_17433 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 453)), var_mask_17981, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 451)) ;
            }
            var_shiftCount_17433 = var_shiftCount_17433.add_operation (var_bitCount_17745, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        }
        enumerator_17476.gotoNextObject () ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_17433)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_17433.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 463)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 462)) ;
        }
      }
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
                                                                               GALGAS_controlRegisterUserAccesMapAST & ioArgument_ioControlRegisterUserAccesMapAST,
                                                                               GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_regMap_23058 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 580)) ;
  cEnumerator_controlRegisterDeclarationList enumerator_23087 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_23087.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_23087.current (HERE), ioArgument_ioContext, var_regMap_23058, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 582)) ;
    enumerator_23087.gotoNextObject () ;
  }
  cEnumerator_registerGroupListAST enumerator_23260 (object->mProperty_mRegisterGroupList, kENUMERATION_UP) ;
  while (enumerator_23260.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_23299 = var_regMap_23058 ;
    cEnumerator_controlRegisterMap enumerator_23370 (var_regMap_23058, kENUMERATION_UP) ;
    while (enumerator_23370.hasCurrentObject ()) {
      GALGAS_string var_key_23387 = GALGAS_string ("#").add_operation (enumerator_23260.current (HERE).getter_mRegisterGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)).add_operation (enumerator_23370.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 592)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_23387 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 593)).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          var_registerMap_23299.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_23370.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 594)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_23387.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 595)) ;
          }
        }
      }
      enumerator_23370.gotoNextObject () ;
    }
    switch (enumerator_23260.current (HERE).getter_mControlRegisterGroupKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_23921 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_23260.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_baseAddress = extractPtr_23921->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_23761 = GALGAS_registerGroupKind::constructor_single (extractedValue_baseAddress.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 601))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 601)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_23260.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_23761, var_registerMap_23299, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 602)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_24498 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_23260.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_24498->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_24175 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 607)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_23260.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_24175, var_registerMap_23299, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_23260.current (HERE).getter_mRegisterGroupName (HERE), extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)) ;
      }
      break ;
    }
    enumerator_23260.gotoNextObject () ;
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
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (object->mProperty_mGroupName, object->mProperty_mBaseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 633)) ;
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
  GALGAS_string var_byAddressFilePath_27776 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 694)) ;
  GALGAS_string var_byNameFilePath_27865 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 695)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_emitControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_28054 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 697)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_28108 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 698)) ;
      GALGAS_uint var_controlRegisterCount_28144 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterGroupMap enumerator_28195 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
      while (enumerator_28195.hasCurrentObject ()) {
        switch (enumerator_28195.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_28510 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_28195.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_groupBaseAddress = extractPtr_28510->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps (enumerator_28195.current_mControlRegisterMap (HERE), extractedValue_groupBaseAddress, enumerator_28195.current_lkey (HERE).getter_string (HERE), var_controlRegisterByAddress_28054, var_controlRegisterByName_28108, var_controlRegisterCount_28144, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 703)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_28900 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_28195.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_28900->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_28603 (extractedValue_baseAddresses, kENUMERATION_UP) ;
            GALGAS_uint index_28575 ((uint32_t) 0) ;
            while (enumerator_28603.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps (enumerator_28195.current_mControlRegisterMap (HERE), enumerator_28603.current_mValue (HERE).getter_bigint (HERE), enumerator_28195.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 716)).add_operation (index_28575.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 716)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 716)), var_controlRegisterByAddress_28054, var_controlRegisterByName_28108, var_controlRegisterCount_28144, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 713)) ;
              }
              enumerator_28603.gotoNextObject () ;
              index_28575.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 712)) ;
            }
          }
          break ;
        }
        enumerator_28195.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_28941 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 725)), var_controlRegisterCount_28144, var_controlRegisterByAddress_28054 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 724))) ;
      GALGAS_bool joker_29188 ; // Joker input parameter
      var_typeDumpString_28941.method_writeToFileWhenDifferentContents (var_byAddressFilePath_27776, joker_29188, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 729)) ;
      var_typeDumpString_28941 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 731)), var_controlRegisterCount_28144, var_controlRegisterByName_28108 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 730))) ;
      GALGAS_bool joker_29447 ; // Joker input parameter
      var_typeDumpString_28941.method_writeToFileWhenDifferentContents (var_byNameFilePath_27865, joker_29447, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 735)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_27776, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 737)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_27865, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 738)) ;
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
  cEnumerator_controlRegisterMap enumerator_30016 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_30016.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_30043 = constinArgument_inGroupBaseAddress.add_operation (enumerator_30016.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 753)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_30016.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 755)) ;
        GALGAS_string var_registerName_30198 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756)).add_operation (enumerator_30016.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 756)) ;
        GALGAS_string var_s_30241 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_30198, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 758)).add_operation (enumerator_30016.current_mType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 759)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 759)).add_operation (var_registerAddress_30043.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 759)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 760)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, enumerator_30016.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 761)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_30241.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)).add_operation (function_fieldIndexColumns (enumerator_30016.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
            cEnumerator_controlRegisterFieldList enumerator_30730 (enumerator_30016.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_30730.hasCurrentObject ()) {
              var_s_30241.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_30730.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 766)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)).add_operation (enumerator_30730.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 766)) ;
              enumerator_30730.gotoNextObject () ;
            }
            var_s_30241.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
          }
        }
        var_s_30241.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_30043, var_s_30241  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_30043, var_s_30241, var_registerName_30198  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 772)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_30016.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 774)) ;
      cEnumerator_uintlist enumerator_31178 (function_arrayIndexListFor (enumerator_30016.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 775)), kENUMERATION_UP) ;
      while (enumerator_31178.hasCurrentObject ()) {
        GALGAS_bigint var_address_31201 = var_registerAddress_30043.add_operation (enumerator_31178.current_mValue (HERE).multiply_operation (enumerator_30016.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 776)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 776)) ;
        GALGAS_string var_registerName_31277 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (enumerator_30016.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (enumerator_31178.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 777)) ;
        GALGAS_string var_s_31352 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_31277, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 778)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 779)).add_operation (enumerator_30016.current_mType (HERE).getter_plmTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 780)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 780)).add_operation (var_address_31201.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 780)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 781)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsStrictSup, enumerator_30016.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 783)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_31352.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)).add_operation (function_fieldIndexColumns (enumerator_30016.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 785)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 785)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 784)) ;
            cEnumerator_controlRegisterFieldList enumerator_31840 (enumerator_30016.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_31840.hasCurrentObject ()) {
              var_s_31352.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_31840.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 787)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 787)).add_operation (enumerator_31840.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 787)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 787)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 787)) ;
              enumerator_31840.gotoNextObject () ;
            }
            var_s_31352.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
          }
        }
        var_s_31352.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_30043, var_s_31352  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_30043, var_s_31352, var_registerName_31277  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumerator_31178.gotoNextObject () ;
      }
    }
    enumerator_30016.gotoNextObject () ;
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
  cEnumerator_range enumerator_33023 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 819))), kENUMERATION_DOWN) ;
  while (enumerator_33023.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_33023.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
    enumerator_33023.gotoNextObject () ;
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
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 827)) ;
  cEnumerator_range enumerator_33308 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 828))), kENUMERATION_UP) ;
  while (enumerator_33308.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_33308.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 829)) ;
    enumerator_33308.gotoNextObject () ;
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 68)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, object->mProperty_mConstantTypeName COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 71)) ;
      }
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
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
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 80)) ;
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
                                                                         GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                         GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_bool var_displayValue_4500 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_4544 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_4544.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_4544.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("display"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_4544.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 101)), GALGAS_string ("attribute should be @display"), fixItArray1  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 101)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_displayValue_4500.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_4544.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 103)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 103)) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_displayValue_4500 = GALGAS_bool (true) ;
      }
    }
    enumerator_4544.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5061 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSourceExpression, object->mProperty_mConstantName.getter_location (HERE), object->mProperty_mConstantTypeName, var_expressionResult_5061, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_expressionResult_5061, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mConstantName, var_expressionResult_5061, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 119)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_displayValue_4500.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("Global constant '").add_operation (object->mProperty_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)).add_operation (extensionGetter_llvmValue (var_expressionResult_5061, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 122)) ;
    }
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
  GALGAS_string var_typeDumpFilePath_6017 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 135)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_6164 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 137)) ;
      cEnumerator_globalConstantMap enumerator_6203 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6203.hasCurrentObject ()) {
        var_firstLetterSet_6164.addAssign_operation (enumerator_6203.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 139))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
        enumerator_6203.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_6311 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_6345 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_globalConstantMap enumerator_6391 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6391.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6345.objectCompare (enumerator_6391.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_6345 = enumerator_6391.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
            var_tableOfTypeString_6311.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6345.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 146)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (var_currentFirstLetter_6345.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 146)) ;
          }
        }
        var_tableOfTypeString_6311.plusAssign_operation(function_linkForGlobalConstant (enumerator_6391.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 148)) ;
        enumerator_6391.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_6787 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 151)), inArgument_inGlobalConstantMap, var_firstLetterSet_6164, var_tableOfTypeString_6311 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 150))) ;
      GALGAS_bool joker_7031 ; // Joker input parameter
      var_typeDumpString_6787.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6017, joker_7031, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 156)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6017, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 158)) ;
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncInstanceName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 47)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncInstanceName, object->mProperty_mSyncTypeName COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 49)) ;
      }
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mSyncInstanceName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 51)) ;
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
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncInstanceName.getter_string (SOURCE_FILE ("declaration-global-sync-instance.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 57)) ;
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
                                                                           GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                           GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  GALGAS_PLMType var_optionalSyncType_4308 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_optionalSyncType_4308 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSyncTypeName, var_optionalSyncType_4308, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 96)) ;
  }
  GALGAS_objectIR var_expressionResult_4754 ;
  {
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, object->mProperty_mSourceExpression, object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 103)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 104)), var_expressionResult_4754, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 99)) ;
  }
  GALGAS_objectIR var_result_4816 = function_checkAssignmentCompatibility (var_expressionResult_4754, var_optionalSyncType_4308, object->mProperty_mSyncInstanceName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 108)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_4816, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 117)), var_result_4816, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 115)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_type (var_result_4816, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)).getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 122)), GALGAS_string ("the type is not a synchronization tool type"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 122)) ;
    }
  }
  {
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_4816, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 125)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (object->mProperty_mSyncInstanceName, var_result_4816  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 127))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 127)) ;
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDriverName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 172)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 173)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 173)) ;
  }
  cEnumerator_lstringlist enumerator_6102 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_6102.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, enumerator_6102.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 175)) ;
    }
    enumerator_6102.gotoNextObject () ;
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
  result_outRepresentation = GALGAS_string ("driver ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 182)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("Driver ").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 214)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 214)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 220)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 220)) ;
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
  GALGAS_lstringlist var_driverWithNoDependenceList_9369 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 245)) ;
  cEnumerator_driverDeclarationListAST enumerator_9429 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9429.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_9429.current_mDriver (HERE).getter_mDriverDependanceList (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 247)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_driverWithNoDependenceList_9369.addAssign_operation (enumerator_9429.current_mDriver (HERE).getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 248)) ;
      }
    }
    enumerator_9429.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_9369.getter_length (SOURCE_FILE ("declaration-driver.galgas", 251)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_9671 (var_driverWithNoDependenceList_9369, kENUMERATION_UP) ;
      while (enumerator_9671.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9671.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 253)), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 253)) ;
        enumerator_9671.gotoNextObject () ;
      }
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9832 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 257)) ;
  cEnumerator_driverInstanciationListAST enumerator_9893 (ioArgument_ioAST.getter_mRequiredDriverListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9893.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9964 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_10008 (enumerator_9893.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_10008.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9964.setter_insertKey (enumerator_10008.current_mSelector (HERE), enumerator_10008.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
      }
      enumerator_10008.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9832.setter_insertKey (enumerator_9893.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9964, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 263)) ;
    }
    enumerator_9893.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_10285 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 266)) ;
  cEnumerator_driverDeclarationListAST enumerator_10400 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_10400.hasCurrentObject ()) {
    var_validDriverNames_10285.addAssign_operation (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
    GALGAS_bool var_driverIsInstancied_10486 = var_instanciedDriverMap_9832.getter_hasKey (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10649 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 271)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_driverIsInstancied_10486.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10783 ;
        var_instanciedDriverMap_9832.method_searchKey (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE), var_driverInstanciationArgumentMap_10783, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
        GALGAS_stringset var_validArgumentSet_10878 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 275)) ;
        cEnumerator_structurePropertyListAST enumerator_11002 (enumerator_10400.current_mDriver (HERE).getter_mPropertyListAST (HERE), kENUMERATION_UP) ;
        while (enumerator_11002.hasCurrentObject ()) {
          GALGAS_propertyKindAST var_driverPropertyKind_11049 ;
          switch (enumerator_11002.current_mPropertyKind (HERE).enumValue ()) {
          case GALGAS_propertyKindAST::kNotBuilt:
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
            {
              GALGAS_expressionAST var_initExpression_11207 ;
              var_driverInstanciationArgumentMap_10783.method_searchKey (enumerator_11002.current_mPropertyName (HERE), var_initExpression_11207, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 280)) ;
              var_validArgumentSet_10878.addAssign_operation (enumerator_11002.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 281)) ;
              var_driverPropertyKind_11049 = GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_11207  COMMA_SOURCE_FILE ("declaration-driver.galgas", 282)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
            {
              GALGAS_expressionAST var_initExpression_11481 ;
              var_driverInstanciationArgumentMap_10783.method_searchKey (enumerator_11002.current_mPropertyName (HERE), var_initExpression_11481, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
              var_validArgumentSet_10878.addAssign_operation (enumerator_11002.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 285)) ;
              var_driverPropertyKind_11049 = GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_11481  COMMA_SOURCE_FILE ("declaration-driver.galgas", 286)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
            {
              var_driverPropertyKind_11049 = enumerator_11002.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
            {
              var_driverPropertyKind_11049 = enumerator_11002.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
            {
              var_driverPropertyKind_11049 = enumerator_11002.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
            {
              var_driverPropertyKind_11049 = enumerator_11002.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10649.addAssign_operation (enumerator_11002.current_mPropertyName (HERE), enumerator_11002.current_mPropertyAttributeList (HERE), GALGAS_bool (false), enumerator_11002.current_mPropertyTypeName (HERE), var_driverPropertyKind_11049  COMMA_SOURCE_FILE ("declaration-driver.galgas", 296)) ;
          enumerator_11002.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_12329 (var_driverInstanciationArgumentMap_10783.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 304)).substract_operation (var_validArgumentSet_10878, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 304)), kENUMERATION_UP) ;
        while (enumerator_12329.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10783.getter_locationForKey (enumerator_12329.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 305)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 305)) ;
          enumerator_12329.gotoNextObject () ;
        }
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_typeNameForTypeMapForDriver (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 310)), function_plmTypeSpecificNameForDriver (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 311)), function_llvmDriverNameFromName (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 312)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 313)), GALGAS_bool (false), var_driverPropertyListAST_10649, enumerator_10400.current_mDriver (HERE).getter_mDriverFunctionDeclarationListAST (HERE), enumerator_10400.current_mDriver (HERE).getter_mDriverSystemRoutineListAST (HERE), enumerator_10400.current_mDriver (HERE).getter_mDriverGuardListAST (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 309))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 309)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_10400.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_10400.current_mDriver (HERE).getter_mDriverDependanceList (HERE), var_driverIsInstancied_10486, enumerator_10400.current_mDriver (HERE).getter_mBootLocation (HERE), enumerator_10400.current_mDriver (HERE).getter_mBootInstructionList (HERE), enumerator_10400.current_mDriver (HERE).getter_mBootEndLocation (HERE), enumerator_10400.current_mDriver (HERE).getter_mStartupLocation (HERE), enumerator_10400.current_mDriver (HERE).getter_mStartupInstructionList (HERE), enumerator_10400.current_mDriver (HERE).getter_mStartupEndLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_10400.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 333)) ;
  cEnumerator_stringset enumerator_13569 (var_instanciedDriverMap_9832.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 335)).substract_operation (var_validDriverNames_10285, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 335)), kENUMERATION_UP) ;
  while (enumerator_13569.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9832.getter_locationForKey (enumerator_13569.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 336)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 336)) ;
    enumerator_13569.gotoNextObject () ;
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
                                                                 GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  GALGAS_PLMType var_driverType_14802 ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)), var_driverType_14802, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)) ;
  {
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mDriverName, object->mProperty_mIsInstancied, var_driverType_14802, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 359)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (object->mProperty_mDriverName  COMMA_SOURCE_FILE ("declaration-driver.galgas", 361))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 361)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 364)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 365)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 367)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 370)), function_llvmBootRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 372)), GALGAS_bool (true), object->mProperty_mBootInstructionList, object->mProperty_mBootEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mBootLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 376))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)) ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 379)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 380)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 382)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 385)), function_llvmStartupRoutineNameFromDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 386)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 387)), GALGAS_bool (true), object->mProperty_mStartupInstructionList, object->mProperty_mStartupEndLocation, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mProperty_mStartupLocation  COMMA_SOURCE_FILE ("declaration-driver.galgas", 391))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 378)) ;
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
  GALGAS_PLMType var_driverType_16865 ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)), var_driverType_16865, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 409)) ;
  GALGAS_constructorMap var_constructorMap_16890 = var_driverType_16865.getter_constructorMap (HERE) ;
  GALGAS_constructorValue var_constructorValue_17007 ;
  GALGAS_constructorSignature joker_16984 ; // Joker input parameter
  var_constructorMap_16890.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), object->mProperty_mDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 414)), joker_16984, var_constructorValue_17007, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 414)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_17079 ;
  var_constructorValue_17007.method_structure (var_sortedOperandList_17079, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 415)) ;
  GALGAS_operandIRList var_initialValueList_17114 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 416)) ;
  cEnumerator_sortedOperandIRList enumerator_17163 (var_sortedOperandList_17079, kENUMERATION_UP) ;
  while (enumerator_17163.hasCurrentObject ()) {
    var_initialValueList_17114.addAssign_operation (enumerator_17163.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 418)) ;
    enumerator_17163.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (object->mProperty_mDriverName, var_driverType_16865, var_initialValueList_17114  COMMA_SOURCE_FILE ("declaration-driver.galgas", 420)) ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 425)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (object->mProperty_mStaticListName.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_staticListValueListAST var_elements_6057 ;
      {
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (object->mProperty_mStaticListName.getter_string (HERE), var_elements_6057, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 160)) ;
      }
      outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (object->mProperty_mStaticListName, object->mProperty_mPropertyList, object->mProperty_mValueList.add_operation (var_elements_6057, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 164))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 161)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 177)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_6825 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6825.hasCurrentObject ()) {
    switch (enumerator_6825.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_6954 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_6825.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6954->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 182)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7265 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_6825.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7265->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7265->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7094 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7094.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7094.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 185)) ;
          }
          enumerator_7094.gotoNextObject () ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, extractedValue_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 188)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_6825.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_7370 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_7370.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7402 (enumerator_7370.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_7402.hasCurrentObject ()) {
      switch (enumerator_7402.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7549 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7402.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7549->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 197)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_7743 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7402.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7743->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_7673 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_7673.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_7673.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 200)) ;
            }
            enumerator_7673.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7402.gotoNextObject () ;
    }
    enumerator_7370.gotoNextObject () ;
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
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 216)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 226)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 226))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 226)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 232)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 232))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 232)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 238)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 238))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 238)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 244)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 244)) ;
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
                                                          GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_routineMapCTXT var_routineMap_11119 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 276)) ;
  GALGAS_propertyList var_propertyList_11153 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 277)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_11197 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 278)) ;
  GALGAS_stringset var_propertyNameSet_11231 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 279)) ;
  GALGAS_lstring var_plmElementTypeName_11261 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 280)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_11412 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_plmElementTypeName_11261, var_elementTypeProxy_11412 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_11551 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_11514 ((uint32_t) 0) ;
  while (enumerator_11551.hasCurrentObject ()) {
    switch (enumerator_11551.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12128 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_11551.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_12128->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_11658 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 286)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 286)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_propertyNameSet_11231.getter_hasKey (enumerator_11551.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 287)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 287)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_11551.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 288)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_propertyNameSet_11231.addAssign_operation (enumerator_11551.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 290))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 290)) ;
          var_propertyList_11153.addAssign_operation (enumerator_11551.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 291)), var_propertyType_11658  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 291)) ;
          {
          var_propertyGetterMap_11197.setter_insertKey (enumerator_11551.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_storedProperty (var_propertyType_11658, index_11514  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14001 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_11551.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_14001->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_14001->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_14001->mAssociatedValue2 ;
        GALGAS_lstring var_routineLLVMName_12279 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 301)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 301)), enumerator_11551.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 300)) ;
        GALGAS_routineTypedSignature var_signature_12516 ;
        {
        routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_12516, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 306)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 308)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 310)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12565 = temp_2 ;
        GALGAS_PLMType var_propertyType_12779 = GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 314)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 315)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 316)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 317)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 318)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 319)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 320)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 321)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 322)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (extractedValue_mode, var_signature_12516, var_returnTypeProxy_12565  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 324)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 313)) ;
        var_propertyList_11153.addAssign_operation (enumerator_11551.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 332)), var_propertyType_12779  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 332)) ;
        GALGAS_lstring var_routineMangledName_13383 = GALGAS_lstring::constructor_new (enumerator_11551.current_mPropertyName (HERE).getter_string (HERE).add_operation (extensionGetter_routineSignature (extractedValue_formalArgs, enumerator_11551.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 335)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 335)), enumerator_11551.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 336))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        {
        GALGAS_routineLLVMNameDict temp_4 = GALGAS_routineLLVMNameDict::constructor_emptyDict (SOURCE_FILE ("declaration-static-list.galgas", 343)) ;
        temp_4.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 343)), var_routineLLVMName_12279.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 343)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 343)) ;
        var_routineMap_11119.setter_insertKey (var_routineMangledName_13383, GALGAS_bool (true), var_signature_12516, var_returnTypeProxy_12565, temp_4, GALGAS_bool (false), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 338)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::constructor_new (var_routineLLVMName_12279, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11412, var_signature_12516, var_returnTypeProxy_12565, index_11514  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 348))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 348)) ;
      }
      break ;
    }
    enumerator_11551.gotoNextObject () ;
    index_11514.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 283)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_11153, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 359)) ;
  }
  GALGAS_PLMType var_elementType_14206 = GALGAS_PLMType::constructor_new (var_propertyGetterMap_11197, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 363)), var_routineMap_11119, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 365)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 366)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 367)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 368)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 369)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 370)), function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 371)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 371)), GALGAS_typeKind::constructor_structure (var_propertyList_11153  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 372)), function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 373)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 373))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmElementTypeName_11261, var_elementType_14206, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 375)) ;
  }
  GALGAS_stringlist var_stringValueList_14883 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 380)) ;
  cEnumerator_staticListValueListAST enumerator_14920 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_14920.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_11153.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 382)).objectCompare (enumerator_14920.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 382)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 383)), var_propertyList_11153.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 384)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 384)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 384)).add_operation (enumerator_14920.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 385)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 384)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 385)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 383)) ;
      }
    }
    if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_15151 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15197 (enumerator_14920.current_mElement (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_15231 (var_propertyList_11153, kENUMERATION_UP) ;
      while (enumerator_15197.hasCurrentObject () && enumerator_15231.hasCurrentObject ()) {
        switch (enumerator_15197.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_15887 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15197.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_15887->mAssociatedValue0 ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = enumerator_15231.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 391)).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_15197.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 392)) ;
              }
            }
            if (kBoolFalse == test_7) {
              GALGAS_objectIR var_expressionResult_15731 ;
              {
              routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_exp, enumerator_15197.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 399)), var_expressionResult_15731, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 394)) ;
              }
              var_staticValue_15151.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_15231.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 403)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 403)).add_operation (extensionGetter_llvmName (var_expressionResult_15731, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 403)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18117 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15197.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_18117->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_18117->mAssociatedValue1 ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = enumerator_15231.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 406)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 406)).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_15197.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray10  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 407)) ;
              }
            }
            if (kBoolFalse == test_9) {
              GALGAS_mode var_mode_16187 ;
              GALGAS_routineTypedSignature var_functionSignature_16234 ;
              GALGAS_unifiedTypeMap_2D_proxy var_functionReturnTypeProxy_16293 ;
              enumerator_15231.current_mType (HERE).getter_kind (HERE).method_function (var_mode_16187, var_functionSignature_16234, var_functionReturnTypeProxy_16293, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 409)) ;
              GALGAS_lstring var_argumentSignature_16341 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 414)) ;
              GALGAS_lstring var_functionMangledName_16423 = GALGAS_lstring::constructor_new (extractedValue_functionName.getter_string (HERE).add_operation (var_argumentSignature_16341.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 415)), extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 415))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 415)) ;
              GALGAS_bool var_candidateIsPublic_16619 ;
              GALGAS_routineTypedSignature var_candidateSignature_16657 ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_16701 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_16774 ;
              GALGAS_bool var_implementedIsExported_16822 ;
              GALGAS_mode var_candidateMode_16862 ;
              ioArgument_ioContext.getter_mRoutineMap (HERE).method_searchKey (var_functionMangledName_16423, var_candidateIsPublic_16619, var_candidateSignature_16657, var_candidateReturnTypeProxy_16701, var_implementedModeDictionary_16774, var_implementedIsExported_16822, var_candidateMode_16862, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
              GALGAS_string var_routineLLVMName_16934 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16774, var_mode_16187, extractedValue_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 426)) ;
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                GALGAS_bool test_12 = GALGAS_bool (kIsEqual, var_functionReturnTypeProxy_16293.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 427)))) ;
                if (kBoolTrue == test_12.boolEnum ()) {
                  test_12 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16701.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 427)))) ;
                }
                test_11 = test_12.boolEnum () ;
                if (kBoolTrue == test_11) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 428)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_16701.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)), fixItArray13  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 428)) ;
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, var_functionReturnTypeProxy_16293.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 429)))) ;
                  if (kBoolTrue == test_15.boolEnum ()) {
                    test_15 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16701.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 429)))) ;
                  }
                  test_14 = test_15.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 430)), GALGAS_string ("this function should return no object"), fixItArray16  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 430)) ;
                  }
                }
              }
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GALGAS_bool (kIsNotEqual, var_functionSignature_16234.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 432)).objectCompare (var_candidateSignature_16657.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 432)))).boolEnum () ;
                if (kBoolTrue == test_17) {
                  TC_Array <C_FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 433)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16657.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 434)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)).add_operation (var_functionSignature_16234.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 435)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 434)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 435)), fixItArray18  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)) ;
                }
              }
              if (kBoolFalse == test_17) {
                cEnumerator_routineTypedSignature enumerator_17737 (var_functionSignature_16234, kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17770 (var_candidateSignature_16657, kENUMERATION_UP) ;
                while (enumerator_17737.hasCurrentObject () && enumerator_17770.hasCurrentObject ()) {
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = GALGAS_bool (kIsNotEqual, enumerator_17737.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_17770.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      TC_Array <C_FixItDescription> fixItArray20 ;
                      inCompiler->emitSemanticError (enumerator_17770.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 439)), GALGAS_string ("argument type should be $").add_operation (enumerator_17737.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)), fixItArray20  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)) ;
                    }
                  }
                  enumerator_17737.gotoNextObject () ;
                  enumerator_17770.gotoNextObject () ;
                }
              }
              var_staticValue_15151.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_15231.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)).add_operation (var_routineLLVMName_16934.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)) ;
            }
          }
          break ;
        }
        if (enumerator_15197.hasNextObject () && enumerator_15231.hasNextObject ()) {
          var_staticValue_15151.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 447)) ;
        }
        enumerator_15197.gotoNextObject () ;
        enumerator_15231.gotoNextObject () ;
      }
      var_staticValue_15151.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)) ;
      var_stringValueList_14883.addAssign_operation (var_staticValue_15151  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 450)) ;
    }
    enumerator_14920.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_14883, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 453)) ;
  }
  GALGAS_propertyGetterMap var_listTypePropertyMap_18463 = GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 455)) ;
  {
  var_listTypePropertyMap_18463.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 457)), GALGAS_bool (true), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 459)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 459))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 456)) ;
  }
  GALGAS_PLMType var_arrayType_18810 = GALGAS_PLMType::constructor_new (var_listTypePropertyMap_18463, GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 464)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 465)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 466)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 467)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("declaration-static-list.galgas", 468)), GALGAS_subscript::constructor_staticSubscript (var_elementType_14206, var_stringValueList_14883.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 469)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 469))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 469)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 470)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 471)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("declaration-static-list.galgas", 471)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 471)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 471)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 471)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 472)), GALGAS_typeKind::constructor_staticArrayType (var_elementType_14206, var_stringValueList_14883.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 473)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 473))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 473)), function_llvmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 474)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 474))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 462)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477)), var_arrayType_18810, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 476)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19613 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 481)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19613.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 484)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 484))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 482)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19613.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 488)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 488))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 486)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (object->mProperty_mStaticListName, object->mProperty_mValueList  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 491))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 491)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) var_elementType_14206.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 494)), var_propertyList_11153  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 493))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 493)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) var_arrayType_18810.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 498)), var_elementType_14206, var_stringValueList_14883.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 500)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 500))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 497))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 497)) ;
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
  GALGAS_stringset var_invokedFunctionSet_21744 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 529)) ;
  cEnumerator_staticListValueListAST enumerator_21781 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_21781.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_21822 (enumerator_21781.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_21822.hasCurrentObject ()) {
      switch (enumerator_21822.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_21898 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21822.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_21898->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22199 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21822.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_22199->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_22199->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22048 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 536)) ;
          var_invokedFunctionSet_21744.addAssign_operation (var_routineMangledName_22048.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 541))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 541)) ;
        }
        break ;
      }
      enumerator_21822.gotoNextObject () ;
    }
    enumerator_21781.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21744, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 545)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21744, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 546)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 596)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 597)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 598)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 600)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 602)) ;
  GALGAS_string var_receiverLLVMTypeName_24722 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mStaticListElementType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)) ;
  GALGAS_bool var_first_24781 = GALGAS_bool (true) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24722.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24722.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 606)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 606)) ;
      var_first_24781 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineTypedSignature enumerator_24961 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_24961.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_first_24781.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_24781 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 613)) ;
    }
    switch (enumerator_24961.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_24961.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)).add_operation (enumerator_24961.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 617)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_24961.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)).add_operation (enumerator_24961.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 619)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_24961.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)).add_operation (enumerator_24961.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 621)) ;
      }
      break ;
    }
    enumerator_24961.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 624)) ;
  GALGAS_string var_llvmFunctionTypeName_25616 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 627)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_llvmFunctionTypeName_25616 = GALGAS_string ("void") ;
    }
  }
  if (kBoolFalse == test_3) {
    var_llvmFunctionTypeName_25616 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
  }
  var_llvmFunctionTypeName_25616.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 632)) ;
  var_first_24781 = GALGAS_bool (true) ;
  cEnumerator_routineTypedSignature enumerator_25855 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_25855.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_first_24781.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_first_24781 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_llvmFunctionTypeName_25616.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 638)) ;
    }
    switch (enumerator_25855.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_25616.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_25855.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 642)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 642)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 642)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_25616.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_25855.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 644)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_25616.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_25855.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 646)) ;
      }
      break ;
    }
    enumerator_25855.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25616.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24722, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 651)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_24722, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (object->mProperty_mPropertyIndex.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 652)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25616, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)).add_operation (var_llvmFunctionTypeName_25616, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 654)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 659)) ;
  var_first_24781 = GALGAS_bool (true) ;
  cEnumerator_routineTypedSignature enumerator_26817 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_26817.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_first_24781.boolEnum () ;
      if (kBoolTrue == test_6) {
        var_first_24781 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_6) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)) ;
    }
    switch (enumerator_26817.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_26817.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 669)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 669)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 669)).add_operation (enumerator_26817.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 669)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_26817.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)).add_operation (enumerator_26817.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 671)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_26817.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)).add_operation (enumerator_26817.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 673)) ;
      }
      break ;
    }
    enumerator_26817.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 676)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 678)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 679)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 681)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 681)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 681)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 683)) ;
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
  cEnumerator_decoratedTaskList enumerator_16809 (object->mProperty_mTaskList, kENUMERATION_UP) ;
  GALGAS_uint index_16791 ((uint32_t) 0) ;
  while (enumerator_16809.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_16809.current (HERE), constinArgument_inContext, index_16791, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 452)) ;
    enumerator_16809.gotoNextObject () ;
    index_16791.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 451)) ;
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
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 467)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_17426 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_taskSetupListAST enumerator_17484 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_17484.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_17484.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 472)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_numberOfEntriesWithoutAnyPrecedence_17426.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_17426.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 473)) ;
          }
        }
        enumerator_17484.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_17426.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          cEnumerator_taskSetupListAST enumerator_17732 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
          while (enumerator_17732.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_17732.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 478)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 478)) ;
            enumerator_17732.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_17426.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            cEnumerator_taskSetupListAST enumerator_17928 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
            while (enumerator_17928.hasCurrentObject ()) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, enumerator_17928.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 482)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_17928.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 483)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 483)) ;
                }
              }
              enumerator_17928.gotoNextObject () ;
            }
          }
        }
      }
      GALGAS_taskSetupListAST var_taskSetupListAST_18160 = constinArgument_inTaskRoutineLISTAST ;
      GALGAS_stringset var_precedenceSet_18212 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 489)) ;
      GALGAS_bool var_continue_18234 = GALGAS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 491)).isValid ()) {
        uint32_t variant_18250 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 491)).uintValue () ;
        bool loop_18250 = true ;
        while (loop_18250) {
          GALGAS_bool test_7 = var_continue_18234 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_18160.getter_length (SOURCE_FILE ("task-declaration.galgas", 491)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
          }
          loop_18250 = test_7.isValid () ;
          if (loop_18250) {
            loop_18250 = test_7.boolValue () ;
          }
          if (loop_18250 && (0 == variant_18250)) {
            loop_18250 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 491)) ;
          }
          if (loop_18250) {
            variant_18250 -- ;
            var_continue_18234 = GALGAS_bool (false) ;
            GALGAS_uint var_idx_18372 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_taskSetupListAST enumerator_18461 (var_taskSetupListAST_18160, kENUMERATION_UP) ;
            while (enumerator_18461.hasCurrentObject ()) {
              GALGAS_bool var_allPrecedenceDefined_18497 = GALGAS_bool (true) ;
              cEnumerator_lstringlist enumerator_18551 (enumerator_18461.current_mDependanceList (HERE), kENUMERATION_UP) ;
              bool bool_8 = var_allPrecedenceDefined_18497.isValidAndTrue () ;
              if (enumerator_18551.hasCurrentObject () && bool_8) {
                while (enumerator_18551.hasCurrentObject () && bool_8) {
                  var_allPrecedenceDefined_18497 = var_precedenceSet_18212.getter_hasKey (enumerator_18551.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 497)) ;
                  enumerator_18551.gotoNextObject () ;
                  if (enumerator_18551.hasCurrentObject ()) {
                    bool_8 = var_allPrecedenceDefined_18497.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_allPrecedenceDefined_18497.boolEnum () ;
                if (kBoolTrue == test_9) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_18461.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 500)) ;
                  var_precedenceSet_18212.addAssign_operation (enumerator_18461.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 501)) ;
                  var_continue_18234 = GALGAS_bool (true) ;
                  {
                  GALGAS_lstring joker_18867_4 ; // Joker input parameter
                  GALGAS_lstringlist joker_18867_3 ; // Joker input parameter
                  GALGAS_instructionListAST joker_18867_2 ; // Joker input parameter
                  GALGAS_location joker_18867_1 ; // Joker input parameter
                  var_taskSetupListAST_18160.setter_removeAtIndex (joker_18867_4, joker_18867_3, joker_18867_2, joker_18867_1, var_idx_18372, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 503)) ;
                  }
                }
              }
              if (kBoolFalse == test_9) {
                var_idx_18372 = var_idx_18372.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 505)) ;
              }
              enumerator_18461.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_19020 (var_taskSetupListAST_18160, kENUMERATION_UP) ;
      while (enumerator_19020.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_19020.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 511)), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 511)) ;
        enumerator_19020.gotoNextObject () ;
      }
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 743)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 743)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 743)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (object->mProperty_mAssemblerTaskName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 744)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (object->mProperty_mActivateServiceInvocationName, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (object->mProperty_mTaskIndex.getter_string (SOURCE_FILE ("task-declaration.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 745)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 745)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 746)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 747)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 748)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 749)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_5453.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 190)) ;
    }
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_6468.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 221)) ;
    }
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 375)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)) ;
      var_first_12685 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_12862 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_12862.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_12685.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_12685 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 383)) ;
    }
    switch (enumerator_12862.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_12862.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)).add_operation (enumerator_12862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_12862.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)).add_operation (function_llvmNameForLocalVariable (enumerator_12862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 389)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_12862.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)).add_operation (function_llvmNameForLocalVariable (enumerator_12862.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 391)) ;
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
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_13767.current (HERE).getter_invocationFromAnyMode (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_13830 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 410)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromAnyMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 408)) ;
        var_s_13830 = var_s_13830.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_13767.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
        var_s_13830 = var_s_13830.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_13767.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 413)) ;
        var_s_13830 = var_s_13830.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_13740.getter_string (SOURCE_FILE ("declaration-svc.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 414)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_13830, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      }
    }
    if (kBoolFalse == test_0) {
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
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_16366.current (HERE).getter_mHasReturnValue (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_16423 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 469)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryWithReturnValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 467)) ;
        var_s_16423 = var_s_16423.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_16366.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
        var_s_16423 = var_s_16423.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16341.getter_string (SOURCE_FILE ("declaration-svc.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 472)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16423, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)) ;
      }
    }
    if (kBoolFalse == test_0) {
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsSection.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_18868, var_implementationMangledName_18948, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 531)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 544)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 545)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 546)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 548)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 548)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 550)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 550)) ;
  GALGAS_bool var_first_19766 = GALGAS_bool (true) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverTypeProxy.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 552)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReceiverTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 553)) ;
      var_first_19766 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineTypedSignature enumerator_19942 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_19942.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_first_19766.boolEnum () ;
      if (kBoolTrue == test_2) {
        var_first_19766 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 560)) ;
    }
    switch (enumerator_19942.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_19942.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 564)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 564)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_19942.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 566)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 566)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 566)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 566)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_19942.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 568)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 568)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 568)) ;
      }
      break ;
    }
    enumerator_19942.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 571)) ;
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
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2272 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2272.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2309 = extensionGetter_routineSignature (enumerator_2272.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2272.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GALGAS_string var_requiredFunctionMangledName_2427 = enumerator_2272.current (HERE).getter_mName (HERE).getter_string (HERE).add_operation (var_requiredFunctionSignature_2309.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_hasKey (var_requiredFunctionMangledName_2427 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2272.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_2761 ;
      GALGAS_routineTypedSignature var_implementedSignature_2795 ;
      GALGAS_unifiedTypeMap_2D_proxy var_implementedReturnTypeProxy_2835 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_2909 ;
      GALGAS_bool var_implementedIsExported_2944 ;
      GALGAS_mode var_implementedMode_2973 ;
      constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_requiredFunctionMangledName_2427.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2761, var_implementedSignature_2795, var_implementedReturnTypeProxy_2835, var_implementedModeDictionary_2909, var_implementedIsExported_2944, var_implementedMode_2973, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GALGAS_location var_errorLocation_3005 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_locationForKey (var_requiredFunctionMangledName_2427, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3217 ;
      {
      routine_routineTypedSignature_32_ (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_2272.current (HERE).getter_mFormalArgumentList (HERE), var_requiredTypedSignature_3217, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_typedString (var_requiredTypedSignature_3217, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2795, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_3005, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3217, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_implementedReturnTypeProxy_2835.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-required-proc.galgas", 83)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_3005, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_implementedMode_2973.objectCompare (enumerator_2272.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_3005, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2272.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2761.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_3005, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = enumerator_2272.current (HERE).getter_mIsExported (HERE) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2944.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_3005, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GALGAS_bool test_14 = var_implementedIsExported_2944 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2272.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_3005, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2272.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 175)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnType.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_7063 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7063.hasCurrentObject ()) {
    switch (enumerator_7063.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_7063.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_7063.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_7063.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_7063.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_7063.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_7063.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    if (enumerator_7063.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
    enumerator_7063.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GALGAS_string ("; declared by extern PLM function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
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
    constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_typeNameForTypeMapForDriver (enumerator_3886.current (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), var_selfType_4012, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)) ;
    GALGAS_interruptionPanicCode joker_4100 ; // Joker input parameter
    constinArgument_inContext.getter_mAvailableInterruptMap (HERE).method_searchKey (enumerator_3886.current (HERE).getter_mISRName (HERE), joker_4100, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 98)) ;
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
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_8204.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 209)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_warnIfUnused_8156.operator_not (SOURCE_FILE ("declaration-guard.galgas", 210)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8204.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-guard.galgas", 211)), GALGAS_string ("duplicate @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 211)) ;
          }
        }
        var_warnIfUnused_8156 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_0) {
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
      constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 230)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 230)), var_resultType_9124, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 230)) ;
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
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_11138 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (object->mProperty_mGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_11138->mAssociatedValue0 ;
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
  GALGAS_lstring var_guardUserLLVMName_11403 = function_guardUserLLVMName (var_receiverType_8041.getter_llvmBaseTypeName (HERE), object->mProperty_mGuardName, object->mProperty_mGuardFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 298)) ;
  GALGAS_lstring var_guardImplementationLLVMName_11544 = function_guardImplementationLLVMName (var_receiverType_8041.getter_llvmBaseTypeName (HERE), object->mProperty_mGuardName, object->mProperty_mGuardFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 303)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardUserRoutineIR::constructor_new (var_guardUserLLVMName_11403, GALGAS_bool (false), var_warnIfUnused_8156, var_guardImplementationLLVMName_11544.getter_string (SOURCE_FILE ("declaration-guard.galgas", 313)), var_formalArguments_8736, var_receiverType_8041, var_convenienceGuardGenerationIR_8795  COMMA_SOURCE_FILE ("declaration-guard.galgas", 309))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 309)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineListIR.addAssign_operation (GALGAS_guardImplementationRoutineIR::constructor_new (var_guardImplementationLLVMName_11544, GALGAS_bool (false), var_warnIfUnused_8156, var_formalArguments_8736, var_receiverType_8041, var_convenienceGuardGenerationIR_8795, var_allocaList_8820, var_instructionGenerationList_8872  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318)) ;
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
  GALGAS_allocaList var_baseGuardAllocaList_14400 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 371)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_14461 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 372)) ;
  GALGAS_objectIR var_currentObject_14592 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 376)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("declaration-guard.galgas", 377)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 377)) ;
          var_currentObject_14592.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        var_currentObject_14592 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 379))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 379)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, constinArgument_inMode, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObject_14592, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 382)) ;
  }
  GALGAS_location var_currentErrorLocation_15045 = object->mProperty_mIdentifier.getter_location (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_15111 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_15165 ;
  {
  var_accessList_15111.setter_popLast (var_lastAccess_15165, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 392)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_15221 (var_accessList_15111, kENUMERATION_UP) ;
  while (enumerator_15221.hasCurrentObject ()) {
    GALGAS_PLMType var_currentType_15244 = extensionGetter_type (var_currentObject_14592, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 395)) ;
    switch (enumerator_15221.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_16225 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_15221.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_16225->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_15376 = var_currentType_15244.getter_propertyGetterMap (HERE) ;
        GALGAS_propertyGetterKind var_propertyAccess_15480 ;
        GALGAS_bool joker_15459 ; // Joker input parameter
        var_propertyGetterMap_15376.method_searchKey (extractedValue_propertyName, joker_15459, var_propertyAccess_15480, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 399)) ;
        switch (var_propertyAccess_15480.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 402)), GALGAS_string ("a constant property not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 402)) ;
            var_currentObject_14592.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_16088 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_15480.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_16088->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_16088->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_15774 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_15774, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 404)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_14461, var_currentType_15244, extensionGetter_llvmName (var_currentObject_14592, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 407)), var_property_5F_llvmName_15774, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 405)) ;
            }
            var_currentObject_14592 = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_15774  COMMA_SOURCE_FILE ("declaration-guard.galgas", 412)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 414)), GALGAS_string ("a computed property cannot be named in guard"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 414)) ;
            var_currentObject_14592.drop () ; // Release error dropped variable
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_16334 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_15221.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_16334->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 417)) ;
        var_currentObject_14592.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_15221.gotoNextObject () ;
  }
  switch (var_lastAccess_15165.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17851 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_15165.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17851->mAssociatedValue0 ;
      GALGAS_PLMType var_currentType_16452 = extensionGetter_type (var_currentObject_14592, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 423)) ;
      GALGAS_lstring var_guardMangledName_16600 = extensionGetter_mangledName (object->mProperty_mArguments, extractedValue_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 425)) ;
      GALGAS_routineTypedSignature var_formalSignature_16717 ;
      GALGAS_lstring var_guardRoutineImplentationLLVMName_16758 ;
      GALGAS_bool joker_16695 ; // Joker input parameter
      GALGAS_lstring joker_16719 ; // Joker input parameter
      var_currentType_16452.getter_guardMap (HERE).method_searchKey (var_guardMangledName_16600, joker_16695, var_formalSignature_16717, joker_16719, var_guardRoutineImplentationLLVMName_16758, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 426)) ;
      GALGAS_procCallEffectiveParameterListIR temp_6 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 430)) ;
      temp_6.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 429)), GALGAS_objectIR::constructor_reference (var_currentType_16452, extensionGetter_llvmName (var_currentObject_14592, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 430))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 430)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_16861 = temp_6 ;
      {
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_16717, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_14400, var_baseGuardInstructionGenerationList_14461, var_effectiveParameterListIR_16861, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
      }
      outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_14400, var_baseGuardInstructionGenerationList_14461, var_guardRoutineImplentationLLVMName_16758.getter_string (HERE), var_effectiveParameterListIR_16861  COMMA_SOURCE_FILE ("declaration-guard.galgas", 449)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_17993 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_15165.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_17993->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 456)) ;
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
  GALGAS_string var_userMangledName_19720 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 497)) ;
  GALGAS_string var_implementationMangledName_19800 = object->mProperty_mMangledImplementationGuardName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 498)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_19720, var_implementationMangledName_19800, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 501)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_19720, var_implementationMangledName_19800, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 503)) ;
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
  GALGAS_string var_prototype_20469 = function_llvmFunctionPrototype (GALGAS_string ("i1"), object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 519)), object->mProperty_mReceiverType, object->mProperty_mFormalArgumentListForGeneration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 517)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare ").add_operation (var_prototype_20469, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 523)) ;
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
  GALGAS_string var_guardRoutineName_21392 = object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 543)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define i1 @").add_operation (var_guardRoutineName_21392, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 544)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 545)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 548)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_21523 = temp_0 ;
  GALGAS_bool var_first_21626 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_21523.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_21523.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 552)) ;
      var_first_21626 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_21806 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_21806.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_first_21626.boolEnum () ;
      if (kBoolTrue == test_3) {
        var_first_21626 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 559)) ;
    }
    switch (enumerator_21806.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_21806.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)).add_operation (enumerator_21806.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 563)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_21806.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)).add_operation (function_llvmNameForLocalVariable (enumerator_21806.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 565)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_21806.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)).add_operation (function_llvmNameForLocalVariable (enumerator_21806.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 567)) ;
      }
      break ;
    }
    enumerator_21806.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 570)) ;
  GALGAS_allocaList var_allocaList_22405 = object->mProperty_mAllocaList ;
  cEnumerator_routineFormalArgumentListIR enumerator_22501 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22501.hasCurrentObject ()) {
    switch (enumerator_22501.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_22405.addAssign_operation (function_llvmNameForLocalVariable (enumerator_22501.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)), enumerator_22501.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 577)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22501.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_22405, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 582)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_22821 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_22821.hasCurrentObject ()) {
    switch (enumerator_22821.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        GALGAS_string var_llvmType_22891 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_22821.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 587)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_22891, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (enumerator_22821.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (var_llvmType_22891, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (function_llvmNameForLocalVariable (enumerator_22821.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 588)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_22821.gotoNextObject () ;
  }
  GALGAS_string var_accepted_5F_llvmName_23195 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 594)) ;
  GALGAS_string var_accepted_5F_llvmName_5F_loaded_23281 = function_llvmNameForLocalVariable (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 595)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
      GALGAS_string var_accepted_5F_label_23461 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)).add_operation (GALGAS_string (".guard.accepted"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 599)) ;
      GALGAS_string var_rejected_5F_label_23531 = function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)).add_operation (GALGAS_string (".guard.rejected"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 600)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 601)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_accepted_5F_llvmName_5F_loaded_23281, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string (" = load i1, i1* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (var_accepted_5F_llvmName_23195, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 602)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_accepted_5F_llvmName_5F_loaded_23281, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (var_accepted_5F_label_23461, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (var_rejected_5F_label_23531, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 603)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_accepted_5F_label_23461.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 604)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 605)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 606)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_rejected_5F_label_23531.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 607)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 608)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 609)) ;
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_25483 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_allocaList extractedValue_baseGuardAllocaList = extractPtr_25483->mAssociatedValue0 ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_25483->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardMangledName = extractPtr_25483->mAssociatedValue2 ;
      const GALGAS_procCallEffectiveParameterListIR extractedValue_baseGuardEffectiveParameterList = extractPtr_25483->mAssociatedValue3 ;
      extensionMethod_generateAllocaList (extractedValue_baseGuardAllocaList, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 611)) ;
      extensionMethod_instructionListLLVMCode (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 612)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %invoked.guard.result = call i1 @").add_operation (extractedValue_baseGuardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("declaration-guard.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 613)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 614)) ;
      cEnumerator_procCallEffectiveParameterListIR enumerator_24633 (extractedValue_baseGuardEffectiveParameterList, kENUMERATION_UP) ;
      while (enumerator_24633.hasCurrentObject ()) {
        switch (enumerator_24633.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
        case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24633.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)).add_operation (extensionGetter_llvmName (enumerator_24633.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 618)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24633.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)).add_operation (extensionGetter_llvmName (enumerator_24633.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 620)) ;
          }
          break ;
        case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
          {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_24633.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)).add_operation (extensionGetter_llvmName (enumerator_24633.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 622)) ;
          }
          break ;
        }
        if (enumerator_24633.hasNextObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 625)) ;
        }
        enumerator_24633.gotoNextObject () ;
      }
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 627)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %invoked.guard.result, label %invoked.guard.acceptation, label %invoked.guard.rejection\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 628)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.acceptation:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 629)) ;
      extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 630)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 true\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 631)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("invoked.guard.rejection:\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 632)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 false\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 633)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 634)) ;
    }
    break ;
  }
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @accept.guard ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 636)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @xtr.user.result ()")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 637)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 646)) ;
  switch (object->mProperty_mGuardKindGenerationIR.enumValue ()) {
  case GALGAS_guardKindGenerationIR::kNotBuilt:
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_baseGuard:
    {
    }
    break ;
  case GALGAS_guardKindGenerationIR::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard * extractPtr_26354 = (const cEnumAssociatedValues_guardKindGenerationIR_convenienceGuard *) (object->mProperty_mGuardKindGenerationIR.unsafePointer ()) ;
      const GALGAS_instructionListIR extractedValue_baseGuardInstructionGenerationList = extractPtr_26354->mAssociatedValue1 ;
      const GALGAS_string extractedValue_baseGuardImplementationMangledName = extractPtr_26354->mAssociatedValue2 ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_baseGuardImplementationMangledName  COMMA_SOURCE_FILE ("declaration-guard.galgas", 650)) ;
      extensionMethod_enterAccessibleEntities (extractedValue_baseGuardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 651)) ;
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
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 152)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5830 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5830.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5921 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5830.current_mFormalArgumentTypeName (HERE), var_typeProxy_5921 COMMA_SOURCE_FILE ("formal-arguments.galgas", 154)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5830.current_mFormalArgumentPassingMode (HERE), enumerator_5830.current_mSelector (HERE), var_typeProxy_5921, enumerator_5830.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 155)) ;
    enumerator_5830.gotoNextObject () ;
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
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("formal-arguments.galgas", 165)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_6476 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_6476.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_6497 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (inArgument_inTypeMap, enumerator_6476.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 167)) ;
    outArgument_outSignature.addAssign_operation (enumerator_6476.current_mFormalArgumentPassingMode (HERE), enumerator_6476.current_mSelector (HERE), var_typeProxy_6497, enumerator_6476.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 168)) ;
    enumerator_6476.gotoNextObject () ;
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
  cEnumerator_routineFormalArgumentListAST enumerator_9081 (constinArgument_inFormalArgumentsAST, kENUMERATION_UP) ;
  while (enumerator_9081.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_9102 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_9081.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("formal-arguments.galgas", 226)).getter_type (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 226)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_9081.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9102, enumerator_9081.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 227)) ;
    switch (enumerator_9081.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inUnusedWarning.boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9081.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9102, enumerator_9081.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 231)) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          {
          extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9081.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_9102, enumerator_9081.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 233)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = constinArgument_inUnusedWarning.boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9081.current_mFormalArgumentName (HERE), var_typeProxy_9102, enumerator_9081.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 237)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 237)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9081.current_mFormalArgumentName (HERE), var_typeProxy_9102, enumerator_9081.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 239)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 239)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9081.current_mFormalArgumentName (HERE), var_typeProxy_9102, enumerator_9081.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("formal-arguments.galgas", 242)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
        }
      }
      break ;
    }
    enumerator_9081.gotoNextObject () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 168)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mExportedFunction.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 169)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" internal"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 170)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 172)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (object->mProperty_mRoutineMangledName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 173)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 174)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 176)) ;
  }
  GALGAS_string var_receiverLLVMTypeName_6569 = temp_1 ;
  GALGAS_bool var_first_6670 = GALGAS_bool (true) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_6569.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_6569.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 180)) ;
      var_first_6670 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_6850 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_6850.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_first_6670.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_first_6670 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 187)) ;
    }
    switch (enumerator_6850.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_6850.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)).add_operation (enumerator_6850.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 191)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_6850.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)).add_operation (function_llvmNameForLocalVariable (enumerator_6850.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 193)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_6850.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)).add_operation (function_llvmNameForLocalVariable (enumerator_6850.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 195)) ;
      }
      break ;
    }
    enumerator_6850.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    GALGAS_bool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 198)) ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = object->mProperty_mAppendFileAndLineArgumentForPanicLocation ;
    }
    test_5 = test_6.boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_first_6670.operator_not (SOURCE_FILE ("regular-routine-analysis.galgas", 199)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 200)) ;
        }
      }
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)).add_operation (GALGAS_string (" %LINE, i8* %FILE"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 202)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 204)) ;
  GALGAS_allocaList var_allocaList_7707 = object->mProperty_mAllocaList ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_allocaList_7707.addAssign_operation (function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)), object->mProperty_mReturnType, GALGAS_bool (false)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 208)) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_7942 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7942.hasCurrentObject ()) {
    switch (enumerator_7942.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_allocaList_7707.addAssign_operation (function_llvmNameForLocalVariable (enumerator_7942.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)), enumerator_7942.current_mFormalArgumentType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 214)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
      }
      break ;
    }
    enumerator_7942.gotoNextObject () ;
  }
  extensionMethod_generateAllocaList (var_allocaList_7707, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 218)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_8352 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_8352.hasCurrentObject ()) {
    switch (enumerator_8352.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Input argument '").add_operation (enumerator_8352.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 224)) ;
        GALGAS_string var_llvmType_8502 = callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_8352.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 225)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_8502, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (enumerator_8352.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (var_llvmType_8502, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (function_llvmNameForLocalVariable (enumerator_8352.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 226)) ;
        callExtensionMethod_generateRetain ((const cPtr_PLMType *) enumerator_8352.current_mFormalArgumentType (HERE).ptr (), enumerator_8352.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 228)) ;
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 229)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            callExtensionMethod_generateInsulate ((const cPtr_PLMType *) enumerator_8352.current_mFormalArgumentType (HERE).ptr (), enumerator_8352.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 230)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 233)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_8352.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 234)) ;
            callExtensionMethod_generateInsulate ((const cPtr_PLMType *) enumerator_8352.current_mFormalArgumentType (HERE).ptr (), enumerator_8352.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 235)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
      }
      break ;
    }
    enumerator_8352.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Function instruction list\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 241)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 242)) ;
  cEnumerator_routineFormalArgumentListIR enumerator_9579 (object->mProperty_mFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_9579.hasCurrentObject ()) {
    switch (enumerator_9579.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Release input argument '").add_operation (enumerator_9579.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 248)) ;
        callExtensionMethod_generateRelease ((const cPtr_PLMType *) enumerator_9579.current_mFormalArgumentType (HERE).ptr (), enumerator_9579.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 249)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        enumGalgasBool test_11 = kBoolTrue ;
        if (kBoolTrue == test_11) {
          test_11 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 251)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate input/output argument '").add_operation (enumerator_9579.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 252)) ;
            callExtensionMethod_generateInsulate ((const cPtr_PLMType *) enumerator_9579.current_mFormalArgumentType (HERE).ptr (), enumerator_9579.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 253)) ;
          }
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsEqual, object->mProperty_mKind.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("regular-routine-analysis.galgas", 256)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Insulate output argument '").add_operation (enumerator_9579.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 257)) ;
            callExtensionMethod_generateInsulate ((const cPtr_PLMType *) enumerator_9579.current_mFormalArgumentType (HERE).ptr (), enumerator_9579.current_mFormalArgumentName (HERE), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 258)) ;
          }
        }
      }
      break ;
    }
    enumerator_9579.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- Return\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 263)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsEqual, object->mProperty_mReturnType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("regular-routine-analysis.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 265)) ;
    }
  }
  if (kBoolFalse == test_13) {
    GALGAS_string var_resultVarLLVMName_10491 = function_llvmNameForLocalVariable (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 267)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = load ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (var_resultVarLLVMName_10491, inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 268)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) object->mProperty_mReturnType.ptr (), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 269)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("regular-routine-analysis.galgas", 271)) ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 183)).boolEnum () ;
    if (kBoolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 184)) ;
    }
  }
  if (kBoolFalse == test_0) {
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
  GALGAS_string var_s_559 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_559.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
    }
  }
  var_s_559.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_559.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_775 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_775.hasCurrentObject ()) {
    var_s_559.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_775.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_775.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_775.gotoNextObject () ;
  }
  var_s_559.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_559, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 26)) ;
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
  GALGAS_string var_s_1276 = GALGAS_string ("func.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_1276.plusAssign_operation(constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1276.plusAssign_operation(constinArgument_inRoutineName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1276.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  cEnumerator_effectiveArgumentListAST enumerator_1457 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_1457.hasCurrentObject ()) {
    var_s_1276.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_1457.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1457.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1457.gotoNextObject () ;
  }
  var_s_1276.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1276, constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 45)) ;
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
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1949 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  cEnumerator_declarationListAST enumerator_2001 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2001.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_2001.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
    enumerator_2001.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternFunctionListAST (HERE), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  GALGAS_uint var_addintegerTypeCount_2497 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_stringlist enumerator_2552 (var_precedenceGraph_1949.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 45)), kENUMERATION_UP) ;
  while (enumerator_2552.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2569 = enumerator_2552.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("Int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_split_2569.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = var_split_2569.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_split_2569.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).objectCompare (GALGAS_string ("U"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_uint var_n_2763 = var_split_2569.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
            GALGAS_integerDeclarationAST var_declaration_2838 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2763  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
            callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2838.ptr (), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
            var_addintegerTypeCount_2497.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_split_2569.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_uint var_n_3036 = var_split_2569.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
              GALGAS_integerDeclarationAST var_declaration_3111 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_3036  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 55)) ;
              callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_3111.ptr (), var_precedenceGraph_1949, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 56)) ;
              var_addintegerTypeCount_2497.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 57)) ;
            }
          }
        }
      }
    }
    enumerator_2552.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 62)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = GALGAS_bool (gOption_plm_5F_options_printPasses.getter_value ()) ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->printMessage (GALGAS_string ("    Added ").add_operation (var_addintegerTypeCount_2497.getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63)).add_operation (GALGAS_string (" integer types\n"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63))  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 63)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    GALGAS_bool test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_7.boolEnum ()) {
      test_7 = GALGAS_bool (gOption_plm_5F_options_emitDeclarationDependencyGraphFile.getter_value ()) ;
    }
    test_6 = test_7.boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string var_s_3658 = var_precedenceGraph_1949.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
      GALGAS_string var_filePath_3704 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)) ;
      GALGAS_bool joker_3802 ; // Joker input parameter
      var_s_3658.method_writeToFileWhenDifferentContents (var_filePath_3704, joker_3802, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 69)) ;
    }
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 72)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1949.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      cEnumerator_lstringlist enumerator_4024 (var_precedenceGraph_1949.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 74)), kENUMERATION_UP) ;
      while (enumerator_4024.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4024.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 75)), enumerator_4024.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined in declaration dependency graph"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)), fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 75)) ;
        enumerator_4024.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4270 ;
    GALGAS_lstringlist joker_4203 ; // Joker input parameter
    GALGAS_lstringlist joker_4278 ; // Joker input parameter
    var_precedenceGraph_1949.method_topologicalSort (outArgument_outDeclarationListAST, joker_4203, var_unsortedSemanticDeclarationListAST_4270, joker_4278, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4270.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 84)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        GALGAS_string var_s_4357 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4270.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 86)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
        cEnumerator_declarationListAST enumerator_4572 (var_unsortedSemanticDeclarationListAST_4270, kENUMERATION_UP) ;
        while (enumerator_4572.hasCurrentObject ()) {
          var_s_4357.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4572.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 89)) ;
          enumerator_4572.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4357, fixItArray11  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 91)) ;
        cEnumerator_declarationListAST enumerator_4744 (var_unsortedSemanticDeclarationListAST_4270, kENUMERATION_UP) ;
        while (enumerator_4744.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (callExtensionGetter_locationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4744.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 93)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4744.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 93)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 93)), fixItArray12  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 93)) ;
          enumerator_4744.gotoNextObject () ;
        }
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
                                   GALGAS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 179)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 180)) ;
  outArgument_outDecoratedRoutineList = GALGAS_decoratedRegularRoutineList::constructor_emptyList (SOURCE_FILE ("context.galgas", 181)) ;
  outArgument_outRoutineListIR = GALGAS_routineListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 182)) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GALGAS_userLLVMTypeDefinitionListIR::constructor_emptyList (SOURCE_FILE ("context.galgas", 183)) ;
  cEnumerator_requiredFunctionDeclarationListAST enumerator_7433 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7433.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_7465 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_7433.current (HERE).getter_mName (HERE), enumerator_7433.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 186)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.addAssign_operation (var_procedureMangledName_7465.getter_string (HERE)  COMMA_SOURCE_FILE ("context.galgas", 191)) ;
    enumerator_7433.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 194)) ;
  GALGAS_routineMapCTXT var_routineMapCTXT_7915 = GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("context.galgas", 199)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 201)), GALGAS_string::makeEmptyString (), var_routineMapCTXT_7915, outArgument_outSemanticContext, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 200)) ;
  outArgument_outSemanticContext.mProperty_mRoutineMap = var_routineMapCTXT_7915 ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternFunctionListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 209)) ;
  extensionMethod_enterStandaloneFunctionsInContext (constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedRoutineList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 212)) ;
  GALGAS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_8575 = constinArgument_inAST.getter_mControlRegisterUserAccesMapAST (HERE) ;
  cEnumerator_declarationListAST enumerator_8664 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8664.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8664.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandaloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_8575, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 219)) ;
    enumerator_8664.gotoNextObject () ;
  }
  cEnumerator_controlRegisterUserAccesMapAST enumerator_9230 (var_controlRegisterUserAccesMapAST_8575, kENUMERATION_UP) ;
  while (enumerator_9230.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_9230.current_lkey (HERE).getter_location (SOURCE_FILE ("context.galgas", 233)), GALGAS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 233)) ;
    enumerator_9230.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 236)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), outArgument_outSemanticContext.getter_mRoutineMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 241)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 247)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 252)) ;
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
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)).getter_nowhere (SOURCE_FILE ("context.galgas", 265)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 148)) ;
  temp_0.addAssign_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 148))  COMMA_SOURCE_FILE ("types.galgas", 148)) ;
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 141)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 142)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 143)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 144)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 145)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 146)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 147)), temp_0, GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 149)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 149)) COMMA_SOURCE_FILE ("types.galgas", 149)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 150)), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("types.galgas", 151)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 152))  COMMA_SOURCE_FILE ("types.galgas", 140)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 167)) ;
  temp_0.addAssign_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 167))  COMMA_SOURCE_FILE ("types.galgas", 167)) ;
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 160)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 161)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 162)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 163)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 164)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 165)), GALGAS_subscript::constructor_literalString (SOURCE_FILE ("types.galgas", 166)), temp_0, GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 168)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 168)) COMMA_SOURCE_FILE ("types.galgas", 168)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 168)) COMMA_SOURCE_FILE ("types.galgas", 168)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 169)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 170)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 171))  COMMA_SOURCE_FILE ("types.galgas", 159)) ;
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
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyGetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 179)), GALGAS_propertySetterMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 180)), GALGAS_routineMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 181)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 182)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 183)), GALGAS_guardMapCTXT::constructor_emptyMap (SOURCE_FILE ("types.galgas", 184)), GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("types.galgas", 185)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 186)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 187)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 189)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 178)) ;
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
  GALGAS_string var_typeDumpFilePath_17394 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 460)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_17511 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 462)) ;
      cEnumerator_unifiedTypeMap enumerator_17540 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_17540.hasCurrentObject ()) {
        var_firstLetterSet_17511.addAssign_operation (enumerator_17540.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 464)).getter_string (SOURCE_FILE ("types.galgas", 464))  COMMA_SOURCE_FILE ("types.galgas", 464)) ;
        enumerator_17540.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_17648 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_17682 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_17718 (constinArgument_inTypeMap, kENUMERATION_UP) ;
      while (enumerator_17718.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_17682.objectCompare (enumerator_17718.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 469)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_17682 = enumerator_17718.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 470)) ;
            var_tableOfTypeString_17648.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_17682.getter_uint (SOURCE_FILE ("types.galgas", 471)).getter_string (SOURCE_FILE ("types.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 471)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 471)).add_operation (var_currentFirstLetter_17682.getter_string (SOURCE_FILE ("types.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 471)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 471)) ;
          }
        }
        var_tableOfTypeString_17648.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_17718.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 473)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 473)) ;
        enumerator_17718.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_18111 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 476)), constinArgument_inTypeMap, var_firstLetterSet_17511, var_tableOfTypeString_17648, constinArgument_inRoutineMap COMMA_SOURCE_FILE ("types.galgas", 475))) ;
      GALGAS_bool joker_18361 ; // Joker input parameter
      var_typeDumpString_18111.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_17394, joker_18361, inCompiler COMMA_SOURCE_FILE ("types.galgas", 482)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_17394, inCompiler COMMA_SOURCE_FILE ("types.galgas", 484)) ;
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
      result << callExtensionGetter_descriptionForHTMLFile ((const cPtr_PLMType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 68)).stringValue () ;
      result << "<br>\n"
        "Description: " ;
      result << enumerator_1163.current_type (HERE).getter_plmTypeDescriptionName (SOURCE_FILE ("typeDump.html.galgasTemplate", 69)).stringValue () ;
      result << "<br>\n"
        "LLVM Base Name: " ;
      result << enumerator_1163.current_type (HERE).getter_llvmBaseTypeName (SOURCE_FILE ("typeDump.html.galgasTemplate", 70)).stringValue () ;
      result << "<br>\n"
        "LLVM Name: " ;
      result << callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) enumerator_1163.current_type (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 71)).stringValue () ;
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
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Getter Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Kind</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_2528_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 99)).isValid ()) {
          cEnumerator_propertyGetterMap enumerator_2528 (enumerator_1163.current_type (HERE).getter_propertyGetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 99)), kENUMERATION_UP) ;
          while (enumerator_2528.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_2528.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_4 = enumerator_2528.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_4) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_4) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            switch (enumerator_2528.current_mAccess (HERE).enumValue ()) {
            case GALGAS_propertyGetterKind::kNotBuilt :
              break ;
            case GALGAS_propertyGetterKind::kEnum_storedProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_2872 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (enumerator_2528.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_PLMType extractedValue_propertyType = extractPtr_2872->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_2872->mAssociatedValue1 ;
                result << "Stored property, index " ;
                result << extractedValue_propertyIndex.getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue () ;
                result << ", type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) extractedValue_propertyType.ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue () ;
              }
              break ;
            case GALGAS_propertyGetterKind::kEnum_computedProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_3126 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (enumerator_2528.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_3126->mAssociatedValue0 ;
                const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_3126->mAssociatedValue1 ;
                result << "Computed property, type " ;
                result << extractedValue_propertyTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).stringValue () ;
                result << ", routine LLVM name:" ;
                GALGAS_uint index_3068_ (0) ;
                if (extractedValue_modeDictionary.isValid ()) {
                  cEnumerator_routineLLVMNameDict enumerator_3068 (extractedValue_modeDictionary, kENUMERATION_UP) ;
                  while (enumerator_3068.hasCurrentObject ()) {
                    result << "<br>" ;
                    result << extensionGetter_string (enumerator_3068.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue () ;
                    result << " : " ;
                    result << enumerator_3068.current_mRoutineLLVMName (HERE).stringValue () ;
                    index_3068_.increment () ;
                    enumerator_3068.gotoNextObject () ;
                  }
                }
              }
              break ;
            case GALGAS_propertyGetterKind::kEnum_constantProperty :
              {
                const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_3282 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (enumerator_2528.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_objectIR extractedValue_propertyValue = extractPtr_3282->mAssociatedValue0 ;
                result << "Constant property, type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) extensionGetter_type (extractedValue_propertyValue, inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 111)).ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 111)).stringValue () ;
                result << ", value " ;
                result << extensionGetter_llvmName (extractedValue_propertyValue, inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 111)).stringValue () ;
              }
              break ;
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_2528_.increment () ;
            enumerator_2528.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_3) {
      }
      result << "\n"
        "  " ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 119)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 119)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "\n"
          "    <table class=\"result\">\n"
          "      <tr>\n"
          "        <td class=\"result_title\">Setter Name</td>\n"
          "        <td class=\"result_title\">Visibility</td>\n"
          "        <td class=\"result_title\">Kind</td>\n"
          "      </tr>\n"
          "    " ;
        GALGAS_uint index_3655_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 126)).isValid ()) {
          cEnumerator_propertySetterMap enumerator_3655 (enumerator_1163.current_type (HERE).getter_propertySetterMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 126)), kENUMERATION_UP) ;
          while (enumerator_3655.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_3655.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_6 = enumerator_3655.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_6) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_6) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            switch (enumerator_3655.current_mAccess (HERE).enumValue ()) {
            case GALGAS_propertySetterKind::kNotBuilt :
              break ;
            case GALGAS_propertySetterKind::kEnum_storedProperty :
              {
                const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_3999 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (enumerator_3655.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_PLMType extractedValue_propertyType = extractPtr_3999->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_3999->mAssociatedValue1 ;
                result << "Stored property, index " ;
                result << extractedValue_propertyIndex.getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue () ;
                result << ", type " ;
                result << callExtensionGetter_llvmTypeName ((const cPtr_PLMType *) extractedValue_propertyType.ptr (), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue () ;
              }
              break ;
            case GALGAS_propertySetterKind::kEnum_computedProperty :
              {
                const cEnumAssociatedValues_propertySetterKind_computedProperty * extractPtr_4253 = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) (enumerator_3655.current_mAccess (HERE).unsafePointer ()) ;
                const GALGAS_unifiedTypeMap_2D_proxy extractedValue_propertyTypeProxy = extractPtr_4253->mAssociatedValue0 ;
                const GALGAS_routineLLVMNameDict extractedValue_modeDictionary = extractPtr_4253->mAssociatedValue1 ;
                result << "Computed property, type " ;
                result << extractedValue_propertyTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 135)).stringValue () ;
                result << ", routine LLVM name:" ;
                GALGAS_uint index_4195_ (0) ;
                if (extractedValue_modeDictionary.isValid ()) {
                  cEnumerator_routineLLVMNameDict enumerator_4195 (extractedValue_modeDictionary, kENUMERATION_UP) ;
                  while (enumerator_4195.hasCurrentObject ()) {
                    result << "<br>" ;
                    result << extensionGetter_string (enumerator_4195.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue () ;
                    result << " : " ;
                    result << enumerator_4195.current_mRoutineLLVMName (HERE).stringValue () ;
                    index_4195_.increment () ;
                    enumerator_4195.gotoNextObject () ;
                  }
                }
              }
              break ;
            }
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_3655_.increment () ;
            enumerator_3655.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_5) {
      }
      result << "\n"
        "  " ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, enumerator_1163.current_type (HERE).getter_guardMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
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
        GALGAS_uint index_4749_ (0) ;
        if (enumerator_1163.current_type (HERE).getter_guardMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 153)).isValid ()) {
          cEnumerator_guardMapCTXT enumerator_4749 (enumerator_1163.current_type (HERE).getter_guardMap (SOURCE_FILE ("typeDump.html.galgasTemplate", 153)), kENUMERATION_UP) ;
          while (enumerator_4749.hasCurrentObject ()) {
            result << "\n"
              "      <tr class=\"result_line\">\n"
              "        <td>" ;
            result << enumerator_4749.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            const enumGalgasBool test_8 = enumerator_4749.current_mIsPublic (HERE).boolEnum () ;
            if (kBoolTrue == test_8) {
              result << GALGAS_string ("public").stringValue () ;
            }else if (kBoolFalse == test_8) {
              result << GALGAS_string ("private").stringValue () ;
            }
            result << "</td>\n"
              "        <td>" ;
            result << extensionGetter_typedString (enumerator_4749.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 157)).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            result << enumerator_4749.current_mUserRoutineLLVMName (HERE).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 158)).stringValue () ;
            result << "</td>\n"
              "        <td>" ;
            result << enumerator_4749.current_mImplementationRoutineLLVMName (HERE).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).stringValue () ;
            result << "</td>\n"
              "      </tr>\n"
              "    " ;
            index_4749_.increment () ;
            enumerator_4749.gotoNextObject () ;
          }
        }
        result << "\n"
          "    </table>\n"
          "    <br>\n"
          "  " ;
      }else if (kBoolFalse == test_7) {
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
  GALGAS_uint index_5475_ (0) ;
  if (in_STANDALONE_5F_ROUTINE_5F_MAP.isValid ()) {
    cEnumerator_routineMapCTXT enumerator_5475 (in_STANDALONE_5F_ROUTINE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5475.hasCurrentObject ()) {
      result << "\n"
        "    <tr class=\"result_line\">\n"
        "      <td>" ;
      result << enumerator_5475.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</td>\n"
        "      <td>" ;
      const enumGalgasBool test_9 = enumerator_5475.current_mIsPublic (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << GALGAS_string ("public").stringValue () ;
      }else if (kBoolFalse == test_9) {
        result << GALGAS_string ("private").stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      result << extensionGetter_typedString (enumerator_5475.current_mSignature (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).stringValue () ;
      const enumGalgasBool test_10 = enumerator_5475.current_mReturnTypeProxy (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).boolEnum () ;
      if (kBoolTrue == test_10) {
      }else if (kBoolFalse == test_10) {
        result << " -> " ;
        result << enumerator_5475.current_mReturnTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).stringValue () ;
      }
      result << "</td>\n"
        "      <td>" ;
      GALGAS_uint index_5812_ (0) ;
      if (enumerator_5475.current_mModeDictionary (HERE).isValid ()) {
        cEnumerator_routineLLVMNameDict enumerator_5812 (enumerator_5475.current_mModeDictionary (HERE), kENUMERATION_UP) ;
        while (enumerator_5812.hasCurrentObject ()) {
          result << extensionGetter_string (enumerator_5812.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 182)).stringValue () ;
          result << " : " ;
          result << enumerator_5812.current_mRoutineLLVMName (HERE).stringValue () ;
          if (enumerator_5812.hasNextObject ()) {
            result << "<br>" ;
          }
          index_5812_.increment () ;
          enumerator_5812.gotoNextObject () ;
        }
      }
      result << "</td>\n"
        "    </tr>\n"
        "  " ;
      index_5475_.increment () ;
      enumerator_5475.gotoNextObject () ;
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

