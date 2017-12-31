#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'setBitCountMethoName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_setBitCountMethoName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("setBitCount") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_setBitCountMethoName = false ;
static GALGAS_string gOnceFunctionResult_setBitCountMethoName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_setBitCountMethoName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_setBitCountMethoName) {
    gOnceFunctionResult_setBitCountMethoName = onceFunction_setBitCountMethoName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_setBitCountMethoName = true ;
  }
  return gOnceFunctionResult_setBitCountMethoName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_setBitCountMethoName (void) {
  gOnceFunctionResult_setBitCountMethoName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_setBitCountMethoName (NULL,
                                                                  releaseOnceFunctionResult_setBitCountMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_setBitCountMethoName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_setBitCountMethoName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_setBitCountMethoName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_setBitCountMethoName ("setBitCountMethoName",
                                                                      functionWithGenericHeader_setBitCountMethoName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_setBitCountMethoName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@integerDeclarationAST enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                  const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                  GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                                  GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_integerTypeName_5288 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 116)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 116)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_5408 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_5288, var_selfTypeProxy_5408 COMMA_SOURCE_FILE ("type-integer.galgas", 117)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy_5519 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 118)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 118))  COMMA_SOURCE_FILE ("type-integer.galgas", 118)), var_boolTypeProxy_5519 COMMA_SOURCE_FILE ("type-integer.galgas", 118)) ;
  }
  GALGAS_bigint var_min_5587 = function_minValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 120)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 120)) ;
  GALGAS_bigint var_max_5642 = function_maxValueForInteger (object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 121)), object->mProperty_mSize, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 121)) ;
  GALGAS_propertyMap var_propertyMap_5768 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 123)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5768, ioArgument_ioSubprogramInvocationGraph, var_selfTypeProxy_5408, function_byteSwappedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 128)), GALGAS_bool (true), var_selfTypeProxy_5408, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 125)) ;
    }
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 134)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    extensionSetter_addFunctionWithoutArgument (var_propertyMap_5768, ioArgument_ioSubprogramInvocationGraph, var_selfTypeProxy_5408, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 138)), GALGAS_bool (true), var_boolTypeProxy_5519, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 135)) ;
    }
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5768, ioArgument_ioSubprogramInvocationGraph, var_selfTypeProxy_5408, function_bitReversedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 147)), GALGAS_bool (true), var_selfTypeProxy_5408, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 144)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5768, ioArgument_ioSubprogramInvocationGraph, var_selfTypeProxy_5408, function_countLeadingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 155)), GALGAS_bool (true), var_selfTypeProxy_5408, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 152)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5768, ioArgument_ioSubprogramInvocationGraph, var_selfTypeProxy_5408, function_countTrainingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 163)), GALGAS_bool (true), var_selfTypeProxy_5408, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 160)) ;
  }
  {
  extensionSetter_addFunctionWithoutArgument (var_propertyMap_5768, ioArgument_ioSubprogramInvocationGraph, var_selfTypeProxy_5408, function_setBitCountMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 171)), GALGAS_bool (true), var_selfTypeProxy_5408, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 168)) ;
  }
  GALGAS_classConstantMap var_classConstantMap_7498 = GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 177)) ;
  {
  var_classConstantMap_7498.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 178)), var_min_5587, var_integerTypeName_5288, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 178)) ;
  }
  {
  var_classConstantMap_7498.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 179)), var_max_5642, var_integerTypeName_5288, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 179)) ;
  }
  GALGAS_constructorMap var_constructorMap_7737 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 181)) ;
  {
  var_constructorMap_7737.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 182)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 182)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-integer.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  }
  GALGAS_PLMType var_integerType_7891 = GALGAS_PLMType::constructor_new (var_propertyMap_5768, var_classConstantMap_7498, var_constructorMap_7737, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 188)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 189)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("type-integer.galgas", 189)) COMMA_SOURCE_FILE ("type-integer.galgas", 189)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 189)) COMMA_SOURCE_FILE ("type-integer.galgas", 189)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("type-integer.galgas", 189)) COMMA_SOURCE_FILE ("type-integer.galgas", 189)), var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 190)), GALGAS_typeKind::constructor_integer (var_min_5587, var_max_5642, object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 191)), object->mProperty_mSize  COMMA_SOURCE_FILE ("type-integer.galgas", 191)), var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 192))  COMMA_SOURCE_FILE ("type-integer.galgas", 184)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_5288, var_integerType_7891, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-integer.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 194)) ;
  }
  {
  routine_enter_5F_integer_5F_integer_5F_operators (var_integerTypeName_5288, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  {
  routine_enter_5F_integer_5F_literal_5F_operators (var_integerTypeName_5288, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 206)) ;
  }
  {
  routine_enter_5F_literal_5F_integer_5F_operators (var_integerTypeName_5288, object->mProperty_mIsSigned, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_integerDecoratedDeclaration::constructor_new (var_integerTypeName_5288.getter_string (SOURCE_FILE ("type-integer.galgas", 218)), object->mProperty_mSize, object->mProperty_mIsSigned  COMMA_SOURCE_FILE ("type-integer.galgas", 218))  COMMA_SOURCE_FILE ("type-integer.galgas", 218)) ;
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
//                     Overriding extension method '@integerDecoratedDeclaration semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerDecoratedDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                          const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                          GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                          GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDecoratedDeclaration * object = (const cPtr_integerDecoratedDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_integerDecoratedDeclaration) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGenerationListIR.addAssign_operation (GALGAS_integerIR::constructor_new (object->mProperty_mTypeName, object->mProperty_mSize, object->mProperty_mIsSigned  COMMA_SOURCE_FILE ("type-integer.galgas", 238))  COMMA_SOURCE_FILE ("type-integer.galgas", 238)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerDecoratedDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_integerDecoratedDeclaration.mSlotID,
                                         extensionMethod_integerDecoratedDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerDecoratedDeclaration_semanticAnalysis (defineExtensionMethod_integerDecoratedDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'generateIntegerIntrinsicFunction'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateIntegerIntrinsicFunction (const GALGAS_string constinArgument_inPLMtypeName,
                                               GALGAS_string & ioArgument_ioLLVMcode,
                                               const GALGAS_string constinArgument_inPLMMethodName,
                                               const GALGAS_string constinArgument_inIntrinsicName,
                                               GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                               const GALGAS_string constinArgument_inLLVMtypeName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_10983 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (constinArgument_inPLMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 262)), constinArgument_inPLMMethodName.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 263)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 261)) ;
  GALGAS_string var_functionName_11123 = function_llvmNameForFunction (var_routineMangledName_10983.getter_string (SOURCE_FILE ("type-integer.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)).add_operation (var_functionName_11123, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 268)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 268)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 268)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (constinArgument_inIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 270)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 271)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (constinArgument_inLLVMtypeName.add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)).add_operation (constinArgument_inIntrinsicName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 273))  COMMA_SOURCE_FILE ("type-integer.galgas", 272)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'generateUInt1ToBoolFunction'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateUInt_31_ToBoolFunction (const GALGAS_string constinArgument_inPLMtypeName,
                                             GALGAS_string & ioArgument_ioLLVMcode,
                                             const GALGAS_string constinArgument_inLLVMtypeName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_routineMangledName_12059 = function_routineMangledNameFromAST (function_llvmTypeStringFromPLMname (constinArgument_inPLMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 284)), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 285)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 285)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 283)) ;
  GALGAS_string var_functionName_12199 = function_llvmNameForFunction (var_routineMangledName_12059.getter_string (SOURCE_FILE ("type-integer.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)).add_operation (var_functionName_12199, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 290)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 290)).add_operation (constinArgument_inLLVMtypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 290)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i1 %value\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 292)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@integerIR generateLLVMcode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerIR_generateLLVMcode (const cPtr_abstractGenerationIR * inObject,
                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerIR * object = (const cPtr_integerIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerIR) ;
  GALGAS_string var_llvmTypeName_12760 = GALGAS_string ("i").add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("type-integer.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("INTEGER TYPE $").add_operation (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 299)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSize.objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mProperty_mIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 301)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    routine_generateUInt_31_ToBoolFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, var_llvmTypeName_12760, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 302)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSize.modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 309)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_byteSwappedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 313)), GALGAS_string ("bswap"), ioArgument_ioGenerationAdds, var_llvmTypeName_12760, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
    }
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_bitReversedMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)), GALGAS_string ("bitreverse"), ioArgument_ioGenerationAdds, var_llvmTypeName_12760, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 320)) ;
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_countLeadingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)), GALGAS_string ("ctlz"), ioArgument_ioGenerationAdds, var_llvmTypeName_12760, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 329)) ;
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_countTrainingZerosMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)), GALGAS_string ("cttz"), ioArgument_ioGenerationAdds, var_llvmTypeName_12760, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 338)) ;
  }
  {
  routine_generateIntegerIntrinsicFunction (object->mProperty_mTypeName, ioArgument_ioLLVMcode, function_setBitCountMethoName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 350)), GALGAS_string ("ctpop"), ioArgument_ioGenerationAdds, var_llvmTypeName_12760, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 347)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerIR_generateLLVMcode (void) {
  enterExtensionMethod_generateLLVMcode (kTypeDescriptor_GALGAS_integerIR.mSlotID,
                                         extensionMethod_integerIR_generateLLVMcode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerIR_generateLLVMcode (defineExtensionMethod_integerIR_generateLLVMcode, NULL) ;

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
  GALGAS_PLMType var_selfType_14818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 366)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 366)) ;
  GALGAS_PLMType var_booleanType_14918 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 367)) ;
  GALGAS_lstring var_intIntOp_14990 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_14990, var_booleanType_14918, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 373))  COMMA_SOURCE_FILE ("type-integer.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_14990, var_booleanType_14918, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 378))  COMMA_SOURCE_FILE ("type-integer.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 375)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 383)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 383)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_14990, var_booleanType_14918, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 380)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 388)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 388)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_14990, var_booleanType_14918, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 393)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 393)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_14990, var_booleanType_14918, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 390)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 398)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 398)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_14990, var_booleanType_14918, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 395)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 401)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 405))  COMMA_SOURCE_FILE ("type-integer.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 402)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 410))  COMMA_SOURCE_FILE ("type-integer.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 407)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 415))  COMMA_SOURCE_FILE ("type-integer.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 412)) ;
    }
    {
    ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 417)) ;
    }
  }
  const enumGalgasBool test_9 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (constinArgument_inIntegerTypeName, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 423)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_10 ;
  const enumGalgasBool test_11 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 431)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 431)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_10  COMMA_SOURCE_FILE ("type-integer.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 428)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 436))  COMMA_SOURCE_FILE ("type-integer.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 433)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 441)) ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 441)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_12  COMMA_SOURCE_FILE ("type-integer.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 438)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 446))  COMMA_SOURCE_FILE ("type-integer.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 443)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_14 ;
  const enumGalgasBool test_15 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 451)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 451)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_14  COMMA_SOURCE_FILE ("type-integer.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 448)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 456))  COMMA_SOURCE_FILE ("type-integer.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 453)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_16 ;
  const enumGalgasBool test_17 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 461)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 461)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_16  COMMA_SOURCE_FILE ("type-integer.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 458)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_18 ;
  const enumGalgasBool test_19 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 466)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 466)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_18  COMMA_SOURCE_FILE ("type-integer.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 463)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_20 ;
  const enumGalgasBool test_21 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 471)) ;
  }else if (kBoolFalse == test_21) {
    temp_20 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 471)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_20  COMMA_SOURCE_FILE ("type-integer.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 468)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_22 ;
  const enumGalgasBool test_23 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 476)) ;
  }else if (kBoolFalse == test_23) {
    temp_22 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 476)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_22  COMMA_SOURCE_FILE ("type-integer.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 473)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 482))  COMMA_SOURCE_FILE ("type-integer.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 479)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_24 ;
  const enumGalgasBool test_25 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 487)) ;
  }else if (kBoolFalse == test_25) {
    temp_24 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 487)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_14990, var_selfType_14818, GALGAS_infixObjectObjectOperatorDescription::constructor_new (temp_24  COMMA_SOURCE_FILE ("type-integer.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 484)) ;
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
  GALGAS_bool test_0 = constinArgument_inLeftOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 508)) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = constinArgument_inRightOperand.getter_isLiteralInteger (SOURCE_FILE ("type-integer.galgas", 508)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_bigint var_left_19598 ;
    GALGAS_PLMType joker_19572_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_literalInteger (joker_19572_1, var_left_19598, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 509)) ;
    GALGAS_bigint var_right_19663 ;
    GALGAS_PLMType joker_19636_1 ; // Joker input parameter
    constinArgument_inRightOperand.method_literalInteger (joker_19636_1, var_right_19663, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 510)) ;
    const GALGAS_infixObjectObjectOperatorDescription temp_2 = object ;
    GALGAS_bigint var_resultValue_19753 = callExtensionGetter_performStaticOperation ((const cPtr_infixObjectObjectOperatorDescription *) temp_2.ptr (), var_left_19598, var_right_19663, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 512)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_resultValue_19753  COMMA_SOURCE_FILE ("type-integer.galgas", 513)) ;
  }else if (kBoolFalse == test_1) {
    {
    routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 516)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 520)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 518)) ;
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
  GALGAS_PLMType var_selfType_20732 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 539)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 539)) ;
  GALGAS_PLMType var_booleanType_20832 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 540)) ;
  GALGAS_lstring var_intLiteralOp_20908 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.getter_string (HERE), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 542)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_booleanType_20832, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 546))  COMMA_SOURCE_FILE ("type-integer.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 543)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_booleanType_20832, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 551))  COMMA_SOURCE_FILE ("type-integer.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 548)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 556)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 556)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_booleanType_20832, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 553)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 561)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 561)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_booleanType_20832, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 558)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 566)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 566)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_booleanType_20832, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 566)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 563)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 571)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 571)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_booleanType_20832, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 568)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 574)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 578))  COMMA_SOURCE_FILE ("type-integer.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 575)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 583))  COMMA_SOURCE_FILE ("type-integer.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 580)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 588))  COMMA_SOURCE_FILE ("type-integer.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 585)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 595)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 595)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 592)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 600))  COMMA_SOURCE_FILE ("type-integer.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 597)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 605)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 605)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 602)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 610))  COMMA_SOURCE_FILE ("type-integer.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 607)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 615)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 615)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 612)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 620))  COMMA_SOURCE_FILE ("type-integer.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 617)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 625)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 625)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 622)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 630)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 630)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 627)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 635)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 635)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 632)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 640)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 640)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 637)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 646))  COMMA_SOURCE_FILE ("type-integer.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 643)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 651)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 651)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_20908, var_selfType_20732, GALGAS_integerObject_5F_literal_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 648)) ;
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
  GALGAS_bigint var_literalValue_25359 ;
  GALGAS_PLMType joker_25325_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_25325_1, var_literalValue_25359, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 673)) ;
  GALGAS_bigint var_min_25418 ;
  GALGAS_bigint var_max_25439 ;
  GALGAS_bool joker_25441_2 ; // Joker input parameter
  GALGAS_uint joker_25441_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 674)).getter_kind (HERE).method_integer (var_min_25418, var_max_25439, joker_25441_2, joker_25441_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 674)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_25359.objectCompare (var_min_25418)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min_25418.getter_string (SOURCE_FILE ("type-integer.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 676)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 676)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 676)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_25359.objectCompare (var_max_25439)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max_25439.getter_string (SOURCE_FILE ("type-integer.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 678)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 678)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 678)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 680)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 683)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 681)) ;
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
  GALGAS_PLMType var_selfType_26541 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 702)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 702)) ;
  GALGAS_lstring var_intLiteralOp_26673 = function_combineTypeNamesForInfixOperator (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 704)), constinArgument_inIntegerTypeName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 704)) ;
  GALGAS_PLMType var_booleanType_26780 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 705)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_booleanType_26780, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-integer.galgas", 709))  COMMA_SOURCE_FILE ("type-integer.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 706)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_booleanType_26780, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-integer.galgas", 714))  COMMA_SOURCE_FILE ("type-integer.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 711)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-integer.galgas", 719)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ult (SOURCE_FILE ("type-integer.galgas", 719)) ;
  }
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_booleanType_26780, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_0  COMMA_SOURCE_FILE ("type-integer.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 716)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_2 ;
  const enumGalgasBool test_3 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-integer.galgas", 724)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ule (SOURCE_FILE ("type-integer.galgas", 724)) ;
  }
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_booleanType_26780, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_2  COMMA_SOURCE_FILE ("type-integer.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 721)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_4 ;
  const enumGalgasBool test_5 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-integer.galgas", 729)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_ugt (SOURCE_FILE ("type-integer.galgas", 729)) ;
  }
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_booleanType_26780, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_4  COMMA_SOURCE_FILE ("type-integer.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 726)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_6 ;
  const enumGalgasBool test_7 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-integer.galgas", 734)) ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_llvmBinaryOperation::constructor_icmp_5F_uge (SOURCE_FILE ("type-integer.galgas", 734)) ;
  }
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_booleanType_26780, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_6  COMMA_SOURCE_FILE ("type-integer.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 731)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inIsSigned.operator_not (SOURCE_FILE ("type-integer.galgas", 737)).boolEnum () ;
  if (kBoolTrue == test_8) {
    {
    ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-integer.galgas", 741))  COMMA_SOURCE_FILE ("type-integer.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 738)) ;
    }
    {
    ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-integer.galgas", 746))  COMMA_SOURCE_FILE ("type-integer.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 743)) ;
    }
    {
    ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-integer.galgas", 751))  COMMA_SOURCE_FILE ("type-integer.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 748)) ;
    }
  }
  {
  GALGAS_llvmBinaryOperation temp_9 ;
  const enumGalgasBool test_10 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-integer.galgas", 758)) ;
  }else if (kBoolFalse == test_10) {
    temp_9 = GALGAS_llvmBinaryOperation::constructor_uaddOVF (SOURCE_FILE ("type-integer.galgas", 758)) ;
  }
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_9  COMMA_SOURCE_FILE ("type-integer.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 755)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-integer.galgas", 763))  COMMA_SOURCE_FILE ("type-integer.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 760)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_11 ;
  const enumGalgasBool test_12 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-integer.galgas", 768)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_llvmBinaryOperation::constructor_usubOVF (SOURCE_FILE ("type-integer.galgas", 768)) ;
  }
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_11  COMMA_SOURCE_FILE ("type-integer.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 765)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-integer.galgas", 773))  COMMA_SOURCE_FILE ("type-integer.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 770)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_13 ;
  const enumGalgasBool test_14 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-integer.galgas", 778)) ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_llvmBinaryOperation::constructor_umulOVF (SOURCE_FILE ("type-integer.galgas", 778)) ;
  }
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_13  COMMA_SOURCE_FILE ("type-integer.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 775)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-integer.galgas", 783))  COMMA_SOURCE_FILE ("type-integer.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 780)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_15 ;
  const enumGalgasBool test_16 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-integer.galgas", 788)) ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_llvmBinaryOperation::constructor_udivOVF (SOURCE_FILE ("type-integer.galgas", 788)) ;
  }
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_15  COMMA_SOURCE_FILE ("type-integer.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 785)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_17 ;
  const enumGalgasBool test_18 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-integer.galgas", 793)) ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_llvmBinaryOperation::constructor_udivNoOVF (SOURCE_FILE ("type-integer.galgas", 793)) ;
  }
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_17  COMMA_SOURCE_FILE ("type-integer.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 790)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_19 ;
  const enumGalgasBool test_20 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-integer.galgas", 798)) ;
  }else if (kBoolFalse == test_20) {
    temp_19 = GALGAS_llvmBinaryOperation::constructor_uremOVF (SOURCE_FILE ("type-integer.galgas", 798)) ;
  }
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_19  COMMA_SOURCE_FILE ("type-integer.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 795)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_21 ;
  const enumGalgasBool test_22 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-integer.galgas", 803)) ;
  }else if (kBoolFalse == test_22) {
    temp_21 = GALGAS_llvmBinaryOperation::constructor_uremNoOVF (SOURCE_FILE ("type-integer.galgas", 803)) ;
  }
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_21  COMMA_SOURCE_FILE ("type-integer.galgas", 803)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 800)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-integer.galgas", 809))  COMMA_SOURCE_FILE ("type-integer.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 806)) ;
  }
  {
  GALGAS_llvmBinaryOperation temp_23 ;
  const enumGalgasBool test_24 = constinArgument_inIsSigned.boolEnum () ;
  if (kBoolTrue == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_ashr (SOURCE_FILE ("type-integer.galgas", 814)) ;
  }else if (kBoolFalse == test_24) {
    temp_23 = GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-integer.galgas", 814)) ;
  }
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intLiteralOp_26673, var_selfType_26541, GALGAS_literal_5F_integerObject_5F_infixOperator::constructor_new (temp_23  COMMA_SOURCE_FILE ("type-integer.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 811)) ;
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
  GALGAS_bigint var_literalValue_31111 ;
  GALGAS_PLMType joker_31077_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_31077_1, var_literalValue_31111, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 835)) ;
  GALGAS_bigint var_min_31171 ;
  GALGAS_bigint var_max_31192 ;
  GALGAS_bool joker_31194_2 ; // Joker input parameter
  GALGAS_uint joker_31194_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 836)).getter_kind (HERE).method_integer (var_min_31171, var_max_31192, joker_31194_2, joker_31194_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 836)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue_31111.objectCompare (var_min_31171)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min_31171.getter_string (SOURCE_FILE ("type-integer.galgas", 838)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 838)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 838)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 838)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_literalValue_31111.objectCompare (var_max_31192)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max_31192.getter_string (SOURCE_FILE ("type-integer.galgas", 840)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 840)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 840)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 840)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      {
      routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 842)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 845)), constinArgument_inOperatorLocation, constinArgument_inLeftOperand, object->mProperty_mOperator, constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 843)) ;
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
  GALGAS_lstring var_staticIntegerTypeName_1813 = function_llvmTypeNameFromPLMname (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  {
  const GALGAS_literalIntegerDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName_1813, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName_1813, function_llvmTypeNameFromPLMname (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 35)) ;
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
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName_3167 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 56)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 56)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3167, function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 60)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-literal-integer.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 58)) ;
  }
  {
  routine_enterLiteralIntegerOperators (ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 64)) ;
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
  GALGAS_lstring var_literalIntegerTypeName_3671 = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 74)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 74)) ;
  GALGAS_lstring var_intIntOp_3744 = function_combineTypeNamesForInfixOperator (var_literalIntegerTypeName_3671.getter_string (HERE), var_literalIntegerTypeName_3671.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 76)) ;
  GALGAS_PLMType var_selfType_3858 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_literalIntegerTypeName_3671, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 77)).getter_type (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 77)) ;
  GALGAS_PLMType var_booleanType_4107 = extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 80)) ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3744, var_booleanType_4107, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 84))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 81)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3744, var_booleanType_4107, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 89))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3744, var_booleanType_4107, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 94))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3744, var_booleanType_4107, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 99))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3744, var_booleanType_4107, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3744, var_booleanType_4107, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAndOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("type-literal-integer.galgas", 115))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 112)) ;
  }
  {
  ioArgument_ioContext.mProperty_mOrOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("type-literal-integer.galgas", 120))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 117)) ;
  }
  {
  ioArgument_ioContext.mProperty_mXorOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("type-literal-integer.galgas", 125))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 122)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnsignedComplementOperatorMap.setter_insertKey (var_literalIntegerTypeName_3671, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 127)) ;
  }
  {
  ioArgument_ioContext.mProperty_mUnaryMinusOperatorMap.setter_insertKey (var_literalIntegerTypeName_3671, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 131)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_saddOVF (SOURCE_FILE ("type-literal-integer.galgas", 138))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 135)) ;
  }
  {
  ioArgument_ioContext.mProperty_mAddNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_addNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 143))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 140)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("type-literal-integer.galgas", 148))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 145)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSubNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 153))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 150)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_smulOVF (SOURCE_FILE ("type-literal-integer.galgas", 158))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 155)) ;
  }
  {
  ioArgument_ioContext.mProperty_mMulNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_mulNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 163))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 160)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivOVF (SOURCE_FILE ("type-literal-integer.galgas", 168))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 165)) ;
  }
  {
  ioArgument_ioContext.mProperty_mDivNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sdivNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 173))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 170)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremOVF (SOURCE_FILE ("type-literal-integer.galgas", 178))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mModNoOvfOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_sremNoOVF (SOURCE_FILE ("type-literal-integer.galgas", 183))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 180)) ;
  }
  {
  ioArgument_ioContext.mProperty_mLeftShiftOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_shl (SOURCE_FILE ("type-literal-integer.galgas", 189))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 186)) ;
  }
  {
  ioArgument_ioContext.mProperty_mRightShiftOperatorMap.setter_insertKey (var_intIntOp_3744, var_selfType_3858, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("type-literal-integer.galgas", 194))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 191)) ;
  }
}


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
  GALGAS_bigint var_leftValue_9357 ;
  GALGAS_PLMType joker_9326_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_9326_1, var_leftValue_9357, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 234)) ;
  GALGAS_bigint var_rightValue_9425 ;
  GALGAS_PLMType joker_9393_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_9393_1, var_rightValue_9425, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 235)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result_9439 = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue_9357, var_rightValue_9425, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 236)) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_9439  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 237)) ;
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
  GALGAS_lstring var_literalStringTypeName_1866 = function_llvmTypeNameFromPLMname (object->mProperty_mLiteralStringTypeName, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1866, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1866, function_llvmTypeNameFromPLMname (GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) COMMA_SOURCE_FILE ("type-static-string.galgas", 36)) ;
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
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mLiteralStringTypeName, function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 60)), ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-static-string.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 58)) ;
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
//                     Overriding extension method '@typeOpaqueDefinitionDeclaration addExtension'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeOpaqueDefinitionDeclaration_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                          GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                          GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDefinitionDeclaration * object = (const cPtr_typeOpaqueDefinitionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDefinitionDeclaration) ;
  const GALGAS_typeOpaqueDefinitionDeclaration temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeOpaqueDefinitionDeclaration_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration.mSlotID,
                                     extensionMethod_typeOpaqueDefinitionDeclaration_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeOpaqueDefinitionDeclaration_addExtension (defineExtensionMethod_typeOpaqueDefinitionDeclaration_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@typeOpaqueDefinitionDeclaration enterInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeOpaqueDefinitionDeclaration_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDefinitionDeclaration * object = (const cPtr_typeOpaqueDefinitionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDefinitionDeclaration) ;
  GALGAS_lstring var_internalTypeName_3267 = function_llvmTypeNameFromPLMname (object->mProperty_mAnonymousOpaqueTypeName, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 70)) ;
  {
  const GALGAS_typeOpaqueDefinitionDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_internalTypeName_3267, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 72)) ;
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), var_internalTypeName_3267, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeOpaqueDefinitionDeclaration_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration.mSlotID,
                                               extensionMethod_typeOpaqueDefinitionDeclaration_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeOpaqueDefinitionDeclaration_enterInPrecedenceGraph (defineExtensionMethod_typeOpaqueDefinitionDeclaration_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@typeOpaqueDefinitionDeclaration keyRepresentationForErrorSignaling'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_typeOpaqueDefinitionDeclaration_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeOpaqueDefinitionDeclaration * object = (const cPtr_typeOpaqueDefinitionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDefinitionDeclaration) ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (object->mProperty_mAnonymousOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeOpaqueDefinitionDeclaration_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration.mSlotID,
                                                           extensionGetter_typeOpaqueDefinitionDeclaration_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeOpaqueDefinitionDeclaration_keyRepresentationForErrorSignaling (defineExtensionGetter_typeOpaqueDefinitionDeclaration_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@typeOpaqueDefinitionDeclaration location'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_typeOpaqueDefinitionDeclaration_location (const cPtr_abstractDeclarationAST * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeOpaqueDefinitionDeclaration * object = (const cPtr_typeOpaqueDefinitionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDefinitionDeclaration) ;
  result_outLocation = object->mProperty_mAnonymousOpaqueTypeName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_typeOpaqueDefinitionDeclaration_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration.mSlotID,
                                 extensionGetter_typeOpaqueDefinitionDeclaration_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typeOpaqueDefinitionDeclaration_location (defineExtensionGetter_typeOpaqueDefinitionDeclaration_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@typeOpaqueDefinitionDeclaration enterInContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeOpaqueDefinitionDeclaration_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                            const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                            GALGAS_semanticContext & ioArgument_ioContext,
                                                                            GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                            GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                            GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                            GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDefinitionDeclaration * object = (const cPtr_typeOpaqueDefinitionDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDefinitionDeclaration) ;
  GALGAS_PLMTypeAttributes var_opaqueTypeAttributes_4957 = GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 101)) ;
  cEnumerator_lstringlist enumerator_5001 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_5001.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_5001.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_opaqueTypeAttributes_4957.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5001.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 105)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 105)) ;
      }else if (kBoolFalse == test_1) {
        var_opaqueTypeAttributes_4957 = var_opaqueTypeAttributes_4957.operator_or (GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 107)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_5001.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 109)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_opaqueTypeAttributes_4957.getter_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 110)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5001.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 111)), GALGAS_string ("duplicated attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 111)) ;
        }else if (kBoolFalse == test_4) {
          var_opaqueTypeAttributes_4957 = var_opaqueTypeAttributes_4957.operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 113)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 113)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_5001.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 116)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 116)) ;
      }
    }
    enumerator_5001.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionGenerationList_5724 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 122)) ;
  GALGAS_allocaList var_allocaList_5754 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
  GALGAS_semanticTemporariesStruct var_temporaries_5800 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("type-opaque-declaration.galgas", 124)) ;
  GALGAS_staticStringMap joker_6149 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 133)) ;
  GALGAS_objectIR var_sizeExpressionIR_6316 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 127)), GALGAS_lstring::constructor_new (object->mProperty_mAnonymousOpaqueTypeName.getter_string (HERE).add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)), object->mProperty_mAnonymousOpaqueTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)), function_voidType (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 131)), var_temporaries_5800, joker_6149, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_5754, var_initInstructionGenerationList_5724, var_sizeExpressionIR_6316, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_5754.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 139)).add_operation (var_initInstructionGenerationList_5724.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_6316.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 139)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 139)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 140)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_constructorMap var_constructorMap_6558 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 142)) ;
    const enumGalgasBool test_10 = var_opaqueTypeAttributes_4957.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      var_constructorMap_6558.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 144)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 144)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144)) ;
      }
    }
    GALGAS_bigint var_bitSize_6755 ;
    GALGAS_PLMType joker_6734_1 ; // Joker input parameter
    var_sizeExpressionIR_6316.method_literalInteger (joker_6734_1, var_bitSize_6755, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 146)) ;
    GALGAS_PLMType var_opaqueType_6775 = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 148)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 149)), var_constructorMap_6558, GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 151)), var_opaqueTypeAttributes_4957, object->mProperty_mAnonymousOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 153)), GALGAS_typeKind::constructor_opaque (var_bitSize_6755  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 154)), object->mProperty_mAnonymousOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 155))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 147)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mAnonymousOpaqueTypeName, var_opaqueType_6775, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("type-opaque-declaration.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 157)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeOpaqueDefinitionDeclaration_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeOpaqueDefinitionDeclaration.mSlotID,
                                       extensionMethod_typeOpaqueDefinitionDeclaration_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeOpaqueDefinitionDeclaration_enterInContext (defineExtensionMethod_typeOpaqueDefinitionDeclaration_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_outRepresentation = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@controlRegisterGroupDeclarationAST location'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_controlRegisterGroupDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  result_result = object->mProperty_mRegisterGroupName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 228)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                 extensionGetter_controlRegisterGroupDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_location (defineExtensionGetter_controlRegisterGroupDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@controlRegisterGroupDeclarationAST addExtension'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterGroupDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                             GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                             GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                     extensionMethod_controlRegisterGroupDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_addExtension (defineExtensionMethod_controlRegisterGroupDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_lstring var_nodeName_9467 = function_registerGroupNameFromPLMname (object->mProperty_mRegisterGroupName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 244)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_9467, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 246)) ;
  }
  cEnumerator_controlRegisterDeclarationList enumerator_9628 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_9628.hasCurrentObject ()) {
    GALGAS_lstring var_typeName_9685 = function_llvmTypeNameFromPLMname (enumerator_9628.current (HERE).getter_mRegisterTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 250)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_9467, var_typeName_9685 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 251)) ;
    }
    GALGAS_stringlist var_split_9879 = enumerator_9628.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("uint") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 253)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, var_split_9879.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 255)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = var_split_9879.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 255)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 255)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_n_10056 = var_split_9879.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 256)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_n_10056.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring var_bitSizeTypeName_10197 = GALGAS_lstring::constructor_new (GALGAS_string ("uint").add_operation (var_n_10056.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 259)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 259)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 259)), enumerator_9628.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 259))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 259)) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_nodeName_9467, function_llvmTypeNameFromPLMname (var_bitSizeTypeName_10197, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 260)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 260)) ;
        }
      }
    }
    GALGAS_lstring var_rootNode_10429 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 264)), var_nodeName_9467.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 264)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_9467, var_rootNode_10429 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 265)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_10642 (enumerator_9628.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_10642.hasCurrentObject ()) {
      switch (enumerator_10642.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_10959 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_10642.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_10959->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_10959->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_9467, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 271)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_9467, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 272)) ;
        }
        break ;
      }
      enumerator_10642.gotoNextObject () ;
    }
    enumerator_9628.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'controlRegisterType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_PLMType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  outArgument_outRegisterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), constinArgument_inRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 288)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_11621 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_11621->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 293)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 293)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 295)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 295)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 297)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 297)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 299)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 299)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 301)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 301)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 303)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 303)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 305)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 307)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 307)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 309)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 309)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 311)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 313)), GALGAS_string ("a register should be an $intXX or an $uintXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 313)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'buildControlRegisterSliceMap'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterSliceMap (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                           const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                           GALGAS_semanticContext & ioArgument_ioContext,
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
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 330)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 332)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 333)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint var_shiftCount_13713 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterBitSliceList enumerator_13756 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
    while (enumerator_13756.hasCurrentObject ()) {
      switch (enumerator_13756.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_13951 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_13756.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_13951->mAssociatedValue0 ;
          var_shiftCount_13713 = var_shiftCount_13713.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 338)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)) ;
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_14947 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13756.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_name = extractPtr_14947->mAssociatedValue0 ;
          const GALGAS_lbigint extractedValue_count = extractPtr_14947->mAssociatedValue1 ;
          GALGAS_uint var_bitCount_14025 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 341)) ;
          outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_14025, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 342)) ;
          {
          outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_13713, var_bitCount_14025, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 343)) ;
          }
          GALGAS_sliceMap var_registerSubMap_14251 = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 348)) ;
          {
          var_registerSubMap_14251.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("shifted"), extractedValue_name.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 351)), GALGAS_llvmBinaryOperation::constructor_lshr (SOURCE_FILE ("declaration-control-register.galgas", 352)), var_shiftCount_13713.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 353)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 354)), ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 350)) ;
          }
          {
          var_registerSubMap_14251.setter_insertKey (GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 359)), extractedValue_name.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 359)), GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("declaration-control-register.galgas", 360)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 361)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 362)), extensionGetter_booleanType (ioArgument_ioContext, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 358)) ;
          }
          GALGAS_bigint var_mask_14710 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)).left_shift_operation (var_bitCount_14025 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)).left_shift_operation (var_shiftCount_13713 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 366)) ;
          {
          outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 369)), var_mask_14710, var_registerSubMap_14251, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 367)) ;
          }
          var_shiftCount_13713 = var_shiftCount_13713.add_operation (var_bitCount_14025, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 374)) ;
        }
        break ;
      }
      enumerator_13756.gotoNextObject () ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_13713)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_13713.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 380)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 379)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                               const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                               GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  GALGAS_controlRegisterMap var_controlRegisterMap_21071 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 532)) ;
  cEnumerator_controlRegisterDeclarationList enumerator_21100 (object->mProperty_mRegisters, kENUMERATION_UP) ;
  while (enumerator_21100.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_21100.current (HERE), ioArgument_ioContext, var_controlRegisterMap_21071, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 534)) ;
    enumerator_21100.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (object->mProperty_mRegisterGroupName, var_controlRegisterMap_21071, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 536)) ;
  }
  {
  extensionSetter_insertRegisterGroup (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mRegisterGroupName, var_controlRegisterMap_21071, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 537)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterGroupDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildControlRegisterMapHTMLFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_22032 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 549)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_22182 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 551)) ;
    cEnumerator_controlRegisterGroupMap enumerator_22227 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
    while (enumerator_22227.hasCurrentObject ()) {
      var_firstLetterSet_22182.addAssign_operation (enumerator_22227.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 553))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 553)) ;
      enumerator_22227.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_22335 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_22369 = GALGAS_char (TO_UNICODE (32)) ;
    GALGAS_uint var_controlRegisterCount_22406 = GALGAS_uint ((uint32_t) 0U) ;
    cEnumerator_controlRegisterGroupMap enumerator_22457 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
    while (enumerator_22457.hasCurrentObject ()) {
      var_controlRegisterCount_22406 = var_controlRegisterCount_22406.add_operation (enumerator_22457.current_mControlRegisterMap (HERE).getter_count (SOURCE_FILE ("declaration-control-register.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 559)) ;
      cEnumerator_controlRegisterMap enumerator_22594 (enumerator_22457.current_mControlRegisterMap (HERE), kENUMERATION_UP) ;
      while (enumerator_22594.hasCurrentObject ()) {
        GALGAS_string var_registerName_22622 = enumerator_22457.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 561)).add_operation (enumerator_22594.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 561)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_22369.objectCompare (var_registerName_22622.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 562)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_currentFirstLetter_22369 = var_registerName_22622.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 563)) ;
          var_tableOfTypeString_22335.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_22369.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 564)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)).add_operation (var_currentFirstLetter_22369.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 564)) ;
        }
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_22594.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_tableOfTypeString_22335.plusAssign_operation(function_linkForControlRegister (var_registerName_22622, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 567)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 567)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 567)) ;
        }else if (kBoolFalse == test_2) {
          cEnumerator_range enumerator_23106 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_22594.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 569))), kENUMERATION_UP) ;
          while (enumerator_23106.hasCurrentObject ()) {
            var_tableOfTypeString_22335.plusAssign_operation(function_linkForControlRegister (var_registerName_22622.add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 570)).add_operation (enumerator_23106.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 570)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 570)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 570)) ;
            enumerator_23106.gotoNextObject () ;
          }
        }
        enumerator_22594.gotoNextObject () ;
      }
      enumerator_22457.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_23283 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 576)), var_controlRegisterCount_22406, constinArgument_inControlRegisterGroupMap, var_firstLetterSet_22182, var_tableOfTypeString_22335 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 575))) ;
    GALGAS_bool joker_23568 ; // Joker input parameter
    var_typeDumpString_23283.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_22032, joker_23568, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 582)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_22032, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 584)) ;
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
                                                                              const GALGAS_uint & in_CONTROL_5F_REGISTER_5F_COUNT,
                                                                              const GALGAS_controlRegisterGroupMap & in_CONTROL_5F_REGISTER_5F_GROUP_5F_MAP,
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
  result << in_CONTROL_5F_REGISTER_5F_COUNT.getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 67)).stringValue () ;
  result << " defined control registers, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1168_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1168 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1168.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1168.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 70)).getter_uint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 70)).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 70)).stringValue () ;
      result << "\">" ;
      result << enumerator_1168.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1168.hasNextObject ()) {
        result << " - " ;
      }
      index_1168_.increment () ;
      enumerator_1168.gotoNextObject () ;
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
  GALGAS_uint index_1560_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_GROUP_5F_MAP.isValid ()) {
    cEnumerator_controlRegisterGroupMap enumerator_1560 (in_CONTROL_5F_REGISTER_5F_GROUP_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1560.hasCurrentObject ()) {
      GALGAS_uint index_1601_ (0) ;
      if (enumerator_1560.current_mControlRegisterMap (HERE).isValid ()) {
        cEnumerator_controlRegisterMap enumerator_1601 (enumerator_1560.current_mControlRegisterMap (HERE), kENUMERATION_UP) ;
        while (enumerator_1601.hasCurrentObject ()) {
          const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1601.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_0) {
            result << "<tr class=\"result_line\"><td><a name=\"" ;
            result << enumerator_1560.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 83)).add_operation (enumerator_1601.current_lkey (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 83)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 83)).stringValue () ;
            result << "\">" ;
            result << enumerator_1560.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 83)).add_operation (enumerator_1601.current_lkey (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 83)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 83)).stringValue () ;
            result << "</a></td><td class=\"address\">$" ;
            result << enumerator_1601.current_mType (HERE).getter_plmOriginalTypeName (HERE).stringValue () ;
            result << "</td><td class=\"address\">" ;
            result << enumerator_1601.current_mAddress (HERE).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)).stringValue () ;
            result << "</td><td>" ;
            const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_1601.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 87)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_1) {
              result << "<table class=\"fields\"><tr>" ;
              result << function_fieldIndexColumns (enumerator_1601.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 89)).stringValue () ;
              result << "</tr><tr>" ;
              GALGAS_uint index_2108_ (0) ;
              if (enumerator_1601.current_mControlRegisterFieldList (HERE).isValid ()) {
                cEnumerator_controlRegisterFieldList enumerator_2108 (enumerator_1601.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
                while (enumerator_2108.hasCurrentObject ()) {
                  result << "<td class=\"fields\" colspan=\"" ;
                  result << enumerator_2108.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 92)).stringValue () ;
                  result << "\">" ;
                  result << enumerator_2108.current_mFieldName (HERE).stringValue () ;
                  result << "</td>" ;
                  index_2108_.increment () ;
                  enumerator_2108.gotoNextObject () ;
                }
              }
              result << "</tr></table>" ;
            }else if (kBoolFalse == test_1) {
            }
            result << "</td></tr>\n" ;
          }else if (kBoolFalse == test_0) {
            GALGAS_uint index_2350_ (0) ;
            if (function_arrayIndexListFor (enumerator_1601.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 99)).isValid ()) {
              cEnumerator_uintlist enumerator_2350 (function_arrayIndexListFor (enumerator_1601.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 99)), kENUMERATION_UP) ;
              while (enumerator_2350.hasCurrentObject ()) {
                result << "<tr class=\"result_line\"><td><a name=\"" ;
                result << enumerator_1560.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)).add_operation (enumerator_1601.current_lkey (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)).stringValue () ;
                result << " [" ;
                result << enumerator_2350.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)).stringValue () ;
                result << "]\">" ;
                result << enumerator_1560.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)).add_operation (enumerator_1601.current_lkey (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)).stringValue () ;
                result << " [" ;
                result << enumerator_2350.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 101)).stringValue () ;
                result << "]</a><br/></td><td class=\"address\">$" ;
                result << enumerator_1601.current_mType (HERE).getter_plmOriginalTypeName (HERE).stringValue () ;
                result << "</td><td class=\"address\">" ;
                result << enumerator_1601.current_mAddress (HERE).add_operation (enumerator_2350.current_mValue (HERE).multiply_operation (enumerator_1601.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).getter_bigint (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).getter_hexString (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 103)).stringValue () ;
                result << "</td><td>" ;
                const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_1601.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 105)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  result << "<table class=\"fields\"><tr>" ;
                  result << function_fieldIndexColumns (enumerator_1601.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 107)).stringValue () ;
                  result << "</tr><tr>" ;
                  GALGAS_uint index_2935_ (0) ;
                  if (enumerator_1601.current_mControlRegisterFieldList (HERE).isValid ()) {
                    cEnumerator_controlRegisterFieldList enumerator_2935 (enumerator_1601.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
                    while (enumerator_2935.hasCurrentObject ()) {
                      result << "<td class=\"fields\" colspan=\"" ;
                      result << enumerator_2935.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 110)).stringValue () ;
                      result << "\">" ;
                      result << enumerator_2935.current_mFieldName (HERE).stringValue () ;
                      result << "</td>" ;
                      index_2935_.increment () ;
                      enumerator_2935.gotoNextObject () ;
                    }
                  }
                  result << "</tr></table>" ;
                }else if (kBoolFalse == test_2) {
                }
                result << "</td></tr>\n" ;
                index_2350_.increment () ;
                enumerator_2350.gotoNextObject () ;
              }
            }
          }
          index_1601_.increment () ;
          enumerator_1601.gotoNextObject () ;
        }
      }
      index_1560_.increment () ;
      enumerator_1560.gotoNextObject () ;
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
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 604)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 604)).add_operation (constinArgument_inControlRegisterName, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 604)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 604)) ;
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
  cEnumerator_range enumerator_24639 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611))), kENUMERATION_DOWN) ;
  while (enumerator_24639.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_24639.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 612)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 612)) ;
    enumerator_24639.gotoNextObject () ;
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
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 619)) ;
  cEnumerator_range enumerator_24924 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620))), kENUMERATION_UP) ;
  while (enumerator_24924.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_24924.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 621)) ;
    enumerator_24924.gotoNextObject () ;
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
    GALGAS_lstring var_typeName_3369 = function_llvmTypeNameFromPLMname (object->mProperty_mConstantTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mConstantName, var_typeName_3369 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 75)) ;
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
                                                                         GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                         GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                         GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  GALGAS_PLMType var_annotationType_5018 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_5018 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_5018 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 111)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 111)) ;
  }
  GALGAS_semanticTemporariesStruct joker_5482 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
  GALGAS_allocaList joker_5604 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 124)) ;
  GALGAS_instructionListIR joker_5630 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 125)) ;
  GALGAS_objectIR var_expressionResult_5670 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 115)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-global-constant.galgas", 116)), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 117)), var_annotationType_5018, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 120)), joker_5482, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_5604, joker_5630, var_expressionResult_5670, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 114)) ;
  GALGAS_objectIR var_result_5723 = function_checkAssignmentCompatibility (var_expressionResult_5670, var_annotationType_5018, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 129)) ;
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_result_5723, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 136)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 137)), GALGAS_string ("source expression cannot be statically computed"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 137)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5723, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 140)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mConstantName, var_result_5723, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 141)) ;
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
  GALGAS_string var_typeDumpFilePath_6847 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 153)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_6994 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    cEnumerator_globalConstantMap enumerator_7033 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7033.hasCurrentObject ()) {
      var_firstLetterSet_6994.addAssign_operation (enumerator_7033.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 157))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
      enumerator_7033.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7141 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7175 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7221 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7221.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7175.objectCompare (enumerator_7221.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 162)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7175 = enumerator_7221.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 163)) ;
        var_tableOfTypeString_7141.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7175.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 164)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)).add_operation (var_currentFirstLetter_7175.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)) ;
      }
      var_tableOfTypeString_7141.plusAssign_operation(function_linkForGlobalConstant (enumerator_7221.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 166)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 166)) ;
      enumerator_7221.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_7617 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 169)), inArgument_inGlobalConstantMap, var_firstLetterSet_6994, var_tableOfTypeString_7141 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168))) ;
    GALGAS_bool joker_7861 ; // Joker input parameter
    var_typeDumpString_7617.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6847, joker_7861, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 174)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6847, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)) ;
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
      result << extensionGetter_plmOriginalTypeName (enumerator_1375.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
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
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 195)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 195)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 195)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 195)) ;
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
//                     Overriding extension method '@syncToolInstanceDeclarationAST addExtension'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncToolInstanceDeclarationAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                                         GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                                         GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                     extensionMethod_syncToolInstanceDeclarationAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_addExtension (defineExtensionMethod_syncToolInstanceDeclarationAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mSyncInstanceName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 58)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mSyncInstanceName, function_llvmTypeNameFromPLMname (object->mProperty_mSyncTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 60)) COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 60)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), object->mProperty_mSyncInstanceName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                               extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (object->mProperty_mSyncInstanceName.getter_string (SOURCE_FILE ("declaration-global-sync-instance.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 68)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                           extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@syncToolInstanceDeclarationAST location'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_syncToolInstanceDeclarationAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  result_outLocation = object->mProperty_mSyncInstanceName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syncToolInstanceDeclarationAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                 extensionGetter_syncToolInstanceDeclarationAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_location (defineExtensionGetter_syncToolInstanceDeclarationAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncToolInstanceDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                           const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                           GALGAS_semanticContext & ioArgument_ioContext,
                                                                           GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                           GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                           GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSyncTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 101)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), object->mProperty_mSyncTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 103)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 103)) ;
  }
  GALGAS_PLMType var_optionalSyncType_4738 = temp_0 ;
  GALGAS_semanticTemporariesStruct joker_5169 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-sync-instance.galgas", 113)) ;
  GALGAS_allocaList joker_5279 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)) ;
  GALGAS_instructionListIR joker_5306 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-sync-instance.galgas", 117)) ;
  GALGAS_objectIR var_expressionResult_5347 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 107)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-global-sync-instance.galgas", 108)), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 109)), var_optionalSyncType_4738, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-sync-instance.galgas", 112)), joker_5169, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioContext.mProperty_mValuedObjectMap, joker_5279, joker_5306, var_expressionResult_5347, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_5347, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)), GALGAS_string ("source expression cannot be statically computed"), fixItArray3  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
  }
  GALGAS_objectIR var_result_5537 = function_checkAssignmentCompatibility (var_expressionResult_5347, var_optionalSyncType_4738, object->mProperty_mSyncInstanceName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_5537, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 133)), var_result_5537, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 131)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_type (var_result_5537, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 137)).getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 137)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 137)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mSyncInstanceName.getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 138)), GALGAS_string ("the type is not a synchronization tool type"), fixItArray5  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 138)) ;
  }
  {
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mSyncInstanceName, extensionGetter_type (var_result_5537, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 141)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (object->mProperty_mSyncInstanceName, var_result_5537  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 143))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 143)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                       extensionMethod_syncToolInstanceDeclarationAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInContext (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@decoratedSyncInstance semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedSyncInstance_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedSyncInstance * object = (const cPtr_decoratedSyncInstance *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedSyncInstance) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (object->mProperty_mSyncInstanceName, object->mProperty_mExpressionGeneratedCode, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 162)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedSyncInstance_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedSyncInstance.mSlotID,
                                         extensionMethod_decoratedSyncInstance_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedSyncInstance_semanticAnalysis (defineExtensionMethod_decoratedSyncInstance_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementedDriverAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  {
  const GALGAS_implementedDriverAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (object->mProperty_mDriverName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 182)) ;
  }
  GALGAS_lstring var_driverTypeName_6458 = function_llvmTypeNameFromPLMname (function_llvmDriverNameFromName (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 183)) ;
  {
  ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, var_driverTypeName_6458 COMMA_SOURCE_FILE ("declaration-driver.galgas", 184)) ;
  }
  cEnumerator_lstringlist enumerator_6614 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_6614.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (object->mProperty_mDriverName, enumerator_6614.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 186)) ;
    }
    enumerator_6614.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                               extensionMethod_implementedDriverAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementedDriverAST_enterInPrecedenceGraph (defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 193)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                           extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementedDriverAST_keyRepresentationForErrorSignaling (defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@implementedDriverAST location'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_implementedDriverAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  result_outLocation = object->mProperty_mDriverName.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_implementedDriverAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                 extensionGetter_implementedDriverAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_implementedDriverAST_location (defineExtensionGetter_implementedDriverAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@implementedDriverAST addExtension'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementedDriverAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                               GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                               GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                               GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementedDriverAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                     extensionMethod_implementedDriverAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementedDriverAST_addExtension (defineExtensionMethod_implementedDriverAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'retainRequiredDrivers'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_retainRequiredDrivers (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_driverWithNoDependenceList_9010 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 236)) ;
  cEnumerator_driverDeclarationListAST enumerator_9070 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9070.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_9070.current_mDriver (HERE).getter_mDriverDependanceList (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 238)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_driverWithNoDependenceList_9010.addAssign_operation (enumerator_9070.current_mDriver (HERE).getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 239)) ;
    }
    enumerator_9070.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_9010.getter_length (SOURCE_FILE ("declaration-driver.galgas", 242)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_lstringlist enumerator_9312 (var_driverWithNoDependenceList_9010, kENUMERATION_UP) ;
    while (enumerator_9312.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_9312.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 244)), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 244)) ;
      enumerator_9312.gotoNextObject () ;
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9473 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 248)) ;
  cEnumerator_driverInstanciationListAST enumerator_9534 (ioArgument_ioAST.getter_mRequiredDriverListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9534.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9605 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 250)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_9649 (enumerator_9534.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_9649.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9605.setter_insertKey (enumerator_9649.current_mSelector (HERE), enumerator_9649.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 252)) ;
      }
      enumerator_9649.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9473.setter_insertKey (enumerator_9534.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9605, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 254)) ;
    }
    enumerator_9534.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_9926 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 257)) ;
  cEnumerator_driverDeclarationListAST enumerator_10041 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_10041.hasCurrentObject ()) {
    var_validDriverNames_9926.addAssign_operation (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    GALGAS_bool var_driverIsInstancied_10127 = var_instanciedDriverMap_9473.getter_hasKey (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 260)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10290 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 262)) ;
    const enumGalgasBool test_3 = var_driverIsInstancied_10127.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10424 ;
      var_instanciedDriverMap_9473.method_searchKey (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE), var_driverInstanciationArgumentMap_10424, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 264)) ;
      GALGAS_stringset var_validArgumentSet_10519 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 266)) ;
      cEnumerator_driverPropertyListAST enumerator_10644 (enumerator_10041.current_mDriver (HERE).getter_mDriverPropertyListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_10644.hasCurrentObject ()) {
        GALGAS_expressionAST var_initExpression_10685 ;
        switch (enumerator_10644.current_mOptionalExpression (HERE).enumValue ()) {
        case GALGAS_structurePropertyInitOptionalExpressionAST::kNotBuilt:
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_noExpression:
          {
            var_driverInstanciationArgumentMap_10424.method_searchKey (enumerator_10644.current_mPropertyName (HERE), var_initExpression_10685, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 271)) ;
            var_validArgumentSet_10519.addAssign_operation (enumerator_10644.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
          }
          break ;
        case GALGAS_structurePropertyInitOptionalExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression * extractPtr_10963 = (const cEnumAssociatedValues_structurePropertyInitOptionalExpressionAST_expression *) (enumerator_10644.current_mOptionalExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_expression = extractPtr_10963->mAssociatedValue0 ;
            var_initExpression_10685 = extractedValue_expression ;
          }
          break ;
        }
        var_driverPropertyListAST_10290.addAssign_operation (enumerator_10644.current_mPropertyName (HERE), enumerator_10644.current_mIsConstant (HERE), GALGAS_bool (false), enumerator_10644.current_mTypeName (HERE), GALGAS_structurePropertyInitOptionalExpressionAST::constructor_expression (var_initExpression_10685  COMMA_SOURCE_FILE ("declaration-driver.galgas", 281))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 276)) ;
        enumerator_10644.gotoNextObject () ;
      }
      cEnumerator_stringset enumerator_11323 (var_driverInstanciationArgumentMap_10424.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 284)).substract_operation (var_validArgumentSet_10519, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)), kENUMERATION_UP) ;
      while (enumerator_11323.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10424.getter_locationForKey (enumerator_11323.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 285)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 285)) ;
        enumerator_11323.gotoNextObject () ;
      }
    }
    GALGAS_lstring var_driverTypeName_11473 = function_llvmDriverNameFromName (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 289)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverDependanceList (HERE), var_driverIsInstancied_10127  COMMA_SOURCE_FILE ("declaration-driver.galgas", 290))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 290)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (var_driverTypeName_11473, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 297)), GALGAS_bool (false), var_driverPropertyListAST_10290, enumerator_10041.current_mDriver (HERE).getter_mDriverFunctionDeclarationListAST (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverSystemRoutineListAST (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverGuardListAST (HERE), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 295))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 295)) ;
    cEnumerator_initListAST enumerator_12100 (enumerator_10041.current_mDriver (HERE).getter_mDriverInitListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_12100.hasCurrentObject ()) {
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (enumerator_12100.current_mInit (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
      enumerator_12100.gotoNextObject () ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_10041.current_mDriver (HERE).getter_mDriverInitListAST (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_initAST::constructor_new (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverDependanceList (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE).getter_location (HERE), GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 313)), enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 309))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 309)) ;
    }
    cEnumerator_bootListAST enumerator_12497 (enumerator_10041.current_mDriver (HERE).getter_mDriverBootListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_12497.hasCurrentObject ()) {
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (enumerator_12497.current_mBoot (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 318)) ;
      enumerator_12497.gotoNextObject () ;
    }
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_10041.current_mDriver (HERE).getter_mDriverBootListAST (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 320)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_bootAST::constructor_new (enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverDependanceList (HERE), enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE).getter_location (HERE), GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 325)), enumerator_10041.current_mDriver (HERE).getter_mDriverName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    }
    enumerator_10041.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 330)) ;
  cEnumerator_stringset enumerator_13045 (var_instanciedDriverMap_9473.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 332)).substract_operation (var_validDriverNames_9926, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 332)), kENUMERATION_UP) ;
  while (enumerator_13045.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9473.getter_locationForKey (enumerator_13045.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 333)), GALGAS_string ("undefined driver"), fixItArray7  COMMA_SOURCE_FILE ("declaration-driver.galgas", 333)) ;
    enumerator_13045.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@implementedDriverAST enterInContext'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_implementedDriverAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                 const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                 GALGAS_semanticContext & ioArgument_ioContext,
                                                                 GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                                 GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  {
  ioArgument_ioContext.mProperty_mDriverMap.setter_insertKey (object->mProperty_mDriverName, object->mProperty_mIsInstancied, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 356)) ;
  }
  GALGAS_PLMType var_driverType_14282 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_llvmDriverNameFromName (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 357)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 357)) ;
  {
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mDriverName, object->mProperty_mIsInstancied, var_driverType_14282, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 358)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (object->mProperty_mDriverName  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_implementedDriverAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                       extensionMethod_implementedDriverAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_implementedDriverAST_enterInContext (defineExtensionMethod_implementedDriverAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@decoratedRequiredDriver semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedRequiredDriver_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedRequiredDriver * object = (const cPtr_decoratedRequiredDriver *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedRequiredDriver) ;
  GALGAS_lstring var_driverTypeName_15426 = function_llvmDriverNameFromName (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 378)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_driverTypeProxy_15488 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_driverTypeName_15426, inCompiler  COMMA_SOURCE_FILE ("declaration-driver.galgas", 379)) ;
  GALGAS_constructorMap var_constructorMap_15581 = var_driverTypeProxy_15488.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 380)).getter_constructorMap (HERE) ;
  GALGAS_constructorValue var_constructorValue_15714 ;
  GALGAS_constructorSignature joker_15691 ; // Joker input parameter
  var_constructorMap_15581.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), var_driverTypeName_15426.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 381)), joker_15691, var_constructorValue_15714, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 381)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_15786 ;
  var_constructorValue_15714.method_structure (var_sortedOperandList_15786, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 382)) ;
  GALGAS_operandIRList var_initialValueList_15821 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 383)) ;
  cEnumerator_sortedOperandIRList enumerator_15870 (var_sortedOperandList_15786, kENUMERATION_UP) ;
  while (enumerator_15870.hasCurrentObject ()) {
    var_initialValueList_15821.addAssign_operation (enumerator_15870.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 385)) ;
    enumerator_15870.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE), var_driverTypeProxy_15488, var_initialValueList_15821  COMMA_SOURCE_FILE ("declaration-driver.galgas", 387)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedRequiredDriver.mSlotID,
                                         extensionMethod_decoratedRequiredDriver_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedRequiredDriver_semanticAnalysis (defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis, NULL) ;

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
  GALGAS_staticListValueListAST var_newValueList_6098 = object->mProperty_mValueList ;
  GALGAS_extendStaticArrayDeclarationAST var_extendStaticArrayDeclarationAST_6178 = GALGAS_extendStaticArrayDeclarationAST::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
  cEnumerator_extendStaticArrayDeclarationAST enumerator_6256 (ioArgument_ioExtendStaticArrayDeclarationAST, kENUMERATION_UP) ;
  while (enumerator_6256.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mStaticListName.getter_string (HERE).objectCompare (enumerator_6256.current_mStaticListName (HERE).getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_newValueList_6098.addAssign_operation (enumerator_6256.current_mExpressions (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 170)) ;
    }else if (kBoolFalse == test_0) {
      var_extendStaticArrayDeclarationAST_6178.addAssign_operation (enumerator_6256.current_mStaticListName (HERE), enumerator_6256.current_mExpressions (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 172)) ;
    }
    enumerator_6256.gotoNextObject () ;
  }
  ioArgument_ioExtendStaticArrayDeclarationAST = var_extendStaticArrayDeclarationAST_6178 ;
  outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (object->mProperty_mStaticListName, object->mProperty_mPropertyList, var_newValueList_6098  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 176)) ;
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
  ioArgument_ioGraph.setter_addNode (object->mProperty_mStaticListName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 185)) ;
  }
  cEnumerator_staticListPropertyListAST enumerator_7209 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7209.hasCurrentObject ()) {
    switch (enumerator_7209.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7395 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_7209.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_7395->mAssociatedValue0 ;
        GALGAS_lstring var_typeName_7296 = function_llvmTypeNameFromPLMname (extractedValue_propertyTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 190)) ;
        {
        ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_typeName_7296 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 191)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7837 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_7209.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7837->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7837->mAssociatedValue3 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7537 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7537.hasCurrentObject ()) {
          GALGAS_lstring var_typeName_7561 = function_llvmTypeNameFromPLMname (enumerator_7537.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 194)) ;
          {
          ioArgument_ioGraph.setter_noteNode (var_typeName_7561 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 195)) ;
          }
          enumerator_7537.gotoNextObject () ;
        }
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_lstring var_returnTypeName_7726 = function_llvmTypeNameFromPLMname (extractedValue_returnType, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 198)) ;
          {
          ioArgument_ioGraph.setter_addEdge (object->mProperty_mStaticListName, var_returnTypeName_7726 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 199)) ;
          }
        }
      }
      break ;
    }
    enumerator_7209.gotoNextObject () ;
  }
  cEnumerator_staticListValueListAST enumerator_7940 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_7940.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_7972 (enumerator_7940.current_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_7972.hasCurrentObject ()) {
      switch (enumerator_7972.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_8119 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7972.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_8119->mAssociatedValue0 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), object->mProperty_mStaticListName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 208)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_8374 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7972.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_8374->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_8243 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_8243.hasCurrentObject ()) {
            GALGAS_lstring var_typeName_8269 = function_llvmTypeNameFromPLMname (enumerator_8243.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 211)) ;
            {
            ioArgument_ioGraph.setter_noteNode (var_typeName_8269 COMMA_SOURCE_FILE ("declaration-static-array.galgas", 212)) ;
            }
            enumerator_8243.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7972.gotoNextObject () ;
    }
    enumerator_7940.gotoNextObject () ;
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
  result_result = GALGAS_string ("staticlist ").add_operation (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 228)) ;
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
                                                          GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                          GALGAS_subprogramInvocationGraph & /* ioArgument_ioSubprogramInvocationGraph */,
                                                          GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  GALGAS_propertyList var_propertyList_10212 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 259)) ;
  GALGAS_propertyMap var_propertyMap_10244 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 260)) ;
  GALGAS_stringset var_propertyNameSet_10278 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 261)) ;
  GALGAS_lstring var_plmElementTypeName_10308 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 262)) ;
  cEnumerator_staticListPropertyListAST enumerator_10499 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  GALGAS_uint index_10462 ((uint32_t) 0) ;
  while (enumerator_10499.hasCurrentObject ()) {
    switch (enumerator_10499.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_11063 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_10499.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_11063->mAssociatedValue0 ;
        GALGAS_PLMType var_propertyType_10606 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 267)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 267)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_10278.getter_hasKey (enumerator_10499.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 268)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_10499.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 269)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 269)) ;
        }else if (kBoolFalse == test_0) {
          var_propertyNameSet_10278.addAssign_operation (enumerator_10499.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 271))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 271)) ;
          var_propertyList_10212.addAssign_operation (enumerator_10499.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 272)), var_propertyType_10606  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 272)) ;
          {
          var_propertyMap_10244.setter_insertKey (enumerator_10499.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_10606, index_10462  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 273)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_12791 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_10499.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_12791->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_safe = extractPtr_12791->mAssociatedValue1 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_12791->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_12791->mAssociatedValue3 ;
        GALGAS_lstring var_routineMangledName_11231 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_10499.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 281)) ;
        GALGAS_routineTypedSignature var_signature_11415 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_11415, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 287)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 289)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 291)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_11464 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_11636 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), enumerator_10499.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 296)), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 297)), var_signature_11415, var_returnTypeProxy_11464, GALGAS_bool (true), GALGAS_bool (true), extractedValue_safe  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 293)) ;
        GALGAS_PLMType var_type_12215 = function_functionType (var_descriptor_11636, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 304)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_routineMangledName_11231.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 305)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 305)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 305)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_11231, var_type_12215, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 306)) ;
          }
        }
        GALGAS_PLMType var_propertyType_12494 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_routineMangledName_11231, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 312)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 312)) ;
        var_propertyList_10212.addAssign_operation (enumerator_10499.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 313)), var_propertyType_12494  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 313)) ;
        {
        var_propertyMap_10244.setter_insertKey (var_routineMangledName_11231, GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_indexed (var_propertyType_12494, index_10462  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 314)) ;
        }
      }
      break ;
    }
    enumerator_10499.gotoNextObject () ;
    index_10462.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 264)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_10212, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 321)) ;
  }
  GALGAS_PLMType var_type_12989 = GALGAS_PLMType::constructor_new (var_propertyMap_10244, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 325)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 326)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 327)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-array.galgas", 328)), function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 329)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 329)), GALGAS_typeKind::constructor_structure (var_propertyList_10212  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 330)), function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 331)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 331))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 323)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmElementTypeName_10308, var_type_12989, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 333)) ;
  }
  GALGAS_stringlist var_stringValueList_13575 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 339)) ;
  cEnumerator_staticListValueListAST enumerator_13606 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_13606.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_propertyList_10212.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 341)).objectCompare (enumerator_13606.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 341)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mStaticListName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 342)), var_propertyList_10212.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 343)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 343)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 343)).add_operation (enumerator_13606.current (HERE).getter_mExpressions (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 344)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 343)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 344)), fixItArray6  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 342)) ;
    }else if (kBoolFalse == test_5) {
      GALGAS_string var_staticValue_13859 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementListAST enumerator_13916 (enumerator_13606.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_13942 (var_propertyList_10212, kENUMERATION_UP) ;
      while (enumerator_13916.hasCurrentObject () && enumerator_13942.hasCurrentObject ()) {
        switch (enumerator_13916.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_15518 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_13916.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_15518->mAssociatedValue0 ;
            const enumGalgasBool test_7 = enumerator_13942.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 350)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_13916.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray8  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 351)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_semanticTemporariesStruct var_temporaries_14186 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 353)) ;
              GALGAS_instructionListIR var_instructionGenerationList_14254 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 354)) ;
              GALGAS_allocaList var_allocaList_14294 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-static-array.galgas", 355)) ;
              GALGAS_objectIR var_expressionResult_14885 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 357)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-static-array.galgas", 358)), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-static-array.galgas", 359)), enumerator_13942.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-static-array.galgas", 362)), var_temporaries_14186, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioContext.mProperty_mValuedObjectMap, var_allocaList_14294, var_instructionGenerationList_14254, var_expressionResult_14885, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 356)) ;
              GALGAS_objectIR var_result_14968 = function_checkAssignmentCompatibility (var_expressionResult_14885, enumerator_13942.current_mType (HERE), enumerator_13916.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 371)) ;
              GALGAS_bool test_9 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_14254.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 377)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              if (kBoolTrue != test_9.boolEnum ()) {
                test_9 = GALGAS_bool (kIsStrictSup, var_allocaList_14294.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 377)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
              }
              GALGAS_bool test_10 = test_9 ;
              if (kBoolTrue != test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_14968, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 377)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 377)) ;
              }
              const enumGalgasBool test_11 = test_10.boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_13916.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray12  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 378)) ;
              }
              var_staticValue_13859.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_13942.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)).add_operation (extensionGetter_llvmName (var_expressionResult_14885, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 381)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18413 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_13916.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_18413->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_18413->mAssociatedValue1 ;
            const enumGalgasBool test_13 = enumerator_13942.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 384)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 384)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (enumerator_13916.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray14  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 385)) ;
            }else if (kBoolFalse == test_13) {
              GALGAS_routineDescriptor var_descriptor_15800 ;
              enumerator_13942.current_mType (HERE).getter_kind (HERE).method_function (var_descriptor_15800, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 387)) ;
              GALGAS_lstring var_argumentSignature_15835 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 388)) ;
              GALGAS_lstring var_candidateRoutineLLVMName_16068 ;
              GALGAS_routineDescriptor var_routineDescriptor_16124 ;
              GALGAS_location var_functionDefinitionLocation_16170 ;
              extensionMethod_searchKey (ioArgument_ioContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), extractedValue_functionName, var_argumentSignature_15835, var_candidateRoutineLLVMName_16068, var_routineDescriptor_16124, var_functionDefinitionLocation_16170, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 389)) ;
              GALGAS_bool var_candidateIsPublic_16218 = var_routineDescriptor_16124.getter_isPublic (HERE) ;
              GALGAS_routineKind var_candidateRoutineKind_16284 = var_routineDescriptor_16124.getter_routineKind (HERE) ;
              GALGAS_mode var_candidateMode_16346 = extensionGetter_executionMode (var_routineDescriptor_16124.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 399)) ;
              GALGAS_routineTypedSignature var_candidateSignature_16429 = var_routineDescriptor_16124.getter_signature (HERE) ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_16500 = var_routineDescriptor_16124.getter_returnTypeProxy (HERE) ;
              const enumGalgasBool test_15 = var_candidateIsPublic_16218.operator_not (SOURCE_FILE ("declaration-static-array.galgas", 403)).boolEnum () ;
              if (kBoolTrue == test_15) {
                GALGAS_string var_declarationFile_16647 = var_functionDefinitionLocation_16170.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 404)) ;
                GALGAS_string var_invocationFile_16716 = extractedValue_functionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 405)) ;
                const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_invocationFile_16716.objectCompare (var_declarationFile_16647)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <C_FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 407)), GALGAS_string ("this function is not public"), fixItArray17  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 407)) ;
                }
              }
              const enumGalgasBool test_18 = var_candidateRoutineKind_16284.getter_isFunction (SOURCE_FILE ("declaration-static-array.galgas", 410)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 410)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 411)), GALGAS_string ("this routine is not a function"), fixItArray19  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 411)) ;
              }
              GALGAS_mode var_currentMode_17074 = extensionGetter_executionMode (var_descriptor_15800.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 413)) ;
              const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, var_currentMode_17074.objectCompare (var_candidateMode_16346)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <C_FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 415)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_16346, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (extensionGetter_string (var_currentMode_17074, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)), fixItArray21  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 415)) ;
              }
              GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_descriptor_15800.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 417)))) ;
              if (kBoolTrue == test_22.boolEnum ()) {
                test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16500.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 417)))) ;
              }
              const enumGalgasBool test_23 = test_22.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 418)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_16500.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 418)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 418)), fixItArray24  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 418)) ;
              }else if (kBoolFalse == test_23) {
                GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_descriptor_15800.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 419)))) ;
                if (kBoolTrue == test_25.boolEnum ()) {
                  test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16500.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 419)))) ;
                }
                const enumGalgasBool test_26 = test_25.boolEnum () ;
                if (kBoolTrue == test_26) {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 420)), GALGAS_string ("this function should return no object"), fixItArray27  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 420)) ;
                }
              }
              const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, var_descriptor_15800.getter_signature (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 422)).objectCompare (var_candidateSignature_16429.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 422)))).boolEnum () ;
              if (kBoolTrue == test_28) {
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-array.galgas", 423)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16429.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 424)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 424)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 424)).add_operation (var_descriptor_15800.getter_signature (HERE).getter_length (SOURCE_FILE ("declaration-static-array.galgas", 425)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 424)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 425)), fixItArray29  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 423)) ;
              }else if (kBoolFalse == test_28) {
                cEnumerator_routineTypedSignature enumerator_18035 (var_descriptor_15800.getter_signature (HERE), kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_18068 (var_candidateSignature_16429, kENUMERATION_UP) ;
                while (enumerator_18035.hasCurrentObject () && enumerator_18068.hasCurrentObject ()) {
                  const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_18035.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_18068.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                  if (kBoolTrue == test_30) {
                    TC_Array <C_FixItDescription> fixItArray31 ;
                    inCompiler->emitSemanticError (enumerator_18068.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 429)), GALGAS_string ("argument type should be $").add_operation (enumerator_18035.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 429)), fixItArray31  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 429)) ;
                  }
                  enumerator_18035.gotoNextObject () ;
                  enumerator_18068.gotoNextObject () ;
                }
              }
              var_staticValue_13859.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_13942.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 433)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 433)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_16068.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 433)) ;
            }
          }
          break ;
        }
        if (enumerator_13916.hasNextObject () && enumerator_13942.hasNextObject ()) {
          var_staticValue_13859.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 437)) ;
        }
        enumerator_13916.gotoNextObject () ;
        enumerator_13942.gotoNextObject () ;
      }
      var_staticValue_13859.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 439)) ;
      var_stringValueList_13575.addAssign_operation (var_staticValue_13859  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 440)) ;
    }
    enumerator_13606.gotoNextObject () ;
  }
  {
  ioArgument_ioStaticListValueMap.setter_insertKey (object->mProperty_mStaticListName, var_stringValueList_13575, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 443)) ;
  }
  GALGAS_propertyMap var_listTypePropertyMap_18753 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 445)) ;
  {
  var_listTypePropertyMap_18753.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), object->mProperty_mStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 447)), GALGAS_bool (true), GALGAS_propertyAccessKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_staticIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 449)), object->mProperty_mValueList.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 449)).getter_bigint (SOURCE_FILE ("declaration-static-array.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 446)) ;
  }
  GALGAS_PLMType var_elementType_19102 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), var_plmElementTypeName_10308, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 452)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 452)) ;
  GALGAS_PLMType var_arrayType_19201 = GALGAS_PLMType::constructor_new (var_listTypePropertyMap_18753, GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 455)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 456)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("declaration-static-array.galgas", 457)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-array.galgas", 458)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("declaration-static-array.galgas", 458)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 458)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-array.galgas", 458)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 458)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("declaration-static-array.galgas", 458)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 458)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 459)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 459)), GALGAS_typeKind::constructor_arrayType (var_elementType_19102, var_stringValueList_13575.getter_length (SOURCE_FILE ("declaration-static-array.galgas", 460)).getter_bigint (SOURCE_FILE ("declaration-static-array.galgas", 460))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 460)), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 461)).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 461))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 453)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 465)), var_arrayType_19201, ioArgument_ioContext.getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("declaration-static-array.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 464)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19894 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 470)) ;
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19894.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 473)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 473))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 471)) ;
  }
  {
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, object->mProperty_mStaticListName, GALGAS_objectIR::constructor_reference (var_staticListType_19894.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 477)), function_llvmNameForGlobalVariable (object->mProperty_mStaticListName.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 477))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 475)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (object->mProperty_mStaticListName, object->mProperty_mValueList  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 480))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 480)) ;
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
//                         Overriding extension method '@decoratedStaticList semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedStaticList_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStaticList * object = (const cPtr_decoratedStaticList *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStaticList) ;
  GALGAS_stringset var_invokedFunctionSet_21657 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 508)) ;
  cEnumerator_staticListValueListAST enumerator_21688 (object->mProperty_mValueList, kENUMERATION_UP) ;
  while (enumerator_21688.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementListAST enumerator_21740 (enumerator_21688.current (HERE).getter_mExpressions (HERE), kENUMERATION_UP) ;
    while (enumerator_21740.hasCurrentObject ()) {
      switch (enumerator_21740.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_21816 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21740.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_21816->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22117 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21740.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_22117->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_22117->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_21966 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 515)) ;
          var_invokedFunctionSet_21657.addAssign_operation (var_routineMangledName_21966.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 520))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 520)) ;
        }
        break ;
      }
      enumerator_21740.gotoNextObject () ;
    }
    enumerator_21688.gotoNextObject () ;
  }
  {
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21657, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 524)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (object->mProperty_mStaticListName, var_invokedFunctionSet_21657, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 525)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedStaticList_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStaticList.mSlotID,
                                         extensionMethod_decoratedStaticList_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedStaticList_semanticAnalysis (defineExtensionMethod_decoratedStaticList_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedTaskListDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTaskListDeclaration * object = (const cPtr_decoratedTaskListDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTaskListDeclaration) ;
  GALGAS_stringset var_prioritySet_8939 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 240)) ;
  cEnumerator_decoratedTaskList enumerator_8968 (object->mProperty_mTaskList, kENUMERATION_UP) ;
  while (enumerator_8968.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_8968.current (HERE), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 242)) ;
    GALGAS_string var_priorityString_9134 = enumerator_8968.current (HERE).getter_mPriority (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 247)) ;
    const enumGalgasBool test_0 = var_prioritySet_8939.getter_hasKey (var_priorityString_9134 COMMA_SOURCE_FILE ("task-declaration.galgas", 248)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_8968.current (HERE).getter_mPriority (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 249)), GALGAS_string ("duplicate priority"), fixItArray1  COMMA_SOURCE_FILE ("task-declaration.galgas", 249)) ;
    }
    var_prioritySet_8939.addAssign_operation (var_priorityString_9134  COMMA_SOURCE_FILE ("task-declaration.galgas", 251)) ;
    enumerator_8968.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTaskListDeclaration.mSlotID,
                                         extensionMethod_decoratedTaskListDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedTaskListDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'setupSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_setupSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
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
  GALGAS_lstring var_routineNameForInvocationGraph_13106 = function_setupNameForInvocationGraph (constinArgument_inSelfType.getter_plmOriginalTypeName (HERE), constinArgument_inPriority, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 344)) ;
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_13106.getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 346)).operator_not (SOURCE_FILE ("task-declaration.galgas", 346)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_13106, var_routineNameForInvocationGraph_13106, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 347)) ;
    }
  }
  GALGAS_universalValuedObjectMap var_universalMap_13458 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_13458, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_13458, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 352)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 354)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 355)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-declaration.galgas", 358)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("task-declaration.galgas", 358)) COMMA_SOURCE_FILE ("task-declaration.galgas", 358)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("task-declaration.galgas", 358)) COMMA_SOURCE_FILE ("task-declaration.galgas", 358)), var_routineNameForInvocationGraph_13106, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_13458, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 356)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_13458, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
  {
  extensionSetter_closeBranch (var_universalMap_13458, constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 370)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_13458, constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
  }
}


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
  case GALGAS_routineKind::kEnum_section:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 44)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 45)) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_bool test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        if (kBoolTrue != test_1.boolEnum ()) {
          test_1 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        }
        GALGAS_bool test_2 = test_1 ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_initMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        }
        GALGAS_bool test_3 = test_2 ;
        if (kBoolTrue != test_3.boolEnum ()) {
          test_3 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 46)))) ;
        }
        const enumGalgasBool test_4 = test_3.boolEnum () ;
        if (kBoolTrue == test_4) {
          result_outResult = GALGAS_calleeKindIR::constructor_sectionFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 47)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a section cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 49)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 49)), fixItArray5  COMMA_SOURCE_FILE ("logical-modes.galgas", 49)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 52)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        result_outResult = GALGAS_calleeKindIR::constructor_primitiveFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 53)) ;
      }else if (kBoolFalse == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a primitive cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 55)), fixItArray7  COMMA_SOURCE_FILE ("logical-modes.galgas", 55)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_userMode (SOURCE_FILE ("logical-modes.galgas", 58)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorUserMode (SOURCE_FILE ("logical-modes.galgas", 59)) ;
      }else if (kBoolFalse == test_8) {
        GALGAS_bool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_primitiveMode (SOURCE_FILE ("logical-modes.galgas", 60)))) ;
        if (kBoolTrue != test_9.boolEnum ()) {
          test_9 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (GALGAS_mode::constructor_guardMode (SOURCE_FILE ("logical-modes.galgas", 60)))) ;
        }
        const enumGalgasBool test_10 = test_9.boolEnum () ;
        if (kBoolTrue == test_10) {
          result_outResult = GALGAS_calleeKindIR::constructor_serviceFromProcessorPrivilegedMode (SOURCE_FILE ("logical-modes.galgas", 61)) ;
        }else if (kBoolFalse == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a service cannot be called from ").add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 63)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 63)), fixItArray11  COMMA_SOURCE_FILE ("logical-modes.galgas", 63)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      GALGAS_bool var_ok_2433 = GALGAS_bool (kIsEqual, constinArgument_inCallerMode.objectCompare (constinArgument_inCalleeMode)) ;
      const enumGalgasBool test_12 = var_ok_2433.operator_not (SOURCE_FILE ("logical-modes.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_12) {
        switch (constinArgument_inCallerMode.enumValue ()) {
        case GALGAS_mode::kNotBuilt:
          break ;
        case GALGAS_mode::kEnum_userMode:
          {
            var_ok_2433 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 70)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_sectionMode:
          {
            var_ok_2433 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 72)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_serviceMode:
          {
            GALGAS_bool test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 74)))) ;
            if (kBoolTrue != test_13.boolEnum ()) {
              test_13 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 74)))) ;
            }
            var_ok_2433 = test_13 ;
          }
          break ;
        case GALGAS_mode::kEnum_primitiveMode:
          {
            GALGAS_bool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 76)))) ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 76)))) ;
            }
            GALGAS_bool test_15 = test_14 ;
            if (kBoolTrue != test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 76)))) ;
            }
            var_ok_2433 = test_15 ;
          }
          break ;
        case GALGAS_mode::kEnum_guardMode:
          {
            GALGAS_bool test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("logical-modes.galgas", 78)))) ;
            if (kBoolTrue != test_16.boolEnum ()) {
              test_16 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_sectionMode (SOURCE_FILE ("logical-modes.galgas", 78)))) ;
            }
            GALGAS_bool test_17 = test_16 ;
            if (kBoolTrue != test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 78)))) ;
            }
            var_ok_2433 = test_17 ;
          }
          break ;
        case GALGAS_mode::kEnum_panicMode:
        case GALGAS_mode::kEnum_initMode:
          {
            var_ok_2433 = GALGAS_bool (kIsEqual, constinArgument_inCalleeMode.objectCompare (GALGAS_mode::constructor_anyMode (SOURCE_FILE ("logical-modes.galgas", 80)))) ;
          }
          break ;
        case GALGAS_mode::kEnum_bootMode:
          {
          }
          break ;
        case GALGAS_mode::kEnum_anyMode:
          {
          }
          break ;
        }
      }
      const enumGalgasBool test_18 = var_ok_2433.operator_not (SOURCE_FILE ("logical-modes.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a func ").add_operation (extensionGetter_string (constinArgument_inCalleeMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)).add_operation (GALGAS_string (" cannot be called from "), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)).add_operation (extensionGetter_string (constinArgument_inCallerMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 87)), fixItArray19  COMMA_SOURCE_FILE ("logical-modes.galgas", 86)) ;
      }
      result_outResult = GALGAS_calleeKindIR::constructor_function (SOURCE_FILE ("logical-modes.galgas", 89)) ;
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
//                           Overriding extension method '@panicAST enterInPrecedenceGraph'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_nodeName_2757 = GALGAS_lstring::constructor_new (GALGAS_string ("panic ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 70)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 70)).add_operation (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 70)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 69)) ;
  {
  const GALGAS_panicAST temp_2 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2757, temp_2, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 73)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                               extensionMethod_panicAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicAST_enterInPrecedenceGraph (defineExtensionMethod_panicAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@panicAST keyRepresentationForErrorSignaling'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  result_outRepresentation = GALGAS_string ("panic ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 79)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 79)).add_operation (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 79)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_panicAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                                           extensionGetter_panicAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_panicAST_keyRepresentationForErrorSignaling (defineExtensionGetter_panicAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@panicAST location'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_panicAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  result_outLocation = object->mProperty_mPriority.getter_location (HERE) ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_panicAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                 extensionGetter_panicAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_panicAST_location (defineExtensionGetter_panicAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@panicAST addExtension'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                   GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                   GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                   GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  const GALGAS_panicAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                     extensionMethod_panicAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicAST_addExtension (defineExtensionMethod_panicAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@panicAST enterInContext'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                     const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                     GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                     GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                     GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicAST * object = (const cPtr_panicAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicAST) ;
  const enumGalgasBool test_0 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 122)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 122)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    ioArgument_ioContext.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 124)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 124)) ;
    }
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("loop") ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_5745 = function_panicNameForInvocationGraph (temp_1, object->mProperty_mPriority, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 127)) ;
  {
  ioArgument_ioSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_5745, var_routineNameForInvocationGraph_5745, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 128)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedPanicRoutine::constructor_new (object->mProperty_mIsSetup, object->mProperty_mPanicInstructionList, object->mProperty_mEndOfPanicInstructions, object->mProperty_mPriority  COMMA_SOURCE_FILE ("panic.galgas", 130))  COMMA_SOURCE_FILE ("panic.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_panicAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_panicAST.mSlotID,
                                       extensionMethod_panicAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_panicAST_enterInContext (defineExtensionMethod_panicAST_enterInContext, NULL) ;

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
//                        Overriding extension method '@decoratedPanicRoutine semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedPanicRoutine_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedPanicRoutine * object = (const cPtr_decoratedPanicRoutine *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedPanicRoutine) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("setup") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("loop") ;
  }
  GALGAS_lstring var_routineNameForInvocationGraph_7273 = function_panicNameForInvocationGraph (temp_0, object->mProperty_mPriority, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 162)) ;
  GALGAS_universalValuedObjectMap var_universalMap_7395 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_7395, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 165)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_7395, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 166)) ;
  }
  GALGAS_lstring var_codeArg_7553 = GALGAS_lstring::constructor_new (GALGAS_string ("CODE"), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 168)) ;
  {
  extensionSetter_insertUsedLocalConstant (var_universalMap_7395, var_codeArg_7553, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 169)), var_codeArg_7553, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 169)) ;
  }
  GALGAS_lstring var_fileArg_7706 = GALGAS_lstring::constructor_new (GALGAS_string ("FILE"), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 170)) ;
  GALGAS_PLMType var_StaticStringType_7774 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 171)).getter_nowhere (SOURCE_FILE ("panic.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 171)).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 171)) ;
  {
  extensionSetter_insertUsedLocalConstant (var_universalMap_7395, var_fileArg_7706, var_StaticStringType_7774, var_fileArg_7706, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 172)) ;
  }
  GALGAS_lstring var_lineArg_7965 = GALGAS_lstring::constructor_new (GALGAS_string ("LINE"), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 173)) ;
  {
  extensionSetter_insertUsedLocalConstant (var_universalMap_7395, var_lineArg_7965, constinArgument_inContext.getter_mPanicLineType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 174)), var_lineArg_7965, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 174)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_8181 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("panic.galgas", 176)) ;
  GALGAS_allocaList var_initAllocaList_8215 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 177)) ;
  extensionMethod_analyzeRoutineInstructionList (object->mProperty_mPanicInstructionList, function_voidType (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 179)), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("panic.galgas", 180)), var_routineNameForInvocationGraph_7273, constinArgument_inContext, GALGAS_mode::constructor_panicMode (SOURCE_FILE ("panic.galgas", 183)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_7395, var_initAllocaList_8215, var_instructionGenerationList_8181, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 178)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_7395, var_instructionGenerationList_8181, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 191)) ;
  {
  extensionSetter_closeBranch (var_universalMap_7395, object->mProperty_mEndOfPanicInstructions, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 192)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_7395, object->mProperty_mEndOfPanicInstructions, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 193)) ;
  }
  const enumGalgasBool test_2 = object->mProperty_mIsSetup.boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 196)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 196)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicSetupInstructionListIR.addAssign_operation (var_instructionGenerationList_8181, object->mProperty_mPriority.getter_bigint (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 197)) ;
  }else if (kBoolFalse == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (object->mProperty_mPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("panic.galgas", 199)), object->mProperty_mPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 199)) ;
    }
    ioArgument_ioIntermediateCodeStruct.mProperty_mPanicLoopInstructionListIR.addAssign_operation (var_instructionGenerationList_8181, object->mProperty_mPriority.getter_bigint (HERE)  COMMA_SOURCE_FILE ("panic.galgas", 200)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedPanicRoutine_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedPanicRoutine.mSlotID,
                                         extensionMethod_decoratedPanicRoutine_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedPanicRoutine_semanticAnalysis (defineExtensionMethod_decoratedPanicRoutine_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generatePanicCode'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePanicCode (GALGAS_string & ioArgument_ioLLVMcode,
                                const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                const GALGAS_generationContext constinArgument_inGenerationContext,
                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                const GALGAS_instructionListSortedListIR constinArgument_inPanicSetupInstructionListIR,
                                const GALGAS_instructionListSortedListIR constinArgument_inPanicLoopInstructionListIR,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 225)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 226)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 226)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 227)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 228)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %in.FILE)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 229)).add_operation (GALGAS_string ("noreturn\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 230)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 231)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 232)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %in.FILE)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 233)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 233)) ;
  GALGAS_allocaList var_allocaList_11091 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("panic.galgas", 235)) ;
  var_allocaList_11091.addAssign_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 236)), constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 236)) ;
  var_allocaList_11091.addAssign_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 237)), constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 237)) ;
  var_allocaList_11091.addAssign_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 238)), function_literalStringType (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 238)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("panic.galgas", 238)) ;
  extensionMethod_generateAllocaList (var_allocaList_11091, ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 241)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 242)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 242)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 244)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 245)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 245)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8* %in.FILE, i8** ").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 247)) ;
  cEnumerator_instructionListSortedListIR enumerator_12100 (constinArgument_inPanicSetupInstructionListIR, kENUMERATION_UP) ;
  while (enumerator_12100.hasCurrentObject ()) {
    extensionMethod_instructionListLLVMCode (enumerator_12100.current_mInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 250)) ;
    enumerator_12100.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 257)) ;
  cEnumerator_instructionListSortedListIR enumerator_12366 (constinArgument_inPanicLoopInstructionListIR, kENUMERATION_UP) ;
  while (enumerator_12366.hasCurrentObject ()) {
    extensionMethod_instructionListLLVMCode (enumerator_12366.current_mInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 259)) ;
    enumerator_12366.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 266)) ;
  GALGAS_uint var_emptyStringIndex_12670 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_12670, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 268)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 270)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 270)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 270)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_12670, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 271)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 271)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 272)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 273)).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 274)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 275)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 278)) ;
  cEnumerator_stringset enumerator_13453 (constinArgument_inSourceFileAbsolutePathSet, kENUMERATION_UP) ;
  while (enumerator_13453.hasCurrentObject ()) {
    GALGAS_uint var_staticStringIndex_13616 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, enumerator_13453.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 282)).getter_stringByDeletingPathExtension (SOURCE_FILE ("panic.galgas", 282)), var_staticStringIndex_13616, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 281)) ;
    }
    GALGAS_string var_routineName_13642 = GALGAS_string ("@raise.panic.").add_operation (var_staticStringIndex_13616.getter_string (SOURCE_FILE ("panic.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 285)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (var_routineName_13642.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 286)).add_operation (enumerator_13453.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("panic.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 286)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 286)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (var_routineName_13642, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 287)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 287)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)).add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 288)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GALGAS_string (" %inCode)"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 289)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_13616, inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 290)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("panic.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 291)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 291)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 292)).add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 292)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 293)).add_operation (GALGAS_string (" %inCode, i8* %str.FILE)\n"), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 293)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 294)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("panic.galgas", 295)) ;
    enumerator_13453.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'panicRoutineName'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_panicRoutineName (C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("handle.panic") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicRoutineName = false ;
static GALGAS_string gOnceFunctionResult_panicRoutineName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_panicRoutineName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicRoutineName) {
    gOnceFunctionResult_panicRoutineName = onceFunction_panicRoutineName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicRoutineName = true ;
  }
  return gOnceFunctionResult_panicRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicRoutineName (void) {
  gOnceFunctionResult_panicRoutineName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicRoutineName (NULL,
                                                              releaseOnceFunctionResult_panicRoutineName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicRoutineName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicRoutineName (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_panicRoutineName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicRoutineName ("panicRoutineName",
                                                                  functionWithGenericHeader_panicRoutineName,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  0,
                                                                  functionArgs_panicRoutineName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'panicCodeForAssertViolation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForAssertViolation (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
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
  result_result = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
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
  result_result = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
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
  result_result = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
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
  result_result = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
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
  result_result = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
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
  result_result = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
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
  result_result = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
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
  result_result = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 23)) ;
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
  result_result = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
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
  result_result = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 27)) ;
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
  result_result = GALGAS_bigint ("12", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 31)) ;
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
  result_result = GALGAS_bigint ("13", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 35)) ;
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
  result_result = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 39)) ;
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
  result_result = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 41)) ;
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
  result_result = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 45)) ;
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

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_PLMType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)) ;
  GALGAS_bool var_first_10218 = GALGAS_bool (true) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 285)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)) ;
    var_first_10218 = GALGAS_bool (false) ;
  }
  cEnumerator_routineFormalArgumentListIR enumerator_10395 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_10395.hasCurrentObject ()) {
    const enumGalgasBool test_1 = var_first_10218.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_first_10218 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 293)) ;
    }
    switch (enumerator_10395.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10395.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 297)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 297)).add_operation (enumerator_10395.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 297)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10395.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)).add_operation (function_llvmNameForLocalVariable (enumerator_10395.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 299)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10395.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 301)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 301)).add_operation (function_llvmNameForLocalVariable (enumerator_10395.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 301)) ;
      }
      break ;
    }
    enumerator_10395.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 304)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateSectionDispatcher'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_12507 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_12431 ((uint32_t) 0) ;
  while (enumerator_12507.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_12507.current_mInvocationFromUserModeOnly (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_12567 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 350)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromUserMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
      var_s_12567 = var_s_12567.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_12507.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 352)) ;
      var_s_12567 = var_s_12567.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_12507.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 353)) ;
      var_s_12567 = var_s_12567.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_12431.getter_string (SOURCE_FILE ("declaration-svc.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 354)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_12567, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 355)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_13016 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 359)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromAnyMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 357)) ;
      var_s_13016 = var_s_13016.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_12507.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 361)) ;
      var_s_13016 = var_s_13016.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_12507.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 362)) ;
      var_s_13016 = var_s_13016.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_12431.getter_string (SOURCE_FILE ("declaration-svc.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 363)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_13016, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 364)) ;
    }
    enumerator_12507.gotoNextObject () ;
    index_12431.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 346)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 369)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 367)) ;
  cEnumerator_sectionIRlist enumerator_13694 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_13618 ((uint32_t) 0) ;
  while (enumerator_13694.hasCurrentObject ()) {
    GALGAS_string var_s_13713 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 374)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 372)) ;
    var_s_13713 = var_s_13713.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_13694.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 376)) ;
    var_s_13713 = var_s_13713.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_13694.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 377)) ;
    var_s_13713 = var_s_13713.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_13618.getter_string (SOURCE_FILE ("declaration-svc.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 378)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_13713, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 379)) ;
    enumerator_13694.gotoNextObject () ;
    index_13618.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 371)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 381)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 384)).add_operation (constinArgument_inTargetParameters.getter_mSectionHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 382)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 386)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 387)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'generatePrimitiveAndServiceDispatcher'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 402)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 400)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_15059 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_15014 ((uint32_t) 0) ;
  while (enumerator_15059.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_15059.current_mReturnValue (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_15107 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 409)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryWithReturnValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 407)) ;
      var_s_15107 = var_s_15107.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_15059.current_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 411)) ;
      var_s_15107 = var_s_15107.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15014.getter_string (SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15107, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 413)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_s_15443 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 417)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryNoReturnedValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_s_15443 = var_s_15443.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_15059.current_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 419)) ;
      var_s_15443 = var_s_15443.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15014.getter_string (SOURCE_FILE ("declaration-svc.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 420)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15443, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 421)) ;
    }
    enumerator_15059.gotoNextObject () ;
    index_15014.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 405)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 424)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_15975 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_15933 ((uint32_t) 0) ;
  while (enumerator_15975.hasCurrentObject ()) {
    GALGAS_string var_s_15994 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 431)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 429)) ;
    var_s_15994 = var_s_15994.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_15975.current_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
    var_s_15994 = var_s_15994.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15933.getter_string (SOURCE_FILE ("declaration-svc.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 434)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15994, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 435)) ;
    enumerator_15975.gotoNextObject () ;
    index_15933.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 437)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@bootAST enterInPrecedenceGraph'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bootAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bootAST * object = (const cPtr_bootAST *) inObject ;
  macroValidSharedObject (object, cPtr_bootAST) ;
  GALGAS_lstring var_nodeName_2365 = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-boot.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 52)), object->mProperty_mDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-boot.galgas", 52)) ;
  {
  const GALGAS_bootAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2365, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 53)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2365, object->mProperty_mDriverName COMMA_SOURCE_FILE ("declaration-boot.galgas", 54)) ;
  }
  cEnumerator_lstringlist enumerator_2561 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_2561.hasCurrentObject ()) {
    GALGAS_lstring var_dependanceNodeName_2590 = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (enumerator_2561.current_mValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 56)), enumerator_2561.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-boot.galgas", 56)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_2365, var_dependanceNodeName_2590 COMMA_SOURCE_FILE ("declaration-boot.galgas", 57)) ;
    }
    enumerator_2561.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bootAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_bootAST.mSlotID,
                                               extensionMethod_bootAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bootAST_enterInPrecedenceGraph (defineExtensionMethod_bootAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@bootAST keyRepresentationForErrorSignaling'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_bootAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_bootAST * object = (const cPtr_bootAST *) inObject ;
  macroValidSharedObject (object, cPtr_bootAST) ;
  result_outRepresentation = GALGAS_string ("boot ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-boot.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 64)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_bootAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_bootAST.mSlotID,
                                                           extensionGetter_bootAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_bootAST_keyRepresentationForErrorSignaling (defineExtensionGetter_bootAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@bootAST location'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_bootAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_bootAST * object = (const cPtr_bootAST *) inObject ;
  macroValidSharedObject (object, cPtr_bootAST) ;
  result_outLocation = object->mProperty_mBootLocation ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_bootAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_bootAST.mSlotID,
                                 extensionGetter_bootAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_bootAST_location (defineExtensionGetter_bootAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@bootAST addExtension'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bootAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                  GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bootAST * object = (const cPtr_bootAST *) inObject ;
  macroValidSharedObject (object, cPtr_bootAST) ;
  const GALGAS_bootAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bootAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_bootAST.mSlotID,
                                     extensionMethod_bootAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bootAST_addExtension (defineExtensionMethod_bootAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@bootAST enterInContext'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_bootAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                    GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bootAST * object = (const cPtr_bootAST *) inObject ;
  macroValidSharedObject (object, cPtr_bootAST) ;
  GALGAS_lstring var_routineNameForInvocationGraph_4713 = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-boot.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 98)), object->mProperty_mDriverName.getter_location (SOURCE_FILE ("declaration-boot.galgas", 98))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 98)) ;
  {
  ioArgument_ioSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4713, var_routineNameForInvocationGraph_4713, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 99)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedBootRoutine::constructor_new (object->mProperty_mDriverName, object->mProperty_mDriverDependanceList, object->mProperty_mBootLocation, object->mProperty_mInstructionList, object->mProperty_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 101))  COMMA_SOURCE_FILE ("declaration-boot.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_bootAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_bootAST.mSlotID,
                                       extensionMethod_bootAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bootAST_enterInContext (defineExtensionMethod_bootAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@decoratedBootRoutine semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedBootRoutine_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedBootRoutine * object = (const cPtr_decoratedBootRoutine *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedBootRoutine) ;
  GALGAS_lstring var_routineNameForInvocationGraph_6065 = GALGAS_lstring::constructor_new (GALGAS_string ("boot ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-boot.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 130)), object->mProperty_mDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-boot.galgas", 130)) ;
  GALGAS_universalValuedObjectMap var_universalMap_6165 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_6165, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 133)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_6165, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 134)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_6347 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 136)) ;
  GALGAS_allocaList var_bootAllocaList_6381 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-boot.galgas", 137)) ;
  extensionMethod_analyzeRoutineInstructionList (object->mProperty_mInstructionList, function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 139)), GALGAS_routineAttributes::constructor_boot (SOURCE_FILE ("declaration-boot.galgas", 140)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("declaration-boot.galgas", 140)) COMMA_SOURCE_FILE ("declaration-boot.galgas", 140)), var_routineNameForInvocationGraph_6065, constinArgument_inContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-boot.galgas", 143)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6165, var_bootAllocaList_6381, var_instructionGenerationList_6347, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 138)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_6165, var_instructionGenerationList_6347, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 151)) ;
  {
  extensionSetter_closeBranch (var_universalMap_6165, object->mProperty_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 152)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_6165, object->mProperty_mEndOfBootLocation, inCompiler COMMA_SOURCE_FILE ("declaration-boot.galgas", 153)) ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mBootList.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE), var_bootAllocaList_6381, var_instructionGenerationList_6347, object->mProperty_mEndOfBootLocation  COMMA_SOURCE_FILE ("declaration-boot.galgas", 155)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedBootRoutine_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedBootRoutine.mSlotID,
                                         extensionMethod_decoratedBootRoutine_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedBootRoutine_semanticAnalysis (defineExtensionMethod_decoratedBootRoutine_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@initAST enterInPrecedenceGraph'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_initAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_initAST * object = (const cPtr_initAST *) inObject ;
  macroValidSharedObject (object, cPtr_initAST) ;
  GALGAS_lstring var_nodeName_2493 = GALGAS_lstring::constructor_new (GALGAS_string ("init ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-init.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 52)), object->mProperty_mInitLocation  COMMA_SOURCE_FILE ("declaration-init.galgas", 52)) ;
  {
  const GALGAS_initAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_2493, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 53)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_2493, object->mProperty_mDriverName COMMA_SOURCE_FILE ("declaration-init.galgas", 54)) ;
  }
  cEnumerator_lstringlist enumerator_2682 (object->mProperty_mDriverDependanceList, kENUMERATION_UP) ;
  while (enumerator_2682.hasCurrentObject ()) {
    GALGAS_lstring var_dependanceNodeName_2711 = GALGAS_lstring::constructor_new (GALGAS_string ("init ").add_operation (enumerator_2682.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-init.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 56)), enumerator_2682.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-init.galgas", 56))  COMMA_SOURCE_FILE ("declaration-init.galgas", 56)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_2493, var_dependanceNodeName_2711 COMMA_SOURCE_FILE ("declaration-init.galgas", 57)) ;
    }
    enumerator_2682.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_initAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_initAST.mSlotID,
                                               extensionMethod_initAST_enterInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_initAST_enterInPrecedenceGraph (defineExtensionMethod_initAST_enterInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@initAST keyRepresentationForErrorSignaling'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_initAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_initAST * object = (const cPtr_initAST *) inObject ;
  macroValidSharedObject (object, cPtr_initAST) ;
  result_outRepresentation = GALGAS_string ("init ").add_operation (object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-init.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 64)) ;
//---
  return result_outRepresentation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_initAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_initAST.mSlotID,
                                                           extensionGetter_initAST_keyRepresentationForErrorSignaling) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_initAST_keyRepresentationForErrorSignaling (defineExtensionGetter_initAST_keyRepresentationForErrorSignaling, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@initAST location'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_initAST_location (const cPtr_abstractDeclarationAST * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_initAST * object = (const cPtr_initAST *) inObject ;
  macroValidSharedObject (object, cPtr_initAST) ;
  result_outLocation = object->mProperty_mInitLocation ;
//---
  return result_outLocation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_initAST_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_initAST.mSlotID,
                                 extensionGetter_initAST_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_initAST_location (defineExtensionGetter_initAST_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@initAST addExtension'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_initAST_addExtension (const cPtr_abstractDeclarationAST * inObject,
                                                  GALGAS_extensionDeclarationListAST & /* ioArgument_ioExtensionDeclarationListAST */,
                                                  GALGAS_extendStaticArrayDeclarationAST & /* ioArgument_ioExtendStaticArrayDeclarationAST */,
                                                  GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_initAST * object = (const cPtr_initAST *) inObject ;
  macroValidSharedObject (object, cPtr_initAST) ;
  const GALGAS_initAST temp_0 = object ;
  outArgument_outNewDeclaration = temp_0 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_initAST_addExtension (void) {
  enterExtensionMethod_addExtension (kTypeDescriptor_GALGAS_initAST.mSlotID,
                                     extensionMethod_initAST_addExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_initAST_addExtension (defineExtensionMethod_initAST_addExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@initAST enterInContext'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_initAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                    const GALGAS_functionDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                    GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                    GALGAS_subprogramInvocationGraph & ioArgument_ioSubprogramInvocationGraph,
                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_initAST * object = (const cPtr_initAST *) inObject ;
  macroValidSharedObject (object, cPtr_initAST) ;
  GALGAS_lstring var_routineNameForInvocationGraph_4788 = function_initNameForInvocationGraph (function_llvmDriverNameFromName (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 97)).getter_string (SOURCE_FILE ("declaration-init.galgas", 97)), object->mProperty_mInitLocation, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 97)) ;
  {
  ioArgument_ioSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_4788, var_routineNameForInvocationGraph_4788, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 98)) ;
  }
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedInitRoutine::constructor_new (object->mProperty_mDriverName, object->mProperty_mDriverDependanceList, object->mProperty_mInstructionList, object->mProperty_mEndOfInitLocation  COMMA_SOURCE_FILE ("declaration-init.galgas", 100))  COMMA_SOURCE_FILE ("declaration-init.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_initAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_initAST.mSlotID,
                                       extensionMethod_initAST_enterInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_initAST_enterInContext (defineExtensionMethod_initAST_enterInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@decoratedInitRoutine semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedInitRoutine_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedInitRoutine * object = (const cPtr_decoratedInitRoutine *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedInitRoutine) ;
  GALGAS_PLMType var_selfType_6100 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_llvmDriverNameFromName (object->mProperty_mDriverName, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 126)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 126)) ;
  GALGAS_allocaList var_allocaList_6497 ;
  GALGAS_instructionListIR var_instructionGenerationList_6551 ;
  {
  routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_selfType_6100, object->mProperty_mDriverName.getter_location (HERE), object->mProperty_mInstructionList, object->mProperty_mEndOfInitLocation, var_allocaList_6497, var_instructionGenerationList_6551, inCompiler  COMMA_SOURCE_FILE ("declaration-init.galgas", 127)) ;
  }
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (object->mProperty_mDriverName.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-init.galgas", 139)) ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInitList.addAssign_operation (var_selfType_6100, object->mProperty_mDriverName.getter_string (SOURCE_FILE ("declaration-init.galgas", 143)), var_allocaList_6497, var_instructionGenerationList_6551  COMMA_SOURCE_FILE ("declaration-init.galgas", 141)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedInitRoutine_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedInitRoutine.mSlotID,
                                         extensionMethod_decoratedInitRoutine_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedInitRoutine_semanticAnalysis (defineExtensionMethod_decoratedInitRoutine_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'initSemanticAnalysis'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initSemanticAnalysis (const GALGAS_semanticContext constinArgument_inContext,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                   const GALGAS_PLMType constinArgument_inSelfType,
                                   const GALGAS_location constinArgument_inLocation,
                                   const GALGAS_instructionListAST constinArgument_inInstructionListAST,
                                   const GALGAS_location constinArgument_inEndOfInitDeclaration,
                                   GALGAS_allocaList & outArgument_outAllocaList,
                                   GALGAS_instructionListIR & outArgument_outInstructionGenerationList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAllocaList.drop () ; // Release 'out' argument
  outArgument_outInstructionGenerationList.drop () ; // Release 'out' argument
  GALGAS_lstring var_routineNameForInvocationGraph_7461 = function_initNameForInvocationGraph (constinArgument_inSelfType.getter_plmOriginalTypeName (HERE), constinArgument_inLocation, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 162)) ;
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_7461.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-init.galgas", 164)).operator_not (SOURCE_FILE ("declaration-init.galgas", 164)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_7461, var_routineNameForInvocationGraph_7461, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 165)) ;
    }
  }
  GALGAS_universalValuedObjectMap var_universalMap_7812 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_7812, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 169)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_7812, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 170)) ;
  }
  outArgument_outInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 172)) ;
  outArgument_outAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-init.galgas", 173)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inInstructionListAST, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-init.galgas", 176)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-init.galgas", 176)) COMMA_SOURCE_FILE ("declaration-init.galgas", 176)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("declaration-init.galgas", 176)) COMMA_SOURCE_FILE ("declaration-init.galgas", 176)), var_routineNameForInvocationGraph_7461, constinArgument_inContext, GALGAS_mode::constructor_initMode (SOURCE_FILE ("declaration-init.galgas", 179)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_7812, outArgument_outAllocaList, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 174)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_7812, outArgument_outInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 187)) ;
  {
  extensionSetter_closeBranch (var_universalMap_7812, constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 188)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_7812, constinArgument_inEndOfInitDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 189)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@decoratedFunction semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedFunction_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedFunction * object = (const cPtr_decoratedFunction *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedFunction) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mSelfTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 370)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mSelfTypeName.getter_nowhere (SOURCE_FILE ("declaration-func.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 372)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-func.galgas", 372)) ;
  }
  GALGAS_PLMType var_receiverType_13115 = temp_0 ;
  GALGAS_routineAttributes var_attributes_13304 = GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-func.galgas", 374)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-func.galgas", 374)) COMMA_SOURCE_FILE ("declaration-func.galgas", 374)).operator_or (GALGAS_routineAttributes::constructor_controlRegisterReadable (SOURCE_FILE ("declaration-func.galgas", 374)) COMMA_SOURCE_FILE ("declaration-func.galgas", 374)) ;
  const enumGalgasBool test_2 = object->mProperty_mIsSafe.operator_not (SOURCE_FILE ("declaration-func.galgas", 375)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_attributes_13304 = var_attributes_13304.operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-func.galgas", 376)) COMMA_SOURCE_FILE ("declaration-func.galgas", 376)) ;
  }
  {
  routine_routineSemanticAnalysis (var_receiverType_13115, GALGAS_routineKind::constructor_function (object->mProperty_mMode  COMMA_SOURCE_FILE ("declaration-func.galgas", 380)), object->mProperty_mMode, object->mProperty_mFunctionName, object->mProperty_mFunctionFormalArgumentList, object->mProperty_mFunctionReturnTypeName, object->mProperty_mFunctionInstructionList, object->mProperty_mEndOfFunctionDeclaration, var_attributes_13304, object->mProperty_mWarnIfUnused, object->mProperty_mIsGlobalProcedure, constinArgument_inSemanticContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-func.galgas", 378)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedFunction_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedFunction.mSlotID,
                                         extensionMethod_decoratedFunction_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedFunction_semanticAnalysis (defineExtensionMethod_decoratedFunction_semanticAnalysis, NULL) ;

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
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2539 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2539.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2568 = extensionGetter_routineSignature (enumerator_2539.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2539.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 70)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), enumerator_2539.current (HERE).getter_mName (HERE), var_argumentSignature_2568, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 71)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 71)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2539.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 72)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 72)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_3012 ;
      GALGAS_location var_routineLocation_3051 ;
      GALGAS_lstring joker_2961 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.getter_mRoutineMapForContext (HERE), GALGAS_string::makeEmptyString (), enumerator_2539.current (HERE).getter_mName (HERE), var_argumentSignature_2568, joker_2961, var_routineDescriptor_3012, var_routineLocation_3051, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 74)) ;
      GALGAS_bool var_isExported_3080 = var_routineDescriptor_3012.getter_exported (HERE) ;
      GALGAS_mode var_mode_3124 = extensionGetter_executionMode (var_routineDescriptor_3012.getter_routineKind (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 83)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_3124.objectCompare (enumerator_2539.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_3051, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2539.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
      }
      GALGAS_bool test_4 = enumerator_2539.current (HERE).getter_mIsExported (HERE) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_isExported_3080.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 89)) ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 92))) ;
        inCompiler->emitSemanticError (var_routineLocation_3051, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 91)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 91)), fixItArray6  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 90)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_7 = var_isExported_3080 ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = enumerator_2539.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 93)) ;
        }
        const enumGalgasBool test_8 = test_7.boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineLocation_3051, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 95)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 95)), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 94)) ;
        }
      }
    }
    enumerator_2539.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@decoratedISRDeclarations semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_decoratedISRDeclarations_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedISRDeclarations * object = (const cPtr_decoratedISRDeclarations *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedISRDeclarations) ;
  cEnumerator_isrDeclarationListAST enumerator_3181 (object->mProperty_mISRDeclarationList, kENUMERATION_UP) ;
  while (enumerator_3181.hasCurrentObject ()) {
    GALGAS_lstring var_routineNameForInvocationGraph_3246 = function_interruptNameForInvocationGraph (enumerator_3181.current (HERE).getter_mISRName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 79)) ;
    const enumGalgasBool test_0 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineNameForInvocationGraph_3246.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-isr.galgas", 80)).operator_not (SOURCE_FILE ("declaration-isr.galgas", 80)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineNameForInvocationGraph_3246, var_routineNameForInvocationGraph_3246, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 81)) ;
      }
    }
    GALGAS_universalValuedObjectMap var_universalMap_3598 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
    {
    extensionSetter_openOverrideForSelectBlock (var_universalMap_3598, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 88)) ;
    }
    {
    extensionSetter_openBranch (var_universalMap_3598, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 89)) ;
    }
    GALGAS_PLMType var_selfType_3736 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_llvmDriverNameFromName (enumerator_3181.current (HERE).getter_mModuleName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
    GALGAS_allocaList var_allocaList_3901 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 93)) ;
    GALGAS_instructionListIR var_instructionGenerationList_3955 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 94)) ;
    extensionMethod_analyzeRoutineInstructionList (enumerator_3181.current (HERE).getter_mISRInstructionList (HERE), var_selfType_3736, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-isr.galgas", 97)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-isr.galgas", 97)) COMMA_SOURCE_FILE ("declaration-isr.galgas", 97)), var_routineNameForInvocationGraph_3246, constinArgument_inContext, enumerator_3181.current (HERE).getter_mMode (HERE), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3598, var_allocaList_3901, var_instructionGenerationList_3955, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
    extensionMethod_checkLocalVariableFinalState (var_universalMap_3598, var_instructionGenerationList_3955, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 108)) ;
    {
    extensionSetter_closeBranch (var_universalMap_3598, enumerator_3181.current (HERE).getter_mEndOfISRDeclaration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 109)) ;
    }
    {
    extensionSetter_closeOverride (var_universalMap_3598, enumerator_3181.current (HERE).getter_mEndOfISRDeclaration (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 110)) ;
    }
    GALGAS_interruptionPanicCode joker_4733 ; // Joker input parameter
    constinArgument_inContext.getter_mAvailableInterruptMap (HERE).method_searchKey (enumerator_3181.current (HERE).getter_mISRName (HERE), joker_4733, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 112)) ;
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (enumerator_3181.current (HERE).getter_mISRName (HERE), var_selfType_3736, enumerator_3181.current (HERE).getter_mModuleName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 116)), var_allocaList_3901, var_instructionGenerationList_3955, enumerator_3181.current (HERE).getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 113)) ;
    }
    enumerator_3181.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_decoratedISRDeclarations_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedISRDeclarations.mSlotID,
                                         extensionMethod_decoratedISRDeclarations_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decoratedISRDeclarations_semanticAnalysis (defineExtensionMethod_decoratedISRDeclarations_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'guardSemanticAnalysis'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guardSemanticAnalysis (const GALGAS_PLMType constinArgument_inSelfType,
                                    const GALGAS_lstring constinArgument_inRoutineName,
                                    const GALGAS_routineFormalArgumentListAST constinArgument_inRoutineFormalArgumentList,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 165)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = function_llvmTypeStringFromPLMname (constinArgument_inSelfType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 165)) ;
  }
  GALGAS_lstring var_guardMangledName_6185 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 164)) ;
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_guardMangledName_6185.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 170)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 170)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_guardMangledName_6185, constinArgument_inRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 171)) ;
    }
  }
  GALGAS_universalValuedObjectMap var_universalMap_6666 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_6666, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 178)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_6666, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_6818 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 180)) ;
  GALGAS_guardKindGenerationIR var_convenienceGuardGenerationIR_6877 ;
  GALGAS_allocaList var_allocaList_6902 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 182)) ;
  GALGAS_instructionListIR var_instructionGenerationList_6954 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 183)) ;
  switch (constinArgument_inGuardKind.enumValue ()) {
  case GALGAS_guardKind::kNotBuilt:
    break ;
  case GALGAS_guardKind::kEnum_baseGuard:
    {
      GALGAS_lstring var_resultVarName_7057 = GALGAS_lstring::constructor_new (function_acceptVariablePLMName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 187)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 187)) ;
      GALGAS_PLMType var_resultType_7142 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 188)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 188)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 188)) ;
      var_allocaList_6902.addAssign_operation (function_llvmNameForLocalVariable (var_resultVarName_7057.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 189)), var_resultType_7142, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 189)) ;
      {
      extensionSetter_insertLocalVariable (var_universalMap_6666, var_resultVarName_7057, var_resultType_7142, var_resultVarName_7057, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("declaration-guard.galgas", 194)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 190)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_6666, var_formalArguments_6818, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      }
      var_convenienceGuardGenerationIR_6877 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 204)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 208)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-guard.galgas", 208)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 208)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-guard.galgas", 208)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 208)), var_guardMangledName_6185, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 211)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6666, var_allocaList_6902, var_instructionGenerationList_6954, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 206)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9439 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9439->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_6666, var_formalArguments_6818, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 220)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 229)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-guard.galgas", 229)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 229)), var_guardMangledName_6185, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 232)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6666, var_convenienceGuardGenerationIR_6877, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 227)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-guard.galgas", 241)).operator_or (GALGAS_routineAttributes::constructor_directPropertyAccess (SOURCE_FILE ("declaration-guard.galgas", 241)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 241)).operator_or (GALGAS_routineAttributes::constructor_panicAllowed (SOURCE_FILE ("declaration-guard.galgas", 241)) COMMA_SOURCE_FILE ("declaration-guard.galgas", 241)), var_guardMangledName_6185, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 244)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_6666, var_allocaList_6902, var_instructionGenerationList_6954, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 239)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_6666, var_instructionGenerationList_6954, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
  {
  extensionSetter_closeBranch (var_universalMap_6666, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 254)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_6666, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 255)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6185, var_formalArguments_6818, constinArgument_inSelfType, var_convenienceGuardGenerationIR_6877, var_allocaList_6902, var_instructionGenerationList_6954, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 257)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@standAloneProcedureCallInstructionAST baseGuardAnalyze'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standAloneProcedureCallInstructionAST_baseGuardAnalyze (const cPtr_callInstructionAST * inObject,
                                                                                    const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                                    const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                                    const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                    const GALGAS_mode /* constinArgument_inMode */,
                                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                    GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                    GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                                    GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_mSandAloneRoutineName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 294)), GALGAS_string ("NOT HANDLED YET"), fixItArray0  COMMA_SOURCE_FILE ("declaration-guard.galgas", 294)) ;
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
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_allocaList var_baseGuardAllocaList_12053 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 310)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList_12114 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 311)) ;
  GALGAS_objectIR var_currentObject_12245 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-guard.galgas", 315)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("declaration-guard.galgas", 316)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("declaration-guard.galgas", 316)) ;
      var_currentObject_12245.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentObject_12245 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 318))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 318)) ;
    }
  }else if (kBoolFalse == test_0) {
    extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, object->mProperty_mIdentifier, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries.getter_mInitializedDriverSet (HERE), var_currentObject_12245, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 321)) ;
  }
  GALGAS_location var_currentErrorLocation_12711 = object->mProperty_mIdentifier.getter_location (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_12777 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_12831 ;
  {
  var_accessList_12777.setter_popLast (var_lastAccess_12831, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 331)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_12887 (var_accessList_12777, kENUMERATION_UP) ;
  while (enumerator_12887.hasCurrentObject ()) {
    GALGAS_PLMType var_currentType_12910 = extensionGetter_type (var_currentObject_12245, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 334)) ;
    switch (enumerator_12887.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13854 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_12887.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_13854->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_13030 = var_currentType_12910.getter_propertyMap (HERE) ;
        GALGAS_propertyAccessKind var_propertyAccess_13122 ;
        GALGAS_bool joker_13101 ; // Joker input parameter
        var_propertyMap_13030.method_searchKey (extractedValue_propertyName, joker_13101, var_propertyAccess_13122, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 338)) ;
        switch (var_propertyAccess_13122.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 341)), GALGAS_string ("a method cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("declaration-guard.galgas", 341)) ;
            var_currentObject_12245.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 343)), GALGAS_string ("a constant property not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("declaration-guard.galgas", 343)) ;
            var_currentObject_12245.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_13844 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_13122.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_13844->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_13844->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_13530 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_13530, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 345)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (var_baseGuardInstructionGenerationList_12114, var_currentType_12910, extensionGetter_llvmName (var_currentObject_12245, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 348)), var_property_5F_llvmName_13530, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 346)) ;
            }
            var_currentObject_12245 = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_13530  COMMA_SOURCE_FILE ("declaration-guard.galgas", 353)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13997 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_12887.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_13997->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_13997->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray5  COMMA_SOURCE_FILE ("declaration-guard.galgas", 356)) ;
        var_currentObject_12245.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_12887.gotoNextObject () ;
  }
  switch (var_lastAccess_12831.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17312 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_12831.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_17312->mAssociatedValue0 ;
      GALGAS_PLMType var_currentType_14115 = extensionGetter_type (var_currentObject_12245, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 362)) ;
      GALGAS_propertyMap var_propertyMap_14171 = var_currentType_14115.getter_propertyMap (HERE) ;
      GALGAS_lstring var_key_14209 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 364)) ;
      GALGAS_propertyAccessKind var_propertyAccess_14343 ;
      GALGAS_bool joker_14302 ; // Joker input parameter
      var_propertyMap_14171.method_searchKey (var_key_14209, joker_14302, var_propertyAccess_14343, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 365)) ;
      switch (var_propertyAccess_14343.enumValue ()) {
      case GALGAS_propertyAccessKind::kNotBuilt:
        break ;
      case GALGAS_propertyAccessKind::kEnum_constantProperty:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 368)), GALGAS_string ("a constant cannot be used as method"), fixItArray6  COMMA_SOURCE_FILE ("declaration-guard.galgas", 368)) ;
          outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_indexed:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 370)), GALGAS_string ("a property cannot be used as method"), fixItArray7  COMMA_SOURCE_FILE ("declaration-guard.galgas", 370)) ;
          outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
        {
          const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_17304 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_14343.unsafePointer ()) ;
          const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_17304->mAssociatedValue0 ;
          GALGAS_procCallEffectiveParameterListIR temp_8 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 375)) ;
          temp_8.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 374)), GALGAS_objectIR::constructor_reference (var_currentType_14115, extensionGetter_llvmName (var_currentObject_12245, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 375))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 375))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 375)) ;
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14794 = temp_8 ;
          GALGAS_routineTypedSignature var_formalSignature_15095 = extractedValue_routineDescriptor.getter_signature (HERE) ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, extractedValue_routineDescriptor.getter_returnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 383)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("declaration-guard.galgas", 384)), GALGAS_string ("not a procedure (returns a value)"), fixItArray10  COMMA_SOURCE_FILE ("declaration-guard.galgas", 384)) ;
            outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_9) {
            {
            routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_15095, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, var_baseGuardAllocaList_12053, var_baseGuardInstructionGenerationList_12114, var_effectiveParameterListIR_14794, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 394)) ;
            }
            GALGAS_lstring var_routineMangledName_16353 = function_routineMangledNameFromCall (function_llvmTypeStringFromPLMname (var_currentType_14115.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 411)), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 411)) ;
            {
            ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_16353 COMMA_SOURCE_FILE ("declaration-guard.galgas", 422)) ;
            }
            outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList_12053, var_baseGuardInstructionGenerationList_12114, var_routineMangledName_16353.getter_string (HERE), var_effectiveParameterListIR_14794  COMMA_SOURCE_FILE ("declaration-guard.galgas", 424)) ;
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_17452 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_12831.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_17452->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray11  COMMA_SOURCE_FILE ("declaration-guard.galgas", 433)) ;
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
    GALGAS_lstring var_typeName_2184 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 52)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2184 COMMA_SOURCE_FILE ("expression-convert.galgas", 53)) ;
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
    GALGAS_lstring var_typeName_2860 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 64)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2860 COMMA_SOURCE_FILE ("expression-convert.galgas", 65)) ;
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
                                                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4646 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4646, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 90)) ;
  GALGAS_objectIR var_expressionResult_4792 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4646, var_expressionResult_4792, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 104)) ;
  }
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("expression-convert.galgas", 110)).operator_not (SOURCE_FILE ("expression-convert.galgas", 110)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 111)), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 111)) ;
  }
  GALGAS_PLMType temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
  }
  GALGAS_PLMType var_resultType_5011 = temp_2 ;
  const enumGalgasBool test_4 = var_resultType_5011.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 119)).operator_not (SOURCE_FILE ("expression-convert.galgas", 119)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 120)), GALGAS_string ("this type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_4) {
    const enumGalgasBool test_6 = extensionGetter_type (var_expressionResult_4792, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 121)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 121)).operator_not (SOURCE_FILE ("expression-convert.galgas", 121)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray7  COMMA_SOURCE_FILE ("expression-convert.galgas", 122)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_6) {
      GALGAS_bigint var_minSource_5492 ;
      GALGAS_bigint var_maxSource_5511 ;
      GALGAS_bool joker_5513_2 ; // Joker input parameter
      GALGAS_uint joker_5513_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4792, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)).getter_kind (HERE).method_integer (var_minSource_5492, var_maxSource_5511, joker_5513_2, joker_5513_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 124)) ;
      GALGAS_bigint var_minTarget_5564 ;
      GALGAS_bigint var_maxTarget_5583 ;
      GALGAS_bool joker_5585_2 ; // Joker input parameter
      GALGAS_uint joker_5585_1 ; // Joker input parameter
      var_resultType_5011.getter_kind (HERE).method_integer (var_minTarget_5564, var_maxTarget_5583, joker_5585_2, joker_5585_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 125)) ;
      GALGAS_bool test_8 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5564.objectCompare (var_minSource_5492)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5583.objectCompare (var_maxSource_5511)) ;
      }
      GALGAS_bool var_alwaysPossible_5611 = test_8 ;
      const enumGalgasBool test_9 = var_alwaysPossible_5611.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 128)), GALGAS_string ("useless explicit conversion"), fixItArray10  COMMA_SOURCE_FILE ("expression-convert.galgas", 128)) ;
      }
      {
      routine_getNewTempValue (var_resultType_5011, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 130)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4792  COMMA_SOURCE_FILE ("expression-convert.galgas", 132))  COMMA_SOURCE_FILE ("expression-convert.galgas", 132)) ;
      }else if (kBoolFalse == test_11) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4792, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-convert.galgas", 137))  COMMA_SOURCE_FILE ("expression-convert.galgas", 137)) ;
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
  GALGAS_uint var_staticStringIndex_7531 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 174)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 174)), var_staticStringIndex_7531, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  }
  GALGAS_string var_lbl_7545 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)).getter_string (SOURCE_FILE ("expression-convert.galgas", 177)) ;
  GALGAS_string var_convertMinOkLabel_7606 = GALGAS_string ("min.").add_operation (var_lbl_7545, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)) ;
  GALGAS_string var_convertMaxOkLabel_7653 = GALGAS_string ("max.").add_operation (var_lbl_7545, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
  GALGAS_string var_convertFailLabel_7699 = GALGAS_string ("fail.").add_operation (var_lbl_7545, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
  GALGAS_string var_compareMinVar_7736 = GALGAS_string ("cmp.").add_operation (var_lbl_7545, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
  GALGAS_string var_compareMaxVar_7784 = GALGAS_string ("cmp.").add_operation (var_lbl_7545, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
  GALGAS_bigint var_minTarget_7862 ;
  GALGAS_bigint var_maxTarget_7881 ;
  GALGAS_bool joker_7883_2 ; // Joker input parameter
  GALGAS_uint joker_7883_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).getter_kind (HERE).method_integer (var_minTarget_7862, var_maxTarget_7881, joker_7883_2, joker_7883_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  GALGAS_bigint var_minSource_7937 ;
  GALGAS_bool var_operandIsUnsigned_7976 ;
  GALGAS_bigint joker_7943 ; // Joker input parameter
  GALGAS_uint joker_7978_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).getter_kind (HERE).method_integer (var_minSource_7937, joker_7943, var_operandIsUnsigned_7976, joker_7978_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)) ;
  GALGAS_string var_operandType_7999 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7862.objectCompare (var_minSource_7937)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7736, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7976.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7999, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (var_minTarget_7862.getter_string (SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7736, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (var_convertMinOkLabel_7606, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (var_convertFailLabel_7699, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7606.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7784, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7976.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7999, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_maxTarget_7881.getter_string (SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7784, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (var_convertMaxOkLabel_7653, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (var_convertFailLabel_7699, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7699.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_7531.getter_string (SOURCE_FILE ("expression-convert.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 198)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 198)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).getter_string (SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).getter_string (SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 201)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7653.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 202)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (var_operandType_7999, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 203)) ;
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
    GALGAS_lstring var_typeName_2183 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 52)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2183 COMMA_SOURCE_FILE ("expression-extend.galgas", 53)) ;
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
    GALGAS_lstring var_typeName_2859 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 64)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2859 COMMA_SOURCE_FILE ("expression-extend.galgas", 65)) ;
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
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4499 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4499, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 88)) ;
  GALGAS_objectIR var_expressionResult_4645 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4499, var_expressionResult_4645, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 102)) ;
  }
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
  }
  GALGAS_PLMType var_resultType_4695 = temp_0 ;
  const enumGalgasBool test_2 = var_resultType_4695.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 113)).operator_not (SOURCE_FILE ("expression-extend.galgas", 113)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 114)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_type (var_expressionResult_4645, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 115)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 115)).operator_not (SOURCE_FILE ("expression-extend.galgas", 115)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-extend.galgas", 116)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bool var_sourceIsUnsigned_5192 ;
      GALGAS_uint var_sourceSize_5217 ;
      GALGAS_bigint joker_5159_2 ; // Joker input parameter
      GALGAS_bigint joker_5159_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4645, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 118)).getter_kind (HERE).method_integer (joker_5159_2, joker_5159_1, var_sourceIsUnsigned_5192, var_sourceSize_5217, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 118)) ;
      GALGAS_bool var_targetIsUnsigned_5282 ;
      GALGAS_uint var_targetSize_5307 ;
      GALGAS_bigint joker_5249_2 ; // Joker input parameter
      GALGAS_bigint joker_5249_1 ; // Joker input parameter
      var_resultType_4695.getter_kind (HERE).method_integer (joker_5249_2, joker_5249_1, var_targetIsUnsigned_5282, var_targetSize_5307, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 119)) ;
      GALGAS_bool test_6 = var_sourceIsUnsigned_5192 ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = var_targetIsUnsigned_5282 ;
      }
      const enumGalgasBool test_7 = test_6.boolEnum () ;
      if (kBoolTrue == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_sourceSize_5217.objectCompare (var_targetSize_5307)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 122)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_sourceSize_5217.objectCompare (var_targetSize_5307)).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 124)), GALGAS_string ("same size: useless extend operation"), fixItArray11  COMMA_SOURCE_FILE ("expression-extend.galgas", 124)) ;
          }
        }
      }else if (kBoolFalse == test_7) {
        GALGAS_bool test_12 = var_sourceIsUnsigned_5192 ;
        if (kBoolTrue == test_12.boolEnum ()) {
          test_12 = var_targetIsUnsigned_5282.operator_not (SOURCE_FILE ("expression-extend.galgas", 126)) ;
        }
        const enumGalgasBool test_13 = test_12.boolEnum () ;
        if (kBoolTrue == test_13) {
          const enumGalgasBool test_14 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5217.objectCompare (var_targetSize_5307)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 128)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray15  COMMA_SOURCE_FILE ("expression-extend.galgas", 128)) ;
          }
        }else if (kBoolFalse == test_13) {
          GALGAS_bool test_16 = var_sourceIsUnsigned_5192.operator_not (SOURCE_FILE ("expression-extend.galgas", 130)) ;
          if (kBoolTrue == test_16.boolEnum ()) {
            test_16 = var_targetIsUnsigned_5282 ;
          }
          const enumGalgasBool test_17 = test_16.boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 131)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 131)) ;
          }else if (kBoolFalse == test_17) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_sourceSize_5217.objectCompare (var_targetSize_5307)).boolEnum () ;
            if (kBoolTrue == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 134)), GALGAS_string ("cannot extend, use convert or truncate"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
            }else if (kBoolFalse == test_19) {
              const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, var_sourceSize_5217.objectCompare (var_targetSize_5307)).boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 136)), GALGAS_string ("same size: useless extend operation"), fixItArray22  COMMA_SOURCE_FILE ("expression-extend.galgas", 136)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempValue (var_resultType_4695, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 139)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4645, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 140)) ;
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
    GALGAS_lstring var_typeName_2188 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 52)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2188 COMMA_SOURCE_FILE ("expression-truncate.galgas", 53)) ;
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
    GALGAS_lstring var_typeName_2865 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 64)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2865 COMMA_SOURCE_FILE ("expression-truncate.galgas", 65)) ;
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
                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4644 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 94)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4644, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 90)) ;
  GALGAS_objectIR var_expressionResult_4790 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4644, var_expressionResult_4790, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)) ;
  }
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
  }
  GALGAS_PLMType var_resultType_4840 = temp_0 ;
  const enumGalgasBool test_2 = var_resultType_4840.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 115)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 115)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 116)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_type (var_expressionResult_4790, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 117)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 117)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 117)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-truncate.galgas", 118)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5321 ;
      GALGAS_bigint var_maxSource_5340 ;
      GALGAS_uint var_expSize_5366 ;
      GALGAS_bool joker_5342_1 ; // Joker input parameter
      extensionGetter_type (var_expressionResult_4790, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)).getter_kind (HERE).method_integer (var_minSource_5321, var_maxSource_5340, joker_5342_1, var_expSize_5366, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)) ;
      GALGAS_bigint var_minTarget_5415 ;
      GALGAS_bigint var_maxTarget_5434 ;
      GALGAS_uint var_resultSize_5471 ;
      GALGAS_bool joker_5445 ; // Joker input parameter
      var_resultType_4840.getter_kind (HERE).method_integer (var_minTarget_5415, var_maxTarget_5434, joker_5445, var_resultSize_5471, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 121)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5415.objectCompare (var_minSource_5321)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5434.objectCompare (var_maxSource_5340)) ;
      }
      GALGAS_bool var_alwaysPossible_5495 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5495.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 124)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-truncate.galgas", 124)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_resultSize_5471.objectCompare (var_expSize_5366)).boolEnum () ;
      if (kBoolTrue == test_9) {
        {
        routine_getNewTempValue (var_resultType_4840, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 127)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4790  COMMA_SOURCE_FILE ("expression-truncate.galgas", 128))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 128)) ;
      }else if (kBoolFalse == test_9) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4790, var_resultType_4840, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 133)) ;
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
  GALGAS_string var_operandType_7156 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (var_operandType_7156, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 166)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 165)) ;
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
                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addressofExpressionAST * object = (const cPtr_addressofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addressofExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-addressof.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("expression-addressof.galgas", 69)), GALGAS_string ("addressof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-addressof.galgas", 69)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_LValueRepresentation var_lvalueIR_4119 ;
    extensionMethod_analyzeLValue (object->mProperty_mLValue, constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_4119, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 72)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_4149 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-addressof.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 88)).getter_nowhere (SOURCE_FILE ("expression-addressof.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 86)) ;
    GALGAS_PLMType var_resultType_4312 = var_resultTypeProxy_4149.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 90)) ;
    {
    routine_getNewTempValue (var_resultType_4312, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 91)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_addressofInstructionIR::constructor_new (outArgument_outResult, var_lvalueIR_4119  COMMA_SOURCE_FILE ("expression-addressof.galgas", 92))  COMMA_SOURCE_FILE ("expression-addressof.galgas", 92)) ;
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
      const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference * extractPtr_5684 = (const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference *) (object->mProperty_mLValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5684->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_5684->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)).add_operation (extractedValue_address.getter_string (SOURCE_FILE ("expression-addressof.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)).add_operation (GALGAS_string (", 0 ; addressof ("), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)).add_operation (extractedValue_address.getter_hexString (SOURCE_FILE ("expression-addressof.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 120)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 119)) ;
    }
    break ;
  case GALGAS_LValueRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference * extractPtr_5904 = (const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference *) (object->mProperty_mLValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5904->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_5904->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)).add_operation (GALGAS_string (", 0 ; addressof ("), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 123)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 122)) ;
    }
    break ;
  case GALGAS_LValueRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_universalReference * extractPtr_6135 = (const cEnumAssociatedValues_LValueRepresentation_universalReference *) (object->mProperty_mLValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_6135->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_6135->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)).add_operation (GALGAS_string (" ; addressof\n"), inCompiler COMMA_SOURCE_FILE ("expression-addressof.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("expression-addressof.galgas", 125)) ;
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
//               Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                      const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                                             extensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_sizeofExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                                             extensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_sizeofTypeAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                                             extensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_sizeofExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofTypeAST * object = (const cPtr_sizeofTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofTypeAST) ;
  GALGAS_lstring var_typeName_3306 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 77)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3306 COMMA_SOURCE_FILE ("expression-sizeof.galgas", 78)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                                             extensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_sizeofTypeAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@sizeofExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_PLMType constinArgument_inSelfType,
                                                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                   const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofExpressionAST * object = (const cPtr_sizeofExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLValue.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("expression-sizeof.galgas", 102)), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_PLMType var_type_4857 ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inSelfType, object->mProperty_mLValue.getter_mIdentifier (HERE), object->mProperty_mLValue.getter_mAccessList (HERE), var_type_4857, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 105)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_4882 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-sizeof.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 108)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    GALGAS_PLMType var_resultType_5036 = var_resultTypeProxy_4882.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 110)) ;
    {
    routine_getNewTempValue (var_resultType_5036, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 111)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_4857  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 112))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 112)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_sizeofExpressionAST.mSlotID,
                                          extensionMethod_sizeofExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofExpressionAST_analyzeExpression (defineExtensionMethod_sizeofExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@sizeofTypeAST analyzeExpression'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofTypeAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                             GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GALGAS_objectIR & outArgument_outResult,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofTypeAST * object = (const cPtr_sizeofTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofTypeAST) ;
  const enumGalgasBool test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-sizeof.galgas", 137)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-sizeof.galgas", 138)), GALGAS_string ("sizeof () cannot be used in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_PLMType var_type_6331 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultTypeProxy_6429 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint").add_operation (constinArgument_inContext.getter_mTargetParameters (HERE).getter_mPointerSize (HERE).getter_string (SOURCE_FILE ("expression-sizeof.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 143)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 141)) ;
    GALGAS_PLMType var_resultType_6583 = var_resultTypeProxy_6429.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 145)) ;
    {
    routine_getNewTempValue (var_resultType_6583, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 146)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_sizeofInstructionIR::constructor_new (outArgument_outResult, var_type_6331  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 147))  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 147)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofTypeAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_sizeofTypeAST.mSlotID,
                                          extensionMethod_sizeofTypeAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofTypeAST_analyzeExpression (defineExtensionMethod_sizeofTypeAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@sizeofInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_sizeofInstructionIR.mSlotID,
                                                extensionMethod_sizeofInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofInstructionIR_enterAccessibleEntities (defineExtensionMethod_sizeofInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sizeofInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sizeofInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sizeofInstructionIR * object = (const cPtr_sizeofInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_sizeofInstructionIR) ;
  GALGAS_string var_typeName_7967 = extensionGetter_llvmTypeName (object->mProperty_mSourceType, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 177)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (GALGAS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (var_typeName_7967, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (var_typeName_7967, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)).add_operation (GALGAS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)).add_operation (var_typeName_7967, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)).add_operation (GALGAS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 179)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sizeofInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sizeofInstructionIR.mSlotID,
                                            extensionMethod_sizeofInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sizeofInstructionIR_llvmInstructionCode (defineExtensionMethod_sizeofInstructionIR_llvmInstructionCode, NULL) ;

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
  GALGAS_lstring var_typeName_2123 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName_2123 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
  }
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2240 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2240.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2240.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 53)) ;
    enumerator_2240.gotoNextObject () ;
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
  GALGAS_lstring var_typeName_2826 = function_llvmTypeNameFromPLMname (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 62)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_2826 COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
  }
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2925 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_2925.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2925.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 65)) ;
    enumerator_2925.gotoNextObject () ;
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
                                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                  const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_mode constinArgument_inCurrentMode,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                  GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_objectIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_string var_constructorKey_4099 = GALGAS_string ("(") ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4142 (object->mProperty_mParameterList, kENUMERATION_UP) ;
  while (enumerator_4142.hasCurrentObject ()) {
    var_constructorKey_4099.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4142.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
    enumerator_4142.gotoNextObject () ;
  }
  var_constructorKey_4099.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_PLMType var_resultType_4279 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 94)) ;
  GALGAS_constructorMap var_constructorMap_4374 = var_resultType_4279.getter_constructorMap (HERE) ;
  GALGAS_constructorSignature var_constructorSignature_4496 ;
  GALGAS_constructorValue var_initValue_4511 ;
  var_constructorMap_4374.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_4099, object->mProperty_mErrorLocation  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)), var_constructorSignature_4496, var_initValue_4511, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 96)) ;
  switch (var_initValue_4511.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_5799 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4511.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_elementType = extractPtr_5799->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_5799->mAssociatedValue1 ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 100)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_4279.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)).add_operation (GALGAS_string (" array constructor should have one parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)), fixItArray1  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        GALGAS_expressionAST var_expression_4792 = object->mProperty_mParameterList.getter_mExpressionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)) ;
        GALGAS_objectIR var_expressionResult_5361 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) var_expression_4792.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extractedValue_elementType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5361, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104)) ;
        GALGAS_objectIR var_result_5386 = function_checkAssignmentCompatibility (var_expressionResult_5361, extractedValue_elementType, object->mProperty_mParameterList.getter_mSelectorAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)) ;
        GALGAS_operandIRList var_operandIRList_5639 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
        cEnumerator_range enumerator_5670 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125))), kENUMERATION_UP) ;
        while (enumerator_5670.hasCurrentObject ()) {
          var_operandIRList_5639.addAssign_operation (var_result_5386  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
          enumerator_5670.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayValue (var_resultType_4279, var_operandIRList_5639  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_null:
    {
      outArgument_outResult = GALGAS_objectIR::constructor_null (var_resultType_4279  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 131)) ;
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_6124 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4511.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_6124->mAssociatedValue0 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_4279.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)), fixItArray3  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4279, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_7871 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4511.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_7871->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_6191 = extractedValue_sortedOperandList ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 140)).objectCompare (var_constructorSignature_4496.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 140)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4496.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 142)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4496.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 141)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 143)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 143)), fixItArray7  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 141)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        cEnumerator_constructorSignature enumerator_6584 (var_constructorSignature_4496, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_6617 (object->mProperty_mParameterList, kENUMERATION_UP) ;
        while (enumerator_6584.hasCurrentObject () && enumerator_6617.hasCurrentObject ()) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_6617.current_mSelector (HERE).getter_string (HERE).objectCompare (enumerator_6584.current_mSelector (HERE))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_6617.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 148)), GALGAS_string ("the selector should be '!").add_operation (enumerator_6584.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 148)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 148)), fixItArray9  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 148)) ;
          }
          GALGAS_objectIR var_expressionResult_7354 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6617.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, enumerator_6584.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7354, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 150)) ;
          GALGAS_objectIR var_result_7383 = function_checkAssignmentCompatibility (var_expressionResult_7354, enumerator_6584.current_mType (HERE), enumerator_6617.current_mSelector (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 164)) ;
          GALGAS_objectIR var_resultAsValue_7701 ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_7383, var_resultAsValue_7701, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
          }
          var_sortedOperandIRList_6191.addAssign_operation (var_resultAsValue_7701, enumerator_6584.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 171)) ;
          enumerator_6584.gotoNextObject () ;
          enumerator_6617.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureValue (var_resultType_4279, var_sortedOperandIRList_6191  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
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
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmTypeNameFromPLMname (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_2274 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_2274.hasCurrentObject ()) {
    switch (enumerator_2274.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_2338 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_2274.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_2338->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_2483 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_2274.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_2483->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_3024 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_2274.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_3024->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_2571 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_2571.hasCurrentObject ()) {
          switch (enumerator_2571.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2814 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2571.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_2814->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 59)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 59)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2927 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2571.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_2927->mAssociatedValue0 ;
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
          enumerator_2571.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2274.gotoNextObject () ;
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
    ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 76)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 76)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3669 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3669.hasCurrentObject ()) {
    switch (enumerator_3669.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_3733 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_3669.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_3733->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3862 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3669.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3862->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 82)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4387 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3669.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4387->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_3950 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_3950.hasCurrentObject ()) {
          switch (enumerator_3950.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4193 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3950.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4193->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmTypeNameFromPLMname (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 89)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 89)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4290 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3950.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4290->mAssociatedValue0 ;
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
          enumerator_3950.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3669.gotoNextObject () ;
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
                                                                    const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  GALGAS_PLMType var_inferredResultType_5505 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_5505 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_5505 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 123)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 123)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_5505.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 126)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 126)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_5846 = var_inferredResultType_5505.getter_classConstantMap (HERE) ;
    GALGAS_bigint var_value_5953 ;
    GALGAS_lstring var_classTypeName_5972 ;
    var_classConstantMap_5846.method_searchKey (object->mProperty_mConstructorName, var_value_5953, var_classTypeName_5972, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    GALGAS_PLMType var_resultType_5992 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5972, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5992, var_value_5953  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 131)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("expression-typed-constant.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_objectIR var_newTemporaryReference_6429 ;
    {
    routine_getNewTempReference (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 137)), ioArgument_ioTemporaries, var_newTemporaryReference_6429, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 137)) ;
    }
    ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6429, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)), extensionGetter_type (var_newTemporaryReference_6429, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6429, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_llvmName (var_newTemporaryReference_6429, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 143)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 141)) ;
    }
    outArgument_outResult = var_newTemporaryReference_6429 ;
    {
    routine_procAnalyzeAccesListInExpression (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, object->mProperty_mAccessList, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 148)) ;
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
                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResultPossibleReference_5299 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResultPossibleReference_5299, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 101)) ;
  GALGAS_objectIR var_ifExpressionResult_5450 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResultPossibleReference_5299, var_ifExpressionResult_5450, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_type (var_ifExpressionResult_5450, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 121)).getter_kind (HERE).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 121)).operator_not (SOURCE_FILE ("expression-if.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 122)) ;
  }
  GALGAS_objectIR var_thenExpressionPossibleReferenceResult_6177 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionPossibleReferenceResult_6177, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 125)) ;
  GALGAS_objectIR var_thenExpressionTempResult_6335 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionPossibleReferenceResult_6177, var_thenExpressionTempResult_6335, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 139)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_6368 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_6335, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)) ;
  GALGAS_objectIR var_elseExpressionPossibleReferenceResult_7105 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionPossibleReferenceResult_7105, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 151)) ;
  GALGAS_objectIR var_elseExpressionTempResult_7263 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionPossibleReferenceResult_7105, var_elseExpressionTempResult_7263, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 165)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_7296 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_7263, extensionGetter_type (var_thenExpressionResult_6368, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 172)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5450, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 177)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7662 ;
    GALGAS_PLMType joker_7643_1 ; // Joker input parameter
    var_ifExpressionResult_5450.method_literalInteger (joker_7643_1, var_value_7662, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 178)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7662.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 179)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_6368 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_7296 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempValue (extensionGetter_type (var_elseExpressionResult_7296, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 181)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 181)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5450, var_thenExpressionResult_6368, var_elseExpressionResult_7296, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 57)) ;
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
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperandPossibleReference_4735 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_4735, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 98)) ;
  GALGAS_objectIR var_leftOperand_4871 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_4735, var_leftOperand_4871, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 112)) ;
  }
  GALGAS_objectIR var_rightExpressionResult_5417 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_4871, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 122)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightExpressionResult_5417, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 118)) ;
  GALGAS_objectIR var_rightOperand_5547 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightExpressionResult_5417, var_rightOperand_5547, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 132)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_5609 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 138)) ;
  GALGAS_PLMType var_resultType_5916 ;
  GALGAS_infixOperatorDescription var_binaryOperator_5969 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_5609, extensionGetter_type (var_leftOperand_4871, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 141)), extensionGetter_type (var_rightOperand_5547, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 142)), object->mProperty_mOperatorLocation, var_resultType_5916, var_binaryOperator_5969, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 140)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_5969.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_4871, object->mProperty_mOperatorLocation, var_rightOperand_5547, var_resultType_5916, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 148)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_infixOperatorExpressionAST.mSlotID,
                                          extensionMethod_infixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_infixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_infixOperatorExpressionAST_analyzeExpression, NULL) ;

