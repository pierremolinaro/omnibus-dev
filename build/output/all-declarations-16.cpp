#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmNameForActivateTask'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmNameForActivateTask (Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("xtr.activate.task") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmNameForActivateTask = false ;
static GGS_string gOnceFunctionResult_llvmNameForActivateTask ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmNameForActivateTask (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForActivateTask) {
    gOnceFunctionResult_llvmNameForActivateTask = onceFunction_llvmNameForActivateTask (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForActivateTask = true ;
  }
  return gOnceFunctionResult_llvmNameForActivateTask ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmNameForActivateTask (void) {
  gOnceFunctionResult_llvmNameForActivateTask.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmNameForActivateTask (nullptr,
                                                                   releaseOnceFunctionResult_llvmNameForActivateTask) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmNameForActivateTask [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmNameForActivateTask (Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GGS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_llvmNameForActivateTask (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForActivateTask ("llvmNameForActivateTask",
                                                                         functionWithGenericHeader_llvmNameForActivateTask,
                                                                         & kTypeDescriptor_GALGAS_string,
                                                                         0,
                                                                         functionArgs_llvmNameForActivateTask) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'memoryAllocSectionName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_memoryAllocSectionName (Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("heap.memory.alloc") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryAllocSectionName = false ;
static GGS_string gOnceFunctionResult_memoryAllocSectionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_memoryAllocSectionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryAllocSectionName) {
    gOnceFunctionResult_memoryAllocSectionName = onceFunction_memoryAllocSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryAllocSectionName = true ;
  }
  return gOnceFunctionResult_memoryAllocSectionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryAllocSectionName (void) {
  gOnceFunctionResult_memoryAllocSectionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_memoryAllocSectionName (nullptr,
                                                                  releaseOnceFunctionResult_memoryAllocSectionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_memoryAllocSectionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_memoryAllocSectionName (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_memoryAllocSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryAllocSectionName ("memoryAllocSectionName",
                                                                        functionWithGenericHeader_memoryAllocSectionName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_memoryAllocSectionName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'memoryFreeSectionName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_memoryFreeSectionName (Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("heap.memory.free") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_memoryFreeSectionName = false ;
static GGS_string gOnceFunctionResult_memoryFreeSectionName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_memoryFreeSectionName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryFreeSectionName) {
    gOnceFunctionResult_memoryFreeSectionName = onceFunction_memoryFreeSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryFreeSectionName = true ;
  }
  return gOnceFunctionResult_memoryFreeSectionName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_memoryFreeSectionName (void) {
  gOnceFunctionResult_memoryFreeSectionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_memoryFreeSectionName (nullptr,
                                                                 releaseOnceFunctionResult_memoryFreeSectionName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_memoryFreeSectionName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_memoryFreeSectionName (Compiler * inCompiler,
                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                   const GGS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  return function_memoryFreeSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_memoryFreeSectionName ("memoryFreeSectionName",
                                                                       functionWithGenericHeader_memoryFreeSectionName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_memoryFreeSectionName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'registerGroupAddressArrayLLVMname'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_registerGroupAddressArrayLLVMname (const GGS_string & constinArgument_inGroupName,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@register.group.array.").add_operation (constinArgument_inGroupName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 353)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_registerGroupAddressArrayLLVMname [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_registerGroupAddressArrayLLVMname (Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GGS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_registerGroupAddressArrayLLVMname (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupAddressArrayLLVMname ("registerGroupAddressArrayLLVMname",
                                                                                   functionWithGenericHeader_registerGroupAddressArrayLLVMname,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_registerGroupAddressArrayLLVMname) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@computeSubscriptedVolatileRegisterAddress llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_computeSubscriptedVolatileRegisterAddress::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                                 const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                                 GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_registerIndexName_1051 = GGS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 29)) ;
  GGS_string var_scriptedRegisterOffsetName_1128 = GGS_string ("%register.offset.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 30)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)) ;
  GGS_uint var_bitCount_1352 ;
  const GGS_computeSubscriptedVolatileRegisterAddress temp_0 = this ;
  GGS_bigint joker_1334_3 ; // Joker input parameter
  GGS_bigint joker_1334_2 ; // Joker input parameter
  GGS_bool joker_1334_1 ; // Joker input parameter
  extensionGetter_type (temp_0.readProperty_mIndexResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).readProperty_kind ().method_extractInteger (joker_1334_3, joker_1334_2, joker_1334_1, var_bitCount_1352, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerThan, var_bitCount_1352.objectCompare (GGS_uint (uint32_t (32U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_computeSubscriptedVolatileRegisterAddress temp_2 = this ;
      const GGS_computeSubscriptedVolatileRegisterAddress temp_3 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_registerIndexName_1051, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (GGS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (extensionGetter_llvmTypeName (temp_2.readProperty_mIndexResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIndexResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 36)).add_operation (GGS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 35)) ;
    }
  }
  GGS_string temp_4 ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::lowerThan, var_bitCount_1352.objectCompare (GGS_uint (uint32_t (32U)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = var_registerIndexName_1051 ;
  }else if (GalgasBool::boolFalse == test_5) {
    const GGS_computeSubscriptedVolatileRegisterAddress temp_6 = this ;
    temp_4 = extensionGetter_llvmName (temp_6.readProperty_mIndexResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)) ;
  }
  const GGS_computeSubscriptedVolatileRegisterAddress temp_7 = this ;
  const GGS_computeSubscriptedVolatileRegisterAddress temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_scriptedRegisterOffsetName_1128, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (GGS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)).add_operation (temp_7.readProperty_mElementSize ().getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (GGS_string (" ; multiply index by size "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (temp_8.readProperty_mElementSize ().getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)) ;
  const GGS_computeSubscriptedVolatileRegisterAddress temp_9 = this ;
  const GGS_computeSubscriptedVolatileRegisterAddress temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_9.readProperty_mLLVMResultVarName (), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (GGS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (temp_10.readProperty_mAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)).add_operation (var_scriptedRegisterOffsetName_1128, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 43)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 42)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  const GGS_compileTimeInfixOperatorAST temp_3 = this ;
  GGS_lstring var_nodeName_5605 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5605, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5605, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5605, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5605, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5605 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeInfixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                              GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                              GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                              GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftTypeProxy_7382 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7382, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GGS_omnibusType var_leftType_7403 = extensionGetter_type (var_leftTypeProxy_7382, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  const GGS_compileTimeInfixOperatorAST temp_1 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_leftType_7403.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GGS_unifiedTypeMapEntry var_rightTypeProxy_7558 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7558, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GGS_omnibusType var_rightType_7580 = extensionGetter_type (var_rightTypeProxy_7558, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  const GGS_compileTimeInfixOperatorAST temp_3 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_rightType_7580.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_7740 ;
  {
  const GGS_compileTimeInfixOperatorAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7740, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GGS_omnibusType var_resultType_7763 = extensionGetter_type (var_resultTypeProxy_7740, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  const GGS_compileTimeInfixOperatorAST temp_5 = this ;
  callExtensionMethod_checkIsCompileTimeType ((cPtr_omnibusType *) var_resultType_7763.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GGS_ctCheckMap var_ctCheckMap_7923 = GGS_ctCheckMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_compileTimeInfixOperatorAST temp_6 = this ;
  var_ctCheckMap_7923.setter_insertKey (temp_6.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  const GGS_compileTimeInfixOperatorAST temp_7 = this ;
  var_ctCheckMap_7923.setter_insertKey (temp_7.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  const GGS_compileTimeInfixOperatorAST temp_8 = this ;
  callExtensionMethod_checkCompileTimeExpression ((cPtr_ctExpressionAST *) temp_8.readProperty_mExpression ().ptr (), var_ctCheckMap_7923, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  const GGS_compileTimeInfixOperatorAST temp_9 = this ;
  const GGS_compileTimeInfixOperatorAST temp_10 = this ;
  GGS_lstring var_key_8143 = function_infixOperatorMapKey (var_leftType_7403, extensionGetter_omnibusInfixOperator (temp_9.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), temp_10.readProperty_mInfixOperatorLocation (), var_rightType_7580, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  const GGS_compileTimeInfixOperatorAST temp_11 = this ;
  const GGS_compileTimeInfixOperatorAST temp_12 = this ;
  const GGS_compileTimeInfixOperatorAST temp_13 = this ;
  GGS_compileTimeInfixOperatorUsage var_definition_8248 = GGS_compileTimeInfixOperatorUsage::init_21__21__21_ (temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mExpression (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8143, var_resultType_7763, var_definition_8248, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_compileTimeInfixOperatorAST temp_15 = this ;
    GGS_bool test_16 = GGS_bool (ComparisonKind::equal, temp_15.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (GalgasBool::boolTrue != test_16.boolEnum ()) {
      const GGS_compileTimeInfixOperatorAST temp_17 = this ;
      test_16 = GGS_bool (ComparisonKind::equal, temp_17.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_14 = test_16.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_compileTimeInfixOperatorAST temp_18 = this ;
      GGS_lstring var_equal_5F_key_8564 = function_infixOperatorMapKey (var_leftType_7403, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), temp_18.readProperty_mInfixOperatorLocation (), var_rightType_7580, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      const GGS_compileTimeInfixOperatorAST temp_19 = this ;
      GGS_lstring var_lessThan_5F_key_8664 = function_infixOperatorMapKey (var_leftType_7403, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7580, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8564.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8664.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_omnibusInfixOperatorUsage var_equalOperatorUsage_8935 ;
          GGS_omnibusType joker_8927 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8564, joker_8927, var_equalOperatorUsage_8935, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GGS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_9020 ;
          GGS_omnibusType joker_9012 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8664, joker_9012, var_lessThanOperatorUsage_9020, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          GalgasBool test_21 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_21) {
            GGS_compileTimeInfixOperatorUsage var_eou_9054 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_8935.ptr ())) ;
            if (nullptr == var_eou_9054.ptr ()) {
              test_21 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_21) {
              GGS_compileTimeInfixOperatorUsage var_ltou_9125 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_9020.ptr ())) ;
              if (nullptr == var_ltou_9125.ptr ()) {
                test_21 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_21) {
                GGS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9203 = GGS_compileTimeInfixInfEqualOperatorUsage::init_21__21_ (var_eou_9054, var_ltou_9125, inCompiler COMMA_HERE) ;
                const GGS_compileTimeInfixOperatorAST temp_22 = this ;
                GGS_lstring var_infEqual_5F_key_9287 = function_infixOperatorMapKey (var_leftType_7403, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), temp_22.readProperty_mInfixOperatorLocation (), var_rightType_7580, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9287, var_resultType_7763, var_infEqual_5F_definition_9203, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    const GGS_compileTimeInfixOperatorAST temp_24 = this ;
    test_23 = GGS_bool (ComparisonKind::equal, temp_24.readProperty_mInfixOperator ().objectCompare (GGS_compileTimeInfixOperatorEnumeration::class_func_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_compileTimeInfixOperatorAST temp_25 = this ;
      GGS_lstring var_addOpNoOVF_5F_key_9584 = function_infixOperatorMapKey (var_leftType_7403, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), temp_25.readProperty_mInfixOperatorLocation (), var_rightType_7580, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9584, var_resultType_7763, var_definition_8248, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                              const GGS_location /* constinArgument_inOperatorLocation */,
                                                              const GGS_objectIR constinArgument_inRightOperand,
                                                              const GGS_omnibusType constinArgument_inResultType,
                                                              GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                              GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                              GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                              GGS_objectIR & outArgument_outResultValue,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_result_11450 ;
  const GGS_compileTimeInfixOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11450, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 293)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_11450  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 294)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeInfixInfEqualOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeInfixInfEqualOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                      const GGS_location /* constinArgument_inOperatorLocation */,
                                                                      const GGS_objectIR constinArgument_inRightOperand,
                                                                      const GGS_omnibusType constinArgument_inResultType,
                                                                      GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                      GGS_objectIR & outArgument_outResultValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_result_12419 ;
  const GGS_compileTimeInfixInfEqualOperatorUsage temp_0 = this ;
  callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_0.readProperty_mEqualOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12419, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 316)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_result_12419.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 317)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_compileTimeInfixInfEqualOperatorUsage temp_2 = this ;
      callExtensionMethod_eval ((cPtr_compileTimeInfixOperatorUsage *) temp_2.readProperty_mLessThanOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12419, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 318)) ;
    }
  }
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_result_12419  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_isrDeclarationAST temp_0 = this ;
  GGS_lstring var_receiverTypeName_1745 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  GGS_string var_s_1823 = var_receiverTypeName_1745.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GGS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GGS_isrDeclarationAST temp_2 = this ;
  const GGS_isrDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (GGS_lstring::init_21__21_ (var_s_1823, temp_2.readProperty_mISRName ().readProperty_location (), inCompiler COMMA_HERE), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GGS_isrDeclarationAST temp_4 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.readProperty_mISRInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_receiverTypeName_1745.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_1745 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_isrDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_isrDeclarationAST temp_0 = this ;
  GGS_lstring var_receiverTypeName_2316 = function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GGS_isrDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (var_receiverTypeName_2316.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.readProperty_mISRName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_isrDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_isrDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mISRName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@isrDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_isrDeclarationAST::method_enterInContext (GGS_semanticContext & /* ioArgument_ioContext */,
                                                    GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                    GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                    GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_isrDeclarationAST temp_0 = this ;
  const GGS_isrDeclarationAST temp_1 = this ;
  const GGS_isrDeclarationAST temp_2 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedISRDeclaration::init_21__21__21_ (temp_0.readProperty_mISRName (), temp_1.readProperty_mMode (), temp_2.readProperty_mDriverName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GGS_isrDeclarationAST temp_3 = this ;
  GGS_lstring var_driverLLVMBaseTypeName_3701 = function_llvmDriverNameFromName (temp_3.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GGS_isrDeclarationAST temp_4 = this ;
  GGS_routineFormalArgumentListAST temp_5 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  GGS_lstring var_isrRoutineMangledName_3775 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_3701.readProperty_string (), temp_4.readProperty_mISRName (), temp_5, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GGS_isrDeclarationAST temp_6 = this ;
  const GGS_isrDeclarationAST temp_7 = this ;
  GGS_routineFormalArgumentListAST temp_8 = GGS_routineFormalArgumentListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 104)) ;
  const GGS_isrDeclarationAST temp_9 = this ;
  const GGS_isrDeclarationAST temp_10 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (function_omnibusTypeSpecificNameForDriver (temp_6.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_7.readProperty_mMode (), GGS_bool (true), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GGS_bool (true), GGS_bool (false), GGS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_3775, temp_8, GGS_bool (true), temp_9.readProperty_mISRInstructionList (), temp_10.readProperty_mEndOfISRDeclaration (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedISRDeclaration::method_semanticAnalysis (const GGS_semanticContext constinArgument_inContext,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_selfType_5241 ;
  const GGS_decoratedISRDeclaration temp_0 = this ;
  extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), function_omnibusTypeSpecificNameForDriver (temp_0.readProperty_mDriverName (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_5241, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GGS_decoratedISRDeclaration temp_1 = this ;
  GGS_interruptionPanicCode joker_5334 ; // Joker input parameter
  constinArgument_inContext.readProperty_mAvailableInterruptMap ().method_searchKey (temp_1.readProperty_mISRName (), joker_5334, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GGS_decoratedISRDeclaration temp_2 = this ;
  const GGS_decoratedISRDeclaration temp_3 = this ;
  const GGS_decoratedISRDeclaration temp_4 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.readProperty_mISRName (), var_selfType_5241, temp_3.readProperty_mDriverName ().readProperty_string (), temp_4.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                                    GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_0 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_booleanShortCircuitAndOperatorExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                 const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                 const GGS_mode constinArgument_inMode,
                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GGS_objectIR & outArgument_outResult,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_instructionListIR temp_0 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 50)) ;
  GGS_instructionListIR var_leftInstructionGenerationList_2799 = temp_0 ;
  GGS_objectIR var_leftOperand_3231 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2799, var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 64)) ;
  }
  GGS_implicitBooleanConversionResult var_leftBooleanOperand_3592 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_2 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_leftOperand_3231, temp_2.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_leftInstructionGenerationList_2799, ioArgument_ioAllocaList, var_leftBooleanOperand_3592, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 68)) ;
  GGS_instructionListIR temp_3 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)) ;
  GGS_instructionListIR var_rightInstructionGenerationList_3671 = temp_3 ;
  GGS_objectIR var_rightOperand_4106 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 81)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3671, var_rightOperand_4106, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 78)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_4106, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 91)) ;
  }
  GGS_implicitBooleanConversionResult var_rightBooleanOperand_4438 ;
  const GGS_booleanShortCircuitAndOperatorExpressionAST temp_5 = this ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_rightOperand_4106, temp_5.readProperty_mOperatorLocation (), ioArgument_ioTemporaries, var_rightInstructionGenerationList_3671, ioArgument_ioAllocaList, var_rightBooleanOperand_4438, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 95)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    GGS_bool test_7 = var_leftBooleanOperand_3592.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    if (GalgasBool::boolTrue == test_7.boolEnum ()) {
      test_7 = var_rightBooleanOperand_4438.getter_isCompileTime (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
    }
    test_6 = test_7.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_bool var_leftStaticValue_4647 ;
      var_leftBooleanOperand_3592.method_extractCompileTime (var_leftStaticValue_4647, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 105)) ;
      GGS_bool var_rightStaticValue_4725 ;
      var_rightBooleanOperand_4438.method_extractCompileTime (var_rightStaticValue_4725, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 106)) ;
      outArgument_outResult = GGS_objectIR::class_func_literalInteger (extensionGetter_type (var_leftOperand_3231, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), var_leftStaticValue_4647.operator_and (var_rightStaticValue_4725 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)).getter_bigint (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_8 = this ;
    routine_getNewTempValue_3F__26__21_ (extensionGetter_booleanType (constinArgument_inContext, temp_8.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 110)) ;
    }
    {
    const GGS_booleanShortCircuitAndOperatorExpressionAST temp_9 = this ;
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_llvmName (var_leftBooleanOperand_3592, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 114)), var_leftInstructionGenerationList_2799, extensionGetter_llvmName (var_rightBooleanOperand_4438, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 116)), var_rightInstructionGenerationList_3671, temp_9.readProperty_mOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 112)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@registerInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_registerInExpressionAST temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("expression-control-register.galgas", 43)) ;
  }
  const GGS_registerInExpressionAST temp_1 = this ;
  extensionMethod_addDependenceEdgeForStaticExpression (temp_1.readProperty_mControlRegisterLValue (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@registerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerInExpressionAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 52)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@registerInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerInExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                             const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                             const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                             const GGS_semanticContext constinArgument_inContext,
                                                             const GGS_mode constinArgument_inMode,
                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                             GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GGS_objectIR & outArgument_outResult,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_registerType_4121 ;
  GGS_sliceMap var_sliceMap_4176 ;
  GGS_string var_llvmRegisterAddressName_4218 ;
  const GGS_registerInExpressionAST temp_0 = this ;
  GGS_uint joker_4138 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4121, joker_4138, var_sliceMap_4176, var_llvmRegisterAddressName_4218, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 72)) ;
  {
  routine_getNewTempValue_3F__26__21_ (var_registerType_4121, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 89)) ;
  }
  {
  extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_llvmRegisterAddressName_4218, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 90)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_registerInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mFieldName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_llvmBinaryOperation var_accessOperator_4603 ;
      GGS_bigint var_accessRightOperand_4637 ;
      GGS_omnibusType var_resultType_4680 ;
      const GGS_registerInExpressionAST temp_3 = this ;
      var_sliceMap_4176.method_searchKey (temp_3.readProperty_mFieldName (), var_accessOperator_4603, var_accessRightOperand_4637, var_resultType_4680, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 93)) ;
      GGS_objectIR var_resultIR_4751 ;
      {
      routine_getNewTempValue_3F__26__21_ (var_resultType_4680, ioArgument_ioTemporaries, var_resultIR_4751, inCompiler  COMMA_SOURCE_FILE ("expression-control-register.galgas", 99)) ;
      }
      {
      const GGS_registerInExpressionAST temp_4 = this ;
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_4751, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 102)), temp_4.readProperty_mFieldName ().readProperty_location (), outArgument_outResult, var_accessOperator_4603, GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 106)), var_accessRightOperand_4637  COMMA_SOURCE_FILE ("expression-control-register.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-control-register.galgas", 100)) ;
      }
      outArgument_outResult = var_resultIR_4751 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binaryOperationIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                             GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("intermediate-binary-operation.galgas", 71)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_binaryOperationIR temp_1 = this ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 72))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 72)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@binaryOperationIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                         const GGS_generationContext constinArgument_inGenerationContext,
                                                         GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperationIR temp_0 = this ;
  GGS_string var_llvmType_5025 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 133)) ;
  const GGS_binaryOperationIR temp_1 = this ;
  switch (temp_1.readProperty_mOperation ().enumValue ()) {
  case GGS_llvmBinaryOperation::Enumeration::invalid:
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_addNoOVF:
    {
      const GGS_binaryOperationIR temp_2 = this ;
      const GGS_binaryOperationIR temp_3 = this ;
      const GGS_binaryOperationIR temp_4 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GGS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_subNoOVF:
    {
      const GGS_binaryOperationIR temp_5 = this ;
      const GGS_binaryOperationIR temp_6 = this ;
      const GGS_binaryOperationIR temp_7 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_5.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GGS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_mulNoOVF:
    {
      const GGS_binaryOperationIR temp_8 = this ;
      const GGS_binaryOperationIR temp_9 = this ;
      const GGS_binaryOperationIR temp_10 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_8.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GGS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 140)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_udivNoOVF:
    {
      const GGS_binaryOperationIR temp_11 = this ;
      const GGS_binaryOperationIR temp_12 = this ;
      const GGS_binaryOperationIR temp_13 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GGS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_llvmName (temp_12.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 142)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sdivNoOVF:
    {
      const GGS_binaryOperationIR temp_14 = this ;
      const GGS_binaryOperationIR temp_15 = this ;
      const GGS_binaryOperationIR temp_16 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_14.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GGS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_llvmName (temp_15.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (extensionGetter_llvmName (temp_16.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 144)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_uremNoOVF:
    {
      const GGS_binaryOperationIR temp_17 = this ;
      const GGS_binaryOperationIR temp_18 = this ;
      const GGS_binaryOperationIR temp_19 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_17.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GGS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_llvmName (temp_18.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (extensionGetter_llvmName (temp_19.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 146)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sremNoOVF:
    {
      const GGS_binaryOperationIR temp_20 = this ;
      const GGS_binaryOperationIR temp_21 = this ;
      const GGS_binaryOperationIR temp_22 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_20.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GGS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_llvmName (temp_21.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (extensionGetter_llvmName (temp_22.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 148)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_uaddOVF:
    {
      const GGS_binaryOperationIR temp_23 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_23.ptr (), GGS_string ("uadd"), function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 152)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 150)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_saddOVF:
    {
      const GGS_binaryOperationIR temp_24 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_24.ptr (), GGS_string ("sadd"), function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 160)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 158)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_usubOVF:
    {
      const GGS_binaryOperationIR temp_25 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_25.ptr (), GGS_string ("usub"), function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 168)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 166)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_ssubOVF:
    {
      const GGS_binaryOperationIR temp_26 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_26.ptr (), GGS_string ("ssub"), function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 176)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 174)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_umulOVF:
    {
      const GGS_binaryOperationIR temp_27 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_27.ptr (), GGS_string ("umul"), function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 184)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 182)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_smulOVF:
    {
      const GGS_binaryOperationIR temp_28 = this ;
      callExtensionMethod_enterCodeForOverflowOperation ((cPtr_binaryOperationIR *) temp_28.ptr (), GGS_string ("smul"), function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 192)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 190)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_udivOVF:
    {
      const GGS_binaryOperationIR temp_29 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_29.ptr (), GGS_string ("udiv"), function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 200)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 198)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sdivOVF:
    {
      const GGS_binaryOperationIR temp_30 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_30.ptr (), GGS_string ("sdiv"), function_panicCodeForSignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 208)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 206)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_uremOVF:
    {
      const GGS_binaryOperationIR temp_31 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_31.ptr (), GGS_string ("urem"), function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 216)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 214)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_sremOVF:
    {
      const GGS_binaryOperationIR temp_32 = this ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((cPtr_binaryOperationIR *) temp_32.ptr (), GGS_string ("srem"), function_panicCodeForSignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 224)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 222)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_and:
    {
      const GGS_binaryOperationIR temp_33 = this ;
      const GGS_binaryOperationIR temp_34 = this ;
      const GGS_binaryOperationIR temp_35 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_33.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GGS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_llvmName (temp_34.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (extensionGetter_llvmName (temp_35.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 230)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_ior:
    {
      const GGS_binaryOperationIR temp_36 = this ;
      const GGS_binaryOperationIR temp_37 = this ;
      const GGS_binaryOperationIR temp_38 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_36.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GGS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_llvmName (temp_37.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (extensionGetter_llvmName (temp_38.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 232)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_xor:
    {
      const GGS_binaryOperationIR temp_39 = this ;
      const GGS_binaryOperationIR temp_40 = this ;
      const GGS_binaryOperationIR temp_41 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_39.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GGS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_llvmName (temp_40.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (extensionGetter_llvmName (temp_41.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 234)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_shl:
    {
      const GGS_binaryOperationIR temp_42 = this ;
      const GGS_binaryOperationIR temp_43 = this ;
      const GGS_binaryOperationIR temp_44 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_42.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GGS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_llvmName (temp_43.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (extensionGetter_llvmName (temp_44.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 236)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_ashr:
    {
      const GGS_binaryOperationIR temp_45 = this ;
      const GGS_binaryOperationIR temp_46 = this ;
      const GGS_binaryOperationIR temp_47 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_45.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GGS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_llvmName (temp_46.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (extensionGetter_llvmName (temp_47.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 238)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_lshr:
    {
      const GGS_binaryOperationIR temp_48 = this ;
      const GGS_binaryOperationIR temp_49 = this ;
      const GGS_binaryOperationIR temp_50 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_48.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GGS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_llvmName (temp_49.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (extensionGetter_llvmName (temp_50.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 240)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_eq:
    {
      const GGS_binaryOperationIR temp_51 = this ;
      const GGS_binaryOperationIR temp_52 = this ;
      const GGS_binaryOperationIR temp_53 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_51.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GGS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_llvmName (temp_52.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (extensionGetter_llvmName (temp_53.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 242)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_ult:
    {
      const GGS_binaryOperationIR temp_54 = this ;
      const GGS_binaryOperationIR temp_55 = this ;
      const GGS_binaryOperationIR temp_56 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_54.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GGS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (extensionGetter_llvmName (temp_55.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (extensionGetter_llvmName (temp_56.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 244)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_ule:
    {
      const GGS_binaryOperationIR temp_57 = this ;
      const GGS_binaryOperationIR temp_58 = this ;
      const GGS_binaryOperationIR temp_59 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_57.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GGS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_llvmName (temp_58.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (extensionGetter_llvmName (temp_59.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 246)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_slt:
    {
      const GGS_binaryOperationIR temp_60 = this ;
      const GGS_binaryOperationIR temp_61 = this ;
      const GGS_binaryOperationIR temp_62 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_60.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GGS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_llvmName (temp_61.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (extensionGetter_llvmName (temp_62.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 248)) ;
    }
    break ;
  case GGS_llvmBinaryOperation::Enumeration::enum_icmp_5F_sle:
    {
      const GGS_binaryOperationIR temp_63 = this ;
      const GGS_binaryOperationIR temp_64 = this ;
      const GGS_binaryOperationIR temp_65 = this ;
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_63.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GGS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (var_llvmType_5025, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (extensionGetter_llvmName (temp_64.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (extensionGetter_llvmName (temp_65.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 250)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters?self?routineAttributes?formal?effective?errorLocation?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR&effectiveIR'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                      const GGS_routineTypedSignature constinArgument_inFormalSignature,
                                                                                                                                                                                                                                      const GGS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                      const GGS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                      GGS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_procEffectiveParameterList temp_0 = GGS_procEffectiveParameterList::init (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 129)) ;
  GGS_procEffectiveParameterList var_parameterList_5201 = temp_0 ;
  UpEnumerator_routineTypedSignature enumerator_5250 (constinArgument_inFormalSignature) ;
  UpEnumerator_effectiveArgumentListAST enumerator_5310 (constinArgument_inEffectiveParameterList) ;
  while (enumerator_5250.hasCurrentObject () && enumerator_5310.hasCurrentObject ()) {
    switch (enumerator_5310.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
      {
        GGS_bool extractedValue_5438_constant_0 ;
        GGS_lstring extractedValue_5456_typeName_1 ;
        GGS_lstring extractedValue_5474_name_2 ;
        enumerator_5310.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_5438_constant_0, extractedValue_5456_typeName_1, extractedValue_5474_name_2) ;
        GGS_omnibusType temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, extractedValue_5456_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = extensionGetter_type (enumerator_5250.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 134)) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), extractedValue_5456_typeName_1, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)) ;
        }
        GGS_omnibusType var_type_5492 = temp_1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = extractedValue_5438_constant_0.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_5474_name_2, GGS_bool (false), var_type_5492, extractedValue_5474_name_2, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 139)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_5474_name_2, var_type_5492, extractedValue_5474_name_2, GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 141)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
          }
        }
        ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (extractedValue_5474_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)), var_type_5492, GGS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
        var_parameterList_5201.addAssignOperation (enumerator_5310.current_mEffectiveParameterKind (HERE), enumerator_5310.current_mSelector (HERE), var_type_5492  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas", 146)), GGS_objectIR::class_func_reference (var_type_5492, function_llvmNameForLocalVariable (extractedValue_5474_name_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
      {
        GGS_lstring extractedValue_6146_name_0 ;
        enumerator_5310.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_input (extractedValue_6146_name_0) ;
        GGS_objectIR var_objectIR_6222 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_6146_name_0, var_objectIR_6222, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        }
        var_parameterList_5201.addAssignOperation (enumerator_5310.current_mEffectiveParameterKind (HERE), enumerator_5310.current_mSelector (HERE), extensionGetter_type (var_objectIR_6222, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 150))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 150)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_input (SOURCE_FILE ("effective-parameters.galgas", 152)), GGS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_6222, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 154)), extensionGetter_llvmName (var_objectIR_6222, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 155)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 155)).readProperty_string ()  COMMA_SOURCE_FILE ("effective-parameters.galgas", 153))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 151)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
      {
        GGS_expressionAST extractedValue_6519_expression_0 ;
        GGS_location extractedValue_6540_endOfExp_1 ;
        enumerator_5310.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_6519_expression_0, extractedValue_6540_endOfExp_1) ;
        GGS_objectIR var_expressionResult_6994 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6519_expression_0.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (enumerator_5250.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 161)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6994, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 158)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6994, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 171)) ;
        }
        GGS_objectIR var_result_7151 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6994, extensionGetter_type (enumerator_5250.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 178)), extractedValue_6540_endOfExp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 175)) ;
        var_parameterList_5201.addAssignOperation (enumerator_5310.current_mEffectiveParameterKind (HERE), enumerator_5310.current_mSelector (HERE), extensionGetter_type (enumerator_5250.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 182))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 182)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("effective-parameters.galgas", 183)), var_result_7151  COMMA_SOURCE_FILE ("effective-parameters.galgas", 183)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
      {
        GGS_lstring extractedValue_7579_name_0 ;
        enumerator_5310.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInput (extractedValue_7579_name_0) ;
        GGS_objectIR var_objectIR_7659 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_7579_name_0, var_objectIR_7659, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 185)) ;
        }
        var_parameterList_5201.addAssignOperation (enumerator_5310.current_mEffectiveParameterKind (HERE), enumerator_5310.current_mSelector (HERE), extensionGetter_type (var_objectIR_7659, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 186))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 186)) ;
        GGS_objectIR var_argumentIR_7773 = GGS_objectIR::class_func_reference (extensionGetter_type (var_objectIR_7659, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 188)), extensionGetter_llvmName (var_objectIR_7659, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 189))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 187)) ;
        ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas", 191)), var_argumentIR_7773  COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
      }
      break ;
    case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
      {
        GGS_lstring extractedValue_7986_name_0 ;
        enumerator_5310.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_outputInputSelfVariable (extractedValue_7986_name_0) ;
        GGS_propertyGetterMap var_propertyGetterMap_8103 = extensionGetter_propertyGetterMap (constinArgument_inContext, constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
        GGS_propertyGetterKind var_propertyAccess_8327 ;
        GGS_propertyVisibility joker_8299 ; // Joker input parameter
        var_propertyGetterMap_8103.method_searchKey (extractedValue_7986_name_0, joker_8299, var_propertyAccess_8327, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
        switch (var_propertyAccess_8327.enumValue ()) {
        case GGS_propertyGetterKind::Enumeration::invalid:
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_constantProperty:
          {
            GGS_objectIR extractedValue_8400__0 ;
            var_propertyAccess_8327.getAssociatedValuesFor_constantProperty (extractedValue_8400__0) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("a constant property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 199)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_storedProperty:
          {
            GGS_omnibusType extractedValue_8542_propertyType_0 ;
            GGS_uint extractedValue_8561_propertyIndex_1 ;
            var_propertyAccess_8327.getAssociatedValuesFor_storedProperty (extractedValue_8542_propertyType_0, extractedValue_8561_propertyIndex_1) ;
            GGS_string var_property_5F_llvmName_8623 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8623, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 201)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 204)), var_property_5F_llvmName_8623, extractedValue_8561_propertyIndex_1, extractedValue_7986_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 202)) ;
            }
            var_parameterList_5201.addAssignOperation (enumerator_5310.current_mEffectiveParameterKind (HERE), enumerator_5310.current_mSelector (HERE), extractedValue_8542_propertyType_0  COMMA_SOURCE_FILE ("effective-parameters.galgas", 209)) ;
            ioArgument_ioEffectiveParameterListIR.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("effective-parameters.galgas", 210)), GGS_objectIR::class_func_reference (extractedValue_8542_propertyType_0, var_property_5F_llvmName_8623  COMMA_SOURCE_FILE ("effective-parameters.galgas", 210))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 210)) ;
          }
          break ;
        case GGS_propertyGetterKind::Enumeration::enum_computedProperty:
          {
            GGS_unifiedTypeMapEntry extractedValue_9087__0 ;
            GGS_routineLLVMNameDict extractedValue_9087__1 ;
            var_propertyAccess_8327.getAssociatedValuesFor_computedProperty (extractedValue_9087__0, extractedValue_9087__1) ;
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("a computed property cannot be used as output / input parameter"), fixItArray5  COMMA_SOURCE_FILE ("effective-parameters.galgas", 212)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_5250.gotoNextObject () ;
    enumerator_5310.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas", 217)).objectCompare (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas", 217)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_count (SOURCE_FILE ("effective-parameters.galgas", 218)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)).add_operation (GGS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)).add_operation (constinArgument_inEffectiveParameterList.getter_count (SOURCE_FILE ("effective-parameters.galgas", 219)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)).add_operation (GGS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)), fixItArray7  COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    UpEnumerator_routineTypedSignature enumerator_9562 (constinArgument_inFormalSignature) ;
    UpEnumerator_procEffectiveParameterList enumerator_9643 (var_parameterList_5201) ;
    while (enumerator_9562.hasCurrentObject () && enumerator_9643.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, extensionGetter_type (enumerator_9562.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)).readProperty_omnibusTypeDescriptionName ().objectCompare (enumerator_9643.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_9643.current_mSelector (HERE).readProperty_location (), GGS_string ("the actual parameter type is $").add_operation (enumerator_9643.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)).add_operation (GGS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)).add_operation (extensionGetter_key (enumerator_9562.current_mTypeProxy (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 224)), fixItArray9  COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)) ;
        }
      }
      GGS_string var_requiredPassingMode_10023 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9562.current_mFormalArgumentPassingMode (HERE), enumerator_9562.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 226)) ;
      GGS_string var_testedPassingMode_10146 = extensionGetter_passingModeForActualSelector (enumerator_9643.current_mEffectiveParameterPassingMode (HERE), enumerator_9643.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_requiredPassingMode_10023.objectCompare (var_testedPassingMode_10146)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_9643.current_mSelector (HERE).readProperty_location (), GGS_string ("the required selector is '").add_operation (var_requiredPassingMode_10023, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 229)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 229)), fixItArray11  COMMA_SOURCE_FILE ("effective-parameters.galgas", 229)) ;
        }
      }
      enumerator_9562.gotoNextObject () ;
      enumerator_9643.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@registerConstantExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@registerConstantExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerConstantExpressionAST temp_0 = this ;
  UpEnumerator_registerIntegerFieldListAST enumerator_2877 (temp_0.readProperty_mFieldValues ()) ;
  while (enumerator_2877.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) enumerator_2877.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 65)) ;
    enumerator_2877.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@registerConstantExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerConstantExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext constinArgument_inContext,
                                                                   const GGS_mode constinArgument_inMode,
                                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                   GGS_allocaList & ioArgument_ioAllocaList,
                                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controlRegisterMap var_controlRegisterMap_4083 ;
  const GGS_registerConstantExpressionAST temp_0 = this ;
  GGS_registerGroupKind joker_4071 ; // Joker input parameter
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), joker_4071, var_controlRegisterMap_4083, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 87)) ;
  GGS_omnibusType var_registerType_4252 ;
  GGS_sliceMap var_registerBitSliceMap_4299 ;
  GGS_controlRegisterFieldMap var_registerFieldMap_4353 ;
  GGS_uint var_registerBitCount_4387 ;
  GGS_uint var_powerOfTwoForArraySize_4420 ;
  GGS_uint var_elementArraySize_4459 ;
  const GGS_registerConstantExpressionAST temp_1 = this ;
  GGS_bool joker_4269_2 ; // Joker input parameter
  GGS_bool joker_4269_1 ; // Joker input parameter
  GGS_bigint joker_4374_2 ; // Joker input parameter
  GGS_controlRegisterFieldList joker_4374_1 ; // Joker input parameter
  var_controlRegisterMap_4083.method_searchKey (temp_1.readProperty_mRegisterName (), var_registerType_4252, joker_4269_2, joker_4269_1, var_registerBitSliceMap_4299, var_registerFieldMap_4353, joker_4374_2, joker_4374_1, var_registerBitCount_4387, var_powerOfTwoForArraySize_4420, var_elementArraySize_4459, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 93)) ;
  GGS_bigint var_accumulatedFieldStaticValues_4567 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 105)) ;
  GGS_operandIRList temp_2 = GGS_operandIRList::init (inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 106)) ;
  GGS_operandIRList var_operandList_4621 = temp_2 ;
  const GGS_registerConstantExpressionAST temp_3 = this ;
  UpEnumerator_registerIntegerFieldListAST enumerator_4667 (temp_3.readProperty_mFieldValues ()) ;
  while (enumerator_4667.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_4667.current_mFieldName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_4667.current_mFieldName (HERE).readProperty_location (), GGS_string ("anonymous selector not allowed here"), fixItArray5  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 109)) ;
        var_operandList_4621.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uint var_fieldBitIndex_4909 ;
      GGS_uint var_fieldBitCount_4942 ;
      var_registerFieldMap_4353.method_searchKey (enumerator_4667.current_mFieldName (HERE), var_fieldBitIndex_4909, var_fieldBitCount_4942, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 111)) ;
      GGS_lstring var_inferredTypeName_4974 = GGS_lstring::init_21__21_ (GGS_string ("u").add_operation (var_fieldBitCount_4942.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 116)), enumerator_4667.current_mFieldName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_omnibusType var_inferredType_5115 ;
      extensionMethod_searchType (constinArgument_inContext.readProperty_mTypeMap (), var_inferredTypeName_4974, var_inferredType_5115, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 117)) ;
      GGS_objectIR var_expressionResult_5582 ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) enumerator_4667.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_inferredType_5115, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5582, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_5582, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 132)) ;
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_type (var_expressionResult_5582, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 137)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_bigint var_value_5895 ;
          GGS_omnibusType joker_5872_1 ; // Joker input parameter
          var_expressionResult_5582.method_extractLiteralInteger (joker_5872_1, var_value_5895, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 138)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::lowerThan, var_value_5895.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 139)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_4667.current_mExpressionLocation (HERE), GGS_string ("this integer expression should be positive"), fixItArray8  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 140)) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_5895.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)).left_shift_operation (var_fieldBitCount_4942, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 141)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                var_accumulatedFieldStaticValues_4567 = var_accumulatedFieldStaticValues_4567.operator_or (var_value_5895.left_shift_operation (var_fieldBitIndex_4909, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 142)) ;
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_4667.current_mExpressionLocation (HERE), GGS_string ("expression too large (should be < ").add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).left_shift_operation (var_fieldBitCount_4942, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)), fixItArray10  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 144)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = extensionGetter_type (var_expressionResult_5582, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-register-value-from-slices.galgas", 146)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_bool var_unsigned_6411 ;
            GGS_uint var_expressionBitCount_6440 ;
            GGS_bigint joker_6387_2 ; // Joker input parameter
            GGS_bigint joker_6387_1 ; // Joker input parameter
            extensionGetter_type (var_expressionResult_5582, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)).readProperty_kind ().method_extractInteger (joker_6387_2, joker_6387_1, var_unsigned_6411, var_expressionBitCount_6440, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 147)) ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_unsigned_6411.operator_not (SOURCE_FILE ("expression-register-value-from-slices.galgas", 148)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GenericArray <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_4667.current_mExpressionLocation (HERE), GGS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 149)) ;
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = GGS_bool (ComparisonKind::notEqual, var_expressionBitCount_6440.objectCompare (var_fieldBitCount_4942)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_4667.current_mExpressionLocation (HERE), GGS_string ("type error, $uint").add_operation (var_fieldBitCount_4942.getter_string (SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)).add_operation (GGS_string (" type required"), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)), fixItArray15  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 151)) ;
                }
              }
              if (GalgasBool::boolFalse == test_14) {
                GGS_objectIR var_partialResult_6815 = var_expressionResult_5582 ;
                GalgasBool test_16 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_16) {
                  test_16 = GGS_bool (ComparisonKind::lowerThan, var_expressionBitCount_6440.objectCompare (var_registerBitCount_4387)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_16) {
                    GGS_objectIR var_extendedResult_6968 ;
                    {
                    routine_getNewTempValue_3F__26__21_ (var_registerType_4252, ioArgument_ioTemporaries, var_extendedResult_6968, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 156)) ;
                    }
                    {
                    extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_6968, var_partialResult_6815, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 157)) ;
                    }
                    var_partialResult_6815 = var_extendedResult_6968 ;
                  }
                }
                GGS_objectIR var_shiftedResult_7224 ;
                {
                routine_getNewTempValue_3F__26__21_ (var_registerType_4252, ioArgument_ioTemporaries, var_shiftedResult_7224, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 161)) ;
                }
                {
                extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_7224, var_partialResult_6815, var_fieldBitIndex_4909, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 162)) ;
                }
                var_operandList_4621.addAssignOperation (var_shiftedResult_7224  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 164)) ;
              }
            }
          }
        }
      }
    }
    enumerator_4667.gotoNextObject () ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_registerType_4252, var_accumulatedFieldStaticValues_4567  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 170)) ;
  UpEnumerator_operandIRList enumerator_7606 (var_operandList_4621) ;
  while (enumerator_7606.hasCurrentObject ()) {
    GGS_objectIR var_newResult_7689 ;
    {
    routine_getNewTempValue_3F__26__21_ (var_registerType_4252, ioArgument_ioTemporaries, var_newResult_7689, inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 172)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_7689, extensionGetter_type (var_newResult_7689, inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 175)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 176)), outArgument_outResult, GGS_llvmBinaryOperation::class_func_ior (SOURCE_FILE ("expression-register-value-from-slices.galgas", 178)), enumerator_7606.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-register-value-from-slices.galgas", 173)) ;
    }
    outArgument_outResult = var_newResult_7689 ;
    enumerator_7606.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mFixedSizeArrayType (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 46)) ;
  }
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mFixedSizeArrayType (), temp_3.readProperty_mElementTypeName () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 47)) ;
  }
  const GGS_fixedSizeArrayTypeDeclarationAST temp_4 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_4.readProperty_mSizeExpression ().ptr (), temp_5.readProperty_mFixedSizeArrayType (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 48)) ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_6 = this ;
  GGS_lstring var_rootNode_2359 = GGS_lstring::init_21__21_ (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)), temp_6.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_7.readProperty_mFixedSizeArrayType (), var_rootNode_2359 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_fixedSizeArrayTypeDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("anonymous $").add_operation (temp_0.readProperty_mFixedSizeArrayType ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_fixedSizeArrayTypeDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mFixedSizeArrayType ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayTypeDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                   GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                   GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                                   GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                   GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_elementType_4112 ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_0.readProperty_mElementTypeName (), var_elementType_4112, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 80)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4112.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 81)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 82)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4112.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 84)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mElementTypeName ().readProperty_location (), GGS_string ("an array element should be instanciable"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 85)) ;
    }
  }
  GGS_objectIR var_sizeExpressionIR_4631 ;
  {
  const GGS_fixedSizeArrayTypeDeclarationAST temp_7 = this ;
  const GGS_fixedSizeArrayTypeDeclarationAST temp_8 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_7.readProperty_mSizeExpression (), temp_8.readProperty_mSizeExpressionLocation (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 93)), var_sizeExpressionIR_4631, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 88)) ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_sizeExpressionIR_4631.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mSizeExpressionLocation (), GGS_string ("array size expression is a literal interger expression"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 97)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_bigint var_arraySize_4864 ;
    GGS_omnibusType joker_4849_1 ; // Joker input parameter
    var_sizeExpressionIR_4631.method_extractLiteralInteger (joker_4849_1, var_arraySize_4864, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 99)) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_12 = this ;
    GGS_lstring var_omnibusTypeDescriptionName_4951 = GGS_lstring::init_21__21_ (GGS_string ("[").add_operation (var_arraySize_4864.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GGS_string (" • "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (var_elementType_4112.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)), temp_12.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    const GGS_fixedSizeArrayTypeDeclarationAST temp_13 = this ;
    GGS_lstring var_llvmBaseTypeName_5097 = GGS_lstring::init_21__21_ (var_elementType_4112.readProperty_llvmBaseTypeName ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)).add_operation (var_arraySize_4864.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)), temp_13.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE) ;
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = ioArgument_ioContext.readProperty_mTypeMap ().getter_hasKey (var_omnibusTypeDescriptionName_4951.readProperty_string () COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 103)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GGS_omnibusType var_type_5350 ;
        extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), var_omnibusTypeDescriptionName_4951, var_type_5350, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 104)) ;
        {
        const GGS_fixedSizeArrayTypeDeclarationAST temp_15 = this ;
        extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_15.readProperty_mFixedSizeArrayType (), var_type_5350, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 105)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      GGS_constantMap var_constantMap_5583 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_16 = this ;
      var_constantMap_5583.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("count"), temp_16.readProperty_mFixedSizeArrayType ().readProperty_location (), inCompiler COMMA_HERE), var_arraySize_4864, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_omnibusTypeDescriptionName_4951, var_constantMap_5583, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 113)) ;
      }
      {
      extensionSetter_insertGetter (ioArgument_ioContext, var_omnibusTypeDescriptionName_4951, GGS_lstring::init_21__21_ (GGS_string ("count"), var_omnibusTypeDescriptionName_4951.readProperty_location (), inCompiler COMMA_HERE), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-fixed-size-array.galgas", 121)), GGS_propertyGetterKind::class_func_constantProperty (GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), var_arraySize_4864  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)) ;
      }
      GGS_constructorMap var_constructorMap_6254 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
      {
      var_constructorMap_6254.setter_insertKey (GGS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), GGS_constructorSignature::init (inCompiler COMMA_HERE), GGS_constructorValue::class_func_arrayValue (var_elementType_4112, var_arraySize_4864.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
      }
      GGS_string var_constructorName_6467 = GGS_string ("(") ;
      UpEnumerator_range enumerator_6520 (GGS_range (GGS_uint (uint32_t (0U)), var_arraySize_4864.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)))) ;
      while (enumerator_6520.hasCurrentObject ()) {
        var_constructorName_6467.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 131)) ;
        enumerator_6520.gotoNextObject () ;
      }
      var_constructorName_6467.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 133)) ;
      {
      var_constructorMap_6254.setter_insertKey (var_constructorName_6467.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), GGS_constructorSignature::init (inCompiler COMMA_HERE), GGS_constructorValue::class_func_arrayValue (var_elementType_4112, var_arraySize_4864.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4951, var_constructorMap_6254, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 135)) ;
      }
      GGS_omnibusTypeAttributes var_typeAttributes_6913 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 137)) ;
      GGS_omnibusType var_arrayType_7035 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_staticSubscript (var_elementType_4112, var_arraySize_4864  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 140)), var_typeAttributes_6913, var_omnibusTypeDescriptionName_4951.readProperty_string (), GGS_typeKind::class_func_staticArrayType (var_elementType_4112, var_arraySize_4864  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 143)), var_llvmBaseTypeName_5097.readProperty_string (), inCompiler COMMA_HERE) ;
      {
      const GGS_fixedSizeArrayTypeDeclarationAST temp_17 = this ;
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_17.readProperty_mFixedSizeArrayType (), var_arrayType_7035, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 146)) ;
      }
      {
      extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusTypeDescriptionName_4951, var_arrayType_7035, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 150)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMStaticArrayTypeDefinitionIR::init_21__21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_7035.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 156)), var_elementType_4112, var_arraySize_4864, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 155)) ;
      GGS_string var_assignValueToElements_5F_functionName_7900 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_7035, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 161)) ;
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21_ (var_assignValueToElements_5F_functionName_7900.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 163)), GGS_bool (false), GGS_bool (false), var_arrayType_7035, var_elementType_4112, var_arraySize_4864.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 168)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 162)) ;
      GGS_string var_assignmentFunctionLLVMName_8268 = function_assignmentOperatorFuncName (var_arrayType_7035, var_arrayType_7035, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 170)) ;
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_staticArrayTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_8268.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 172)), GGS_bool (false), GGS_bool (false), var_arrayType_7035, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 171)) ;
      const GGS_fixedSizeArrayTypeDeclarationAST temp_18 = this ;
      GGS_lstring var_key_8583 = function_assignmentOperatorKey (var_arrayType_7035, temp_18.readProperty_mFixedSizeArrayType ().readProperty_location (), var_arrayType_7035, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 178)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8583, GGS_fixedSizeArrayAssignmentOperatorUsage::init_21__21__21_ (var_elementType_4112, var_arraySize_4864.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)), var_assignValueToElements_5F_functionName_7900, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GGS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.readProperty_llvmBaseTypeName (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 187)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (Compiler * inCompiler,
                                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                                 const GGS_location & /* inErrorLocation */
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_omnibusType operand0 = GGS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMStaticArrayTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_0 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_1 = this ;
  const GGS_userLLVMStaticArrayTypeDefinitionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (temp_1.readProperty_mSize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GGS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@fixedSizeArrayAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_fixedSizeArrayAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GGS_omnibusType constinArgument_inTargetType,
                                                                      const GGS_string constinArgument_inTargetLLVMName,
                                                                      const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GGS_location constinArgument_inErrorLocation,
                                                                      const GGS_bool /* constinArgument_inTargetIsInitialized */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_arrayTypeName_10830 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 227)) ;
  const GGS_fixedSizeArrayAssignmentOperatorUsage temp_0 = this ;
  GGS_string var_elementTypeName_10878 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 228)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_11001__0 ;
      GGS_uint extractedValue_11001__1 ;
      GGS_objectIR extractedValue_11013_sourceValuePossibleReference_2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_11001__0, extractedValue_11001__1, extractedValue_11013_sourceValuePossibleReference_2) ;
      GGS_objectIR var_sourceValue_11063 = extractedValue_11013_sourceValuePossibleReference_2 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11063, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 232)) ;
      }
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_1 = this ;
      GGS_string var_s_11196 = GGS_string ("call void @").add_operation (temp_1.readProperty_mAssignValueToElements_5F_functionName ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)) ;
      var_s_11196.plusAssignOperation(GGS_string (" (").add_operation (var_arrayTypeName_10830, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)) ;
      var_s_11196.plusAssignOperation(GGS_string (", ").add_operation (var_elementTypeName_10878, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (extensionGetter_llvmName (var_sourceValue_11063, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      {
      GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      const GGS_fixedSizeArrayAssignmentOperatorUsage temp_3 = this ;
      temp_2.plusPlusAssignOperation (temp_3.readProperty_mAssignValueToElements_5F_functionName ()  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11196, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_11542__0 ;
      GGS_operandIRList extractedValue_11559_values_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_11542__0, extractedValue_11559_values_1) ;
      GGS_uint var_uniqueValue_11577 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 239)) ;
      UpEnumerator_operandIRList enumerator_11669 (extractedValue_11559_values_1) ;
      GGS_uint index_11664 (uint32_t (0)) ;
      while (enumerator_11669.hasCurrentObject ()) {
        GGS_objectIR var_sourceValue_11715 = enumerator_11669.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11715, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 242)) ;
        }
        GGS_string var_ptr_11829 = GGS_string ("%ptr.").add_operation (var_uniqueValue_11577.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)).add_operation (index_11664.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)) ;
        GGS_string var_s_11879 = var_ptr_11829.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_10830, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (var_arrayTypeName_10830, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (index_11664.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11879, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        }
        var_s_11879 = GGS_string ("store ").add_operation (var_elementTypeName_10878, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (extensionGetter_llvmName (var_sourceValue_11715, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_elementTypeName_10878, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)).add_operation (var_ptr_11829, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11879, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)) ;
        }
        enumerator_11669.gotoNextObject () ;
        index_11664.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 240)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_12281__0 ;
      GGS_operandIRList extractedValue_12298_values_1 ;
      GGS_uint extractedValue_12306__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_12281__0, extractedValue_12298_values_1, extractedValue_12306__2) ;
      GGS_uint var_uniqueValue_12319 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 251)) ;
      UpEnumerator_operandIRList enumerator_12411 (extractedValue_12298_values_1) ;
      GGS_uint index_12406 (uint32_t (0)) ;
      while (enumerator_12411.hasCurrentObject ()) {
        GGS_string var_ptr_12447 = GGS_string ("%ptr.").add_operation (var_uniqueValue_12319.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)).add_operation (index_12406.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)) ;
        GGS_string var_s_12497 = var_ptr_12447.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_10830, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (var_arrayTypeName_10830, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (index_12406.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12497, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        }
        var_s_12497 = GGS_string ("store ").add_operation (var_elementTypeName_10878, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (extensionGetter_llvmName (enumerator_12411.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_elementTypeName_10878, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)).add_operation (var_ptr_12447, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12497, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)) ;
        }
        enumerator_12411.gotoNextObject () ;
        index_12406.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_12900__0 ;
      GGS_uint extractedValue_12900__1 ;
      GGS_objectIR extractedValue_12900__2 ;
      GGS_uint extractedValue_12908_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_12900__0, extractedValue_12900__1, extractedValue_12900__2, extractedValue_12908_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_12923 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 260)) ;
      GGS_string var_s_13018 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_12923.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (extractedValue_12908_idx_3.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)) ;
      {
      GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      temp_4.plusPlusAssignOperation (var_assignmentFunctionLLVMName_12923  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13018, temp_4, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_13345__0 ;
      GGS_string extractedValue_13345__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_13345__0, extractedValue_13345__1) ;
      GGS_string var_assignmentFunctionLLVMName_13358 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 266)) ;
      GGS_string var_s_13453 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13358.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)) ;
      {
      GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      temp_5.plusPlusAssignOperation (var_assignmentFunctionLLVMName_13358  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13453, temp_5, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_13808__0 ;
      GGS_bigint extractedValue_13808__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_13808__0, extractedValue_13808__1) ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 272)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_13921__0 ;
      GGS_uint extractedValue_13921__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_13921__0, extractedValue_13921__1) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (literalString)"), fixItArray7  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 274)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_14038__0 ;
      GGS_sortedOperandIRList extractedValue_14038__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_14038__0, extractedValue_14038__1) ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray8  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 276)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_14156__0 ;
      GGS_string extractedValue_14156__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_14156__0, extractedValue_14156__1) ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray9  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 278)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_14254__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_14254__0) ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (null)"), fixItArray10  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 280)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (void)"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 282)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_14435__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_14435__0) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid fixed array assignment source (zero)"), fixItArray12  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 284)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_0 = this ;
  GGS_string var_arrayTypeName_15169 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 303)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_1 = this ;
  GGS_string var_elementTypeName_15229 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_arrayTypeName_15169, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (var_elementTypeName_15229, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)).add_operation (GGS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_15169, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (var_arrayTypeName_15169, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)).add_operation (GGS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_elementTypeName_15229, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GGS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (var_elementTypeName_15229, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GGS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)) ;
  const GGS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (temp_3.readProperty_mArraySize ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 320)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_staticArrayTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                      const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_staticArrayTypeAssignFunctionIR temp_0 = this ;
  GGS_string var_llvmTypeName_16793 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mFixedSizeArrayType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 336)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_1 = this ;
  GGS_arcAssignmentList var_arcAssignmentList_16852 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_1.readProperty_mFixedSizeArrayType ().ptr (), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  const GGS_staticArrayTypeAssignFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_2.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)).add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)) ;
  UpEnumerator_arcAssignmentList enumerator_17199 (var_arcAssignmentList_16852) ;
  while (enumerator_17199.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_17242 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17199.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 342)) ;
    GGS_string var_llvmVarName_17299 = GGS_string ("%arc.retain.").add_operation (enumerator_17199.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_17299, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)) ;
    UpEnumerator_uintlist enumerator_17575 (enumerator_17199.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_17575.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_17575.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 347)) ;
      enumerator_17575.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_17199.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 349)) ;
    GGS_string var_llvmLoadedVarName_17693 = var_llvmVarName_17299.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_17693, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17242, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_propertyTypeLLVMName_17242, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (var_llvmVarName_17299, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_17242, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_llvmLoadedVarName_17693, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)) ;
    enumerator_17199.gotoNextObject () ;
  }
  UpEnumerator_arcAssignmentList enumerator_18018 (var_arcAssignmentList_16852) ;
  while (enumerator_18018.hasCurrentObject ()) {
    GGS_string var_llvmVarName_18061 = GGS_string ("%arc.release.").add_operation (enumerator_18018.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 355)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_18061, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)) ;
    UpEnumerator_uintlist enumerator_18338 (enumerator_18018.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_18338.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_18338.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 359)) ;
      enumerator_18338.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_18018.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 361)) ;
    GGS_string var_propertyTypeLLVMName_18456 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18018.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)) ;
    GGS_string var_llvmLoadedVarName_18513 = var_llvmVarName_18061.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_18513, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18456, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_propertyTypeLLVMName_18456, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (var_llvmVarName_18061, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18456, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_llvmLoadedVarName_18513, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)) ;
    enumerator_18018.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %v = load ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_16793, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 406)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'llvmSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_llvmSeparatorLine (Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (";-------------------------------------------------------------------------") ;
  result_result.plusAssignOperation(GGS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 57)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GGS_string gOnceFunctionResult_llvmSeparatorLine ;

//--------------------------------------------------------------------------------------------------

GGS_string function_llvmSeparatorLine (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (nullptr,
                                                             releaseOnceFunctionResult_llvmSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmSeparatorLine [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmSeparatorLine (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'llvmTitleComment'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_llvmTitleComment (const GGS_string & constinArgument_inTitle,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outTitle ; // Returned variable
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 63)) ;
  result_outTitle.plusAssignOperation(GGS_string (";    ").add_operation (constinArgument_inTitle.getter_rightPadding (GGS_uint (uint32_t (114U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 64)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 64)) ;
  result_outTitle.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 65)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 65)) ;
//---
  return result_outTitle ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_llvmTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_llvmTitleComment (Compiler * inCompiler,
                                                              const cObjectArray & inEffectiveParameterArray,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_llvmTitleComment (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmTitleComment ("llvmTitleComment",
                                                                  functionWithGenericHeader_llvmTitleComment,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_llvmTitleComment) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'asSeparatorLine'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_asSeparatorLine (Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("@-------------------------------------------------------------------------") ;
  result_result.plusAssignOperation(GGS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 72)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_asSeparatorLine = false ;
static GGS_string gOnceFunctionResult_asSeparatorLine ;

//--------------------------------------------------------------------------------------------------

GGS_string function_asSeparatorLine (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_asSeparatorLine) {
    gOnceFunctionResult_asSeparatorLine = onceFunction_asSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_asSeparatorLine = true ;
  }
  return gOnceFunctionResult_asSeparatorLine ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_asSeparatorLine (void) {
  gOnceFunctionResult_asSeparatorLine.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_asSeparatorLine (nullptr,
                                                           releaseOnceFunctionResult_asSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_asSeparatorLine [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_asSeparatorLine (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_asSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_asSeparatorLine ("asSeparatorLine",
                                                                 functionWithGenericHeader_asSeparatorLine,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_asSeparatorLine) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'asTitleComment'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_asTitleComment (const GGS_string & constinArgument_inTitle,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outTitle ; // Returned variable
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 78)) ;
  result_outTitle.plusAssignOperation(GGS_string ("@    ").add_operation (constinArgument_inTitle.getter_rightPadding (GGS_uint (uint32_t (114U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 79)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 79)) ;
  result_outTitle.plusAssignOperation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 80)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 80)) ;
//---
  return result_outTitle ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_asTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_asTitleComment (Compiler * inCompiler,
                                                            const cObjectArray & inEffectiveParameterArray,
                                                            const GGS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_asTitleComment (operand0,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_asTitleComment ("asTitleComment",
                                                                functionWithGenericHeader_asTitleComment,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_asTitleComment) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'codeGeneration?currentDir?outputFile?eof?intermediateCode?userDefinedTypes?target?panicCodeType?panicLineType?interrupts?staticlistValues?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_codeGeneration_3F_currentDir_3F_outputFile_3F_eof_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (const GGS_string constinArgument_inCurrentDirectory,
                                                                                                                                                                                                          const GGS_string constinArgument_inSourceFileName,
                                                                                                                                                                                                          const GGS_location constinArgument_inEndOfSourceFileLocation,
                                                                                                                                                                                                          const GGS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                                                                                                                                                                                          const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                                                                                                                                                                                          const GGS_lstring constinArgument_inTargetName,
                                                                                                                                                                                                          const GGS_omnibusType constinArgument_inPanicCodeType,
                                                                                                                                                                                                          const GGS_omnibusType constinArgument_inPanicLineType,
                                                                                                                                                                                                          const GGS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                                                                                                                                                                                          const GGS_staticListInitializationMap constinArgument_inStaticListValueMap,
                                                                                                                                                                                                          const GGS_targetParameters constinArgument_inTargetParameters,
                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_timer var_generationTime_3935 = GGS_timer::class_func_start (SOURCE_FILE ("code-generation.galgas", 98)) ;
  GGS_string var_homeDir_3965 = GGS_string::class_func_homeDirectory (SOURCE_FILE ("code-generation.galgas", 99)).add_operation (GGS_string ("/omnibus-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 99)) ;
  GGS_string temp_0 ;
  const GalgasBool test_1 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("no-panic") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string::makeEmptyString () ;
  }
  GGS_string var_productDirectory_4076 = var_homeDir_3965.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 101)).add_operation (constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("code-generation.galgas", 103)).getter_replacing (GGS_string ("/"), GGS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 102)) ;
  GGS_string var_sourceDirectory_4266 = var_productDirectory_4076.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 104)) ;
  var_sourceDirectory_4266.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 105)) ;
  {
  routine_generateTarget_3F_currentDir_3F_productDirectory_3F_targetName_3F_targetParameters (constinArgument_inCurrentDirectory, var_productDirectory_4076, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters (), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 107)) ;
  }
  {
  routine_generateCodeFiles_3F_currentDir_3F_productDir_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (constinArgument_inCurrentDirectory, var_productDirectory_4076, constinArgument_inIntermediateCodeStruct, constinArgument_inUserLLVMTypeDefinitionListIR, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inStaticListValueMap, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 114)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      routine_print_3F_ (GGS_string ("** Code generation: ").add_operation (var_generationTime_3935.getter_string (SOURCE_FILE ("code-generation.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 127)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 127)) ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("code-generation.galgas", 130)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_timer var_scriptTime_5274 = GGS_timer::class_func_start (SOURCE_FILE ("code-generation.galgas", 131)) ;
      GGS_string temp_4 ;
      const GalgasBool test_5 = GGS_bool (gOption_omnibus_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        temp_4 = GGS_string ("run") ;
      }else if (GalgasBool::boolFalse == test_5) {
        temp_4 = GGS_string ("build") ;
      }
      GGS_string var_script_5302 = temp_4 ;
      GGS_string var_fullScript_5419 = GGS_string ("python3 ").add_operation (var_productDirectory_4076, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)).add_operation (var_script_5302, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)).add_operation (GGS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 133)) ;
      GGS_sint var_result_5499 = var_fullScript_5419.getter_system (SOURCE_FILE ("code-generation.galgas", 134)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_result_5499.objectCompare (GGS_sint (int32_t (0L)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GGS_string ("error during LLVM compilation or flashing"), fixItArray7  COMMA_SOURCE_FILE ("code-generation.galgas", 136)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (gOption_omnibus_5F_options_printPasses.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          routine_print_3F_ (GGS_string ("** Compilation script: ").add_operation (var_scriptTime_5274.getter_string (SOURCE_FILE ("code-generation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 139)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 139)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCodeFiles?currentDir?productDir?intermediateCode?userDefinedTypes?target?panicCodeType?panicLineType?interrupts?staticlistValues?targetParameters'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCodeFiles_3F_currentDir_3F_productDir_3F_intermediateCode_3F_userDefinedTypes_3F_target_3F_panicCodeType_3F_panicLineType_3F_interrupts_3F_staticlistValues_3F_targetParameters (const GGS_string constinArgument_inCurrentDirectory,
                                                                                                                                                                                                      const GGS_string constinArgument_inProductDirectory,
                                                                                                                                                                                                      const GGS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                                                                                                                                                                                      const GGS_userLLVMTypeDefinitionListIR constinArgument_inUserLLVMTypeDefinitionListIR,
                                                                                                                                                                                                      const GGS_lstring constinArgument_inTargetName,
                                                                                                                                                                                                      const GGS_omnibusType constinArgument_inPanicCodeType,
                                                                                                                                                                                                      const GGS_omnibusType constinArgument_inPanicLineType,
                                                                                                                                                                                                      const GGS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                                                                                                                                                                                      const GGS_staticListInitializationMap constinArgument_inStaticListValueMap,
                                                                                                                                                                                                      const GGS_targetParameters constinArgument_inTargetParameters,
                                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationAdds var_generationAdds_6906 = GGS_generationAdds::init (inCompiler COMMA_HERE) ;
  var_generationAdds_6906.mProperty_mStaticEntityMap = constinArgument_inIntermediateCodeStruct.readProperty_mStaticEntityMap () ;
  GGS_generationContext var_generationContext_7030 = GGS_generationContext::init_21__21__21__21__21_ (constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inTargetParameters.readProperty_mNopInstructionStringInLLVM ().readProperty_string (), constinArgument_inIntermediateCodeStruct.readProperty_mGlobalTaskVariableList (), constinArgument_inAvailableInterruptMap, inCompiler COMMA_HERE) ;
  GGS_string var_sourceDirectory_7247 = constinArgument_inProductDirectory.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inTargetParameters.readProperty_mHandleDynamicArray ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_generationAdds_6906.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("void @arc.retain (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 180)) ;
      var_generationAdds_6906.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("void @arc.release (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 181)) ;
      var_generationAdds_6906.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("%ptrtype @arc.insulate (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
      GGS_string var_insertFunction_7709 = GGS_string ("%ptrtype @arc.insert.at.index ").add_operation (GGS_string ("(%ptrtype %inPointer, i32 %inIndex, i32 %inElementSize, %ptrtype* %outElementPtr)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 183)) ;
      var_generationAdds_6906.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (var_insertFunction_7709  COMMA_SOURCE_FILE ("code-generation.galgas", 185)) ;
      var_generationAdds_6906.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("i32 @arc.length (%ptrtype %inPointer)")  COMMA_SOURCE_FILE ("code-generation.galgas", 186)) ;
    }
  }
  GGS_string var_asCode_8117 = function_asTitleComment (GGS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
  GGS_string var_asFileContents_8173 = GGS_string::makeEmptyString () ;
  UpEnumerator_lstringlist enumerator_8200 (constinArgument_inTargetParameters.readProperty_m_5F_S_5F_definitionFiles ()) ;
  while (enumerator_8200.hasCurrentObject ()) {
    var_asFileContents_8173.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)).add_operation (enumerator_8200.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 192)) ;
    enumerator_8200.gotoNextObject () ;
  }
  GGS_string var_x_8409 = var_asFileContents_8173.getter_replacing (GGS_string ("!FUNC!"), function_llvmNameForFunction (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 197)) ;
  var_asCode_8117.plusAssignOperation(var_x_8409.getter_replacing (GGS_string ("!ISR!"), function_llvmNameForSectionInterrupt (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 198)) ;
  var_asCode_8117.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 199)) ;
  GGS_string var_llvmCode_8649 = function_llvmTitleComment (GGS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 201)) ;
  GGS_string var_targetLLVMcode_8709 = GGS_string::makeEmptyString () ;
  UpEnumerator_lstringlist enumerator_8736 (constinArgument_inTargetParameters.readProperty_m_5F_LL_5F_definitionFiles ()) ;
  while (enumerator_8736.hasCurrentObject ()) {
    var_targetLLVMcode_8709.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)).add_operation (enumerator_8736.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 204)) ;
    enumerator_8736.gotoNextObject () ;
  }
  var_llvmCode_8649.plusAssignOperation(var_targetLLVMcode_8709.getter_replacing (GGS_string ("!FUNC!"), function_llvmNameForFunction (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 209)) ;
  var_llvmCode_8649.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 210)) ;
  {
  routine_declareLLVMTypes_3F__26_ (constinArgument_inUserLLVMTypeDefinitionListIR, var_llvmCode_8649, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 212)) ;
  }
  UpEnumerator_driverListIR enumerator_9260 (constinArgument_inIntermediateCodeStruct.readProperty_mDriverList ()) ;
  const bool bool_1 = true ;
  if (enumerator_9260.hasCurrentObject () && bool_1) {
    var_llvmCode_8649.plusAssignOperation(function_llvmTitleComment (GGS_string ("Driver variable definitions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 215)) ;
    while (enumerator_9260.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVMDriverVariableDefinition (enumerator_9260.current (HERE), var_llvmCode_8649, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
      enumerator_9260.gotoNextObject () ;
    }
    var_llvmCode_8649.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 217)) ;
  }
  extensionMethod_generateLLVMcode (constinArgument_inIntermediateCodeStruct.readProperty_mControlRegisterGroupArrayList (), var_llvmCode_8649, constinArgument_inTargetParameters.readProperty_mPointerSize (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
  UpEnumerator_globalSyncInstanceMapIR enumerator_9755 (constinArgument_inIntermediateCodeStruct.readProperty_mGlobalSyncInstanceMap ()) ;
  const bool bool_2 = true ;
  if (enumerator_9755.hasCurrentObject () && bool_2) {
    var_llvmCode_8649.plusAssignOperation(function_llvmTitleComment (GGS_string ("Global synchronization tool instances"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 223)) ;
    while (enumerator_9755.hasCurrentObject () && bool_2) {
      extensionMethod_generateLLVM (enumerator_9755.current (HERE), var_llvmCode_8649, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 224)) ;
      enumerator_9755.gotoNextObject () ;
    }
    var_llvmCode_8649.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 225)) ;
  }
  extensionMethod_generateLLVMForStaticLists (constinArgument_inStaticListValueMap, constinArgument_inIntermediateCodeStruct.readProperty_mStaticArrayMapForIntermediate (), var_llvmCode_8649, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 228)) ;
  extensionMethod_generateLLVMDriverCode (constinArgument_inIntermediateCodeStruct.readProperty_mDriverList (), var_llvmCode_8649, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 230)) ;
  extensionMethod_llvmRoutineGeneration (constinArgument_inIntermediateCodeStruct.readProperty_mRoutineListIR (), var_llvmCode_8649, var_generationContext_7030, var_generationAdds_6906, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 232)) ;
  GGS_string var_undefinedInterruptString_10513 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 240)).add_operation (constinArgument_inTargetParameters.readProperty_mUndefinedInterruptHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 238)) ;
  GGS_string var_XTRInterruptHandlerString_10689 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 244)).add_operation (constinArgument_inTargetParameters.readProperty_mXtrInterruptHandler ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 242)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.readProperty_mInterruptMapIR (), var_llvmCode_8649, var_asCode_8117, var_undefinedInterruptString_10513, var_XTRInterruptHandlerString_10689, var_generationContext_7030, var_generationAdds_6906, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 246)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.readProperty_mExternProcedureMapIR (), var_llvmCode_8649, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 255)) ;
  GGS_primitiveAndServiceIRlist temp_3 = GGS_primitiveAndServiceIRlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 256)) ;
  GGS_primitiveAndServiceIRlist var_primitiveAndServiceList_11240 = temp_3 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_generationAdds_6906.readProperty_mUsesGuards ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_string var_waitForGuardChange_11372 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 259)) ;
      var_primitiveAndServiceList_11240.addAssignOperation (function_llvmNameForServiceCall (var_waitForGuardChange_11372, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 261)), function_llvmNameForServiceImplementation (var_waitForGuardChange_11372, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)), GGS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 260)) ;
      var_generationAdds_6906.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (GGS_string ("i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11372, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265))  COMMA_SOURCE_FILE ("code-generation.galgas", 264)) ;
    }
  }
  GGS_sectionIRlist temp_5 = GGS_sectionIRlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 268)) ;
  GGS_sectionIRlist var_sectionIRlist_11822 = temp_5 ;
  UpEnumerator_routineListIR enumerator_11884 (constinArgument_inIntermediateCodeStruct.readProperty_mRoutineListIR ()) ;
  while (enumerator_11884.hasCurrentObject ()) {
    callExtensionMethod_svcDeclarationGeneration ((cPtr_abstractRoutineIR *) enumerator_11884.current (HERE).readProperty_mRoutine ().ptr (), var_primitiveAndServiceList_11240, var_sectionIRlist_11822, var_generationAdds_6906, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 270)) ;
    enumerator_11884.gotoNextObject () ;
  }
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.readProperty_mTaskMapIR (), var_llvmCode_8649, var_generationContext_7030, var_generationAdds_6906, var_primitiveAndServiceList_11240, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 277)) ;
  {
  routine_generatePrimitiveAndServiceDispatcher_3F__3F__26__3F__3F_targetParameters (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string (), var_asCode_8117, var_primitiveAndServiceList_11240, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 284)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 292)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      routine_generatePanicCode_26__3F_generationContext_26_generationAdds (var_llvmCode_8649, var_generationContext_7030, var_generationAdds_6906, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 293)) ;
      }
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_generationAdds_6906.readProperty_mNeedsDynamicMemoryAllocation ().boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_sectionIRlist_11822.addAssignOperation (function_llvmNameForSectionCall (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 302)), function_llvmNameForSectionImplementation (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 303)), GGS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 301)) ;
      var_sectionIRlist_11822.addAssignOperation (function_llvmNameForSectionCall (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 306)), function_llvmNameForSectionImplementation (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 307)), GGS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 305)) ;
    }
  }
  {
  routine_generateSectionDispatcher_3F__3F__3F_targetParameters_26__3F_ (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string (), constinArgument_inTargetParameters, var_asCode_8117, var_sectionIRlist_11822, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 310)) ;
  }
  var_llvmCode_8649.plusAssignOperation(function_llvmTitleComment (GGS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 318)) ;
  UpEnumerator_stringset enumerator_13523 (var_generationAdds_6906.readProperty_mExternFunctionDeclarationSet ()) ;
  while (enumerator_13523.hasCurrentObject ()) {
    var_llvmCode_8649.plusAssignOperation(GGS_string ("declare ").add_operation (enumerator_13523.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 320)) ;
    enumerator_13523.gotoNextObject () ;
  }
  var_llvmCode_8649.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 322)) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::greaterThan, var_generationAdds_6906.readProperty_mStaticEntityMap ().readProperty_mStaticStringMap ().getter_count (SOURCE_FILE ("code-generation.galgas", 324)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_llvmCode_8649.plusAssignOperation(function_llvmTitleComment (GGS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 325)) ;
      UpEnumerator_staticStringMap enumerator_13835 (var_generationAdds_6906.readProperty_mStaticEntityMap ().readProperty_mStaticStringMap ()) ;
      while (enumerator_13835.hasCurrentObject ()) {
        GGS_string var_lgStr_13908 = enumerator_13835.current_lkey (HERE).readProperty_string ().getter_utf_38_Length (SOURCE_FILE ("code-generation.galgas", 327)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)).getter_string (SOURCE_FILE ("code-generation.galgas", 327)) ;
        var_llvmCode_8649.plusAssignOperation(function_literalCharacterArrayName (enumerator_13835.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)).add_operation (GGS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
        var_llvmCode_8649.plusAssignOperation(var_lgStr_13908.add_operation (GGS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (enumerator_13835.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (GGS_string ("\\00\", align 1\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 329)) ;
        var_llvmCode_8649.plusAssignOperation(function_literalStringName (enumerator_13835.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 330)).add_operation (GGS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 330)) ;
        var_llvmCode_8649.plusAssignOperation(var_lgStr_13908.add_operation (GGS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)).add_operation (var_lgStr_13908, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)).add_operation (GGS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 331)) ;
        var_llvmCode_8649.plusAssignOperation(function_literalCharacterArrayName (enumerator_13835.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)).add_operation (GGS_string (", i32 0, i32 0), align 4\n\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 332)) ;
        enumerator_13835.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::greaterThan, var_generationAdds_6906.readProperty_mStaticEntityMap ().readProperty_mGlobalStructuredConstantList ().getter_count (SOURCE_FILE ("code-generation.galgas", 336)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_llvmCode_8649.plusAssignOperation(function_llvmTitleComment (GGS_string ("Global structured constants"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 337)) ;
      UpEnumerator_globalStructuredConstantList enumerator_14615 (var_generationAdds_6906.readProperty_mStaticEntityMap ().readProperty_mGlobalStructuredConstantList ()) ;
      GGS_uint index_14604 (uint32_t (0)) ;
      while (enumerator_14615.hasCurrentObject ()) {
        var_llvmCode_8649.plusAssignOperation(GGS_string ("@gconst.").add_operation (index_14604.getter_string (SOURCE_FILE ("code-generation.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)).add_operation (GGS_string (" = private unnamed_addr constant "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14615.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 339)) ;
        var_llvmCode_8649.plusAssignOperation(GGS_string (" ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 340)) ;
        UpEnumerator_operandIRList enumerator_14833 (enumerator_14615.current_mOperandIRList (HERE)) ;
        while (enumerator_14833.hasCurrentObject ()) {
          var_llvmCode_8649.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_14833.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)).add_operation (extensionGetter_llvmName (enumerator_14833.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 342)) ;
          enumerator_14833.gotoNextObject () ;
          if (enumerator_14833.hasCurrentObject ()) {
            var_llvmCode_8649.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 343)) ;
          }
        }
        var_llvmCode_8649.plusAssignOperation(GGS_string ("]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
        enumerator_14615.gotoNextObject () ;
        index_14604.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 338)) ;
      }
      var_llvmCode_8649.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 347)) ;
    }
  }
  var_llvmCode_8649.plusAssignOperation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 350)) ;
  GGS_bool joker_15203 ; // Joker input parameter
  var_llvmCode_8649.method_writeToFileWhenDifferentContents (var_sourceDirectory_7247.add_operation (GGS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)), joker_15203, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)) ;
  var_asCode_8117.plusAssignOperation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 353)) ;
  GGS_bool joker_15375 ; // Joker input parameter
  var_asCode_8117.method_writeToFileWhenDifferentContents (var_sourceDirectory_7247.add_operation (GGS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 354)), joker_15375, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 354)) ;
  GGS_string var_s_30__15483 = GGS_string::makeEmptyString () ;
  UpEnumerator_lstringlist enumerator_15498 (constinArgument_inTargetParameters.readProperty_m_5F_C_5F_definitionFiles ()) ;
  while (enumerator_15498.hasCurrentObject ()) {
    var_s_30__15483.plusAssignOperation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.readProperty_string ().add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)).add_operation (enumerator_15498.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 358)) ;
    enumerator_15498.gotoNextObject () ;
  }
  GGS_string var_s_31__15695 = var_s_30__15483.getter_replacing (GGS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.readProperty_mTaskMapIR ().getter_count (SOURCE_FILE ("code-generation.galgas", 363)).getter_string (SOURCE_FILE ("code-generation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 363)) ;
  GGS_string var_s_32__15790 = var_s_31__15695.getter_replacing (GGS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.readProperty_mMaxBranchOfOnInstructions ().getter_string (SOURCE_FILE ("code-generation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 364)) ;
  GGS_string var_s_33__15896 = var_s_32__15790.getter_replacing (GGS_string ("!FUNC!"), function_llvmNameForFunction (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 365)) ;
  GGS_string var_s_34__15963 = var_s_33__15896.getter_replacing (GGS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)) ;
  GGS_string var_s_35__16060 = var_s_34__15963.getter_replacing (GGS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)) ;
  GGS_string var_s_36__16137 = var_s_35__16060.getter_replacing (GGS_string ("!SECTIONIMPLEMENTATION!"), function_llvmNameForSectionImplementation (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)) ;
  GGS_string var_cppCode_16234 = var_s_36__16137.getter_replacing (GGS_string ("!SECTIONCALL!"), function_llvmNameForSectionCall (GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)) ;
  GGS_bool joker_16642 ; // Joker input parameter
  var_cppCode_16234.method_writeToFileWhenDifferentContents (var_sourceDirectory_7247.add_operation (GGS_string ("/src.cpp"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)), joker_16642, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 375)) ;
  GGS_string var_jsonStr_16733 = GGS_string ("{\n") ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mSystemStackSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 379)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 379)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mStackedUserRegisterOnInterruptByteSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 380)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mServicePushedRegisterByteSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 382)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"section-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.readProperty_mTargetParameters ().readProperty_mSectionPushedRegisterByteSize ().readProperty_bigint ().getter_string (SOURCE_FILE ("code-generation.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 383)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 385)) ;
  UpEnumerator_taskMapIR enumerator_17411 (constinArgument_inIntermediateCodeStruct.readProperty_mTaskMapIR ()) ;
  while (enumerator_17411.hasCurrentObject ()) {
    var_jsonStr_16733.plusAssignOperation(GGS_string ("\n    \"").add_operation (enumerator_17411.current (HERE).readProperty_lkey ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)).add_operation (GGS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)).add_operation (enumerator_17411.current (HERE).readProperty_mStackSize ().getter_string (SOURCE_FILE ("code-generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 387)) ;
    enumerator_17411.gotoNextObject () ;
    if (enumerator_17411.hasCurrentObject ()) {
      var_jsonStr_16733.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 388)) ;
    }
  }
  var_jsonStr_16733.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 390)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 391)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 393)) ;
  UpEnumerator_primitiveAndServiceIRlist enumerator_17675 (var_primitiveAndServiceList_11240) ;
  const bool bool_10 = true ;
  if (enumerator_17675.hasCurrentObject () && bool_10) {
    while (enumerator_17675.hasCurrentObject () && bool_10) {
      var_jsonStr_16733.plusAssignOperation(GGS_string ("\n    \"").add_operation (enumerator_17675.current_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 395)) ;
      enumerator_17675.gotoNextObject () ;
      if (enumerator_17675.hasCurrentObject () && bool_10) {
        var_jsonStr_16733.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 396)) ;
      }
    }
    var_jsonStr_16733.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 397)) ;
  }
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 399)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 401)) ;
  UpEnumerator_sectionIRlist enumerator_17912 (var_sectionIRlist_11822) ;
  const bool bool_11 = true ;
  if (enumerator_17912.hasCurrentObject () && bool_11) {
    while (enumerator_17912.hasCurrentObject () && bool_11) {
      var_jsonStr_16733.plusAssignOperation(GGS_string ("\n    \"").add_operation (enumerator_17912.current (HERE).readProperty_mSectionImplementationName (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 403)) ;
      enumerator_17912.gotoNextObject () ;
      if (enumerator_17912.hasCurrentObject () && bool_11) {
        var_jsonStr_16733.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 404)) ;
      }
    }
    var_jsonStr_16733.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 405)) ;
  }
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 407)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 409)) ;
  GGS_bool var_first_18125 = GGS_bool (true) ;
  UpEnumerator_interruptMapIR enumerator_18162 (constinArgument_inIntermediateCodeStruct.readProperty_mInterruptMapIR ()) ;
  while (enumerator_18162.hasCurrentObject ()) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = var_first_18125.boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_first_18125 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      var_jsonStr_16733.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 415)) ;
    }
    GGS_string temp_13 ;
    const GalgasBool test_14 = GGS_bool (ComparisonKind::equal, enumerator_18162.current_mMode (HERE).objectCompare (GGS_mode::class_func_serviceMode (SOURCE_FILE ("code-generation.galgas", 417)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      temp_13 = function_llvmNameForServiceInterrupt (enumerator_18162.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 418)).readProperty_string () ;
    }else if (GalgasBool::boolFalse == test_14) {
      temp_13 = function_llvmNameForSectionInterrupt (enumerator_18162.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 420)) ;
    }
    GGS_string var_interruptImplementationName_18300 = temp_13 ;
    var_jsonStr_16733.plusAssignOperation(GGS_string ("\n    \"").add_operation (var_interruptImplementationName_18300, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 422)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 422)) ;
    enumerator_18162.gotoNextObject () ;
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 424)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      UpEnumerator_availableInterruptMap enumerator_18639 (constinArgument_inAvailableInterruptMap) ;
      while (enumerator_18639.hasCurrentObject ()) {
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = constinArgument_inIntermediateCodeStruct.readProperty_mInterruptMapIR ().getter_hasKey (enumerator_18639.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("code-generation.galgas", 426)).operator_not (SOURCE_FILE ("code-generation.galgas", 426)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            switch (enumerator_18639.current_mInterruptionPanicCode (HERE).enumValue ()) {
            case GGS_interruptionPanicCode::Enumeration::invalid:
              break ;
            case GGS_interruptionPanicCode::Enumeration::enum_noCode:
              break ;
            case GGS_interruptionPanicCode::Enumeration::enum_code:
              {
                GGS_lbigint extractedValue_18827__0 ;
                enumerator_18639.current_mInterruptionPanicCode (HERE).getAssociatedValuesFor_code (extractedValue_18827__0) ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = var_first_18125.boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_first_18125 = GGS_bool (false) ;
                  }
                }
                if (GalgasBool::boolFalse == test_17) {
                  var_jsonStr_16733.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 433)) ;
                }
                var_jsonStr_16733.plusAssignOperation(GGS_string ("\n    \"").add_operation (function_llvmNameForSectionInterrupt (enumerator_18639.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 435)) ;
              }
              break ;
            }
          }
        }
        enumerator_18639.gotoNextObject () ;
      }
    }
  }
  var_jsonStr_16733.plusAssignOperation(GGS_string ("\n  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 440)) ;
  var_jsonStr_16733.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 442)) ;
  GGS_bool joker_19204 ; // Joker input parameter
  var_jsonStr_16733.method_writeToFileWhenDifferentContents (var_sourceDirectory_7247.add_operation (GGS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 443)), joker_19204, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 443)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue?self?readAccess?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?variableName?llvmName?type?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue_3F_self_3F_readAccess_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F_variableName_3F_llvmName_3F_type_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                              const GGS_bool constinArgument_inIsReadAccess,
                                                                                                                                                                                                                              const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                              const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                              const GGS_mode constinArgument_inMode,
                                                                                                                                                                                                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                              GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                              GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                              GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                              GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                              const GGS_lstring constinArgument_inVariableName,
                                                                                                                                                                                                                              const GGS_string constinArgument_inLLVMName,
                                                                                                                                                                                                                              const GGS_omnibusType constinArgument_inVariableType,
                                                                                                                                                                                                                              const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                                                                              GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_8822 = constinArgument_inVariableType ;
  GGS_string var_currentLLVMName_8857 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    {
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inIsReadAccess.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          {
          GGS_objectIR joker_9023 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9023, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        {
        GGS_objectIR joker_9109 ; // Joker input parameter
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9109, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 222)) ;
        }
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_9147_name_0 ;
      GGS_LValueOperandAST extractedValue_9170_nextOperand_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_9147_name_0, extractedValue_9170_nextOperand_1) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inIsReadAccess.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          GGS_objectIR joker_9284 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9284, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 226)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        {
        GGS_objectIR joker_9374 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9374, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 228)) ;
        }
      }
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, var_currentType_8822, var_currentLLVMName_8857, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9147_name_0, extractedValue_9170_nextOperand_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 230)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_9826_indexExpression_0 ;
      GGS_location extractedValue_9842_endOfIndex_1 ;
      GGS_bool extractedValue_9853_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_9874_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_9826_indexExpression_0, extractedValue_9842_endOfIndex_1, extractedValue_9853_checkIndexExpression_2, extractedValue_9874_nextOperand_3) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = constinArgument_inIsReadAccess.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          GGS_objectIR joker_9988 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9988, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 247)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        GGS_objectIR joker_10078 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10078, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
        }
      }
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_8822, var_currentLLVMName_8857, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9826_indexExpression_0, extractedValue_9842_endOfIndex_1, extractedValue_9853_checkIndexExpression_2, extractedValue_9874_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_8822, var_currentLLVMName_8857, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR??'
//
//--------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                 GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                 GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                 const GGS_mode constinArgument_inMode,
                                                                                                                                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                 const GGS_lstring constinArgument_inPropertyName,
                                                                                                                                                                                 const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertySetterMap var_propertySetterMap_11454 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
  GGS_propertySetterKind var_propertyAccess_11594 ;
  GGS_propertyVisibility joker_11566 ; // Joker input parameter
  var_propertySetterMap_11454.method_searchKey (constinArgument_inPropertyName, joker_11566, var_propertyAccess_11594, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)) ;
  switch (var_propertyAccess_11594.enumValue ()) {
  case GGS_propertySetterKind::Enumeration::invalid:
    break ;
  case GGS_propertySetterKind::Enumeration::enum_computedProperty:
    {
      GGS_unifiedTypeMapEntry extractedValue_11660__0 ;
      GGS_routineLLVMNameDict extractedValue_11660__1 ;
      GGS_routineLLVMNameDict extractedValue_11660__2 ;
      var_propertyAccess_11594.getAssociatedValuesFor_computedProperty (extractedValue_11660__0, extractedValue_11660__1, extractedValue_11660__2) ;
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.readProperty_location (), GGS_string ("a computed property cannot be used here"), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertySetterKind::Enumeration::enum_storedProperty:
    {
      GGS_omnibusType extractedValue_11811_propertyType_0 ;
      GGS_uint extractedValue_11830_index_1 ;
      var_propertyAccess_11594.getAssociatedValuesFor_storedProperty (extractedValue_11811_propertyType_0, extractedValue_11830_index_1) ;
      GGS_string var_newLLVMvariable_11880 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_11880, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_11880, extractedValue_11830_index_1, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 297)) ;
      }
      ioArgument_ioCurrentType = extractedValue_11811_propertyType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_11880 ;
      {
      routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 306)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccess?self&&?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR????'
//
//--------------------------------------------------------------------------------------------------

void routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                      GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                                      GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                      const GGS_expressionAST constinArgument_inIndexExpression,
                                                                                                                                                                                      const GGS_location constinArgument_inEndOfIndex,
                                                                                                                                                                                      const GGS_bool constinArgument_inCheckIndexExpression,
                                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inNextOperand,
                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GGS_subscript::Enumeration::invalid:
    break ;
  case GGS_subscript::Enumeration::enum_noSubscript:
    {
      GenericArray <FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)).add_operation (GGS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 344)) ;
    }
    break ;
  case GGS_subscript::Enumeration::enum_literalString:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GGS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_subscript::Enumeration::enum_staticSubscript:
    {
      GGS_omnibusType extractedValue_13765_elementType_0 ;
      GGS_bigint extractedValue_13785_arraySize_1 ;
      ioArgument_ioCurrentType.readProperty_subscript ().getAssociatedValuesFor_staticSubscript (extractedValue_13765_elementType_0, extractedValue_13785_arraySize_1) ;
      GGS_objectIR var_indexIR_14273 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_13785_arraySize_1, extractedValue_13765_elementType_0, ioArgument_ioInstructionGenerationList, var_indexIR_14273, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 351)) ;
      }
      GGS_string var_newLLVMvariable_14328 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14328, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_13765_elementType_0, var_newLLVMvariable_14328, var_indexIR_14273, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 369)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13765_elementType_0 ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_14328 ;
      {
      routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 378)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue?self?routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR?!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__21_ (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                      const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                      const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                      const GGS_mode constinArgument_inMode,
                                                                                                                                                                      GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                      GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                      GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                      GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                      GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                      const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                      GGS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GGS_omnibusType var_currentType_15708 = constinArgument_inSelfType ;
  GGS_string var_currentLLVMName_15739 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 411)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_15840_name_0 ;
      GGS_LValueOperandAST extractedValue_15863_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_15840_name_0, extractedValue_15863_next_1) ;
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, var_currentType_15708, var_currentLLVMName_15739, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_15840_name_0, extractedValue_15863_next_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_16304_indexExpression_0 ;
      GGS_location extractedValue_16320_endOfIndex_1 ;
      GGS_bool extractedValue_16331_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_16352_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_16304_indexExpression_0, extractedValue_16320_endOfIndex_1, extractedValue_16331_checkIndexExpression_2, extractedValue_16352_nextOperand_3) ;
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, var_currentType_15708, var_currentLLVMName_15739, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_16304_indexExpression_0, extractedValue_16320_endOfIndex_1, extractedValue_16331_checkIndexExpression_2, extractedValue_16352_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GGS_LValueRepresentation::init_21__21_ (var_currentType_15708, var_currentLLVMName_15739, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand?self&&??routineAttributes?context?mode&temporary&staticEntityMap&variableMap&alloca&instructionListIR'
//
//--------------------------------------------------------------------------------------------------

void routine_handleNextOperand_3F_self_26__26__3F__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                          GGS_omnibusType & ioArgument_ioCurrentType,
                                                                                                                                                                          GGS_string & ioArgument_ioCurrentLLVMName,
                                                                                                                                                                          const GGS_LValueOperandAST constinArgument_inOperand,
                                                                                                                                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                          const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                          const GGS_mode constinArgument_inMode,
                                                                                                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GGS_LValueOperandAST::Enumeration::invalid:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_noOperand:
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_property:
    {
      GGS_lstring extractedValue_17668_name_0 ;
      GGS_LValueOperandAST extractedValue_17691_next_1 ;
      constinArgument_inOperand.getAssociatedValuesFor_property (extractedValue_17668_name_0, extractedValue_17691_next_1) ;
      {
      routine_handlePropertyAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_17668_name_0, extractedValue_17691_next_1, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 471)) ;
      }
    }
    break ;
  case GGS_LValueOperandAST::Enumeration::enum_arrayAccess:
    {
      GGS_expressionAST extractedValue_18136_indexExpression_0 ;
      GGS_location extractedValue_18152_endOfIndex_1 ;
      GGS_bool extractedValue_18163_checkIndexExpression_2 ;
      GGS_LValueOperandAST extractedValue_18184_nextOperand_3 ;
      constinArgument_inOperand.getAssociatedValuesFor_arrayAccess (extractedValue_18136_indexExpression_0, extractedValue_18152_endOfIndex_1, extractedValue_18163_checkIndexExpression_2, extractedValue_18184_nextOperand_3) ;
      {
      routine_handleArrayAccess_3F_self_26__26__3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__3F__3F__3F_ (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_18136_indexExpression_0, extractedValue_18152_endOfIndex_1, extractedValue_18163_checkIndexExpression_2, extractedValue_18184_nextOperand_3, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 487)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntegerInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_noteNode (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntegerInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext /* constinArgument_inContext */,
                                                                   const GGS_mode /* constinArgument_inMode */,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntegerInExpressionAST temp_0 = this ;
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)), temp_0.readProperty_mLiteralInteger ().readProperty_bigint ()  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_letInstructionWithAssignmentAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_letInstructionWithAssignmentAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  const GGS_letInstructionWithAssignmentAST temp_3 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@letInstructionWithAssignmentAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_letInstructionWithAssignmentAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                               const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GGS_semanticContext constinArgument_inContext,
                                                                               const GGS_mode constinArgument_inMode,
                                                                               GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GGS_allocaList & ioArgument_ioAllocaList,
                                                                               GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_letInstructionWithAssignmentAST temp_0 = this ;
  GGS_omnibusType temp_1 ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    const GGS_letInstructionWithAssignmentAST temp_3 = this ;
    temp_1 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }
  GGS_omnibusType var_targetType_3082 = temp_1 ;
  GGS_objectIR var_expressionResult_3648 ;
  const GGS_letInstructionWithAssignmentAST temp_4 = this ;
  callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3082, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3648, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3648, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  }
  const GGS_letInstructionWithAssignmentAST temp_5 = this ;
  GGS_objectIR var_result_3810 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_3648, var_targetType_3082, temp_5.readProperty_mConstantName ().readProperty_location (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).operator_not (SOURCE_FILE ("instruction-let.galgas", 99)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_letInstructionWithAssignmentAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mConstantName ().readProperty_location (), extensionGetter_omnibusTypeDescriptionName (var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).add_operation (GGS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)), fixItArray8  COMMA_SOURCE_FILE ("instruction-let.galgas", 100)) ;
      var_result_3810.drop () ; // Release error dropped variable
    }
  }
  const GGS_letInstructionWithAssignmentAST temp_9 = this ;
  const GGS_letInstructionWithAssignmentAST temp_10 = this ;
  GGS_lstring var_omnibusName_4229 = GGS_lstring::init_21__21_ (temp_9.readProperty_mConstantName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-let.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), temp_10.readProperty_mConstantName ().readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_omnibusName_4229.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), extensionGetter_type (var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), function_llvmNameForLocalVariable (var_omnibusName_4229.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      }
    }
  }
  {
  const GGS_letInstructionWithAssignmentAST temp_12 = this ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_12.readProperty_mConstantName (), GGS_bool (false), extensionGetter_type (var_result_3810, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_omnibusName_4229, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@freeStringIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_freeStringIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_0.readProperty_mString (), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 21)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@freeStringIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_freeStringIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                        GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_freeStringIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusAssignOperation(temp_0.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-free-string.galgas", 30)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@getUniversalPropertyReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_getUniversalPropertyReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getUniversalPropertyReferenceIR temp_0 = this ;
  GGS_string var_llvmType_969 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 29)) ;
  const GGS_getUniversalPropertyReferenceIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mElementLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)) ;
  const GGS_getUniversalPropertyReferenceIR temp_2 = this ;
  const GGS_getUniversalPropertyReferenceIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_llvmType_969.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (var_llvmType_969, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (temp_2.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (temp_3.readProperty_mPropertyIndex ().getter_string (SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)) ;
  const GGS_getUniversalPropertyReferenceIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typedConstantCallAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                             GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 46)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_2160 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_2160.hasCurrentObject ()) {
    switch (enumerator_2160.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_2299_indexExpression_0 ;
        GGS_location extractedValue_2316__1 ;
        GGS_bool extractedValue_2316__2 ;
        enumerator_2160.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_2299_indexExpression_0, extractedValue_2316__1, extractedValue_2316__2) ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2299_indexExpression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 53)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_2427__0 ;
        GGS_effectiveArgumentListAST extractedValue_2455_arguments_1 ;
        GGS_location extractedValue_2465__2 ;
        enumerator_2160.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_2427__0, extractedValue_2455_arguments_1, extractedValue_2465__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_2505 (extractedValue_2455_arguments_1) ;
        while (enumerator_2505.hasCurrentObject ()) {
          switch (enumerator_2505.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_2615__0 ;
              GGS_lstring extractedValue_2626_typeName_1 ;
              GGS_lstring extractedValue_2635__2 ;
              enumerator_2505.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_2615__0, extractedValue_2626_typeName_1, extractedValue_2635__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_2626_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_2626_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 60)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_2758_expression_0 ;
              GGS_location extractedValue_2769__1 ;
              enumerator_2505.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_2758_expression_0, extractedValue_2769__1) ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_2758_expression_0.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 62)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_2505.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_2160.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typedConstantCallAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_typedConstantCallAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 77)) ;
      }
    }
  }
  const GGS_typedConstantCallAST temp_3 = this ;
  UpEnumerator_primaryInExpressionAccessListAST enumerator_3511 (temp_3.readProperty_mAccessList ()) ;
  while (enumerator_3511.hasCurrentObject ()) {
    switch (enumerator_3511.current_mAccess (HERE).enumValue ()) {
    case GGS_primaryInExpressionAccessAST::Enumeration::invalid:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_integerSlice:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_property:
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_arrayAccess:
      {
        GGS_expressionAST extractedValue_3650_indexExpression_0 ;
        GGS_location extractedValue_3667__1 ;
        GGS_bool extractedValue_3667__2 ;
        enumerator_3511.current_mAccess (HERE).getAssociatedValuesFor_arrayAccess (extractedValue_3650_indexExpression_0, extractedValue_3667__1, extractedValue_3667__2) ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3650_indexExpression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
      }
      break ;
    case GGS_primaryInExpressionAccessAST::Enumeration::enum_funcCall:
      {
        GGS_lstring extractedValue_3762__0 ;
        GGS_effectiveArgumentListAST extractedValue_3790_arguments_1 ;
        GGS_location extractedValue_3800__2 ;
        enumerator_3511.current_mAccess (HERE).getAssociatedValuesFor_funcCall (extractedValue_3762__0, extractedValue_3790_arguments_1, extractedValue_3800__2) ;
        UpEnumerator_effectiveArgumentListAST enumerator_3840 (extractedValue_3790_arguments_1) ;
        while (enumerator_3840.hasCurrentObject ()) {
          switch (enumerator_3840.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GGS_effectiveArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_input:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_inputWithType:
            {
              GGS_bool extractedValue_3950__0 ;
              GGS_lstring extractedValue_3961_typeName_1 ;
              GGS_lstring extractedValue_3970__2 ;
              enumerator_3840.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_inputWithType (extractedValue_3950__0, extractedValue_3961_typeName_1, extractedValue_3970__2) ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::notEqual, extractedValue_3961_typeName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_3961_typeName_1 COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 91)) ;
                  }
                }
              }
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_output:
            {
              GGS_expressionAST extractedValue_4093_expression_0 ;
              GGS_location extractedValue_4104__1 ;
              enumerator_3840.current_mEffectiveParameterKind (HERE).getAssociatedValuesFor_output (extractedValue_4093_expression_0, extractedValue_4104__1) ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_4093_expression_0.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 93)) ;
            }
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInput:
            break ;
          case GGS_effectiveArgumentPassingModeAST::Enumeration::enum_outputInputSelfVariable:
            break ;
          }
          enumerator_3840.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3511.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typedConstantCallAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_typedConstantCallAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                          const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                          const GGS_omnibusType constinArgument_inOptionalTargetType,
                                                          const GGS_semanticContext constinArgument_inContext,
                                                          const GGS_mode constinArgument_inMode,
                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                          GGS_allocaList & ioArgument_ioAllocaList,
                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          GGS_objectIR & outArgument_outResult,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_inferredResultType_5250 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_typedConstantCallAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_inferredResultType_5250 = constinArgument_inOptionalTargetType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_typedConstantCallAST temp_2 = this ;
    var_inferredResultType_5250 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_2.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 124)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_inferredResultType_5250.readProperty_kind ().objectCompare (GGS_typeKind::class_func_void (SOURCE_FILE ("expression-typed-constant.galgas", 126)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_typedConstantCallAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mConstructorName ().readProperty_location (), GGS_string ("cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 127)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_typedConstantCallAST temp_6 = this ;
    GGS_lstring var_typeName_5589 = GGS_lstring::init_21__21_ (var_inferredResultType_5250.readProperty_omnibusTypeDescriptionName (), temp_6.readProperty_mConstructorName ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_constantMap var_classConstantMap_5747 ;
    constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_typeName_5589, var_classConstantMap_5747, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    GGS_bigint var_value_5898 ;
    GGS_lstring var_classTypeName_5909 ;
    const GGS_typedConstantCallAST temp_7 = this ;
    var_classConstantMap_5747.method_searchKey (temp_7.readProperty_mConstructorName (), var_value_5898, var_classTypeName_5909, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 132)) ;
    GGS_omnibusType var_resultType_5932 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_classTypeName_5909, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 133)) ;
    outArgument_outResult = GGS_objectIR::class_func_literalInteger (var_resultType_5932, var_value_5898  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 134)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_typedConstantCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::greaterThan, temp_9.readProperty_mAccessList ().getter_count (SOURCE_FILE ("expression-typed-constant.galgas", 137)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_objectIR var_newTemporaryReference_6336 ;
      {
      routine_getNewTempReference_3F__26__21_ (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)), ioArgument_ioTemporaries, var_newTemporaryReference_6336, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 140)) ;
      }
      ioArgument_ioAllocaList.addAssignOperation (extensionGetter_llvmName (var_newTemporaryReference_6336, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_type (var_newTemporaryReference_6336, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), GGS_bool (false)  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6336, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 145)), extensionGetter_llvmName (var_newTemporaryReference_6336, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 146)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 144)) ;
      }
      outArgument_outResult = var_newTemporaryReference_6336 ;
      {
      const GGS_typedConstantCallAST temp_10 = this ;
      routine_procAnalyzeAccesListInExpression_3F_self_3F_routineAttributes_3F_optionalTargetType_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_3F__26_result (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, temp_10.readProperty_mAccessList (), outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 151)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_compileTimeIntAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 11)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_nodeName_1035 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 21)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 21)) ;
  {
  const GGS_compileTimeIntAST temp_0 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1035, temp_0, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1035, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 23)) COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 23)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeIntAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_compileTimeIntAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'ctIntegerTypeName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_ctIntegerTypeName (Compiler *
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("ctInt") ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_ctIntegerTypeName = false ;
static GGS_string gOnceFunctionResult_ctIntegerTypeName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_ctIntegerTypeName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_ctIntegerTypeName) {
    gOnceFunctionResult_ctIntegerTypeName = onceFunction_ctIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_ctIntegerTypeName = true ;
  }
  return gOnceFunctionResult_ctIntegerTypeName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_ctIntegerTypeName (void) {
  gOnceFunctionResult_ctIntegerTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_ctIntegerTypeName (nullptr,
                                                             releaseOnceFunctionResult_ctIntegerTypeName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_ctIntegerTypeName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_ctIntegerTypeName (Compiler * inCompiler,
                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                               const GGS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  return function_ctIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_ctIntegerTypeName ("ctIntegerTypeName",
                                                                   functionWithGenericHeader_ctIntegerTypeName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_ctIntegerTypeName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                    GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                    GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                    GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                    GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                    GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                    GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                    GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_ctIntegerTypeName_2533 = function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 52)).getter_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 52)) ;
  GGS_omnibusType var_ctInt_2588 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 53)) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_ctIntegerTypeName_2533, var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 55)) ;
  }
  GGS_lstring var_key_2746 = function_prefixOperatorMapKey (var_ctInt_2588, GGS_prefixOperator::class_func_bitWiseComplement (SOURCE_FILE ("compile-time-type-int.galgas", 57)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 57)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, var_ctInt_2588, GGS_compileTimeIntComplementOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 58)) ;
  }
  var_key_2746 = function_prefixOperatorMapKey (var_ctInt_2588, GGS_prefixOperator::class_func_minusOp (SOURCE_FILE ("compile-time-type-int.galgas", 60)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 60)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, var_ctInt_2588, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 61)) ;
  }
  var_key_2746 = function_prefixOperatorMapKey (var_ctInt_2588, GGS_prefixOperator::class_func_minusNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 63)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, var_ctInt_2588, GGS_compileTimeIntMinusOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 64)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("compile-time-type-int.galgas", 66)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 66)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 66)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntBitWiseAndOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 67)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("compile-time-type-int.galgas", 69)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 69)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 69)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntBitWiseOrOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 70)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("compile-time-type-int.galgas", 72)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 72)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntXorOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 73)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_addOp (SOURCE_FILE ("compile-time-type-int.galgas", 75)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 75)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 76)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 78)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 78)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 78)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntAddOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 79)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_subOp (SOURCE_FILE ("compile-time-type-int.galgas", 81)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 81)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 81)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 82)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 84)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 84)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 84)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntSubtractOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 85)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_mulOp (SOURCE_FILE ("compile-time-type-int.galgas", 87)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 87)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntMultiplyOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 88)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_divOp (SOURCE_FILE ("compile-time-type-int.galgas", 90)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 90)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 90)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntDivideOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 91)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_divOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 93)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 93)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 93)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntDivideZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 94)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_modOp (SOURCE_FILE ("compile-time-type-int.galgas", 96)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 96)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 96)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntModuloOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 97)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_modOpNoOvf (SOURCE_FILE ("compile-time-type-int.galgas", 99)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 99)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 99)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntModuloZeroOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 100)) ;
  }
  GGS_omnibusType var_ctBoolType_5567 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 102)) ;
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("compile-time-type-int.galgas", 103)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 103)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 103)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctBoolType_5567, GGS_compileTimeIntEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 104)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("compile-time-type-int.galgas", 106)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 106)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 106)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctBoolType_5567, GGS_compileTimeIntLessThanOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 107)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("compile-time-type-int.galgas", 109)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 109)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 109)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctBoolType_5567, GGS_compileTimeIntLowerOrEqualOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 110)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 112)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 112)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 112)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntShiftLeftOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 113)) ;
  }
  var_key_2746 = function_infixOperatorMapKey (var_ctInt_2588, GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("compile-time-type-int.galgas", 115)), GGS_location::class_func_nowhere (SOURCE_FILE ("compile-time-type-int.galgas", 115)), var_ctInt_2588, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 115)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2746, var_ctInt_2588, GGS_compileTimeIntShiftRightOperator::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 116)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntModuloOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location constinArgument_inOperatorLocation,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_7386 ;
  GGS_omnibusType joker_7370_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_7370_1, var_rightValue_7386, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 138)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_7386.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 139)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 140)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_7572 ;
    GGS_omnibusType joker_7556_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_7556_1, var_leftValue_7572, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 142)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_7572.modulo_operation (var_rightValue_7386, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 143))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 143)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntModuloZeroOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntModuloZeroOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_8416 ;
  GGS_omnibusType joker_8400_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_8400_1, var_rightValue_8416, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 164)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_8416.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 165)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 166)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_8587 ;
    GGS_omnibusType joker_8571_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_8571_1, var_leftValue_8587, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 168)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_8587.modulo_operation (var_rightValue_8416, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 169))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 169)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntDivideOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location constinArgument_inOperatorLocation,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                             GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                             GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_9416 ;
  GGS_omnibusType joker_9400_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_9400_1, var_rightValue_9416, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 190)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_9416.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 191)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time divide by zero"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 192)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_9602 ;
    GGS_omnibusType joker_9586_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_9586_1, var_leftValue_9602, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 194)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_9602.divide_operation (var_rightValue_9416, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 195))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 195)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntDivideZeroOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntDivideZeroOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_10444 ;
  GGS_omnibusType joker_10428_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_10428_1, var_rightValue_10444, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 216)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_rightValue_10444.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 217)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 218)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_10615 ;
    GGS_omnibusType joker_10599_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_10599_1, var_leftValue_10615, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 220)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_10615.divide_operation (var_rightValue_10444, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 221))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntMultiplyOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMultiplyOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_11452 ;
  GGS_omnibusType joker_11436_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_11436_1, var_leftValue_11452, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 242)) ;
  GGS_bigint var_rightValue_11519 ;
  GGS_omnibusType joker_11503_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_11503_1, var_rightValue_11519, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 243)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_11452.multiply_operation (var_rightValue_11519, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 244)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntSubtractOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntSubtractOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_12349 ;
  GGS_omnibusType joker_12333_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_12333_1, var_leftValue_12349, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 264)) ;
  GGS_bigint var_rightValue_12416 ;
  GGS_omnibusType joker_12400_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12400_1, var_rightValue_12416, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 265)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_12349.substract_operation (var_rightValue_12416, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 266)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                            const GGS_location /* constinArgument_inOperatorLocation */,
                                                            const GGS_objectIR constinArgument_inRightOperand,
                                                            const GGS_omnibusType constinArgument_inResultType,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GGS_objectIR & outArgument_outResultValue,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_13240 ;
  GGS_omnibusType joker_13224_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_13224_1, var_leftValue_13240, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 286)) ;
  GGS_bigint var_rightValue_13307 ;
  GGS_omnibusType joker_13291_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_13291_1, var_rightValue_13307, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 287)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::equal, var_leftValue_13240.objectCompare (var_rightValue_13307)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 288))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 288)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntAddOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntAddOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_14128 ;
  GGS_omnibusType joker_14112_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14112_1, var_leftValue_14128, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 308)) ;
  GGS_bigint var_rightValue_14195 ;
  GGS_omnibusType joker_14179_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_14179_1, var_rightValue_14195, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 309)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_14128.add_operation (var_rightValue_14195, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntBitWiseAndOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseAndOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_15029 ;
  GGS_omnibusType joker_15013_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_15013_1, var_leftValue_15029, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 330)) ;
  GGS_bigint var_rightValue_15096 ;
  GGS_omnibusType joker_15080_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15080_1, var_rightValue_15096, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 331)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_15029.operator_and (var_rightValue_15096 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 332)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntShiftLeftOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftLeftOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                const GGS_location constinArgument_inOperatorLocation,
                                                                const GGS_objectIR constinArgument_inRightOperand,
                                                                const GGS_omnibusType constinArgument_inResultType,
                                                                GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GGS_objectIR & outArgument_outResultValue,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_15922 ;
  GGS_omnibusType joker_15906_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_15906_1, var_rightValue_15922, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 352)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_15922.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 353)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time left shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 354)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_16131 ;
    GGS_omnibusType joker_16115_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_16115_1, var_leftValue_16131, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 356)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_16131.left_shift_operation (var_rightValue_15922, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 357))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 357)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntShiftRightOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntShiftRightOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                 const GGS_location constinArgument_inOperatorLocation,
                                                                 const GGS_objectIR constinArgument_inRightOperand,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_rightValue_16967 ;
  GGS_omnibusType joker_16951_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_16951_1, var_rightValue_16967, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 378)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_rightValue_16967.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 379)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("compile time right shift right operand should be ≥ 0"), fixItArray1  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 380)) ;
      outArgument_outResultValue.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bigint var_leftValue_17177 ;
    GGS_omnibusType joker_17161_1 ; // Joker input parameter
    constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17161_1, var_leftValue_17177, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 382)) ;
    outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_17177.right_shift_operation (var_rightValue_16967, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 383)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntLessThanOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLessThanOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                               const GGS_location /* constinArgument_inOperatorLocation */,
                                                               const GGS_objectIR constinArgument_inRightOperand,
                                                               const GGS_omnibusType constinArgument_inResultType,
                                                               GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                               GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                               GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                               GGS_objectIR & outArgument_outResultValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_18015 ;
  GGS_omnibusType joker_17999_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_17999_1, var_leftValue_18015, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 404)) ;
  GGS_bigint var_rightValue_18082 ;
  GGS_omnibusType joker_18066_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_18066_1, var_rightValue_18082, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 405)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerThan, var_leftValue_18015.objectCompare (var_rightValue_18082)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 406))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 406)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntLowerOrEqualOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntLowerOrEqualOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                   const GGS_location /* constinArgument_inOperatorLocation */,
                                                                   const GGS_objectIR constinArgument_inRightOperand,
                                                                   const GGS_omnibusType constinArgument_inResultType,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResultValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_18920 ;
  GGS_omnibusType joker_18904_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_18904_1, var_leftValue_18920, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 426)) ;
  GGS_bigint var_rightValue_18987 ;
  GGS_omnibusType joker_18971_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_18971_1, var_rightValue_18987, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 427)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, GGS_bool (ComparisonKind::lowerOrEqual, var_leftValue_18920.objectCompare (var_rightValue_18987)).getter_bigint (SOURCE_FILE ("compile-time-type-int.galgas", 428))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 428)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntXorOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntXorOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                          const GGS_location /* constinArgument_inOperatorLocation */,
                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                          GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                          GGS_objectIR & outArgument_outResultValue,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_19808 ;
  GGS_omnibusType joker_19792_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_19792_1, var_leftValue_19808, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 448)) ;
  GGS_bigint var_rightValue_19875 ;
  GGS_omnibusType joker_19859_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_19859_1, var_rightValue_19875, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 449)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_19808.operator_xor (var_rightValue_19875 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 450)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntBitWiseOrOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntBitWiseOrOperator::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                const GGS_location /* constinArgument_inOperatorLocation */,
                                                                const GGS_objectIR constinArgument_inRightOperand,
                                                                const GGS_omnibusType constinArgument_inResultType,
                                                                GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                GGS_objectIR & outArgument_outResultValue,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_leftValue_20707 ;
  GGS_omnibusType joker_20691_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_20691_1, var_leftValue_20707, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 470)) ;
  GGS_bigint var_rightValue_20774 ;
  GGS_omnibusType joker_20758_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_20758_1, var_rightValue_20774, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 471)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_leftValue_20707.operator_or (var_rightValue_20774 COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 472)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntMinusOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntMinusOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                            const GGS_location /* constinArgument_inOperatorLocation */,
                                                            const GGS_omnibusType constinArgument_inResultType,
                                                            const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                            const GGS_bool /* constinArgument_inSafeMode */,
                                                            GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                            GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                            GGS_objectIR & outArgument_outResultValue,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_21764 ;
  GGS_omnibusType joker_21748_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_21748_1, var_receiverValue_21764, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 494)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_21764.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 495))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 495)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@compileTimeIntComplementOperator generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_compileTimeIntComplementOperator::method_generateCode (const GGS_objectIR constinArgument_inReceiverOperand,
                                                                 const GGS_location /* constinArgument_inOperatorLocation */,
                                                                 const GGS_omnibusType constinArgument_inResultType,
                                                                 const GGS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                 const GGS_bool /* constinArgument_inSafeMode */,
                                                                 GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GGS_objectIR & outArgument_outResultValue,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_receiverValue_22627 ;
  GGS_omnibusType joker_22611_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_extractLiteralInteger (joker_22611_1, var_receiverValue_22627, inCompiler COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 515)) ;
  outArgument_outResultValue = GGS_objectIR::class_func_literalInteger (constinArgument_inResultType, var_receiverValue_22627.operator_tilde (SOURCE_FILE ("compile-time-type-int.galgas", 516))  COMMA_SOURCE_FILE ("compile-time-type-int.galgas", 516)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@storeComputedPropertyValueIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeComputedPropertyValueIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (temp_0.readProperty_mLLVMSetterName ().getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 25)) ;
  const GGS_storeComputedPropertyValueIR temp_1 = this ;
  const GGS_storeComputedPropertyValueIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_1.readProperty_mReceiverIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mReceiverIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 26)) ;
  const GGS_storeComputedPropertyValueIR temp_3 = this ;
  const GGS_storeComputedPropertyValueIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (temp_3.readProperty_mValueIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mValueIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 27)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@storeComputedPropertyValueIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_storeComputedPropertyValueIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_storeComputedPropertyValueIR temp_0 = this ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (temp_0.readProperty_mLLVMSetterName ()  COMMA_SOURCE_FILE ("intermediate-store-computed-property-value.galgas", 36)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@leftShiftIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                   const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                   GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftIR temp_0 = this ;
  const GGS_leftShiftIR temp_1 = this ;
  const GGS_leftShiftIR temp_2 = this ;
  const GGS_leftShiftIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (GGS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (extensionGetter_llvmTypeName (temp_1.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (temp_3.readProperty_mShiftAmount ().getter_string (SOURCE_FILE ("intermediate-shift-left.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 27)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@logicalRightShiftIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_logicalRightShiftIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_logicalRightShiftIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_0.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)) ;
  const GGS_logicalRightShiftIR temp_1 = this ;
  const GGS_logicalRightShiftIR temp_2 = this ;
  const GGS_logicalRightShiftIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("lshr ").add_operation (extensionGetter_llvmTypeName (temp_1.readProperty_mResult (), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mSource (), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (temp_3.readProperty_mShiftAmount ().getter_string (SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring constinArgument_inConstantName,
                                                                                      GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBooleanInExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBooleanInExpressionAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                                   const GGS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                   const GGS_semanticContext /* constinArgument_inContext */,
                                                                   const GGS_mode /* constinArgument_inMode */,
                                                                   GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GGS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                   GGS_objectIR & outArgument_outResult,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBooleanInExpressionAST temp_0 = this ;
  GGS_bigint temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mValue ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GGS_objectIR::class_func_literalInteger (function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)), temp_1  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_26__3F__21_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                const GGS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                                GGS_routineTypedSignature & outArgument_outSignature,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 167)) ;
  outArgument_outSignature = temp_0 ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6136 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6136.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6239 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_6136.current_mFormalArgumentTypeName (HERE), var_typeProxy_6239, inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 169)) ;
    }
    outArgument_outSignature.addAssignOperation (enumerator_6136.current_mFormalArgumentPassingMode (HERE), enumerator_6136.current_mSelector (HERE), var_typeProxy_6239, enumerator_6136.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 170)) ;
    enumerator_6136.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'routineTypedSignature2??!'
//
//--------------------------------------------------------------------------------------------------

void routine_routineTypedSignature_32__3F__3F__21_ (const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                                    const GGS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                                                    GGS_routineTypedSignature & outArgument_outSignature,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  GGS_routineTypedSignature temp_0 = GGS_routineTypedSignature::init (inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 180)) ;
  outArgument_outSignature = temp_0 ;
  UpEnumerator_routineFormalArgumentListAST enumerator_6762 (constinArgument_inFormalArgumentList) ;
  while (enumerator_6762.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_typeProxy_6817 = extensionGetter_searchKey (constinArgument_inTypeMap, enumerator_6762.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 182)) ;
    outArgument_outSignature.addAssignOperation (enumerator_6762.current_mFormalArgumentPassingMode (HERE), enumerator_6762.current_mSelector (HERE), var_typeProxy_6817, enumerator_6762.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("formal-arguments.galgas", 183)) ;
    enumerator_6762.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterFormalArguments?context?&&?warningOnUnusedArgs'
//
//--------------------------------------------------------------------------------------------------

void routine_enterFormalArguments_3F_context_3F__26__26__3F_warningOnUnusedArgs (const GGS_semanticContext constinArgument_inContext,
                                                                                 const GGS_routineFormalArgumentListAST constinArgument_inFormalArgumentsAST,
                                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GGS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                                                                 const GGS_bool constinArgument_inUnusedWarning,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_routineFormalArgumentListAST enumerator_9291 (constinArgument_inFormalArgumentsAST) ;
  while (enumerator_9291.hasCurrentObject ()) {
    GGS_omnibusType var_typeProxy_9346 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), enumerator_9291.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 241)) ;
    ioArgument_ioFormalArguments.addAssignOperation (enumerator_9291.current_mFormalArgumentPassingMode (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("formal-arguments.galgas", 242)) ;
    switch (enumerator_9291.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GGS_procFormalArgumentPassingMode::Enumeration::invalid:
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_input:
      {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9291.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = constinArgument_inUnusedWarning.boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                {
                extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 247)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              {
              extensionSetter_insertUsedLocalConstant (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), GGS_bool (true), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 249)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_inputOutput:
      {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_9291.current_mFormalArgumentName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = constinArgument_inUnusedWarning.boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                {
                extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasUnreadValue (SOURCE_FILE ("formal-arguments.galgas", 255)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 255)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              {
              extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_hasReadValue (SOURCE_FILE ("formal-arguments.galgas", 257)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 257)) ;
              }
            }
          }
        }
      }
      break ;
    case GGS_procFormalArgumentPassingMode::Enumeration::enum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_9291.current_mFormalArgumentName (HERE), var_typeProxy_9346, enumerator_9291.current_mFormalArgumentName (HERE), GGS_valuedObjectState::class_func_noValue (SOURCE_FILE ("formal-arguments.galgas", 261)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("formal-arguments.galgas", 261)) ;
        }
      }
      break ;
    }
    enumerator_9291.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syncInstructionAST temp_0 = this ;
  UpEnumerator_syncInstructionBranchListAST enumerator_5424 (temp_0.readProperty_mBranchList ()) ;
  while (enumerator_5424.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5424.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 148)) ;
    enumerator_5424.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                  const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                  const GGS_semanticContext constinArgument_inContext,
                                                                  const GGS_mode constinArgument_inMode,
                                                                  GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                  GGS_allocaList & ioArgument_ioAllocaList,
                                                                  GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guardedCommandIRList temp_0 = GGS_guardedCommandIRList::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 168)) ;
  GGS_guardedCommandIRList var_guardedCommandIRList_6419 = temp_0 ;
  const GGS_syncInstructionAST temp_1 = this ;
  UpEnumerator_syncInstructionBranchListAST enumerator_6470 (temp_1.readProperty_mBranchList ()) ;
  while (enumerator_6470.hasCurrentObject ()) {
    switch (enumerator_6470.current_mGuardedCommand (HERE).enumValue ()) {
    case GGS_guardedCommandAST::Enumeration::invalid:
      break ;
    case GGS_guardedCommandAST::Enumeration::enum_boolean:
      {
        GGS_bool extractedValue_6540_isContinue_0 ;
        GGS_expressionAST extractedValue_6551_expression_1 ;
        GGS_location extractedValue_6562_endOfExpression_2 ;
        enumerator_6470.current_mGuardedCommand (HERE).getAssociatedValuesFor_boolean (extractedValue_6540_isContinue_0, extractedValue_6551_expression_1, extractedValue_6562_endOfExpression_2) ;
        GGS_instructionListIR temp_2 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 172)) ;
        GGS_instructionListIR var_guardInstructionGenerationList_6610 = temp_2 ;
        GGS_objectIR var_expressionResult_7089 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_6551_expression_1.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("instruction-event.galgas", 175)) COMMA_SOURCE_FILE ("instruction-event.galgas", 175)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 176)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6610, var_expressionResult_7089, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 173)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6610, ioArgument_ioTemporaries, var_expressionResult_7089, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 186)) ;
        }
        GGS_implicitBooleanConversionResult var_booleanResult_7485 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_7089, extractedValue_6562_endOfExpression_2, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6610, ioArgument_ioAllocaList, var_booleanResult_7485, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 187)) ;
        switch (var_booleanResult_7485.enumValue ()) {
        case GGS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GGS_bool extractedValue_7558__0 ;
            var_booleanResult_7485.getAssociatedValuesFor_compileTime (extractedValue_7558__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_6562_endOfExpression_2, GGS_string ("guarded expression is a compile time value"), fixItArray3  COMMA_SOURCE_FILE ("instruction-event.galgas", 197)) ;
          }
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          break ;
        }
        var_guardedCommandIRList_6419.addAssignOperation (GGS_guardedCommandIR::class_func_booleanGuard (extractedValue_6540_isContinue_0, var_guardInstructionGenerationList_6610, extensionGetter_llvmName (var_booleanResult_7485, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 203))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200)) ;
      }
      break ;
    case GGS_guardedCommandAST::Enumeration::enum_boolAndSync:
      {
        GGS_bool extractedValue_7915_isContinue_0 ;
        GGS_expressionAST extractedValue_7926_exp_1 ;
        GGS_bool extractedValue_7930_warnsOnStaticExpression_2 ;
        GGS_location extractedValue_7954_endOfExp_3 ;
        GGS_lbool extractedValue_7963_usesSelf_4 ;
        GGS_lstringlist extractedValue_7972_nameList_5 ;
        GGS_effectiveArgumentListAST extractedValue_7981_parameterList_6 ;
        enumerator_6470.current_mGuardedCommand (HERE).getAssociatedValuesFor_boolAndSync (extractedValue_7915_isContinue_0, extractedValue_7926_exp_1, extractedValue_7930_warnsOnStaticExpression_2, extractedValue_7954_endOfExp_3, extractedValue_7963_usesSelf_4, extractedValue_7972_nameList_5, extractedValue_7981_parameterList_6) ;
        GGS_instructionListIR temp_4 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 206)) ;
        GGS_instructionListIR var_boolExpInstructionGenerationList_8027 = temp_4 ;
        GGS_objectIR var_expressionResult_8519 ;
        callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) extractedValue_7926_exp_1.ptr (), constinArgument_inSelfType, GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("instruction-event.galgas", 210)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8027, var_expressionResult_8519, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 208)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_8027, ioArgument_ioTemporaries, var_expressionResult_8519, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 221)) ;
        }
        GGS_implicitBooleanConversionResult var_booleanResult_8912 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_8519, extractedValue_7954_endOfExp_3, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_8027, ioArgument_ioAllocaList, var_booleanResult_8912, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 222)) ;
        switch (var_booleanResult_8912.enumValue ()) {
        case GGS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GGS_bool extractedValue_8985__0 ;
            var_booleanResult_8912.getAssociatedValuesFor_compileTime (extractedValue_8985__0) ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extractedValue_7930_warnsOnStaticExpression_2.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticWarning (extractedValue_7954_endOfExp_3, GGS_string ("guarded expression is static"), fixItArray6  COMMA_SOURCE_FILE ("instruction-event.galgas", 233)) ;
              }
            }
          }
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          break ;
        }
        GGS_instructionListIR temp_7 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 238)) ;
        GGS_instructionListIR var_guardInstructionGenerationList_9205 = temp_7 ;
        GGS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9286 ;
        GGS_lstring var_guardMangledName_9335 ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = extractedValue_7963_usesSelf_4.readProperty_bool ().boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = constinArgument_inSelfType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 242)).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (extractedValue_7963_usesSelf_4.readProperty_location (), GGS_string ("'self' is not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-event.galgas", 243)) ;
                var_guardEffectiveParameterListIR_9286.drop () ; // Release error dropped variable
                var_guardMangledName_9335.drop () ; // Release error dropped variable
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GGS_lstringlist var_propertyList_9592 = extractedValue_7972_nameList_5 ;
              GGS_lstring var_guardName_9655 ;
              {
              var_propertyList_9592.setter_popLast (var_guardName_9655, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 246)) ;
              }
              GGS_objectIR var_currentObject_9690 = GGS_objectIR::class_func_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 247))  COMMA_SOURCE_FILE ("instruction-event.galgas", 247)) ;
              UpEnumerator_lstringlist enumerator_9780 (var_propertyList_9592) ;
              while (enumerator_9780.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, var_currentObject_9690, enumerator_9780.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 249)) ;
                }
                enumerator_9780.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_9690, var_guardName_9655, extractedValue_7981_parameterList_6, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9205, var_guardEffectiveParameterListIR_9286, var_guardMangledName_9335, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 259)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, extractedValue_7972_nameList_5.getter_count (SOURCE_FILE ("instruction-event.galgas", 276)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (extractedValue_7972_nameList_5.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 277)).readProperty_location (), GGS_string ("Standalone guard are not handled"), fixItArray12  COMMA_SOURCE_FILE ("instruction-event.galgas", 277)) ;
              var_guardMangledName_9335.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9286.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GGS_lstringlist var_propertyList_11065 = extractedValue_7972_nameList_5 ;
            GGS_lstring var_globalReceiverName_11127 ;
            {
            var_propertyList_11065.setter_popFirst (var_globalReceiverName_11127, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 282)) ;
            }
            GGS_lstring var_guardName_11184 ;
            {
            var_propertyList_11065.setter_popLast (var_guardName_11184, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 283)) ;
            }
            GGS_objectIR var_currentObjectIR_11348 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11127, constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObjectIR_11348, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 284)) ;
            UpEnumerator_lstringlist enumerator_11387 (var_propertyList_11065) ;
            while (enumerator_11387.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression_3F_context_26__3F__3F__26_temporary_26_alloca_26_instructionListIR (constinArgument_inContext, var_currentObjectIR_11348, enumerator_11387.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 291)) ;
              }
              enumerator_11387.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11348, var_guardName_11184, extractedValue_7981_parameterList_6, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9205, var_guardEffectiveParameterListIR_9286, var_guardMangledName_9335, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 301)) ;
            }
          }
        }
        switch (var_booleanResult_8912.enumValue ()) {
        case GGS_implicitBooleanConversionResult::Enumeration::invalid:
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_compileTime:
          {
            GGS_bool extractedValue_12379_boolValue_0 ;
            var_booleanResult_8912.getAssociatedValuesFor_compileTime (extractedValue_12379_boolValue_0) ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              test_13 = extractedValue_12379_boolValue_0.boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                var_guardedCommandIRList_6419.addAssignOperation (GGS_guardedCommandIR::class_func_sync (extractedValue_7915_isContinue_0, var_guardMangledName_9335.readProperty_string (), var_guardInstructionGenerationList_9205, var_guardEffectiveParameterListIR_9286  COMMA_SOURCE_FILE ("instruction-event.galgas", 321))  COMMA_SOURCE_FILE ("instruction-event.galgas", 321)) ;
              }
            }
            if (GalgasBool::boolFalse == test_13) {
              GenericArray <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (var_guardMangledName_9335.readProperty_location (), GGS_string ("false guard not handled yet"), fixItArray14  COMMA_SOURCE_FILE ("instruction-event.galgas", 328)) ;
            }
          }
          break ;
        case GGS_implicitBooleanConversionResult::Enumeration::enum_llvmVariable:
          {
            GGS_string extractedValue_12823_llvmName_0 ;
            var_booleanResult_8912.getAssociatedValuesFor_llvmVariable (extractedValue_12823_llvmName_0) ;
            var_guardedCommandIRList_6419.addAssignOperation (GGS_guardedCommandIR::class_func_boolAndSync (extractedValue_7915_isContinue_0, var_boolExpInstructionGenerationList_8027, extractedValue_12823_llvmName_0, var_guardMangledName_9335.readProperty_string (), var_guardInstructionGenerationList_9205, var_guardEffectiveParameterListIR_9286  COMMA_SOURCE_FILE ("instruction-event.galgas", 331))  COMMA_SOURCE_FILE ("instruction-event.galgas", 331)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6470.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 343)) ;
  }
  GGS_syncInstructionBranchListIR temp_15 = GGS_syncInstructionBranchListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 344)) ;
  GGS_syncInstructionBranchListIR var_syncInstructionBranchListIR_13387 = temp_15 ;
  const GGS_syncInstructionAST temp_16 = this ;
  UpEnumerator_syncInstructionBranchListAST enumerator_13446 (temp_16.readProperty_mBranchList ()) ;
  UpEnumerator_guardedCommandIRList enumerator_13481 (var_guardedCommandIRList_6419) ;
  while (enumerator_13446.hasCurrentObject () && enumerator_13481.hasCurrentObject ()) {
    GGS_instructionListIR temp_17 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 346)) ;
    GGS_instructionListIR var_branchInstructionGenerationList_13553 = temp_17 ;
    extensionMethod_analyzeBranchInstructionList (enumerator_13446.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_13446.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_13553, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 347)) ;
    var_syncInstructionBranchListIR_13387.addAssignOperation (enumerator_13481.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_13553  COMMA_SOURCE_FILE ("instruction-event.galgas", 359)) ;
    enumerator_13446.gotoNextObject () ;
    enumerator_13481.gotoNextObject () ;
  }
  {
  const GGS_syncInstructionAST temp_18 = this ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_18.readProperty_mEndOf_5F_on_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 361)) ;
  }
  const GGS_syncInstructionAST temp_19 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_syncInstructionIR::init_21__21_ (temp_19.readProperty_mInstructionLocation (), var_syncInstructionBranchListIR_13387, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 363)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall?self?routineAttributes?receiver?guardName?effective?context?requiredMode&temporary&staticEntityMap&variableMap&alloca&instructionListIR!effectiveIR!guardMangledName'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeGuardCall_3F_self_3F_routineAttributes_3F_receiver_3F_guardName_3F_effective_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_21_effectiveIR_21_guardMangledName (const GGS_omnibusType constinArgument_inSelfType,
                                                                                                                                                                                                                                              const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                                                                                                                                                              const GGS_objectIR constinArgument_inReceiver,
                                                                                                                                                                                                                                              const GGS_lstring constinArgument_inGuardName,
                                                                                                                                                                                                                                              const GGS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                                                                                                                                                                                                                              const GGS_semanticContext constinArgument_inContext,
                                                                                                                                                                                                                                              const GGS_mode constinArgument_inRequiredMode,
                                                                                                                                                                                                                                              GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                                                                                                                                                              GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                                                                                                                                              GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                                                                                                                                                              GGS_allocaList & ioArgument_ioAllocaList,
                                                                                                                                                                                                                                              GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                                                                                                                                                              GGS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                                                                                                                                                                                                                              GGS_lstring & outArgument_outGuardMangledName,
                                                                                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  GGS_lstring var_guardMangledName_15157 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 384)).readProperty_omnibusTypeDescriptionName (), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 384)) ;
  GGS_bool var_isPublic_15360 ;
  GGS_routineTypedSignature var_formalSignature_15397 ;
  GGS_lstring var_guardRoutineUserLLVMName_15418 ;
  GGS_lstring joker_15443 ; // Joker input parameter
  constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_15157, var_isPublic_15360, var_formalSignature_15397, var_guardRoutineUserLLVMName_15418, joker_15443, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 385)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_isPublic_15360.operator_not (SOURCE_FILE ("instruction-event.galgas", 387)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.readProperty_location (), GGS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 388)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_15418 ;
    GGS_procCallEffectiveParameterListIR temp_2 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 392)) ;
    temp_2.plusPlusAssignOperation (GGS_procCallEffectiveParameterListIR_2E_element::init_21__21_ (GGS_procEffectiveParameterPassingModeIR::class_func_outputInput (SOURCE_FILE ("instruction-event.galgas", 392)), constinArgument_inReceiver, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-event.galgas", 392)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters_3F_self_3F_routineAttributes_3F_formal_3F_effective_3F_errorLocation_3F_context_3F_requiredMode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_26_instructionListIR_26_effectiveIR (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_15397, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.readProperty_location (), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 393)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                         const GGS_generationContext constinArgument_inGenerationContext,
                                                         GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGenerationAdds.mProperty_mUsesGuards = GGS_bool (true) ;
  GGS_string var_startLabel_18519 = GGS_string ("select.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-event.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 461)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 462)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_startLabel_18519, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 464)).add_operation (GGS_string (".start\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 464)) ;
  GGS_string var_startLabelName_18682 = var_startLabel_18519.add_operation (GGS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 465)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_startLabelName_18682.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 466)) ;
  GGS_string var_exitLabelName_18767 = var_startLabel_18519.add_operation (GGS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 467)) ;
  GGS_string var_selectLabelName_18810 = var_startLabel_18519.add_operation (GGS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 468)) ;
  GGS_string var_errorLabelName_18857 = var_startLabel_18519.add_operation (GGS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 469)) ;
  GGS_string var_currentStartBranchLabel_18902 = var_startLabelName_18682 ;
  const GGS_syncInstructionIR temp_0 = this ;
  UpEnumerator_syncInstructionBranchListIR enumerator_18964 (temp_0.readProperty_mOnInstructionBranchListIR ()) ;
  GGS_uint index_18945 (uint32_t (0)) ;
  while (enumerator_18964.hasCurrentObject ()) {
    GGS_string var_acceptanceVarName_19008 = GGS_string ("%").add_operation (var_startLabel_18519, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 472)).add_operation (GGS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 472)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 472)) ;
    GGS_bool var_isWhileGuardedCommand_19078 ;
    switch (enumerator_18964.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GGS_guardedCommandIR::Enumeration::invalid:
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_booleanGuard:
      {
        GGS_bool extractedValue_19157_isExitCommand_0 ;
        GGS_instructionListIR extractedValue_19171_instructionGenerationList_1 ;
        GGS_string extractedValue_19197_boolGuardBoolLLVMName_2 ;
        enumerator_18964.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_booleanGuard (extractedValue_19157_isExitCommand_0, extractedValue_19171_instructionGenerationList_1, extractedValue_19197_boolGuardBoolLLVMName_2) ;
        var_isWhileGuardedCommand_19078 = extractedValue_19157_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_19171_instructionGenerationList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 477)) ;
        GGS_string var_acceptedLabelName_19387 = var_startLabel_18519.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 478)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 478)).add_operation (GGS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 478)) ;
        GGS_string var_rejectedLabelName_19450 = var_startLabel_18519.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 479)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 479)).add_operation (GGS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 479)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extractedValue_19197_boolGuardBoolLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (var_acceptedLabelName_19387, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (var_rejectedLabelName_19450, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 480)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(var_acceptedLabelName_19387.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 481)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 482)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_rejectedLabelName_19450, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 483)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 483)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(var_rejectedLabelName_19450.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 484)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_acceptanceVarName_19008, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 485)).add_operation (GGS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 485)).add_operation (extractedValue_19197_boolGuardBoolLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 485)).add_operation (GGS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 485)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_boolAndSync:
      {
        GGS_bool extractedValue_19960_isExitCommand_0 ;
        GGS_instructionListIR extractedValue_19974_expInstructionList_1 ;
        GGS_string extractedValue_19993_boolGuardLLVMName_2 ;
        GGS_string extractedValue_20011_guardMangledName_3 ;
        GGS_instructionListIR extractedValue_20028_guardInstructionList_4 ;
        GGS_procCallEffectiveParameterListIR extractedValue_20049_effectiveParameterList_5 ;
        enumerator_18964.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_boolAndSync (extractedValue_19960_isExitCommand_0, extractedValue_19974_expInstructionList_1, extractedValue_19993_boolGuardLLVMName_2, extractedValue_20011_guardMangledName_3, extractedValue_20028_guardInstructionList_4, extractedValue_20049_effectiveParameterList_5) ;
        var_isWhileGuardedCommand_19078 = extractedValue_19960_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_19974_expInstructionList_1, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 488)) ;
        GGS_string var_testOkLabelName_20233 = var_startLabel_18519.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 489)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 489)).add_operation (GGS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 489)) ;
        GGS_string var_testExitLabelName_20302 = var_startLabel_18519.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)).add_operation (GGS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 490)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (extractedValue_19993_boolGuardLLVMName_2, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)).add_operation (var_testOkLabelName_20233, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)).add_operation (var_testExitLabelName_20302, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 491)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(var_testOkLabelName_20233.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 492)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_20028_guardInstructionList_4, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 493)) ;
        GGS_string var_guardAcceptationLabelName_20646 = var_startLabel_18519.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 494)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 494)).add_operation (GGS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 494)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_guardAcceptationLabelName_20646, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 495)).add_operation (GGS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 495)).add_operation (extractedValue_20011_guardMangledName_3.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 495)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 496)) ;
        UpEnumerator_procCallEffectiveParameterListIR enumerator_20901 (extractedValue_20049_effectiveParameterList_5) ;
        while (enumerator_20901.hasCurrentObject ()) {
          switch (enumerator_20901.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
            {
              ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_20901.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)).add_operation (extensionGetter_llvmName (enumerator_20901.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 500)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
            {
              ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_20901.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)).add_operation (extensionGetter_llvmName (enumerator_20901.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 502)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_20901.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)).add_operation (extensionGetter_llvmName (enumerator_20901.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
            }
            break ;
          }
          enumerator_20901.gotoNextObject () ;
          if (enumerator_20901.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 509)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testExitLabelName_20302, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 510)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 510)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(var_testExitLabelName_20302.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 511)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_acceptanceVarName_19008, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)).add_operation (GGS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("[%").add_operation (var_guardAcceptationLabelName_20646, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GGS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (var_testOkLabelName_20233, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GGS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 513)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("[false, %").add_operation (var_currentStartBranchLabel_18902, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (GGS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_sync:
      {
        GGS_bool extractedValue_21714_isExitCommand_0 ;
        GGS_string extractedValue_21728_guardMangledName_1 ;
        GGS_instructionListIR extractedValue_21745_guardInstructionList_2 ;
        GGS_procCallEffectiveParameterListIR extractedValue_21766_effectiveParameterList_3 ;
        enumerator_18964.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_sync (extractedValue_21714_isExitCommand_0, extractedValue_21728_guardMangledName_1, extractedValue_21745_guardInstructionList_2, extractedValue_21766_effectiveParameterList_3) ;
        var_isWhileGuardedCommand_19078 = extractedValue_21714_isExitCommand_0 ;
        extensionMethod_instructionListLLVMCode (extractedValue_21745_guardInstructionList_2, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_acceptanceVarName_19008, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (GGS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (extractedValue_21728_guardMangledName_1.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        UpEnumerator_procCallEffectiveParameterListIR enumerator_22114 (extractedValue_21766_effectiveParameterList_3) ;
        while (enumerator_22114.hasCurrentObject ()) {
          switch (enumerator_22114.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::invalid:
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_input:
            {
              ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_22114.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)).add_operation (extensionGetter_llvmName (enumerator_22114.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_output:
            {
              ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_22114.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (extensionGetter_llvmName (enumerator_22114.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
            }
            break ;
          case GGS_procEffectiveParameterPassingModeIR::Enumeration::enum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssignOperation(extensionGetter_llvmTypeName (enumerator_22114.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)).add_operation (extensionGetter_llvmName (enumerator_22114.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
            }
            break ;
          }
          enumerator_22114.gotoNextObject () ;
          if (enumerator_22114.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
          }
        }
        ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 532)) ;
      }
      break ;
    }
    GGS_string var_acceptedLabelName_22605 = var_startLabel_18519.add_operation (GGS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 534)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 534)) ;
    GGS_string var_rejectedLabelName_22665 = var_startLabel_18519.add_operation (GGS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (index_18945.getter_string (SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_acceptanceVarName_19008, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)).add_operation (var_acceptedLabelName_22605, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)).add_operation (var_rejectedLabelName_22665, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_acceptedLabelName_22605.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18964.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 538)) ;
    GGS_string temp_1 ;
    const GalgasBool test_2 = var_isWhileGuardedCommand_19078.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      temp_1 = var_startLabelName_18682 ;
    }else if (GalgasBool::boolFalse == test_2) {
      temp_1 = var_exitLabelName_18767 ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(var_rejectedLabelName_22665.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 540)) ;
    var_currentStartBranchLabel_18902 = var_rejectedLabelName_22665 ;
    enumerator_18964.gotoNextObject () ;
    index_18945.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 471)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %").add_operation (var_selectLabelName_18810, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)).add_operation (GGS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 543)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %").add_operation (var_selectLabelName_18810, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (var_startLabelName_18682, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (var_errorLabelName_18857, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_errorLabelName_18857.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_exitLabelName_18767, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 547)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_syncInstructionIR temp_4 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
    const GGS_syncInstructionIR temp_5 = this ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 550)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 550)).add_operation (temp_5.readProperty_mSelectInstructionLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 550)).getter_string (SOURCE_FILE ("instruction-event.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 550)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 550)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)).getter_string (SOURCE_FILE ("instruction-event.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 551)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 552)) ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(var_exitLabelName_18767.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_syncInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                             GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_syncInstructionIR temp_0 = this ;
  GGS_uint var_branchCount_24393 = temp_0.readProperty_mOnInstructionBranchListIR ().getter_count (SOURCE_FILE ("instruction-event.galgas", 563)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_24393)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_24393 ;
    }
  }
  const GGS_syncInstructionIR temp_2 = this ;
  UpEnumerator_syncInstructionBranchListIR enumerator_24570 (temp_2.readProperty_mOnInstructionBranchListIR ()) ;
  while (enumerator_24570.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_24570.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 568)) ;
    switch (enumerator_24570.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GGS_guardedCommandIR::Enumeration::invalid:
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_booleanGuard:
      {
        GGS_bool extractedValue_24773__0 ;
        GGS_instructionListIR extractedValue_24775_instructionGenerationList_1 ;
        GGS_string extractedValue_24801__2 ;
        enumerator_24570.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_booleanGuard (extractedValue_24773__0, extractedValue_24775_instructionGenerationList_1, extractedValue_24801__2) ;
        extensionMethod_enterAccessibleEntities (extractedValue_24775_instructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_sync:
      {
        GGS_bool extractedValue_24931__0 ;
        GGS_string extractedValue_24933_guardMangledName_1 ;
        GGS_instructionListIR extractedValue_24950_guardInstructionGenerationList_2 ;
        GGS_procCallEffectiveParameterListIR extractedValue_24981__3 ;
        enumerator_24570.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_sync (extractedValue_24931__0, extractedValue_24933_guardMangledName_1, extractedValue_24950_guardInstructionGenerationList_2, extractedValue_24981__3) ;
        extensionMethod_enterAccessibleEntities (extractedValue_24950_guardInstructionGenerationList_2, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
        ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (extractedValue_24933_guardMangledName_1  COMMA_SOURCE_FILE ("instruction-event.galgas", 574)) ;
      }
      break ;
    case GGS_guardedCommandIR::Enumeration::enum_boolAndSync:
      {
        GGS_bool extractedValue_25170__0 ;
        GGS_instructionListIR extractedValue_25172_instructionGenerationList_1 ;
        GGS_string extractedValue_25198__2 ;
        GGS_string extractedValue_25200_guardMangledName_3 ;
        GGS_instructionListIR extractedValue_25217_guardInstructionGenerationList_4 ;
        GGS_procCallEffectiveParameterListIR extractedValue_25248__5 ;
        enumerator_24570.current (HERE).readProperty_mGuardedCommand ().getAssociatedValuesFor_boolAndSync (extractedValue_25170__0, extractedValue_25172_instructionGenerationList_1, extractedValue_25198__2, extractedValue_25200_guardMangledName_3, extractedValue_25217_guardInstructionGenerationList_4, extractedValue_25248__5) ;
        extensionMethod_enterAccessibleEntities (extractedValue_25172_instructionGenerationList_1, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 576)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_25217_guardInstructionGenerationList_4, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 577)) ;
        ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (extractedValue_25200_guardMangledName_3  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
      }
      break ;
    }
    enumerator_24570.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 581)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_syncInstructionIR temp_4 = this ;
      ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582))  COMMA_SOURCE_FILE ("instruction-event.galgas", 582)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mSyncInstanceName (), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_syncToolInstanceDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_syncToolInstanceDeclarationAST temp_4 = this ;
      const GGS_syncToolInstanceDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mSyncInstanceName (), temp_5.readProperty_mSyncTypeName () COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
    }
  }
  const GGS_syncToolInstanceDeclarationAST temp_6 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_7 = this ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), temp_7.readProperty_mSyncInstanceName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_syncToolInstanceDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("sync ").add_operation (temp_0.readProperty_mSyncInstanceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_syncToolInstanceDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_syncToolInstanceDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mSyncInstanceName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_syncToolInstanceDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                                 GGS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                 GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                 GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                 GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                 GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_optionalSyncType_4147 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syncToolInstanceDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSyncTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_optionalSyncType_4147 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 92)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_syncToolInstanceDeclarationAST temp_2 = this ;
    extensionMethod_searchType (ioArgument_ioContext.readProperty_mTypeMap (), temp_2.readProperty_mSyncTypeName (), var_optionalSyncType_4147, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }
  GGS_objectIR var_expressionResult_4613 ;
  {
  const GGS_syncToolInstanceDeclarationAST temp_3 = this ;
  const GGS_syncToolInstanceDeclarationAST temp_4 = this ;
  routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_3.readProperty_mSourceExpression (), temp_4.readProperty_mSyncInstanceName ().readProperty_location (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), var_expressionResult_4613, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 97)) ;
  }
  const GGS_syncToolInstanceDeclarationAST temp_5 = this ;
  GGS_objectIR var_result_4686 = function_checkAssignmentCompatibility (ioArgument_ioContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_4613, var_optionalSyncType_4147, temp_5.readProperty_mSyncInstanceName ().readProperty_location (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  {
  const GGS_syncToolInstanceDeclarationAST temp_6 = this ;
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_6.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4686, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4686, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = extensionGetter_type (var_result_4686, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).readProperty_kind ().getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_syncToolInstanceDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mSyncInstanceName ().readProperty_location (), GGS_string ("the type is not a synchronization tool type"), fixItArray9  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  const GGS_syncToolInstanceDeclarationAST temp_10 = this ;
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_10.readProperty_mSyncInstanceName (), extensionGetter_type (var_result_4686, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  const GGS_syncToolInstanceDeclarationAST temp_11 = this ;
  ioArgument_ioDecoratedDeclarationList.addAssignOperation (GGS_decoratedSyncInstance::init_21__21_ (temp_11.readProperty_mSyncInstanceName (), var_result_4686, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_decoratedSyncInstance::method_semanticAnalysis (const GGS_semanticContext /* constinArgument_inContext */,
                                                          GGS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                          GGS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_decoratedSyncInstance temp_0 = this ;
  const GGS_decoratedSyncInstance temp_1 = this ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.readProperty_mSyncInstanceName (), temp_1.readProperty_mExpressionGeneratedCode (), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildSemanticContext?sourceFile?ast&staticEntityMap&staticlistValues!context!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildSemanticContext_3F_sourceFile_3F_ast_26_staticEntityMap_26_staticlistValues_21_context_21__21__21__21_ (const GGS_lstring constinArgument_inSourceFile,
                                                                                                                          const GGS_ast constinArgument_inAST,
                                                                                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                                          GGS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                                                                                                          GGS_semanticContext & outArgument_outSemanticContext,
                                                                                                                          GGS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                                                                                                          GGS_decoratedRegularRoutineList & outArgument_outDecoratedRoutineList,
                                                                                                                          GGS_routineListIR & outArgument_outRoutineListIR,
                                                                                                                          GGS_userLLVMTypeDefinitionListIR & outArgument_outUserLLVMTypeDefinitionListIR,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outDecoratedRoutineList.drop () ; // Release 'out' argument
  outArgument_outRoutineListIR.drop () ; // Release 'out' argument
  outArgument_outUserLLVMTypeDefinitionListIR.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  outArgument_outDecoratedDeclarationList = GGS_declarationDecorationList::init (inCompiler COMMA_HERE) ;
  outArgument_outDecoratedRoutineList = GGS_decoratedRegularRoutineList::init (inCompiler COMMA_HERE) ;
  outArgument_outRoutineListIR = GGS_routineListIR::init (inCompiler COMMA_HERE) ;
  outArgument_outUserLLVMTypeDefinitionListIR = GGS_userLLVMTypeDefinitionListIR::init (inCompiler COMMA_HERE) ;
  UpEnumerator_requiredFunctionDeclarationListAST enumerator_16573 (constinArgument_inAST.readProperty_mRequiredFunctionListAST ()) ;
  while (enumerator_16573.hasCurrentObject ()) {
    GGS_lstring var_procedureMangledName_16609 = function_routineMangledNameFromAST (GGS_string::makeEmptyString (), enumerator_16573.current (HERE).readProperty_mName (), enumerator_16573.current (HERE).readProperty_mFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 415)) ;
    outArgument_outSemanticContext.mProperty_mRequiredRoutineSet.plusPlusAssignOperation (var_procedureMangledName_16609.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 420)) ;
    enumerator_16573.gotoNextObject () ;
  }
  extensionMethod_enterExternProcInContext (constinArgument_inAST.readProperty_mExternFunctionListAST (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 422)) ;
  GGS_controlRegisterUserAccesMapAST var_controlRegisterUserAccesMapAST_16931 = constinArgument_inAST.readProperty_mControlRegisterUserAccesMapAST () ;
  UpEnumerator_declarationListAST enumerator_17009 (constinArgument_inAST.readProperty_mDeclarationListAST ()) ;
  while (enumerator_17009.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((cPtr_abstractDeclarationAST *) enumerator_17009.current_mDeclaration (HERE).ptr (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, var_controlRegisterUserAccesMapAST_16931, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 428)) ;
    enumerator_17009.gotoNextObject () ;
  }
  UpEnumerator_controlRegisterUserAccesMapAST enumerator_17502 (var_controlRegisterUserAccesMapAST_16931) ;
  while (enumerator_17502.hasCurrentObject ()) {
    GenericArray <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (enumerator_17502.current_lkey (HERE).readProperty_location (), GGS_string ("this control register is not defined"), fixItArray0  COMMA_SOURCE_FILE ("context.galgas", 441)) ;
    enumerator_17502.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mGlobalConstantMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 444)) ;
  }
  {
  routine_buildTypeMapHTMLFile_3F__3F__3F__3F__3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mTypeMap (), outArgument_outSemanticContext.readProperty_mRoutineMap (), outArgument_outSemanticContext.readProperty_mInfixOperatorMap (), outArgument_outSemanticContext.readProperty_mPrefixOperatorMap (), outArgument_outSemanticContext.readProperty_mAssignmentOperatorMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 449)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile_3F__3F_sourceFile (outArgument_outSemanticContext.readProperty_mControlRegisterGroupMap (), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 458)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.readProperty_mTaskListAST (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outDecoratedRoutineList, outArgument_outRoutineListIR, ioArgument_ioStaticEntityMap, outArgument_outUserLLVMTypeDefinitionListIR, inCompiler COMMA_SOURCE_FILE ("context.galgas", 463)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@releaseIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_releaseIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                 const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                 GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_releaseIR temp_0 = this ;
  const GGS_releaseIR temp_1 = this ;
  callExtensionMethod_generateRelease ((cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), temp_1.readProperty_mOmnibusName ().readProperty_string (), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-release.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'checkModeAndReturnsRoutineLLVMName'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_checkModeAndReturnsRoutineLLVMName (const GGS_routineLLVMNameDict & constinArgument_inCalledRoutineDictionary,
                                                        const GGS_mode & constinArgument_inCallerRoutineMode,
                                                        const GGS_lstring & constinArgument_inRoutineName,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inCalledRoutineDictionary.getter_hasKey (constinArgument_inCallerRoutineMode COMMA_SOURCE_FILE ("logical-modes.galgas", 184)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      constinArgument_inCalledRoutineDictionary.method_searchKey (constinArgument_inCallerRoutineMode, result_result, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 185)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_m_8428 = GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GGS_string ("' routine cannot be invoked from '"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (extensionGetter_string (constinArgument_inCallerRoutineMode, inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)).add_operation (GGS_string ("' mode, but only from:"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 187)) ;
    UpEnumerator_routineLLVMNameDict enumerator_8557 (constinArgument_inCalledRoutineDictionary) ;
    while (enumerator_8557.hasCurrentObject ()) {
      var_m_8428.plusAssignOperation(GGS_string ("\n  - '").add_operation (extensionGetter_string (enumerator_8557.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)).add_operation (GGS_string ("' mode"), inCompiler COMMA_SOURCE_FILE ("logical-modes.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("logical-modes.galgas", 189)) ;
      enumerator_8557.gotoNextObject () ;
    }
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_m_8428, fixItArray1  COMMA_SOURCE_FILE ("logical-modes.galgas", 191)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_checkModeAndReturnsRoutineLLVMName [4] = {
  & kTypeDescriptor_GALGAS_routineLLVMNameDict,
  & kTypeDescriptor_GALGAS_mode,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_routineLLVMNameDict operand0 = GGS_routineLLVMNameDict::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GGS_mode operand1 = GGS_mode::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_lstring operand2 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkModeAndReturnsRoutineLLVMName (operand0,
                                                      operand1,
                                                      operand2,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_checkModeAndReturnsRoutineLLVMName ("checkModeAndReturnsRoutineLLVMName",
                                                                                    functionWithGenericHeader_checkModeAndReturnsRoutineLLVMName,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    3,
                                                                                    functionArgs_checkModeAndReturnsRoutineLLVMName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_4593 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_functionDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_functionDeclarationAST temp_2 = this ;
      var_s_4593.plusAssignOperation(temp_2.readProperty_mReceiverTypeName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GGS_functionDeclarationAST temp_3 = this ;
  var_s_4593.plusAssignOperation(temp_3.readProperty_mFunctionName ().readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GGS_functionDeclarationAST temp_4 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_4780 (temp_4.readProperty_mFunctionFormalArgumentList ()) ;
  while (enumerator_4780.hasCurrentObject ()) {
    var_s_4593.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_4780.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4780.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4780.gotoNextObject () ;
  }
  var_s_4593.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GGS_functionDeclarationAST temp_5 = this ;
  GGS_lstring var_nodeName_4921 = GGS_lstring::init_21__21_ (var_s_4593, temp_5.readProperty_mFunctionName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_functionDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4921, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4921, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  UpEnumerator_routineFormalArgumentListAST enumerator_5129 (temp_7.readProperty_mFunctionFormalArgumentList ()) ;
  while (enumerator_5129.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5129.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5129.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_8 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.readProperty_mFunctionInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_functionDeclarationAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mReceiverTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      {
      const GGS_functionDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_11.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_functionDeclarationAST temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFunctionReturnTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      {
      const GGS_functionDeclarationAST temp_14 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_14.readProperty_mFunctionReturnTypeName () COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_functionDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  const GGS_functionDeclarationAST temp_1 = this ;
  result_result = GGS_string ("function ").add_operation (temp_0.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_functionDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_result ; // Returned variable
  const GGS_functionDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mFunctionName ().readProperty_location () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                         GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                         GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                         GGS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                         GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                         GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                         GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineTypedSignature var_signature_7027 ;
  {
  const GGS_functionDeclarationAST temp_0 = this ;
  routine_routineTypedSignature_26__3F__21_ (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mFunctionFormalArgumentList (), var_signature_7027, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GGS_unifiedTypeMapEntry var_returnTypeProxy_7133 ;
  {
  const GGS_functionDeclarationAST temp_1 = this ;
  extensionSetter_makeOptionalEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mFunctionReturnTypeName (), var_returnTypeProxy_7133, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GGS_bool var_warnIfUnused_7173 = GGS_bool (true) ;
  GGS_bool var_exportedFunction_7199 = GGS_bool (false) ;
  GGS_bool var_canMutateProperties_7230 = GGS_bool (false) ;
  const GGS_functionDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_7265 (temp_2.readProperty_mFunctionAttributeList ()) ;
  while (enumerator_7265.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_7265.current_mValue (HERE).readProperty_string ().objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = var_warnIfUnused_7173.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7265.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7173 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_7265.current_mValue (HERE).readProperty_string ().objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_exportedFunction_7199.boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7265.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7199 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_7265.current_mValue (HERE).readProperty_string ().objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = var_canMutateProperties_7230.boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GenericArray <FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7265.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GGS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7230 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7265.current_mValue (HERE).readProperty_location (), GGS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GGS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GGS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7265.gotoNextObject () ;
  }
  const GGS_functionDeclarationAST temp_13 = this ;
  const GGS_functionDeclarationAST temp_14 = this ;
  const GGS_functionDeclarationAST temp_15 = this ;
  GGS_lstring var_functionLLVMName_8184 = function_routineMangledNameFromAST (temp_13.readProperty_mReceiverTypeName ().readProperty_string (), temp_14.readProperty_mFunctionName (), temp_15.readProperty_mFunctionFormalArgumentList (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GGS_functionDeclarationAST temp_16 = this ;
  GGS_routineLLVMNameDict var_routineLLVMNameDict_8406 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.readProperty_mMode (), var_functionLLVMName_8184.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GGS_functionDeclarationAST temp_17 = this ;
  const GGS_functionDeclarationAST temp_18 = this ;
  GGS_lstring var_routineMangledName_8498 = extensionGetter_mangledName (var_signature_7027, temp_17.readProperty_mReceiverTypeName ().readProperty_string (), temp_18.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GGS_functionDeclarationAST temp_19 = this ;
  const GGS_functionDeclarationAST temp_20 = this ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8498, temp_19.readProperty_mPublicFunction (), var_signature_7027, var_returnTypeProxy_7133, var_routineLLVMNameDict_8406, var_exportedFunction_7199, temp_20.readProperty_mMode (), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GGS_functionDeclarationAST temp_21 = this ;
  const GGS_functionDeclarationAST temp_22 = this ;
  const GGS_functionDeclarationAST temp_23 = this ;
  const GGS_functionDeclarationAST temp_24 = this ;
  const GGS_functionDeclarationAST temp_25 = this ;
  const GGS_functionDeclarationAST temp_26 = this ;
  ioArgument_ioDecoratedRoutineList.addAssignOperation (temp_21.readProperty_mReceiverTypeName (), temp_22.readProperty_mMode (), ioArgument_ioContext.readProperty_mRequiredRoutineSet ().getter_hasKey (var_functionLLVMName_8184.readProperty_string () COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GGS_routineKind::class_func_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7173, var_exportedFunction_7199, GGS_routineAttributes::init (inCompiler COMMA_HERE), var_functionLLVMName_8184, temp_23.readProperty_mFunctionFormalArgumentList (), GGS_bool (true), temp_24.readProperty_mFunctionInstructionList (), temp_25.readProperty_mEndOfFunctionDeclaration (), temp_26.readProperty_mFunctionReturnTypeName ()  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_integerDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  result_outLocation = GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_nodeName_1321 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GGS_integerDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1321, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1321, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1321, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 32)) COMMA_SOURCE_FILE ("type-integer.galgas", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1321, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 33)) COMMA_SOURCE_FILE ("type-integer.galgas", 33)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_integerDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_integerDeclarationAST temp_0 = this ;
  result_outRepresentation = GGS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_minValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_minValueForInteger (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_minValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//--------------------------------------------------------------------------------------------------

GGS_bigint function_maxValueForInteger (const GGS_bool & constinArgument_inIsUnsigned,
                                        const GGS_uint & constinArgument_inBitCount,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_maxValueForInteger (Compiler * inCompiler,
                                                                const cObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_bool operand0 = GGS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  const GGS_uint operand1 = GGS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                     inCompiler
                                                     COMMA_THERE) ;
  return function_maxValueForInteger (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_integerDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                        GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                        GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                        GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                        GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                        GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                        GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                        GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerDeclarationAST temp_0 = this ;
  GGS_lstring var_integerTypeName_3607 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) ;
  GGS_unifiedTypeMapEntry var_selfTypeProxy_3703 ;
  {
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3607, var_selfTypeProxy_3703, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  const GGS_integerDeclarationAST temp_1 = this ;
  const GGS_integerDeclarationAST temp_2 = this ;
  GGS_bigint var_min_3782 = function_minValueForInteger (temp_1.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 81)), temp_2.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 81)) ;
  const GGS_integerDeclarationAST temp_3 = this ;
  const GGS_integerDeclarationAST temp_4 = this ;
  GGS_bigint var_max_3847 = function_maxValueForInteger (temp_3.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 82)), temp_4.readProperty_mSize (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  const GGS_integerDeclarationAST temp_5 = this ;
  GGS_string var_llvmTypeName_3967 = GGS_string ("i").add_operation (temp_5.readProperty_mSize ().getter_string (SOURCE_FILE ("type-integer.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 84)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_integerDeclarationAST temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::equal, temp_7.readProperty_mSize ().modulo_operation (GGS_uint (uint32_t (16U)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 86)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_lstring var_routineLLVMName_4372 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3607, var_integerTypeName_3607.readProperty_string (), GGS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 90)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 91)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 92)), var_selfTypeProxy_3703, var_routineLLVMName_4372, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)) ;
      }
      ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4372, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3967, GGS_string ("bswap"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 96)) ;
    }
  }
  GGS_lstring var_routineLLVMName_4888 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3607, var_integerTypeName_3607.readProperty_string (), GGS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 108)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 109)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 110)), var_selfTypeProxy_3703, var_routineLLVMName_4888, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 105)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4888, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3967, GGS_string ("bitreverse"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 114)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3607, var_integerTypeName_3607.readProperty_string (), GGS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 125)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 126)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 127)), var_selfTypeProxy_3703, var_routineLLVMName_4888, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 122)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4888, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3967, GGS_string ("ctlz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 131)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3607, var_integerTypeName_3607.readProperty_string (), GGS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 142)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 143)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 144)), var_selfTypeProxy_3703, var_routineLLVMName_4888, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 139)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4888, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3967, GGS_string ("cttz"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 148)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3607, var_integerTypeName_3607.readProperty_string (), GGS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 159)), GGS_mode::class_func_anySafeMode (SOURCE_FILE ("type-integer.galgas", 160)), GGS_propertyVisibility::class_func_isPublic (SOURCE_FILE ("type-integer.galgas", 161)), var_selfTypeProxy_3703, var_routineLLVMName_4888, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 156)) ;
  }
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_integerBuiltinFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21__21_ (var_routineLLVMName_4888, GGS_bool (false), GGS_bool (false), var_llvmTypeName_3967, GGS_string ("ctpop"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 165)) ;
  GGS_constantMap var_constantMap_6650 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_6650.setter_insertKey (GGS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 174)), var_min_3782, var_integerTypeName_3607, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 174)) ;
  }
  {
  var_constantMap_6650.setter_insertKey (GGS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 175)), var_max_3847, var_integerTypeName_3607, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 175)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3607, var_constantMap_6650, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 176)) ;
  }
  GGS_constructorMap var_constructorMap_6962 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  GGS_constructorSignature temp_8 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  var_constructorMap_6962.setter_insertKey (GGS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 182)), temp_8, GGS_constructorValue::class_func_simple (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 182))  COMMA_SOURCE_FILE ("type-integer.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 182)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3607, var_constructorMap_6962, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 183)) ;
  }
  const GGS_integerDeclarationAST temp_9 = this ;
  const GGS_integerDeclarationAST temp_10 = this ;
  GGS_omnibusType var_integerType_7199 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-integer.galgas", 186)), GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-integer.galgas", 187)).operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-integer.galgas", 187)) COMMA_SOURCE_FILE ("type-integer.galgas", 187)), var_integerTypeName_3607.readProperty_string (), GGS_typeKind::class_func_integer (var_min_3782, var_max_3847, temp_9.readProperty_mIsSigned ().operator_not (SOURCE_FILE ("type-integer.galgas", 189)), temp_10.readProperty_mSize ()  COMMA_SOURCE_FILE ("type-integer.galgas", 189)), var_integerTypeName_3607.readProperty_string (), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3607, var_integerType_7199, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  GGS_lstring var_key_8241 = function_assignmentOperatorKey (var_integerType_7199, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 212)), var_integerType_7199, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 212)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8241, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 213)) ;
  }
  var_key_8241 = function_assignmentOperatorKey (var_integerType_7199, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 214)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 214)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8241, GGS_simpleCopyAssignmentOperatorUsage::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 215)) ;
  }
  GGS_string var_functionName_8636 = function_assignmentOperatorFuncName (var_integerType_7199, var_integerType_7199, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 217)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_simpleAssignmentCopyRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_functionName_8636.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 219)), GGS_bool (false), GGS_bool (false), var_integerType_7199, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 218)) ;
  GGS_omnibusType var_boolType_8937 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 225)) ;
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_equal (SOURCE_FILE ("type-integer.galgas", 227)), var_integerType_7199, GGS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_8937, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 227)) ;
  }
  {
  const GGS_integerDeclarationAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = temp_11.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("icmp sle") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_infEqual (SOURCE_FILE ("type-integer.galgas", 230)), var_integerType_7199, temp_12, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_8937, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 229)) ;
  }
  {
  const GGS_integerDeclarationAST temp_14 = this ;
  GGS_string temp_15 ;
  const GalgasBool test_16 = temp_14.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_16) {
    temp_15 = GGS_string ("icmp slt") ;
  }else if (GalgasBool::boolFalse == test_16) {
    temp_15 = GGS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_lessThan (SOURCE_FILE ("type-integer.galgas", 238)), var_integerType_7199, temp_15, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_8937, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 237)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_leftShiftOp (SOURCE_FILE ("type-integer.galgas", 245)), var_integerType_7199, GGS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 245)) ;
  }
  {
  const GGS_integerDeclarationAST temp_17 = this ;
  GGS_string temp_18 ;
  const GalgasBool test_19 = temp_17.readProperty_mIsSigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_19) {
    temp_18 = GGS_string ("ashr") ;
  }else if (GalgasBool::boolFalse == test_19) {
    temp_18 = GGS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_rightShiftOp (SOURCE_FILE ("type-integer.galgas", 248)), var_integerType_7199, temp_18, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 247)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas", 255)), var_integerType_7199, GGS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 255)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas", 257)), var_integerType_7199, GGS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 257)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas", 259)), var_integerType_7199, GGS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 259)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_addOpNoOvf (SOURCE_FILE ("type-integer.galgas", 261)), var_integerType_7199, GGS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 261)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_subOpNoOvf (SOURCE_FILE ("type-integer.galgas", 263)), var_integerType_7199, GGS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 263)) ;
  }
  {
  routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (GGS_omnibusInfixOperator::class_func_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas", 265)), var_integerType_7199, GGS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_7199, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 265)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator???&?'
//
//--------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator_3F__3F__3F__26__3F_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                          const GGS_omnibusType constinArgument_inIntegerType,
                                                          const GGS_string constinArgument_inLLVMOp,
                                                          GGS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                                          const GGS_omnibusType constinArgument_inResultType,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_omnibusType var_ctIntType_10948 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 277)) ;
  GGS_lstring var_key_10992 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 278)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_10992, constinArgument_inResultType, GGS_inlineInfixOperatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 279)) ;
  }
  var_key_10992 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 280)), var_ctIntType_10948, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_10992, constinArgument_inResultType, GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 281)) ;
  }
  var_key_10992 = function_infixOperatorMapKey (var_ctIntType_10948, constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("type-integer.galgas", 282)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 282)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_10992, constinArgument_inResultType, GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::init_21_ (constinArgument_inLLVMOp, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 283)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_12556 ;
  GGS_bigint var_maxValue_12575 ;
  GGS_bool joker_12584_2 ; // Joker input parameter
  GGS_uint joker_12584_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 307)).readProperty_kind ().method_extractInteger (var_minValue_12556, var_maxValue_12575, joker_12584_2, joker_12584_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 307)) ;
  GGS_bigint var_value_12644 ;
  GGS_omnibusType joker_12629_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_extractLiteralInteger (joker_12629_1, var_value_12644, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 308)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_12644.objectCompare (var_minValue_12556)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 312)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 311)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 312)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 310)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_12644.objectCompare (var_maxValue_12575)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 316)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 315)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 316)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 314)) ;
      }
    }
  }
  GGS_objectIR var_leftOperand_13100 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13100, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 320)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 321)) ;
  }
  const GGS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_13288 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13100, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 322)).add_operation (extensionGetter_llvmName (var_leftOperand_13100, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 323)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_13288, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 324)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                                                          const GGS_location constinArgument_inOperatorLocation,
                                                                                          const GGS_objectIR constinArgument_inRightOperand,
                                                                                          const GGS_omnibusType constinArgument_inResultType,
                                                                                          GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                          GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          GGS_objectIR & outArgument_outResultValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bigint var_minValue_14513 ;
  GGS_bigint var_maxValue_14532 ;
  GGS_bool joker_14541_2 ; // Joker input parameter
  GGS_uint joker_14541_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 348)).readProperty_kind ().method_extractInteger (var_minValue_14513, var_maxValue_14532, joker_14541_2, joker_14541_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 348)) ;
  GGS_bigint var_value_14600 ;
  GGS_omnibusType joker_14585_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_extractLiteralInteger (joker_14585_1, var_value_14600, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 349)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::lowerThan, var_value_14600.objectCompare (var_minValue_14513)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 353)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 352)).add_operation (GGS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 353)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 351)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_value_14600.objectCompare (var_maxValue_14532)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GGS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 357)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 356)).add_operation (GGS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 357)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 355)) ;
      }
    }
  }
  GGS_objectIR var_rightOperand_15056 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_15056, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 361)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 362)) ;
  }
  const GGS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = this ;
  GGS_string var_s_15247 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).add_operation (temp_4.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_15056, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 363)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)).add_operation (extensionGetter_llvmName (var_rightOperand_15056, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 364)) ;
  {
  GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_15247, temp_5, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 365)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_integerBuiltinFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                               const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                               GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_integerBuiltinFunctionIR temp_0 = this ;
  const GGS_integerBuiltinFunctionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (temp_0.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 384)) ;
  const GGS_integerBuiltinFunctionIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_2.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)).add_operation (GGS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 385)) ;
  const GGS_integerBuiltinFunctionIR temp_3 = this ;
  const GGS_integerBuiltinFunctionIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %value = load ").add_operation (temp_3.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 386)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 386)).add_operation (temp_4.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 386)).add_operation (GGS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 386)) ;
  const GGS_integerBuiltinFunctionIR temp_5 = this ;
  const GGS_integerBuiltinFunctionIR temp_6 = this ;
  const GGS_integerBuiltinFunctionIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %result = call ").add_operation (temp_5.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 387)).add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 387)).add_operation (temp_6.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 387)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 387)).add_operation (temp_7.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 387)) ;
  const GGS_integerBuiltinFunctionIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (temp_8.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 388)).add_operation (GGS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 388)) ;
  const GGS_integerBuiltinFunctionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret ").add_operation (temp_9.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 389)).add_operation (GGS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 390)) ;
  const GGS_integerBuiltinFunctionIR temp_10 = this ;
  const GGS_integerBuiltinFunctionIR temp_11 = this ;
  const GGS_integerBuiltinFunctionIR temp_12 = this ;
  const GGS_integerBuiltinFunctionIR temp_13 = this ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.plusPlusAssignOperation (temp_10.readProperty_mLLVMTypeName ().add_operation (GGS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)).add_operation (temp_11.readProperty_mIntrinsicName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)).add_operation (temp_12.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)).add_operation (temp_13.readProperty_mLLVMTypeName (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 392))  COMMA_SOURCE_FILE ("type-integer.galgas", 391)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@freeCommentIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_freeCommentIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                     const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                     GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_freeCommentIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--------- ").add_operation (temp_0.readProperty_mComment (), inCompiler COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 19)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 19)), inCompiler  COMMA_SOURCE_FILE ("intermediate-free-comment.galgas", 19)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@loadFromReferenceIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_loadFromReferenceIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_loadFromReferenceIR temp_0 = this ;
  GGS_string var_llvmType_685 = extensionGetter_llvmTypeName (temp_0.readProperty_mTargetValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 23)) ;
  const GGS_loadFromReferenceIR temp_1 = this ;
  const GGS_loadFromReferenceIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTargetValue (), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (var_llvmType_685, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (var_llvmType_685, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (temp_2.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofExpressionAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                            GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofTypeAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                      GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofExpressionAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofTypeAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_sizeofTypeAST temp_0 = this ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-sizeof.galgas", 75)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofExpressionAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofExpressionAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                         const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                         const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                         const GGS_semanticContext constinArgument_inContext,
                                                         const GGS_mode /* constinArgument_inMode */,
                                                         GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                         GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                         GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                         GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         GGS_objectIR & outArgument_outResult,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas", 97)) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_sizeofExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLValue ().readProperty_mIdentifier ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 98)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_omnibusType var_type_4515 ;
    const GGS_sizeofExpressionAST temp_3 = this ;
    extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_3.readProperty_mLValue (), var_type_4515, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 101)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_4530 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 103)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 102)) ;
    GGS_omnibusType var_resultType_4656 = extensionGetter_type (var_resultTypeProxy_4530, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 105)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_4656, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 106)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_4515, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofTypeAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofTypeAST::method_analyzeExpression (const GGS_omnibusType /* constinArgument_inSelfType */,
                                                   const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                   const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                   const GGS_semanticContext constinArgument_inContext,
                                                   const GGS_mode /* constinArgument_inMode */,
                                                   GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                   GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                   GGS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                   GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                   GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                   GGS_objectIR & outArgument_outResult,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_contains (GGS_routineAttributes::class_func_isGuard (SOURCE_FILE ("expression-sizeof.galgas", 131)) COMMA_SOURCE_FILE ("expression-sizeof.galgas", 131)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_sizeofTypeAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("sizeof () cannot be used in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 132)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_sizeofTypeAST temp_3 = this ;
    GGS_omnibusType var_type_5845 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 134)) ;
    GGS_unifiedTypeMapEntry var_resultTypeProxy_5912 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 136)).getter_nowhere (SOURCE_FILE ("expression-sizeof.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 135)) ;
    GGS_omnibusType var_resultType_6038 = extensionGetter_type (var_resultTypeProxy_5912, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 138)) ;
    {
    routine_getNewTempValue_3F__26__21_ (var_resultType_6038, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 139)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_sizeofInstructionIR::init_21__21_ (outArgument_outResult, var_type_5845, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 140)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@sizeofInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_sizeofInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                           const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                           GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_sizeofInstructionIR temp_0 = this ;
  GGS_string var_typeName_7077 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 162)) ;
  const GGS_sizeofInstructionIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string (".asPtr = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7077, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (var_typeName_7077, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 163)) ;
  const GGS_sizeofInstructionIR temp_2 = this ;
  const GGS_sizeofInstructionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_llvmName (temp_2.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string (" = ptrtoint "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (var_typeName_7077, inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)).add_operation (GGS_string (".asPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("expression-sizeof.galgas", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_llvmInfixOperatorAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration????&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration_3F__3F__3F__3F__26_ (const GGS_omnibusInfixOperator constinArgument_inInfixOperator,
                                                                 const GGS_string constinArgument_inLLVMOperation,
                                                                 const GGS_string constinArgument_inTypeName,
                                                                 const GGS_string constinArgument_inResultOmnibusTypeName,
                                                                 GGS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_llvmGenerationInstructionList temp_0 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 35)) ;
  GGS_llvmGenerationInstructionList var_llvmInstructionList_1638 = temp_0 ;
  GGS_llvmGenerationInstructionElementList temp_1 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 36)) ;
  GGS_llvmGenerationInstructionElementList var_instructionElements_1708 = temp_1 ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 37))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 37))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 37)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43)) ;
  var_llvmInstructionList_1638.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1708, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44)) ;
  GGS_genericFormalParameterList temp_2 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 50)) ;
  GGS_genericFormalParameterList temp_3 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 53)) ;
  GGS_genericFormalParameterList temp_4 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 55)) ;
  GGS_abstractDeclarationAST var_declaration_2246 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 47)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 48)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 49)), temp_2, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 51)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 52)), temp_3, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 54)), temp_4, var_llvmInstructionList_1638, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2246.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 58)) ;
  GGS_llvmGenerationInstructionList temp_5 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 60)) ;
  var_llvmInstructionList_1638 = temp_5 ;
  GGS_llvmGenerationInstructionElementList temp_6 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 61)) ;
  var_instructionElements_1708 = temp_6 ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 62)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68)) ;
  var_llvmInstructionList_1638.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1708, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69)) ;
  GGS_genericFormalParameterList temp_7 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 75)) ;
  GGS_genericFormalParameterList temp_8 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 78)) ;
  GGS_genericFormalParameterList temp_9 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 80)) ;
  var_declaration_2246 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 72)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 73)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 74)), temp_7, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 76)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 77)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 77)), temp_8, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 79)), temp_9, var_llvmInstructionList_1638, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2246.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 83)) ;
  GGS_llvmGenerationInstructionList temp_10 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 85)) ;
  var_llvmInstructionList_1638 = temp_10 ;
  GGS_llvmGenerationInstructionElementList temp_11 = GGS_llvmGenerationInstructionElementList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 86)) ;
  var_instructionElements_1708 = temp_11 ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 87))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 87))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 87)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_type (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_string (GGS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92)) ;
  var_instructionElements_1708.addAssignOperation (GGS_llvmGenerationInstructionElement::class_func_symbol (GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93)) ;
  var_llvmInstructionList_1638.addAssignOperation (GGS_llvmGenerationInstruction::init_21_ (var_instructionElements_1708, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94)) ;
  GGS_genericFormalParameterList temp_12 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 100)) ;
  GGS_genericFormalParameterList temp_13 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 103)) ;
  GGS_genericFormalParameterList temp_14 = GGS_genericFormalParameterList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 105)) ;
  var_declaration_2246 = GGS_llvmInfixOperatorAST::init_21__21__21__21__21__21__21__21__21__21__21_ (constinArgument_inInfixOperator, GGS_location::class_func_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 97)), GGS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 98)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 99)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 99)), temp_12, GGS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 101)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 102)), temp_13, constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 104)), temp_14, var_llvmInstructionList_1638, inCompiler COMMA_HERE) ;
  callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) var_declaration_2246.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmInfixOperatorAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  const GGS_llvmInfixOperatorAST temp_3 = this ;
  GGS_lstring var_nodeName_6307 = GGS_lstring::init_21__21_ (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 160)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 160)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 160)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 160)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 160)), temp_3.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE) ;
  {
  const GGS_llvmInfixOperatorAST temp_4 = this ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6307, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6307, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 162)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6307, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 163)) ;
  }
  {
  const GGS_llvmInfixOperatorAST temp_7 = this ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6307, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 164)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_llvmInfixOperatorAST::getter_keyRepresentationForErrorSignaling (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 170)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 170)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 170)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 170)) ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmInfixOperatorAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                       GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                       GGS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                       GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                       GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                       GGS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                       GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                       GGS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftTypeProxy_7987 ;
  {
  const GGS_llvmInfixOperatorAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7987, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 188)) ;
  }
  GGS_omnibusType var_leftType_8008 = extensionGetter_type (var_leftTypeProxy_7987, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 189)) ;
  GGS_unifiedTypeMapEntry var_rightTypeProxy_8098 ;
  {
  const GGS_llvmInfixOperatorAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mRightTypeName (), var_rightTypeProxy_8098, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 190)) ;
  }
  GGS_omnibusType var_rightType_8120 = extensionGetter_type (var_rightTypeProxy_8098, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 191)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_8213 ;
  {
  const GGS_llvmInfixOperatorAST temp_2 = this ;
  extensionSetter_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8213, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 192)) ;
  }
  GGS_omnibusType var_resultType_8236 = extensionGetter_type (var_resultTypeProxy_8213, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 193)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8008.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8120.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_llvmInfixOperatorAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mInfixOperatorLocation (), GGS_string ("one of the two argument types should not be a compile time type"), fixItArray5  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)) ;
    }
  }
  const GGS_llvmInfixOperatorAST temp_6 = this ;
  callExtensionMethod_checkIsNotCompileTimeType ((cPtr_omnibusType *) var_resultType_8236.ptr (), temp_6.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 197)) ;
  const GGS_llvmInfixOperatorAST temp_7 = this ;
  const GGS_llvmInfixOperatorAST temp_8 = this ;
  GGS_lstring var_key_8563 = function_infixOperatorMapKey (var_leftType_8008, temp_7.readProperty_mInfixOperator (), temp_8.readProperty_mInfixOperatorLocation (), var_rightType_8120, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 199)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8008.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 201)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 201)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8120.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 201)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 201)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 201)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_llvmInfixOperatorAST temp_10 = this ;
      const GGS_llvmInfixOperatorAST temp_11 = this ;
      const GGS_llvmInfixOperatorAST temp_12 = this ;
      const GGS_llvmInfixOperatorAST temp_13 = this ;
      GGS_llvmInfixOperatorUsage var_definition_8769 = GGS_llvmInfixOperatorUsage::init_21__21__21__21_ (function_infixOperatorFunctionName (var_leftType_8008, temp_10.readProperty_mInfixOperator (), var_rightType_8120, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 203)), temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8563, var_resultType_8236, var_definition_8769, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 208)) ;
      }
      GGS_assignmentGenerationVarMap var_varMap_9090 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      {
      const GGS_llvmInfixOperatorAST temp_14 = this ;
      const GGS_llvmInfixOperatorAST temp_15 = this ;
      var_varMap_9090.setter_insertKey (temp_14.readProperty_mLeftOperandName (), GGS_string ("%").add_operation (temp_15.readProperty_mLeftOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 210)) ;
      }
      {
      const GGS_llvmInfixOperatorAST temp_16 = this ;
      const GGS_llvmInfixOperatorAST temp_17 = this ;
      var_varMap_9090.setter_insertKey (temp_16.readProperty_mRightOperandName (), GGS_string ("%").add_operation (temp_17.readProperty_mRightOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)) ;
      }
      GGS_assignmentGenerationVarMap var_typeMap_9295 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8008.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 213)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 213)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          {
          const GGS_llvmInfixOperatorAST temp_19 = this ;
          var_typeMap_9295.setter_insertKey (temp_19.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_8008.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)) ;
          }
        }
      }
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8120.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 216)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 216)).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          {
          const GGS_llvmInfixOperatorAST temp_21 = this ;
          var_typeMap_9295.setter_insertKey (temp_21.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_8120.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)) ;
          }
        }
      }
      {
      var_typeMap_9295.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 219)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8236.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 219)) ;
      }
      GGS_llvmGenerationInstructionList temp_22 = GGS_llvmGenerationInstructionList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)) ;
      GGS_llvmGenerationInstructionList var_instructionList_9670 = temp_22 ;
      var_instructionList_9670.addAssignOperation (GGS_llvmVarInstruction::init_21_ (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 221)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 221)) ;
      const GGS_llvmInfixOperatorAST temp_23 = this ;
      var_instructionList_9670.plusAssignOperation(temp_23.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222)) ;
      {
      extensionSetter_appendReturn (var_instructionList_9670, GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 223)), GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 223)) ;
      }
      GGS_stringlist temp_24 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 224)) ;
      GGS_stringlist var_generatedInstructions_9894 = temp_24 ;
      GGS_allocaList temp_25 = GGS_allocaList::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 225)) ;
      GGS_allocaList var_allocaList_9942 = temp_25 ;
      GGS_uint var_temporaryIndex_9973 = GGS_uint (uint32_t (0U)) ;
      extensionMethod_generateIRCode (var_instructionList_9670, var_varMap_9090, var_typeMap_9295, var_generatedInstructions_9894, var_temporaryIndex_9973, var_allocaList_9942, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 227)) ;
      const GGS_llvmInfixOperatorAST temp_26 = this ;
      const GGS_llvmInfixOperatorAST temp_27 = this ;
      const GGS_llvmInfixOperatorAST temp_28 = this ;
      const GGS_llvmInfixOperatorAST temp_29 = this ;
      GGS_infixOperatorRoutineIR var_routine_10108 = GGS_infixOperatorRoutineIR::init_21__21_isRequired_21_warnsIfUnused_21__21__21__21__21__21__21_ (GGS_lstring::init_21__21_ (function_infixOperatorFunctionName (var_leftType_8008, temp_26.readProperty_mInfixOperator (), var_rightType_8120, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 229)), temp_27.readProperty_mInfixOperatorLocation (), inCompiler COMMA_HERE), GGS_bool (true), GGS_bool (false), var_leftType_8008, temp_28.readProperty_mLeftOperandName ().readProperty_string (), var_rightType_8120, temp_29.readProperty_mRightOperandName ().readProperty_string (), var_resultType_8236, var_generatedInstructions_9894, var_allocaList_9942, inCompiler COMMA_HERE) ;
      ioArgument_ioRoutineListIR.addAssignOperation (var_routine_10108  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 240)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_llvmInfixOperatorAST temp_30 = this ;
    const GGS_llvmInfixOperatorAST temp_31 = this ;
    const GGS_llvmInfixOperatorAST temp_32 = this ;
    GGS_llvmInlineInfixOperatorUsage var_definition_10570 = GGS_llvmInlineInfixOperatorUsage::init_21__21__21_ (temp_30.readProperty_mLeftOperandName (), temp_31.readProperty_mRightOperandName (), temp_32.readProperty_mInstructionList (), inCompiler COMMA_HERE) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8563, var_resultType_8236, var_definition_10570, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 247)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                       const GGS_location constinArgument_inOperatorLocation,
                                                       const GGS_objectIR constinArgument_inRightOperand,
                                                       const GGS_omnibusType constinArgument_inResultType,
                                                       GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GGS_objectIR & outArgument_outResultValue,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_11775 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_11775, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 276)) ;
  }
  GGS_objectIR var_rightOperand_11910 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_11910, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 281)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 286)) ;
  }
  GGS_procCallEffectiveParameterListIR temp_0 = GGS_procCallEffectiveParameterListIR::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 287)) ;
  GGS_procCallEffectiveParameterListIR var_argumentList_12183 = temp_0 ;
  var_argumentList_12183.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas", 288)), var_leftOperand_11775  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 288)) ;
  var_argumentList_12183.addAssignOperation (GGS_procEffectiveParameterPassingModeIR::class_func_output (SOURCE_FILE ("infix-operator-llvm.galgas", 289)), var_rightOperand_11910  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 289)) ;
  const GGS_llvmInfixOperatorUsage temp_1 = this ;
  const GGS_llvmInfixOperatorUsage temp_2 = this ;
  ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_standaloneRoutineCallIR::init_21__21__21__21_ (outArgument_outResultValue, GGS_lstring::init_21__21_ (temp_1.readProperty_mInfixMangledFunctionName (), constinArgument_inOperatorLocation, inCompiler COMMA_HERE), temp_2.readProperty_mInfixMangledFunctionName (), var_argumentList_12183, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 290)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@llvmInlineInfixOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_llvmInlineInfixOperatorUsage::method_generateCode (const GGS_objectIR constinArgument_inLeftOperand,
                                                             const GGS_location /* constinArgument_inOperatorLocation */,
                                                             const GGS_objectIR constinArgument_inRightOperand,
                                                             const GGS_omnibusType constinArgument_inResultType,
                                                             GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GGS_allocaList & ioArgument_ioAllocaList,
                                                             GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             GGS_objectIR & outArgument_outResultValue,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_objectIR var_leftOperand_13307 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13307, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 320)) ;
  }
  GGS_objectIR var_rightOperand_13442 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 325)) ;
  }
  {
  routine_getNewTempValue_3F__26__21_ (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 330)) ;
  }
  GGS_assignmentGenerationVarMap var_varMap_13709 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_llvmInlineInfixOperatorUsage temp_0 = this ;
  var_varMap_13709.setter_insertKey (temp_0.readProperty_mLeftOperandName (), extensionGetter_llvmName (var_leftOperand_13307, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 332)) ;
  }
  {
  const GGS_llvmInlineInfixOperatorUsage temp_1 = this ;
  var_varMap_13709.setter_insertKey (temp_1.readProperty_mRightOperandName (), extensionGetter_llvmName (var_rightOperand_13442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)) ;
  }
  {
  var_varMap_13709.setter_insertKey (GGS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 334)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)) ;
  }
  GGS_assignmentGenerationVarMap var_typeMap_13960 = GGS_assignmentGenerationVarMap::init (inCompiler COMMA_HERE) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13307, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 336)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 336)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 336)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_llvmInlineInfixOperatorUsage temp_3 = this ;
      var_typeMap_13960.setter_insertKey (temp_3.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13307, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 339)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 339)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_llvmInlineInfixOperatorUsage temp_5 = this ;
      var_typeMap_13960.setter_insertKey (temp_5.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)) ;
      }
    }
  }
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 342)) ;
  GGS_stringlist var_generatedInstructions_14265 = temp_6 ;
  const GGS_llvmInlineInfixOperatorUsage temp_7 = this ;
  extensionMethod_generateIRCode (temp_7.readProperty_mInstructionList (), var_varMap_13709, var_typeMap_13960, var_generatedInstructions_14265, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 343)) ;
  UpEnumerator_stringlist enumerator_14429 (var_generatedInstructions_14265) ;
  while (enumerator_14429.hasCurrentObject ()) {
    {
    GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 345)) ;
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14429.current_mValue (HERE), temp_8, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 345)) ;
    }
    enumerator_14429.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@infixOperatorRoutineIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_infixOperatorRoutineIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                             const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                             GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_infixOperatorRoutineIR temp_0 = this ;
  const GGS_infixOperatorRoutineIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 370)).add_operation (GGS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 370)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 370)) ;
  const GGS_infixOperatorRoutineIR temp_2 = this ;
  const GGS_infixOperatorRoutineIR temp_3 = this ;
  const GGS_infixOperatorRoutineIR temp_4 = this ;
  const GGS_infixOperatorRoutineIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (temp_3.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GGS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (temp_5.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GGS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)) ;
  const GGS_infixOperatorRoutineIR temp_6 = this ;
  extensionMethod_generateAllocaList (temp_6.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)) ;
  const GGS_infixOperatorRoutineIR temp_7 = this ;
  UpEnumerator_stringlist enumerator_15775 (temp_7.readProperty_mGeneratedInstructions ()) ;
  while (enumerator_15775.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_15775.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 375)) ;
    enumerator_15775.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 377)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@copyFromReferencesIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                            const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                            GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_copyFromReferencesIR temp_0 = this ;
  const GGS_copyFromReferencesIR temp_1 = this ;
  GGS_string var_assignmentFunctionLLVMName_1997 = function_assignmentOperatorFuncName (temp_0.readProperty_mTarget ().readProperty_type (), temp_1.readProperty_mTarget ().readProperty_type (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 50)) ;
  const GGS_copyFromReferencesIR temp_2 = this ;
  GGS_string var_llvmTypeName_2099 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTarget ().readProperty_type ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @").add_operation (var_assignmentFunctionLLVMName_1997.getter_assemblerRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 52)) ;
  const GGS_copyFromReferencesIR temp_3 = this ;
  const GGS_copyFromReferencesIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_llvmTypeName_2099, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (temp_3.readProperty_mTarget ().readProperty_llvmName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (var_llvmTypeName_2099, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (temp_4.readProperty_mSourceLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 53)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@copyFromReferencesIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_copyFromReferencesIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                GGS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_copyFromReferencesIR temp_0 = this ;
  const GGS_copyFromReferencesIR temp_1 = this ;
  GGS_string var_assignmentFunctionLLVMName_2612 = function_assignmentOperatorFuncName (temp_0.readProperty_mTarget ().readProperty_type (), temp_1.readProperty_mTarget ().readProperty_type (), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)) ;
  ioArgument_ioInvokedRoutineSet.plusPlusAssignOperation (var_assignmentFunctionLLVMName_2612  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_structureDeclarationAST temp_0 = this ;
  const GGS_structureDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mReceiverTypeName (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  const GGS_structureDeclarationAST temp_2 = this ;
  UpEnumerator_structurePropertyListAST enumerator_9391 (temp_2.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_9391.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_9391.current_mPropertyTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        const GGS_structureDeclarationAST temp_4 = this ;
        ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mReceiverTypeName (), enumerator_9391.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9391.current_mPropertyKind (HERE).enumValue ()) {
    case GGS_propertyKindAST::Enumeration::invalid:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_uninitializedStoredProperty:
    case GGS_propertyKindAST::Enumeration::enum_uninitializedConstantProperty:
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedStoredProperty:
      {
        GGS_expressionAST extractedValue_9694_initExpression_0 ;
        enumerator_9391.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedStoredProperty (extractedValue_9694_initExpression_0) ;
        const GGS_structureDeclarationAST temp_5 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9694_initExpression_0.ptr (), temp_5.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_initializedConstantProperty:
      {
        GGS_expressionAST extractedValue_9844_initExpression_0 ;
        enumerator_9391.current_mPropertyKind (HERE).getAssociatedValuesFor_initializedConstantProperty (extractedValue_9844_initExpression_0) ;
        const GGS_structureDeclarationAST temp_6 = this ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_9844_initExpression_0.ptr (), temp_6.readProperty_mReceiverTypeName (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_readOnlyComputedProperty:
      {
        GGS_instructionListAST extractedValue_9991_instructionList_0 ;
        GGS_location extractedValue_10007__1 ;
        enumerator_9391.current_mPropertyKind (HERE).getAssociatedValuesFor_readOnlyComputedProperty (extractedValue_9991_instructionList_0, extractedValue_10007__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_9991_instructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GGS_propertyKindAST::Enumeration::enum_writeComputedProperty:
      {
        GGS_instructionListAST extractedValue_10120_writeInstructionList_0 ;
        GGS_location extractedValue_10141__1 ;
        enumerator_9391.current_mPropertyKind (HERE).getAssociatedValuesFor_writeComputedProperty (extractedValue_10120_writeInstructionList_0, extractedValue_10141__1) ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_10120_writeInstructionList_0, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9391.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_structureDeclarationAST::getter_keyRepresentationForErrorSignaling (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outRepresentation ; // Returned variable
  const GGS_structureDeclarationAST temp_0 = this ;
  result_outRepresentation = temp_0.readProperty_mReceiverTypeName ().readProperty_string () ;
//---
  return result_outRepresentation ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'
//
//--------------------------------------------------------------------------------------------------

GGS_location cPtr_structureDeclarationAST::getter_locationForErrorSignaling (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_location result_outLocation ; // Returned variable
  const GGS_structureDeclarationAST temp_0 = this ;
  result_outLocation = temp_0.readProperty_mReceiverTypeName ().readProperty_location () ;
//---
  return result_outLocation ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureDeclarationAST enterInContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structureDeclarationAST::method_enterInContext (GGS_semanticContext & ioArgument_ioContext,
                                                          GGS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                          GGS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                          GGS_routineListIR & ioArgument_ioRoutineListIR,
                                                          GGS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                          GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                          GGS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                          GGS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyList temp_0 = GGS_propertyList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
  GGS_propertyList var_propertyList_21086 = temp_0 ;
  GGS_sortedOperandIRList temp_1 = GGS_sortedOperandIRList::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 560)) ;
  GGS_sortedOperandIRList var_sortedOperandIRList_21179 = temp_1 ;
  GGS_constructorSignature temp_2 = GGS_constructorSignature::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 561)) ;
  GGS_constructorSignature var_constructorSignature_21233 = temp_2 ;
  GGS_string var_constructorKey_21274 = GGS_string ("(") ;
  GGS_bool var_canBeCopied_21301 = GGS_bool (true) ;
  const GGS_structureDeclarationAST temp_3 = this ;
  UpEnumerator_structurePropertyListAST enumerator_21343 (temp_3.readProperty_mStructurePropertyListAST ()) ;
  while (enumerator_21343.hasCurrentObject ()) {
    const GGS_structureDeclarationAST temp_4 = this ;
    const GGS_structureDeclarationAST temp_5 = this ;
    const GGS_structureDeclarationAST temp_6 = this ;
    extensionMethod_enterPropertyInContext (enumerator_21343.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_4.readProperty_mReceiverTypeName (), temp_5.readProperty_mOmnibusTypeSpecificName (), temp_6.readProperty_mLLVMBaseTypeName ().readProperty_string (), ioArgument_ioDecoratedRoutineList, var_propertyList_21086, var_sortedOperandIRList_21179, var_constructorSignature_21233, var_constructorKey_21274, var_canBeCopied_21301, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 565)) ;
    enumerator_21343.gotoNextObject () ;
  }
  var_constructorKey_21274.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
  GGS_constructorMap var_constructorMap_21931 = GGS_constructorMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_structureDeclarationAST temp_7 = this ;
  var_constructorMap_21931.setter_insertKey (GGS_lstring::init_21__21_ (var_constructorKey_21274, temp_7.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_constructorSignature_21233, GGS_constructorValue::class_func_structure (var_sortedOperandIRList_21179  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 583)) ;
  }
  {
  const GGS_structureDeclarationAST temp_8 = this ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_8.readProperty_mOmnibusTypeSpecificName (), var_constructorMap_21931, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
  }
  GGS_omnibusTypeAttributes var_typeAttributes_22302 = GGS_omnibusTypeAttributes::class_func_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 590)) ;
  const GGS_structureDeclarationAST temp_9 = this ;
  UpEnumerator_lstringlist enumerator_22433 (temp_9.readProperty_mAttributeListAST ()) ;
  while (enumerator_22433.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::equal, enumerator_22433.current_mValue (HERE).readProperty_string ().objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 593)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = var_typeAttributes_22302.getter_contains (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 594)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_22433.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            test_13 = var_canBeCopied_21301.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 596)).boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_structureDeclarationAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mReceiverTypeName ().readProperty_location (), GGS_string ("this structure cannot be copied, one field is not copyable"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 597)) ;
            }
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_10) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (enumerator_22433.current_mValue (HERE).readProperty_location (), GGS_string ("only @copyable attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 600)) ;
    }
    enumerator_22433.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_structureDeclarationAST temp_18 = this ;
    test_17 = temp_18.readProperty_mGenerateAssignmentRoutine ().operator_and (var_canBeCopied_21301 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 603)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      var_typeAttributes_22302 = var_typeAttributes_22302.operator_or (GGS_omnibusTypeAttributes::class_func_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 604)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 604)) ;
    }
  }
  const GGS_structureDeclarationAST temp_19 = this ;
  const GGS_structureDeclarationAST temp_20 = this ;
  GGS_omnibusType var_structureType_23004 = GGS_omnibusType::init_21_subscript_21_attributes_21_omnibusTypeDescriptionName_21_kind_21_llvmBaseTypeName (GGS_subscript::class_func_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 608)), var_typeAttributes_22302, temp_19.readProperty_mOmnibusTypeSpecificName ().readProperty_string (), GGS_typeKind::class_func_structure (var_propertyList_21086  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 611)), temp_20.readProperty_mLLVMBaseTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
  {
  const GGS_structureDeclarationAST temp_21 = this ;
  extensionSetter_insertType (ioArgument_ioContext.mProperty_mTypeMap, temp_21.readProperty_mReceiverTypeName (), var_structureType_23004, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 614)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssignOperation (GGS_userLLVMSructureTypeDefinitionIR::init_21__21_ (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_23004.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 620)), var_propertyList_21086, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 619)) ;
  GGS_string var_assignmentFunctionLLVMName_23634 = function_assignmentOperatorFuncName (var_structureType_23004, var_structureType_23004, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625)) ;
  ioArgument_ioRoutineListIR.addAssignOperation (GGS_structureTypeAssignFunctionIR::init_21__21_isRequired_21_warnsIfUnused_21_ (var_assignmentFunctionLLVMName_23634.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 627)), GGS_bool (false), GGS_bool (false), var_structureType_23004, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 626)) ;
  GGS_lstring var_key_23927 = function_assignmentOperatorKey (var_structureType_23004, GGS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 633)), var_structureType_23004, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 633)) ;
  GGS_structureAssignmentOperatorUsage var_operatorUsage_24003 = GGS_structureAssignmentOperatorUsage::init_21_ (var_structureType_23004, inCompiler COMMA_HERE) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_23927, var_operatorUsage_24003, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 635)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'
//--------------------------------------------------------------------------------------------------

void cPtr_userLLVMSructureTypeDefinitionIR::method_generateLLVMType (GGS_string & ioArgument_ioLLVMcode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_userLLVMSructureTypeDefinitionIR temp_0 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(temp_0.readProperty_mLLVMDefinedTypeName ().add_operation (GGS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 649)) ;
  const GGS_userLLVMSructureTypeDefinitionIR temp_1 = this ;
  UpEnumerator_propertyList enumerator_24765 (temp_1.readProperty_mPropertyList ()) ;
  while (enumerator_24765.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssignOperation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24765.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)) ;
    enumerator_24765.gotoNextObject () ;
    if (enumerator_24765.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 652)) ;
    }
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 654)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureAssignmentOperatorUsage generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_structureAssignmentOperatorUsage::method_generateCode (GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                 GGS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 const GGS_omnibusType constinArgument_inTargetType,
                                                                 const GGS_string constinArgument_inTargetLLVMName,
                                                                 const GGS_objectIR constinArgument_inSourcePossibleReference,
                                                                 const GGS_location constinArgument_inErrorLocation,
                                                                 const GGS_bool constinArgument_inTargetIsInitialized,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_structTypeName_25679 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)) ;
  GGS_uintlist temp_0 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  GGS_arcAssignmentList var_arcAssignmentList_25728 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 677)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 678)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_arcAssignmentList enumerator_25846 (var_arcAssignmentList_25728) ;
      while (enumerator_25846.hasCurrentObject ()) {
        GGS_string var_llvmPropertyPtrName_25892 = GGS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)) ;
        GGS_string var_s_25972 = GGS_string ("  ").add_operation (var_llvmPropertyPtrName_25892, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25679, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (var_structTypeName_25679, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)).add_operation (GGS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 681)) ;
        UpEnumerator_uintlist enumerator_26124 (enumerator_25846.current_mPropertyIndexPath (HERE)) ;
        while (enumerator_26124.hasCurrentObject ()) {
          var_s_25972.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_26124.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 683)) ;
          enumerator_26124.gotoNextObject () ;
        }
        var_s_25972.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_25846.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)) ;
        {
        GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_25972, temp_2, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        }
        GGS_string var_propertyTypeLLVMName_26300 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25846.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)) ;
        var_s_25972 = GGS_string ("store ").add_operation (var_propertyTypeLLVMName_26300, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GGS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_propertyTypeLLVMName_26300, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)).add_operation (var_llvmPropertyPtrName_25892, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)) ;
        {
        GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_25972, temp_3, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 689)) ;
        }
        enumerator_25846.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GGS_objectIR::Enumeration::invalid:
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedDynamicValue:
    {
      GGS_omnibusType extractedValue_26612__0 ;
      GGS_uint extractedValue_26612__1 ;
      GGS_objectIR extractedValue_26612__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedDynamicValue (extractedValue_26612__0, extractedValue_26612__1, extractedValue_26612__2) ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayRepeatedDynamicValue»"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 694)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayDynamicValues:
    {
      GGS_omnibusType extractedValue_26740__0 ;
      GGS_operandIRList extractedValue_26740__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayDynamicValues (extractedValue_26740__0, extractedValue_26740__1) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayDynamicValues»"), fixItArray5  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 696)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayStaticValues:
    {
      GGS_omnibusType extractedValue_26860__0 ;
      GGS_operandIRList extractedValue_26860__1 ;
      GGS_uint extractedValue_26860__2 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayStaticValues (extractedValue_26860__0, extractedValue_26860__1, extractedValue_26860__2) ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 698)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmArrayRepeatedStaticValue:
    {
      GGS_omnibusType extractedValue_26986__0 ;
      GGS_uint extractedValue_26986__1 ;
      GGS_objectIR extractedValue_26986__2 ;
      GGS_uint extractedValue_26994_idx_3 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmArrayRepeatedStaticValue (extractedValue_26986__0, extractedValue_26986__1, extractedValue_26986__2, extractedValue_26994_idx_3) ;
      GGS_string var_assignmentFunctionLLVMName_27009 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)) ;
      GGS_string var_s_27104 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27009.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GGS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (extractedValue_26994_idx_3.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      {
      GGS_stringset temp_7 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      temp_7.plusPlusAssignOperation (var_assignmentFunctionLLVMName_27009  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27104, temp_7, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 704)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_reference:
    {
      GGS_omnibusType extractedValue_27431__0 ;
      GGS_string extractedValue_27431__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_reference (extractedValue_27431__0, extractedValue_27431__1) ;
      GGS_string var_assignmentFunctionLLVMName_27444 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)) ;
      GGS_string var_s_27538 = GGS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27444.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      {
      GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      temp_8.plusPlusAssignOperation (var_assignmentFunctionLLVMName_27444  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27538, temp_8, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 710)) ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmStructureValue:
    {
      GGS_omnibusType extractedValue_27896__0 ;
      GGS_sortedOperandIRList extractedValue_27898_sortedOperandValues_1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmStructureValue (extractedValue_27896__0, extractedValue_27898_sortedOperandValues_1) ;
      GGS_uint var_uniqueValue_27929 = ioArgument_ioTemporaries.readProperty_mTemporaryIndex () ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 713)) ;
      UpEnumerator_sortedOperandIRList enumerator_28029 (extractedValue_27898_sortedOperandValues_1) ;
      while (enumerator_28029.hasCurrentObject ()) {
        GGS_string var_ptr_28070 = GGS_string ("%ptr.").add_operation (var_uniqueValue_27929.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (enumerator_28029.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
        GGS_string var_s_28120 = var_ptr_28070.add_operation (GGS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25679, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (var_structTypeName_25679, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)).add_operation (enumerator_28029.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
        {
        GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28120, temp_9, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        }
        var_s_28120 = GGS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_28029.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmName (enumerator_28029.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (extensionGetter_llvmTypeName (enumerator_28029.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)).add_operation (var_ptr_28070, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)) ;
        {
        GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28120, temp_10, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 719)) ;
        }
        enumerator_28029.gotoNextObject () ;
      }
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalInteger:
    {
      GGS_omnibusType extractedValue_28523__0 ;
      GGS_bigint extractedValue_28523__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalInteger (extractedValue_28523__0, extractedValue_28523__1) ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «literalInteger»"), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 722)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_literalString:
    {
      GGS_uint extractedValue_28627__0 ;
      GGS_uint extractedValue_28627__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_literalString (extractedValue_28627__0, extractedValue_28627__1) ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «literalString»"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 724)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_llvmNamedValue:
    {
      GGS_omnibusType extractedValue_28731__0 ;
      GGS_string extractedValue_28731__1 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_llvmNamedValue (extractedValue_28731__0, extractedValue_28731__1) ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmArrayStaticValues»"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 726)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_null:
    {
      GGS_omnibusType extractedValue_28832__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_null (extractedValue_28832__0) ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «llvmValue»"), fixItArray14  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 728)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_void:
    {
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «void»"), fixItArray15  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 730)) ;
    }
    break ;
  case GGS_objectIR::Enumeration::enum_zero:
    {
      GGS_omnibusType extractedValue_29000__0 ;
      constinArgument_inSourcePossibleReference.getAssociatedValuesFor_zero (extractedValue_29000__0) ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("invalid structure assignment «zero»"), fixItArray16  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 732)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_structureTypeAssignFunctionIR::method_llvmCodeGeneration (GGS_string & ioArgument_ioLLVMcode,
                                                                    const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_structureTypeAssignFunctionIR temp_0 = this ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  GGS_arcAssignmentList var_arcAssignmentList_29596 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_0.readProperty_mStructureType ().ptr (), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  const GGS_structureTypeAssignFunctionIR temp_2 = this ;
  GGS_string var_structureTypeLLVMTypeName_29657 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mStructureType ().ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  const GGS_structureTypeAssignFunctionIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("define internal void @").add_operation (temp_3.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" (").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)).add_operation (GGS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_structureTypeLLVMTypeName_29657.add_operation (GGS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 754)) ;
  UpEnumerator_arcAssignmentList enumerator_30045 (var_arcAssignmentList_29596) ;
  while (enumerator_30045.hasCurrentObject ()) {
    GGS_string var_propertyTypeLLVMName_30088 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30045.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    GGS_string var_llvmVarName_30145 = GGS_string ("%arc.retain.").add_operation (enumerator_30045.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_30145, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)).add_operation (GGS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 759)) ;
    UpEnumerator_uintlist enumerator_30447 (enumerator_30045.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_30447.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_30447.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 761)) ;
      enumerator_30447.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_30045.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    GGS_string var_llvmLoadedVarName_30565 = var_llvmVarName_30145.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_30565, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30088, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_propertyTypeLLVMName_30088, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_llvmVarName_30145, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_30088, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (var_llvmLoadedVarName_30565, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 766)) ;
    enumerator_30045.gotoNextObject () ;
  }
  UpEnumerator_arcAssignmentList enumerator_30890 (var_arcAssignmentList_29596) ;
  while (enumerator_30890.hasCurrentObject ()) {
    GGS_string var_llvmVarName_30933 = GGS_string ("%arc.release.").add_operation (enumerator_30890.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)).add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmVarName_30933, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)).add_operation (GGS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 771)) ;
    UpEnumerator_uintlist enumerator_31236 (enumerator_30890.current_mPropertyIndexPath (HERE)) ;
    while (enumerator_31236.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (", i32 ").add_operation (enumerator_31236.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 773)) ;
      enumerator_31236.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ; ").add_operation (enumerator_30890.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    GGS_string var_propertyTypeLLVMName_31354 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30890.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    GGS_string var_llvmLoadedVarName_31411 = var_llvmVarName_30933.add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_llvmLoadedVarName_31411, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31354, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_propertyTypeLLVMName_31354, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_llvmVarName_30933, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_31354, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (var_llvmLoadedVarName_31411, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 779)) ;
    enumerator_30890.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GGS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)).add_operation (GGS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GGS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GGS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)).add_operation (GGS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)).add_operation (GGS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)).add_operation (GGS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)).add_operation (GGS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)).add_operation (GGS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %temp = add i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)).add_operation (GGS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29657, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)).add_operation (GGS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 821)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_noteInstructionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_forLowerUpperBoundInstructionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_forLowerUpperBoundInstructionAST temp_2 = this ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
      }
    }
  }
  const GGS_forLowerUpperBoundInstructionAST temp_3 = this ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_3.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  const GGS_forLowerUpperBoundInstructionAST temp_4 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_4.readProperty_mLowerBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  const GGS_forLowerUpperBoundInstructionAST temp_5 = this ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) temp_5.readProperty_mUpperBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionAST::method_instructionSemanticAnalysis (const GGS_omnibusType constinArgument_inSelfType,
                                                                                const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                const GGS_semanticContext constinArgument_inContext,
                                                                                const GGS_mode constinArgument_inMode,
                                                                                GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                GGS_allocaList & ioArgument_ioAllocaList,
                                                                                GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionAST temp_0 = this ;
  GGS_omnibusType var_type_3993 = extensionGetter_type (extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
  switch (var_type_3993.readProperty_kind ().enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolean:
  case GGS_typeKind::Enumeration::enum_void:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_staticArrayType:
    {
      GGS_omnibusType extractedValue_4180__0 ;
      GGS_bigint extractedValue_4182__1 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_staticArrayType (extractedValue_4180__0, extractedValue_4182__1) ;
      const GGS_forLowerUpperBoundInstructionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dynamicArrayType:
    {
      GGS_omnibusType extractedValue_4274__0 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_dynamicArrayType (extractedValue_4274__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumeration:
    break ;
  case GGS_typeKind::Enumeration::enum_literalString:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_opaque:
    {
      GGS_bigint extractedValue_4466__0 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_opaque (extractedValue_4466__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeBool:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_llvmType:
    {
      GGS_bigint extractedValue_4637__0 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_llvmType (extractedValue_4637__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_generic:
    {
      GGS_genericFormalParameterList extractedValue_4721__0 ;
      GGS_ctExpressionAST extractedValue_4721__1 ;
      GGS_llvmStringDefinition extractedValue_4721__2 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_generic (extractedValue_4721__0, extractedValue_4721__1, extractedValue_4721__2) ;
      const GGS_forLowerUpperBoundInstructionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_compileTimeInteger:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_structure:
    {
      GGS_propertyList extractedValue_4896__0 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_structure (extractedValue_4896__0) ;
      const GGS_forLowerUpperBoundInstructionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray20  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_syncTool:
    {
      const GGS_forLowerUpperBoundInstructionAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray22  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_function:
    {
      GGS_mode extractedValue_5061__0 ;
      GGS_routineTypedSignature extractedValue_5061__1 ;
      GGS_unifiedTypeMapEntry extractedValue_5061__2 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_function (extractedValue_5061__0, extractedValue_5061__1, extractedValue_5061__2) ;
      const GGS_forLowerUpperBoundInstructionAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mTypeName ().readProperty_location (), GGS_string ("an integer type is required here"), fixItArray24  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integer:
    {
      GGS_bigint extractedValue_5159_min_0 ;
      GGS_bigint extractedValue_5178_max_1 ;
      GGS_bool extractedValue_5188_unsigned_2 ;
      GGS_uint extractedValue_5210_bitCount_3 ;
      var_type_3993.readProperty_kind ().getAssociatedValuesFor_integer (extractedValue_5159_min_0, extractedValue_5178_max_1, extractedValue_5188_unsigned_2, extractedValue_5210_bitCount_3) ;
      GGS_objectIR var_lowerBoundExpressionResult_5658 ;
      const GGS_forLowerUpperBoundInstructionAST temp_25 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_25.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_3993, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5658, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5658, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 132)) ;
      }
      GGS_objectIR var_upperBoundExpressionResult_6223 ;
      const GGS_forLowerUpperBoundInstructionAST temp_26 = this ;
      callExtensionMethod_analyzeExpression ((cPtr_expressionAST *) temp_26.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_3993, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6223, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6223, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_27 = this ;
      GGS_objectIR var_lowerBound_6419 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_lowerBoundExpressionResult_5658, var_type_3993, temp_27.readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      const GGS_forLowerUpperBoundInstructionAST temp_28 = this ;
      GGS_objectIR var_upperBound_6688 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_upperBoundExpressionResult_6223, var_type_3993, temp_28.readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_29 = this ;
      const GGS_forLowerUpperBoundInstructionAST temp_30 = this ;
      GGS_lstring var_enumeratedVarName_7053 = GGS_lstring::init_21__21_ (temp_29.readProperty_mVarName ().readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), temp_30.readProperty_mVarName ().readProperty_location (), inCompiler COMMA_HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssignOperation (function_llvmNameForLocalVariable (var_enumeratedVarName_7053.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_3993, GGS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      GalgasBool test_31 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_31) {
        const GGS_forLowerUpperBoundInstructionAST temp_32 = this ;
        test_31 = GGS_bool (ComparisonKind::notEqual, temp_32.readProperty_mVarName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          {
          const GGS_forLowerUpperBoundInstructionAST temp_33 = this ;
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_33.readProperty_mVarName (), GGS_bool (false), var_type_3993, var_enumeratedVarName_7053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
          }
        }
      }
      GGS_instructionListIR temp_34 = GGS_instructionListIR::init (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      GGS_instructionListIR var_instructionGenerationList_7476 = temp_34 ;
      const GGS_forLowerUpperBoundInstructionAST temp_35 = this ;
      const GGS_forLowerUpperBoundInstructionAST temp_36 = this ;
      extensionMethod_analyzeBranchInstructionList (temp_35.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_36.readProperty_mEndOf_5F_do_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7476, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      const GGS_forLowerUpperBoundInstructionAST temp_37 = this ;
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_37.readProperty_mEndOf_5F_do_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
      }
      const GGS_forLowerUpperBoundInstructionAST temp_38 = this ;
      ioArgument_ioInstructionGenerationList.addAssignOperation (GGS_forLowerUpperBoundInstructionIR::init_21__21__21__21__21__21__21_ (var_enumeratedVarName_7053.readProperty_string (), var_type_3993, extractedValue_5188_unsigned_2, temp_38.readProperty_mEndOf_5F_do_5F_instruction (), var_lowerBound_6419, var_upperBound_6688, var_instructionGenerationList_7476, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                       const GGS_generationContext constinArgument_inGenerationContext,
                                                                       GGS_generationAdds & ioArgument_ioGenerationAdds,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionIR temp_0 = this ;
  GGS_string var_llvmType_9327 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_1 = this ;
  GGS_string var_llvmVarName_9368 = function_llvmNameForLocalVariable (temp_1.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_2 = this ;
  GGS_string var_testLabel_9430 = GGS_string ("for.").add_operation (temp_2.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GGS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_3 = this ;
  GGS_string var_loopLabel_9499 = GGS_string ("for.").add_operation (temp_3.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GGS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_4 = this ;
  GGS_string var_endLabel_9568 = GGS_string ("for.").add_operation (temp_4.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GGS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_5 = this ;
  GGS_string var_testResult_9636 = GGS_string ("%for.").add_operation (temp_5.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GGS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_6 = this ;
  GGS_string var_loadedVarName_9714 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_6.readProperty_mVarName ().add_operation (GGS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_7 = this ;
  GGS_string var_currentVarName_9795 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mVarName ().add_operation (GGS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_8 = this ;
  GGS_string var_nextVarName_9878 = GGS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_8.readProperty_mVarName ().add_operation (GGS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_9 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLowerExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmVarName_9368, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_9430, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_testLabel_9430.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_loadedVarName_9714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9368, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_testResult_9636, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GGS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_10 = this ;
  GGS_string temp_11 ;
  const GalgasBool test_12 = temp_10.readProperty_mUnsigned ().boolEnum () ;
  if (GalgasBool::boolTrue == test_12) {
    temp_11 = GGS_string ("ult") ;
  }else if (GalgasBool::boolFalse == test_12) {
    temp_11 = GGS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssignOperation(temp_11, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_13 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string (" ").add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_loadedVarName_9714, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mUpperExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br i1 ").add_operation (var_testResult_9636, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_loopLabel_9499, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GGS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_endLabel_9568, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_loopLabel_9499.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  const GGS_forLowerUpperBoundInstructionIR temp_14 = this ;
  extensionMethod_instructionListLLVMCode (temp_14.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_currentVarName_9795, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmVarName_9368, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (var_nextVarName_9878, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GGS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_currentVarName_9795, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GGS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  store ").add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_nextVarName_9878, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_9368, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  br label %").add_operation (var_testLabel_9430, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssignOperation(var_endLabel_9568.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'
//--------------------------------------------------------------------------------------------------

void cPtr_forLowerUpperBoundInstructionIR::method_enterAccessibleEntities (GGS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                           GGS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_forLowerUpperBoundInstructionIR temp_0 = this ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enterRegisterGroupSubscriptedAddressIR llvmInstructionCode'
//--------------------------------------------------------------------------------------------------

void cPtr_enterRegisterGroupSubscriptedAddressIR::method_llvmInstructionCode (GGS_string & ioArgument_ioLLVMcode,
                                                                              const GGS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GGS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_0 = this ;
  GGS_string var_groupArrayName_983 = function_registerGroupAddressArrayLLVMname (temp_0.readProperty_mGroupName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 29)) ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_1 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_2 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_3 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (GGS_string (".addr = getelementptr inbounds ["), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (temp_2.readProperty_mGroupSize ().getter_string (SOURCE_FILE ("intermediate-register-group-address.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (GGS_string (" x i32], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)).add_operation (temp_3.readProperty_mGroupSize ().getter_string (SOURCE_FILE ("intermediate-register-group-address.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (GGS_string (" x i32]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (var_groupArrayName_983, inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (GGS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 31)).add_operation (extensionGetter_llvmName (temp_4.readProperty_mIndexIR (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 32)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 30)) ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_5 = this ;
  const GGS_enterRegisterGroupSubscriptedAddressIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssignOperation(GGS_string ("  ").add_operation (temp_5.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)).add_operation (GGS_string (" = load i32, i32* "), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)).add_operation (temp_6.readProperty_mLLVMName (), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)).add_operation (GGS_string (".addr\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-register-group-address.galgas", 33)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofControlRegisterAST addDependenceEdgeForStaticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_addDependenceEdgeForStaticExpression (const GGS_lstring /* constinArgument_inConstantName */,
                                                                                    GGS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofControlRegisterAST noteExpressionTypesInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_noteExpressionTypesInPrecedenceGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addressofControlRegisterAST temp_0 = this ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@addressofControlRegisterAST analyzeExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addressofControlRegisterAST::method_analyzeExpression (const GGS_omnibusType constinArgument_inSelfType,
                                                                 const GGS_routineAttributes constinArgument_inRoutineAttributes,
                                                                 const GGS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                 const GGS_semanticContext constinArgument_inContext,
                                                                 const GGS_mode constinArgument_inMode,
                                                                 GGS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GGS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                 GGS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                 GGS_allocaList & ioArgument_ioAllocaList,
                                                                 GGS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GGS_objectIR & outArgument_outResult,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_llvmRegisterAddressName_3691 ;
  const GGS_addressofControlRegisterAST temp_0 = this ;
  GGS_omnibusType joker_3602 ; // Joker input parameter
  GGS_uint joker_3622 ; // Joker input parameter
  GGS_sliceMap joker_3646 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GGS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_3602, joker_3622, joker_3646, var_llvmRegisterAddressName_3691, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 64)) ;
  GGS_unifiedTypeMapEntry var_resultTypeProxy_3755 = extensionGetter_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GGS_string ("u").add_operation (constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mPointerSize ().getter_string (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 82)).getter_nowhere (SOURCE_FILE ("expression-addressof-control-register.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 81)) ;
  outArgument_outResult = GGS_objectIR::class_func_llvmNamedValue (extensionGetter_type (var_resultTypeProxy_3755, inCompiler COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)), var_llvmRegisterAddressName_3691  COMMA_SOURCE_FILE ("expression-addressof-control-register.galgas", 84)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromAST'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledNameFromAST (const GGS_string & constinArgument_inReceiverTypeName,
                                                const GGS_lstring & constinArgument_inRoutineName,
                                                const GGS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_550 = GGS_string ("func.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_550.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 18)) ;
    }
  }
  var_s_550.plusAssignOperation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 20)) ;
  var_s_550.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 21)) ;
  UpEnumerator_routineFormalArgumentListAST enumerator_720 (constinArgument_inFormalArgumentList) ;
  while (enumerator_720.hasCurrentObject ()) {
    var_s_550.plusAssignOperation(extensionGetter_formalPassingModeString (enumerator_720.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (enumerator_720.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 23)) ;
    enumerator_720.gotoNextObject () ;
  }
  var_s_550.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 25)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_550, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledNameFromAST (Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GGS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_routineFormalArgumentListAST operand2 = GGS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledNameFromCall'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledNameFromCall (const GGS_string & constinArgument_inReceiverTypeName,
                                                 const GGS_lstring & constinArgument_inRoutineName,
                                                 const GGS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_s_1241 = GGS_string ("func.") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inReceiverTypeName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_1241.plusAssignOperation(constinArgument_inReceiverTypeName.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 37)) ;
    }
  }
  var_s_1241.plusAssignOperation(constinArgument_inRoutineName.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 39)) ;
  var_s_1241.plusAssignOperation(GGS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 40)) ;
  UpEnumerator_effectiveArgumentListAST enumerator_1386 (constinArgument_inEffectiveParameterList) ;
  while (enumerator_1386.hasCurrentObject ()) {
    var_s_1241.plusAssignOperation(extensionGetter_matchingFormalArgument (enumerator_1386.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (enumerator_1386.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 42)) ;
    enumerator_1386.gotoNextObject () ;
  }
  var_s_1241.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 44)) ;
  result_result = GGS_lstring::init_21__21_ (var_s_1241, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledNameFromCall (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GGS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_lstring operand1 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_effectiveArgumentListAST operand2 = GGS_effectiveArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledNameFromCall (operand0,
                                              operand1,
                                              operand2,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "omnibus-target",
  "omnibus-import",
  "omnibus",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a target definition text file with the .omnibus-target extension",
  "an imported text file with the .omnibus-import extension",
  "a source text file with the .omnibus extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "1.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_filewrapper var_fw_894 = GGS_filewrapper (gWrapperDirectory_0_targetTemplates) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_omnibus_5F_options_listTargets.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_targetDirectoryOption_990 = GGS_string (gOption_omnibus_5F_options_useDirAsTargetDir.readProperty_value ()) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, var_targetDirectoryOption_990.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_stringlist var_embeddedFiles_1113 = var_fw_894.getter_allTextFilePaths (SOURCE_FILE ("target-generation.galgas", 29)) ;
            {
            routine_print_3F_ (GGS_string ("Embedded targets:\n"), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 30)) ;
            }
            UpEnumerator_stringlist enumerator_1197 (var_embeddedFiles_1113) ;
            while (enumerator_1197.hasCurrentObject ()) {
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::equal, enumerator_1197.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 32)).objectCompare (GGS_string ("+config.omnibus-target"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  GGS_string var_targetName_1298 = enumerator_1197.current_mValue (HERE).getter_deletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 33)).getter_subStringFromIndex (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("target-generation.galgas", 33)) ;
                  {
                  routine_print_3F_ (GGS_string ("  ").add_operation (var_targetName_1298, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 34)) ;
                  }
                }
              }
              enumerator_1197.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GGS_string var_targetDirectory_1448 = var_targetDirectoryOption_990.getter_absolutePathFromPath (GGS_string::class_func_stringWithCurrentDirectory (SOURCE_FILE ("target-generation.galgas", 38)) COMMA_SOURCE_FILE ("target-generation.galgas", 38)) ;
          {
          routine_print_3F_ (GGS_string ("Targets in '").add_operation (var_targetDirectory_1448, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)).add_operation (GGS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 39)) ;
          }
          GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("omnibus-target"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          GGS_stringlist var_allConfigFiles_1616 = var_targetDirectory_1448.getter_regularFilesWithExtensions (GGS_bool (true), temp_3 COMMA_SOURCE_FILE ("target-generation.galgas", 40)) ;
          UpEnumerator_stringlist enumerator_1719 (var_allConfigFiles_1616) ;
          while (enumerator_1719.hasCurrentObject ()) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, enumerator_1719.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("target-generation.galgas", 42)).objectCompare (GGS_string ("+config.omnibus-target"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                routine_print_3F_ (GGS_string ("  ").add_operation (enumerator_1719.current_mValue (HERE).getter_deletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 43)) ;
                }
              }
            }
            enumerator_1719.gotoNextObject () ;
          }
        }
      }
    }
    GGS_string var_path_1941 = GGS_string (gOption_omnibus_5F_options_extractEmbeddedTargets.readProperty_value ()) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, var_path_1941.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_stringlist var_embeddedFiles_2031 = var_fw_894.getter_allTextFilePaths (SOURCE_FILE ("target-generation.galgas", 51)) ;
        UpEnumerator_stringlist enumerator_2076 (var_embeddedFiles_2031) ;
        while (enumerator_2076.hasCurrentObject ()) {
          GGS_string var_filePath_2109 = var_path_1941.add_operation (enumerator_2076.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 53)) ;
          {
          routine_print_3F_ (GGS_string ("  ").add_operation (var_filePath_2109, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("target-generation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("target-generation.galgas", 54)) ;
          }
          GGS_string var_dir_2177 = var_filePath_2109.getter_deletingLastPathComponent (SOURCE_FILE ("target-generation.galgas", 55)) ;
          var_dir_2177.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 56)) ;
          GGS_string var_text_2254 = var_fw_894.getter_textFileContentsAtPath (enumerator_2076.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 57)) ;
          GGS_bool joker_2347 ; // Joker input parameter
          var_text_2254.method_writeToFileWhenDifferentContents (var_filePath_2109, joker_2347, inCompiler COMMA_SOURCE_FILE ("target-generation.galgas", 58)) ;
          enumerator_2076.gotoNextObject () ;
        }
      }
    }
  }
  {
    GGS_filewrapper var_fw_561 = GGS_filewrapper (gWrapperDirectory_0_embeddedSampleCode) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (gOption_omnibus_5F_options_listEmbeddedSampleFiles.readProperty_value ()).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_stringlist var_files_672 = var_fw_561.getter_allTextFilePaths (SOURCE_FILE ("embedded-sample-code.galgas", 16)) ;
        {
        routine_print_3F_ (GGS_string ("Embedded sample code:\n"), inCompiler  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 17)) ;
        }
        UpEnumerator_stringlist enumerator_748 (var_files_672) ;
        while (enumerator_748.hasCurrentObject ()) {
          {
          routine_print_3F_ (GGS_string ("  ").add_operation (enumerator_748.current_mValue (HERE).getter_subStringFromIndex (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)).add_operation (GGS_char (utf32 (10)).getter_string (SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)), inCompiler  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 19)) ;
          }
          enumerator_748.gotoNextObject () ;
        }
      }
    }
    GGS_string var_path_838 = GGS_string (gOption_omnibus_5F_options_extractEmbeddedSampleFile.readProperty_value ()) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, var_path_838.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = var_fw_561.getter_fileExistsAtPath (var_path_838, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 24)).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string var_text_973 = var_fw_561.getter_textFileContentsAtPath (var_path_838, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 25)) ;
            GGS_string var_sourceName_1024 = var_path_838.getter_lastPathComponent (SOURCE_FILE ("embedded-sample-code.galgas", 26)) ;
            GGS_bool joker_1117 ; // Joker input parameter
            var_text_973.method_writeToFileWhenDifferentContents (var_sourceName_1024, joker_1117, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 27)) ;
          }
        }
        if (GalgasBool::boolFalse == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("embedded-sample-code.galgas", 29)).readProperty_location (), GGS_string ("there is no '").add_operation (var_path_838, inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)).add_operation (GGS_string ("' embedded file"), inCompiler COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)), fixItArray9  COMMA_SOURCE_FILE ("embedded-sample-code.galgas", 29)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring /* constinArgument_inSourceFile */,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring /* constinArgument_inSourceFile */,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_string (gOption_galgas_5F_builtin_5F_options_mode.readProperty_value ()).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (gOption_galgas_5F_builtin_5F_options_outputConcreteSyntaxTree.readProperty_value ()).operator_not (SOURCE_FILE ("program.galgas", 24)) COMMA_SOURCE_FILE ("program.galgas", 24)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_importFilesAndCompile_3F_sourceFilePath (constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 25)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "omnibus-target") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_target_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "omnibus-import") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_target_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_target_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "omnibus") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_omnibus_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_omnibus_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_omnibus_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

