#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolTypeAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_boolTypeAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 35)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolTypeAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_boolTypeAST.mSlotID,
                                                           extensionGetter_boolTypeAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolTypeAST_keyRepresentationForErrorSignaling (defineExtensionGetter_boolTypeAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolTypeAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolTypeAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
  GALGAS_lstring var_boolTypeName_2635 = function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 52)).getter_nowhere (SOURCE_FILE ("type-bool.galgas", 52)) ;
  GALGAS_omnibusType var_boolType_2678 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 53)) ;
  GALGAS_omnibusType var_ctBoolType_2709 = function_compileTimeBoolType (inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 54)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_boolTypeName_2635, var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 56)) ;
  }
  GALGAS_lstring var_key_2865 = function_prefixOperatorMapKey (var_boolType_2678, GALGAS_prefixOperator::constructor_notOp (SOURCE_FILE ("type-bool.galgas", 58)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 58)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, var_boolType_2678, GALGAS_boolNotOperator::constructor_new (SOURCE_FILE ("type-bool.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 59)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_boolType_2678, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 61)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 61)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 61)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 62)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_ctBoolType_2709, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 63)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 63)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 63)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 64)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_boolType_2678, GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-bool.galgas", 65)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 65)), var_ctBoolType_2709, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 65)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("or")  COMMA_SOURCE_FILE ("type-bool.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 66)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_boolType_2678, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 68)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 68)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 68)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 69)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_ctBoolType_2709, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 70)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 70)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 70)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 71)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_boolType_2678, GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-bool.galgas", 72)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 72)), var_ctBoolType_2709, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 72)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("xor")  COMMA_SOURCE_FILE ("type-bool.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 73)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_boolType_2678, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 75)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 75)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 75)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 76)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_ctBoolType_2709, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 77)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 77)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 77)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 78)) ;
  }
  var_key_2865 = function_infixOperatorMapKey (var_boolType_2678, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-bool.galgas", 79)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 79)), var_ctBoolType_2709, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 79)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_2865, var_boolType_2678, GALGAS_inlineInfixOperatorUsage::constructor_new (GALGAS_string ("icmp eq")  COMMA_SOURCE_FILE ("type-bool.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 80)) ;
  }
  var_key_2865 = GALGAS_lstring::constructor_new (var_boolType_2678.getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-bool.galgas", 82)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 82))  COMMA_SOURCE_FILE ("type-bool.galgas", 82)) ;
  {
  ioArgument_ioContext.mProperty_mImplicitConversionToBooleanMap.setter_insertKey (var_key_2865, GALGAS_boolImplicitConverterToBoolean::constructor_new (SOURCE_FILE ("type-bool.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 83)) ;
  }
  var_key_2865 = function_assignmentOperatorKey (var_boolType_2678, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 85)), var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 85)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2865, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-bool.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 86)) ;
  }
  var_key_2865 = function_assignmentOperatorKey (var_boolType_2678, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-bool.galgas", 87)), var_ctBoolType_2709, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 87)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2865, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-bool.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 88)) ;
  }
  GALGAS_string var_functionName_5303 = function_assignmentOperatorFuncName (var_boolType_2678, var_boolType_2678, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 90)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_simpleAssignmentCopyRoutineIR::constructor_new (var_functionName_5303.getter_nowhere (SOURCE_FILE ("type-bool.galgas", 92)), GALGAS_bool (false), GALGAS_bool (false), var_boolType_2678  COMMA_SOURCE_FILE ("type-bool.galgas", 91))  COMMA_SOURCE_FILE ("type-bool.galgas", 91)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolTypeAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_boolTypeAST.mSlotID,
                                       extensionMethod_boolTypeAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolTypeAST_enterInContext (defineExtensionMethod_boolTypeAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolImplicitConverterToBoolean generateConvertToBooleanCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode (const cPtr_abstractImplicitConverterToBoolean * /* inObject */,
                                                                                         const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                                         const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                         GALGAS_implicitBooleanConversionResult & outArgument_outResult,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult = GALGAS_implicitBooleanConversionResult::constructor_llvmVariable (extensionGetter_llvmName (constinArgument_inReceiverOperand, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 116))  COMMA_SOURCE_FILE ("type-bool.galgas", 116)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode (void) {
  enterExtensionMethod_generateConvertToBooleanCode (kTypeDescriptor_GALGAS_boolImplicitConverterToBoolean.mSlotID,
                                                     extensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode (defineExtensionMethod_boolImplicitConverterToBoolean_generateConvertToBooleanCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolNotOperator generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolNotOperator_generateCode (const cPtr_prefixOperatorUsage * /* inObject */,
                                                          const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                          const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                          const GALGAS_omnibusType constinArgument_inResultType,
                                                          const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                          const GALGAS_bool /* constinArgument_inSafeMode */,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          GALGAS_objectIR & outArgument_outResultValue,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_receiverOperand_7274 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_7274, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 139)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-bool.galgas", 140)) ;
  }
  GALGAS_string var_s_7460 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (GALGAS_string (" = xor i1 1, "), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)).add_operation (extensionGetter_llvmName (var_receiverOperand_7274, inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 141)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_7460, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-bool.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("type-bool.galgas", 142)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolNotOperator_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_boolNotOperator.mSlotID,
                                     extensionMethod_boolNotOperator_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolNotOperator_generateCode (defineExtensionMethod_boolNotOperator_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mAliasTypeName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                  extensionGetter_typeAliasDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeAliasDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  {
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  const GALGAS_typeAliasDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mAliasTypeName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 49)) ;
  }
  {
  const GALGAS_typeAliasDeclarationAST temp_2 = object ;
  const GALGAS_typeAliasDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.getter_mAliasTypeName (HERE), temp_3.getter_mOriginalTypeName (HERE) COMMA_SOURCE_FILE ("type-alias.galgas", 50)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                               extensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeAliasDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeAliasDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("typealias ").add_operation (temp_0.getter_mAliasTypeName (HERE).getter_string (SOURCE_FILE ("type-alias.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 56)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                                           extensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeAliasDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeAliasDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeAliasDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_typeAliasDeclarationAST * object = (const cPtr_typeAliasDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeAliasDeclarationAST) ;
  GALGAS_omnibusType var_type_3773 ;
  const GALGAS_typeAliasDeclarationAST temp_0 = object ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (temp_0.getter_mOriginalTypeName (HERE), var_type_3773, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 74)) ;
  {
  const GALGAS_typeAliasDeclarationAST temp_1 = object ;
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_1.getter_mAliasTypeName (HERE), var_type_3773, inCompiler COMMA_SOURCE_FILE ("type-alias.galgas", 76)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeAliasDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeAliasDeclarationAST.mSlotID,
                                       extensionMethod_typeAliasDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeAliasDeclarationAST_enterInContext (defineExtensionMethod_typeAliasDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = object ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mFixedSizeArrayType (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 46)) ;
  }
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_2 = object ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.getter_mFixedSizeArrayType (HERE), temp_3.getter_mElementTypeName (HERE) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 47)) ;
  }
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_4 = object ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_5 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_4.getter_mSizeExpression (HERE).ptr (), temp_5.getter_mFixedSizeArrayType (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 48)) ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_6 = object ;
  GALGAS_lstring var_rootNode_2442 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)), temp_6.getter_mFixedSizeArrayType (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 49)) ;
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_7 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_7.getter_mFixedSizeArrayType (HERE), var_rootNode_2442 COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 50)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                               extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("anonymous $").add_operation (temp_0.getter_mFixedSizeArrayType (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                                           extensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@fixedSizeArrayTypeDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mFixedSizeArrayType (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                                  extensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling (defineExtensionGetter_fixedSizeArrayTypeDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayTypeDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticContext & ioArgument_ioContext,
                                                                             GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                             GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                             GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                             GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                             GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fixedSizeArrayTypeDeclarationAST * object = (const cPtr_fixedSizeArrayTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayTypeDeclarationAST) ;
  GALGAS_omnibusType var_elementType_4229 ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_0 = object ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (temp_0.getter_mElementTypeName (HERE), var_elementType_4229, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 80)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4229.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 81)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mElementTypeName (HERE).getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 82)), GALGAS_string ("an array element should be copyable"), fixItArray3  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 82)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4229.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 84)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mElementTypeName (HERE).getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 85)), GALGAS_string ("an array element should be instanciable"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 85)) ;
    }
  }
  GALGAS_objectIR var_sizeExpressionIR_4758 ;
  {
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_7 = object ;
  const GALGAS_fixedSizeArrayTypeDeclarationAST temp_8 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_7.getter_mSizeExpression (HERE), temp_8.getter_mSizeExpressionLocation (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 93)), var_sizeExpressionIR_4758, inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 88)) ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_sizeExpressionIR_4758.getter_isLiteralInteger (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).operator_not (SOURCE_FILE ("type-fixed-size-array.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.getter_mSizeExpressionLocation (HERE), GALGAS_string ("array size expression is a literal interger expression"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 97)) ;
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_bigint var_arraySize_4979 ;
    GALGAS_omnibusType joker_4956_1 ; // Joker input parameter
    var_sizeExpressionIR_4758.method_literalInteger (joker_4956_1, var_arraySize_4979, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 99)) ;
    const GALGAS_fixedSizeArrayTypeDeclarationAST temp_12 = object ;
    GALGAS_lstring var_omnibusTypeDescriptionName_5082 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_arraySize_4979.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GALGAS_string (" \xE2""\x80""\xA2"" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (var_elementType_4229.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)), temp_12.getter_mFixedSizeArrayType (HERE).getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 101))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 101)) ;
    const GALGAS_fixedSizeArrayTypeDeclarationAST temp_13 = object ;
    GALGAS_lstring var_llvmBaseTypeName_5222 = GALGAS_lstring::constructor_new (var_elementType_4229.getter_llvmBaseTypeName (HERE).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)).add_operation (var_arraySize_4979.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)), temp_13.getter_mFixedSizeArrayType (HERE).getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 102))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 102)) ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_omnibusTypeDescriptionName_5082.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 103)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_omnibusType var_type_5466 ;
        ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_omnibusTypeDescriptionName_5082, var_type_5466, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 104)) ;
        {
        const GALGAS_fixedSizeArrayTypeDeclarationAST temp_15 = object ;
        ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_15.getter_mFixedSizeArrayType (HERE), var_type_5466, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 105)) ;
        }
      }
    }
    if (kBoolFalse == test_14) {
      GALGAS_constantMap var_constantMap_5705 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 111)) ;
      {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_16 = object ;
      var_constantMap_5705.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("count"), temp_16.getter_mFixedSizeArrayType (HERE).getter_location (SOURCE_FILE ("type-fixed-size-array.galgas", 112))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)), var_arraySize_4979, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)).getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 112)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_omnibusTypeDescriptionName_5082, var_constantMap_5705, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 113)) ;
      }
      {
      extensionSetter_insertGetter (ioArgument_ioContext, var_omnibusTypeDescriptionName_5082, GALGAS_lstring::constructor_new (GALGAS_string ("count"), var_omnibusTypeDescriptionName_5082.getter_location (HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 120)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-fixed-size-array.galgas", 121)), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), var_arraySize_4979  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 118)) ;
      }
      GALGAS_constructorMap var_constructorMap_6380 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-fixed-size-array.galgas", 125)) ;
      {
      var_constructorMap_6380.setter_insertKey (GALGAS_string ("(!repeated)").getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 127)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4229, var_arraySize_4979.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 127)) ;
      }
      GALGAS_string var_constructorName_6592 = GALGAS_string ("(") ;
      cEnumerator_range enumerator_6636 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_arraySize_4979.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 130))), kENUMERATION_UP) ;
      while (enumerator_6636.hasCurrentObject ()) {
        var_constructorName_6592.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 131)) ;
        enumerator_6636.gotoNextObject () ;
      }
      var_constructorName_6592.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 133)) ;
      {
      var_constructorMap_6380.setter_insertKey (var_constructorName_6592.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 134)), GALGAS_constructorValue::constructor_arrayValue (var_elementType_4229, var_arraySize_4979.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 134)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_5082, var_constructorMap_6380, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 135)) ;
      }
      GALGAS_omnibusTypeAttributes var_typeAttributes_7035 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-fixed-size-array.galgas", 137)) COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 137)) ;
      GALGAS_omnibusType var_arrayType_7151 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_staticSubscript (var_elementType_4229, var_arraySize_4979  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 141)), var_typeAttributes_7035, var_omnibusTypeDescriptionName_5082.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 143)), GALGAS_typeKind::constructor_staticArrayType (var_elementType_4229, var_arraySize_4979  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 144)), var_llvmBaseTypeName_5222.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 145))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 139)) ;
      {
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_17 = object ;
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_17.getter_mFixedSizeArrayType (HERE), var_arrayType_7151, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 147)) ;
      }
      {
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_omnibusTypeDescriptionName_5082, var_arrayType_7151, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 151)) ;
      }
      ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_7151.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 157)), var_elementType_4229, var_arraySize_4979  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 156))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 156)) ;
      GALGAS_string var_assignValueToElements_5F_functionName_8108 = function_assignValueToFixedSizeArrayElements_5F_functionName (var_arrayType_7151, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 162)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::constructor_new (var_assignValueToElements_5F_functionName_8108.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 164)), GALGAS_bool (false), GALGAS_bool (false), var_arrayType_7151, var_elementType_4229, var_arraySize_4979.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 169))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 163))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 163)) ;
      GALGAS_string var_assignmentFunctionLLVMName_8474 = function_assignmentOperatorFuncName (var_arrayType_7151, var_arrayType_7151, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 171)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticArrayTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_8474.getter_nowhere (SOURCE_FILE ("type-fixed-size-array.galgas", 173)), GALGAS_bool (false), GALGAS_bool (false), var_arrayType_7151  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 172))  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 172)) ;
      const GALGAS_fixedSizeArrayTypeDeclarationAST temp_18 = object ;
      GALGAS_lstring var_key_8771 = function_assignmentOperatorKey (var_arrayType_7151, temp_18.getter_mFixedSizeArrayType (HERE).getter_location (HERE), var_arrayType_7151, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 179)) ;
      {
      ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_8771, GALGAS_fixedSizeArrayAssignmentOperatorUsage::constructor_new (var_elementType_4229, var_arraySize_4979.getter_uint (inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 180)), var_assignValueToElements_5F_functionName_8108  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 180)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_fixedSizeArrayTypeDeclarationAST.mSlotID,
                                       extensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_fixedSizeArrayTypeDeclarationAST_enterInContext (defineExtensionMethod_fixedSizeArrayTypeDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'assignValueToFixedSizeArrayElements_functionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_assignValueToFixedSizeArrayElements_5F_functionName (const GALGAS_omnibusType & constinArgument_inFixedSizeArrayType,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("assign.value.to.fixed.size.array.").add_operation (constinArgument_inFixedSizeArrayType.getter_llvmBaseTypeName (SOURCE_FILE ("type-fixed-size-array.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 188)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_assignValueToFixedSizeArrayElements_5F_functionName [2] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName (C_Compiler * inCompiler,
                                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_assignValueToFixedSizeArrayElements_5F_functionName (operand0,
                                                                       inCompiler
                                                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_assignValueToFixedSizeArrayElements_5F_functionName ("assignValueToFixedSizeArrayElements_functionName",
                                                                                                     functionWithGenericHeader_assignValueToFixedSizeArrayElements_5F_functionName,
                                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                                     1,
                                                                                                     functionArgs_assignValueToFixedSizeArrayElements_5F_functionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMStaticArrayTypeDefinitionIR generateLLVMType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMStaticArrayTypeDefinitionIR * object = (const cPtr_userLLVMStaticArrayTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMStaticArrayTypeDefinitionIR) ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR temp_0 = object ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR temp_1 = object ;
  const GALGAS_userLLVMStaticArrayTypeDefinitionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.getter_mLLVMDefinedTypeName (HERE).add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)).add_operation (temp_1.getter_mSize (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.getter_mElementType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 203)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMStaticArrayTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMStaticArrayTypeDefinitionIR_generateLLVMType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@fixedSizeArrayAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * inObject,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                                GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                const GALGAS_omnibusType constinArgument_inTargetType,
                                                                                const GALGAS_string constinArgument_inTargetLLVMName,
                                                                                const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                                const GALGAS_location constinArgument_inErrorLocation,
                                                                                const GALGAS_bool /* constinArgument_inTargetIsInitialized */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fixedSizeArrayAssignmentOperatorUsage * object = (const cPtr_fixedSizeArrayAssignmentOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_fixedSizeArrayAssignmentOperatorUsage) ;
  GALGAS_string var_arrayTypeName_11118 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 228)) ;
  const GALGAS_fixedSizeArrayAssignmentOperatorUsage temp_0 = object ;
  GALGAS_string var_elementTypeName_11170 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.getter_mElementType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 229)) ;
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_11788 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_sourceValuePossibleReference = extractPtr_11788->mAssociatedValue2 ;
      GALGAS_objectIR var_sourceValue_11349 = extractedValue_sourceValuePossibleReference ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11349, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 233)) ;
      }
      const GALGAS_fixedSizeArrayAssignmentOperatorUsage temp_1 = object ;
      GALGAS_string var_s_11472 = GALGAS_string ("call void @").add_operation (temp_1.getter_mAssignValueToElements_5F_functionName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 234)) ;
      var_s_11472.plusAssign_operation(GALGAS_string (" (").add_operation (var_arrayTypeName_11118, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 235)) ;
      var_s_11472.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementTypeName_11170, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)).add_operation (extensionGetter_llvmName (var_sourceValue_11349, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 236)) ;
      {
      GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 237)) ;
      const GALGAS_fixedSizeArrayAssignmentOperatorUsage temp_3 = object ;
      temp_2.addAssign_operation (temp_3.getter_mAssignValueToElements_5F_functionName (HERE)  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 237)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_11472, temp_2, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 237)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_12522 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_values = extractPtr_12522->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_11867 = ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 240)) ;
      cEnumerator_operandIRList enumerator_11962 (extractedValue_values, kENUMERATION_UP) ;
      GALGAS_uint index_11944 ((uint32_t) 0) ;
      while (enumerator_11962.hasCurrentObject ()) {
        GALGAS_objectIR var_sourceValue_11999 = enumerator_11962.current_mOperand (HERE) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_11999, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 243)) ;
        }
        GALGAS_string var_ptr_12105 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_11867.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)).add_operation (index_11944.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 244)) ;
        GALGAS_string var_s_12153 = var_ptr_12105.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (var_arrayTypeName_11118, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (var_arrayTypeName_11118, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)).add_operation (index_11944.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 245)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12153, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 246)) ;
        }
        var_s_12153 = GALGAS_string ("store ").add_operation (var_elementTypeName_11170, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)).add_operation (extensionGetter_llvmName (var_sourceValue_11999, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)).add_operation (var_elementTypeName_11170, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)).add_operation (var_ptr_12105, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 247)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12153, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 248)) ;
        }
        enumerator_11962.gotoNextObject () ;
        index_11944.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 241)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_13132 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_values = extractPtr_13132->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_12603 = ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 252)) ;
      cEnumerator_operandIRList enumerator_12698 (extractedValue_values, kENUMERATION_UP) ;
      GALGAS_uint index_12680 ((uint32_t) 0) ;
      while (enumerator_12698.hasCurrentObject ()) {
        GALGAS_string var_ptr_12721 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_12603.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)).add_operation (index_12680.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 254)) ;
        GALGAS_string var_s_12769 = var_ptr_12721.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (var_arrayTypeName_11118, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (var_arrayTypeName_11118, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)).add_operation (index_12680.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 255)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12769, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 256)) ;
        }
        var_s_12769 = GALGAS_string ("store ").add_operation (var_elementTypeName_11170, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)).add_operation (extensionGetter_llvmName (enumerator_12698.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)).add_operation (var_elementTypeName_11170, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)).add_operation (var_ptr_12721, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 257)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_12769, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 258)) ;
        }
        enumerator_12698.gotoNextObject () ;
        index_12680.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 253)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_13602 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_idx = extractPtr_13602->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_13220 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 261)) ;
      GALGAS_string var_s_13290 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13220.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 262)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 263)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)).add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 264)) ;
      {
      GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 265)) ;
      temp_4.addAssign_operation (var_assignmentFunctionLLVMName_13220  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 265)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13290, temp_4, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 265)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_13661 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 267)) ;
      GALGAS_string var_s_13731 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_13661.getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 268)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 269)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 270)) ;
      {
      GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-fixed-size-array.galgas", 271)) ;
      temp_5.addAssign_operation (var_assignmentFunctionLLVMName_13661  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 271)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_13731, temp_5, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 271)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (literalInteger)"), fixItArray6  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 273)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (literalString)"), fixItArray7  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 275)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (llvmStructureValue)"), fixItArray8  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 277)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (llvmValue)"), fixItArray9  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 279)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (null)"), fixItArray10  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 281)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (void)"), fixItArray11  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 283)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid fixed array assignment source (zero)"), fixItArray12  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 285)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_fixedSizeArrayAssignmentOperatorUsage.mSlotID,
                                     extensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode (defineExtensionMethod_fixedSizeArrayAssignmentOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignRepeatedValueToFixedSizeArrayElementsFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * object = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_0 = object ;
  GALGAS_string var_arrayTypeName_15456 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.getter_mFixedSizeArrayType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 304)) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_1 = object ;
  GALGAS_string var_elementTypeName_15520 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.getter_mElementType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 305)) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_arrayTypeName_15456, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)).add_operation (var_elementTypeName_15520, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)).add_operation (GALGAS_string (" %inRepeatedValue) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %idx = alloca i32\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 0, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 311)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %idxValue = load i32, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr ").add_operation (var_arrayTypeName_15456, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (var_arrayTypeName_15456, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)).add_operation (GALGAS_string ("* %inTarget, i32 0, i32 %idxValue\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName_15520, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)).add_operation (GALGAS_string (" %inRepeatedValue, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)).add_operation (var_elementTypeName_15520, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %nextIdxValue = add i32 %idxValue, 1\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %nextIdxValue, i32* %idx\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 316)) ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %continue = icmp ult i32 %nextIdxValue, ").add_operation (temp_3.getter_mArraySize (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 317)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %continue, label %loop, label %exit\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("exit:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 320)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 321)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR.mSlotID,
                                           extensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration (defineExtensionMethod_assignRepeatedValueToFixedSizeArrayElementsFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticArrayTypeAssignFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticArrayTypeAssignFunctionIR * object = (const cPtr_staticArrayTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticArrayTypeAssignFunctionIR) ;
  const GALGAS_staticArrayTypeAssignFunctionIR temp_0 = object ;
  GALGAS_string var_llvmTypeName_17094 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.getter_mFixedSizeArrayType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 337)) ;
  const GALGAS_staticArrayTypeAssignFunctionIR temp_1 = object ;
  GALGAS_arcAssignmentList var_arcAssignmentList_17160 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_1.getter_mFixedSizeArrayType (HERE).ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-fixed-size-array.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 338)) ;
  const GALGAS_staticArrayTypeAssignFunctionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)).add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 340)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 341)) ;
  cEnumerator_arcAssignmentList enumerator_17515 (var_arcAssignmentList_17160, kENUMERATION_UP) ;
  while (enumerator_17515.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_17547 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_17515.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 343)) ;
    GALGAS_string var_llvmVarName_17597 = GALGAS_string ("%arc.retain.").add_operation (enumerator_17515.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 344)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 345)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_17597, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 346)) ;
    cEnumerator_uintlist enumerator_17879 (enumerator_17515.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_17879.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_17879.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 348)) ;
      enumerator_17879.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_17515.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 350)) ;
    GALGAS_string var_llvmLoadedVarName_17997 = var_llvmVarName_17597.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 351)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_17997, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_propertyTypeLLVMName_17547, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_propertyTypeLLVMName_17547, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (var_llvmVarName_17597, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 352)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_17547, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 353)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 353)).add_operation (var_llvmLoadedVarName_17997, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 353)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 353)) ;
    enumerator_17515.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_18336 (var_arcAssignmentList_17160, kENUMERATION_UP) ;
  while (enumerator_18336.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_18359 = GALGAS_string ("%arc.release.").add_operation (enumerator_18336.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-fixed-size-array.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 356)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 357)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_18359, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 358)) ;
    cEnumerator_uintlist enumerator_18642 (enumerator_18336.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_18642.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_18642.current_mValue (HERE).getter_string (SOURCE_FILE ("type-fixed-size-array.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 360)) ;
      enumerator_18642.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_18336.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 362)) ;
    GALGAS_string var_propertyTypeLLVMName_18763 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_18336.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 363)) ;
    GALGAS_string var_llvmLoadedVarName_18819 = var_llvmVarName_18359.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 364)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_18819, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_propertyTypeLLVMName_18763, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_propertyTypeLLVMName_18763, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (var_llvmVarName_18359, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 365)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_18763, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 366)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 366)).add_operation (var_llvmLoadedVarName_18819, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 366)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 366)) ;
    enumerator_18336.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 369)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)).add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 383)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 386)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 388)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 392)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %byteCount, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 401)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_llvmTypeName_17094, inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-fixed-size-array.galgas", 407)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticArrayTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_staticArrayTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mDynamicArrayTypeName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 36)) ;
  }
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_2 = object ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.getter_mDynamicArrayTypeName (HERE), temp_3.getter_mElementTypeName (HERE) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 37)) ;
  }
  const GALGAS_typeDynamicArrayDeclarationAST temp_4 = object ;
  GALGAS_lstring var_rootNode_2104 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)), temp_4.getter_mDynamicArrayTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 38)) ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_5.getter_mDynamicArrayTypeName (HERE), var_rootNode_2104 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 39)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                               extensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("anonymous ").add_operation (temp_0.getter_mDynamicArrayTypeName (HERE).getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 45)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                           extensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeDynamicArrayDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mDynamicArrayTypeName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                                  extensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeDynamicArrayDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeDynamicArrayDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeDynamicArrayDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_typeDynamicArrayDeclarationAST * object = (const cPtr_typeDynamicArrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeDynamicArrayDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioContext.getter_mTargetParameters (HERE).getter_mHandleDynamicArray (HERE).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 68)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mElementTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 69)), GALGAS_string ("this target does not handle dynamic array"), fixItArray2  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 69)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeProxy_4052 ;
  {
  const GALGAS_typeDynamicArrayDeclarationAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, temp_3.getter_mDynamicArrayTypeName (HERE), var_arrayTypeProxy_4052 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 71)) ;
  }
  GALGAS_omnibusType var_elementType_4198 ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_4 = object ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (temp_4.getter_mElementTypeName (HERE), var_elementType_4198, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 73)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_elementType_4198.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 74)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 74)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mElementTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 75)), GALGAS_string ("an array element should be copyable"), fixItArray7  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 75)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_elementType_4198.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 77)).operator_not (SOURCE_FILE ("type-dynamic-array.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_typeDynamicArrayDeclarationAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.getter_mElementTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 78)), GALGAS_string ("an array element should be instanciable"), fixItArray10  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 78)) ;
    }
  }
  const GALGAS_typeDynamicArrayDeclarationAST temp_11 = object ;
  GALGAS_lstring var_omnibusTypeDescriptionName_4535 = GALGAS_lstring::constructor_new (GALGAS_string ("[").add_operation (var_elementType_4198.getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)), temp_11.getter_mDynamicArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 81))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 81)) ;
  const GALGAS_typeDynamicArrayDeclarationAST temp_12 = object ;
  GALGAS_lstring var_llvmBaseTypeName_4655 = GALGAS_lstring::constructor_new (GALGAS_string ("dyn-").add_operation (var_elementType_4198.getter_llvmBaseTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)), temp_12.getter_mDynamicArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 82))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 82)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContext.getter_mTypeMap (HERE).getter_hasKey (var_omnibusTypeDescriptionName_4535.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 84)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 84)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_omnibusType var_type_4952 ;
      ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (var_omnibusTypeDescriptionName_4535, var_type_4952, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 85)) ;
      {
      const GALGAS_typeDynamicArrayDeclarationAST temp_14 = object ;
      ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_14.getter_mDynamicArrayTypeName (HERE), var_type_4952, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 86)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    GALGAS_unifiedTypeMap_2D_proxy var_uint_33__32_TypeProxy_5155 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, GALGAS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 91)), var_uint_33__32_TypeProxy_5155 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 91)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_5259 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_15 = object ;
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, temp_15.getter_mElementTypeName (HERE), var_elementTypeProxy_5259 COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 92)) ;
    }
    GALGAS_lstring var_routineLLVMName_5672 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_16 = object ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4535.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 96)), var_llvmBaseTypeName_4655.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 97)), GALGAS_lstring::constructor_new (GALGAS_string ("removeAll"), temp_16.getter_mDynamicArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 98))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 98)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 99)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 100)), var_routineLLVMName_5672, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 95)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayRemoveAllFunctionIR::constructor_new (var_routineLLVMName_5672, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 103)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_17 = object ;
    extensionSetter_addFunctionWithoutArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4535.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 110)), var_llvmBaseTypeName_4655.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 111)), GALGAS_lstring::constructor_new (GALGAS_string ("length"), temp_17.getter_mDynamicArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 112))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 112)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 113)), var_uint_33__32_TypeProxy_5155, var_routineLLVMName_5672, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 109)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayLengthFunctionIR::constructor_new (var_routineLLVMName_5672, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 117)) ;
    GALGAS_lstring var_insertFunctionMangledName_6950 ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_18 = object ;
    extensionSetter_addFunctionWithTwoInputArguments (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4535.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 124)), ioArgument_ioContext, var_llvmBaseTypeName_4655.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 126)), GALGAS_lstring::constructor_new (GALGAS_string ("insert"), temp_18.getter_mDynamicArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 127))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 127)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 128)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5259, GALGAS_string ("inValue"), GALGAS_string ("atIndex"), var_uint_33__32_TypeProxy_5155, GALGAS_string ("inIndex"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 135)), var_insertFunctionMangledName_6950, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 123)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayInsertFunctionIR::constructor_new (var_insertFunctionMangledName_6950, GALGAS_bool (false), GALGAS_bool (false), var_elementTypeProxy_5259  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 138)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_19 = object ;
    extensionSetter_addFunctionWithInputArgument (ioArgument_ioContext.mProperty_mRoutineMap, var_omnibusTypeDescriptionName_4535.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 146)), ioArgument_ioContext, var_llvmBaseTypeName_4655.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 148)), GALGAS_lstring::constructor_new (GALGAS_string ("append"), temp_19.getter_mDynamicArrayTypeName (HERE).getter_location (SOURCE_FILE ("type-dynamic-array.galgas", 149))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 149)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-dynamic-array.galgas", 150)), GALGAS_string::makeEmptyString (), var_elementTypeProxy_5259, GALGAS_string ("inValue"), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 154)), var_routineLLVMName_5672, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 145)) ;
    }
    ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_dynArrayAppendFunctionIR::constructor_new (var_routineLLVMName_5672, GALGAS_bool (false), GALGAS_bool (false), var_arrayTypeProxy_4052, var_elementTypeProxy_5259, var_insertFunctionMangledName_6950.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 163))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 157)) ;
    GALGAS_constructorMap var_constructorMap_7941 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dynamic-array.galgas", 166)) ;
    {
    var_constructorMap_7941.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 167)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 167)), GALGAS_constructorValue::constructor_null (SOURCE_FILE ("type-dynamic-array.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 167)) ;
    }
    {
    ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_omnibusTypeDescriptionName_4535, var_constructorMap_7941, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 168)) ;
    }
    GALGAS_omnibusTypeAttributes var_typeAttributes_8208 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-dynamic-array.galgas", 170)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-dynamic-array.galgas", 170)) COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 170)) ;
    GALGAS_omnibusType var_dynamicArrayType_8327 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-dynamic-array.galgas", 174)), var_typeAttributes_8208, var_omnibusTypeDescriptionName_4535.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 176)), GALGAS_typeKind::constructor_dynamicArrayType (var_elementType_4198  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 177)), var_llvmBaseTypeName_4655.getter_string (SOURCE_FILE ("type-dynamic-array.galgas", 178))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 172)) ;
    {
    const GALGAS_typeDynamicArrayDeclarationAST temp_20 = object ;
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_20.getter_mDynamicArrayTypeName (HERE), var_dynamicArrayType_8327, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 180)) ;
    }
    GALGAS_string var_assignmentFunctionName_8804 = function_assignmentOperatorFuncName (var_dynamicArrayType_8327, var_dynamicArrayType_8327, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 185)) ;
    const GALGAS_typeDynamicArrayDeclarationAST temp_21 = object ;
    GALGAS_dynamicArrayTypeAssignGenericFunctionIR var_routine_8886 = GALGAS_dynamicArrayTypeAssignGenericFunctionIR::constructor_new (GALGAS_lstring::constructor_new (var_assignmentFunctionName_8804, temp_21.getter_mDynamicArrayTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 187)), GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 186)) ;
    ioArgument_ioRoutineListIR.addAssign_operation (var_routine_8886  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 191)) ;
    GALGAS_dynamicArrayTypeAssignUsage var_operatorUsage_9124 = GALGAS_dynamicArrayTypeAssignUsage::constructor_new (var_dynamicArrayType_8327, var_assignmentFunctionName_8804  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 192)) ;
    const GALGAS_typeDynamicArrayDeclarationAST temp_22 = object ;
    GALGAS_lstring var_key_9232 = function_assignmentOperatorKey (var_dynamicArrayType_8327, temp_22.getter_mDynamicArrayTypeName (HERE).getter_location (HERE), var_dynamicArrayType_8327, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 196)) ;
    {
    ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9232, var_operatorUsage_9124, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 197)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeDynamicArrayDeclarationAST.mSlotID,
                                       extensionMethod_typeDynamicArrayDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeDynamicArrayDeclarationAST_enterInContext (defineExtensionMethod_typeDynamicArrayDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayRemoveAllFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayRemoveAllFunctionIR * object = (const cPtr_dynArrayRemoveAllFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayRemoveAllFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayRemoveAllFunctionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype null, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 301)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayRemoveAllFunctionIR.mSlotID,
                                           extensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayRemoveAllFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayLengthFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayLengthFunctionIR * object = (const cPtr_dynArrayLengthFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayLengthFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayLengthFunctionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal i32 @").add_operation (temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype* %ioArray)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 320)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 321)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %length = call i32 @arc.length (%ptrtype %buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 322)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret i32 %length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 323)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 324)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayLengthFunctionIR.mSlotID,
                                           extensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynArrayLengthFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayLengthFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  const GALGAS_dynArrayAppendFunctionIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.getter_mInsertFunctionMangledName (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 343)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                                extensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayAppendFunctionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayAppendFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayAppendFunctionIR * object = (const cPtr_dynArrayAppendFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayAppendFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayAppendFunctionIR temp_0 = object ;
  GALGAS_omnibusType var_elementType_16442 = temp_0.getter_mElementTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 354)) ;
  GALGAS_routineFormalArgumentListAST temp_1 = GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("type-dynamic-array.galgas", 364)) ;
  temp_1.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 356)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 357)), var_elementType_16442.getter_llvmBaseTypeName (HERE).getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 358)), GALGAS_string ("inValue").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 359))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 359)) ;
  temp_1.addAssign_operation (GALGAS_procFormalArgumentPassingMode::constructor_input (SOURCE_FILE ("type-dynamic-array.galgas", 361)), GALGAS_string ("atIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 362)), GALGAS_string ("u32").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 363)), GALGAS_string ("inIndex").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 364))  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 364)) ;
  GALGAS_routineFormalArgumentListAST var_argumentList_16523 = temp_1 ;
  const GALGAS_dynArrayAppendFunctionIR temp_2 = object ;
  GALGAS_lstring var_insertRoutineMangledName_16748 = function_routineMangledNameFromAST (temp_2.getter_mArrayTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 367)).getter_llvmBaseTypeName (HERE), GALGAS_string ("insert").getter_nowhere (SOURCE_FILE ("type-dynamic-array.galgas", 368)), var_argumentList_16523, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 366)) ;
  GALGAS_string var_insertRoutineLLVMName_16902 = function_llvmNameForFunction (var_insertRoutineMangledName_16748.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 371)) ;
  const GALGAS_dynArrayAppendFunctionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_3.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (GALGAS_string (" (%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16442.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)).add_operation (GALGAS_string (" %inValue)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get buffer length\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.length = call i32 @arc.length (%ptrtype %current.buffer.pointer)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Insert\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 377)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_insertRoutineLLVMName_16902, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)).add_operation (GALGAS_string ("(%ptrtype* %ioArray, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_16442.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)).add_operation (GALGAS_string (" %inValue, i32 %current.buffer.length)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 382)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayAppendFunctionIR.mSlotID,
                                           extensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynArrayAppendFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayAppendFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  const GALGAS_dynArrayInsertFunctionIR temp_0 = object ;
  const GALGAS_dynArrayInsertFunctionIR temp_1 = object ;
  GALGAS_string var_assignRoutineLLVMName_18372 = function_assignmentOperatorFuncName (temp_0.getter_mElementTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 399)), temp_1.getter_mElementTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 399)) ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (var_assignRoutineLLVMName_18372  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 400)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                                extensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_enterAccessibleEntities (defineExtensionMethod_dynArrayInsertFunctionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynArrayInsertFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynArrayInsertFunctionIR * object = (const cPtr_dynArrayInsertFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynArrayInsertFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynArrayInsertFunctionIR temp_0 = object ;
  GALGAS_string var_elementLLVMTypeName_18897 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.getter_mElementTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 411)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_1.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)).add_operation (GALGAS_string (" (%ptrtype* %ioArray"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)).add_operation (GALGAS_string (" %inValue, i32 %inIndex)"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %insert.address = alloca %ptrtype\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- value pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.pointer = alloca ").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)).add_operation (GALGAS_string (" %inValue, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)).add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)).add_operation (GALGAS_string ("* %value.pointer\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Size of element\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %element.byte.size = ptrtoint ").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Get inserted element pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 422)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %current.buffer.pointer = load %ptrtype, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 423)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %new.buffer.pointer = call %ptrtype @arc.insert.at.index "), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%ptrtype %current.buffer.pointer, i32 %inIndex, i32 %element.byte.size, %ptrtype* %insert.address)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 425)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Perform copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %typed.insert.address = bitcast %ptrtype* %insert.address to ").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 427)) ;
  const GALGAS_dynArrayInsertFunctionIR temp_2 = object ;
  const GALGAS_dynArrayInsertFunctionIR temp_3 = object ;
  GALGAS_string var_assignRoutineLLVMName_20279 = function_assignmentOperatorFuncName (temp_2.getter_mElementTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)), temp_3.getter_mElementTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 428)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (var_assignRoutineLLVMName_20279.getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (GALGAS_string ("* %typed.insert.address, "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (var_elementLLVMTypeName_18897, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)).add_operation (GALGAS_string ("* %value.pointer)\n"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Store new buffer pointer\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %new.buffer.pointer, %ptrtype* %ioArray\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Return\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 434)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 435)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynArrayInsertFunctionIR.mSlotID,
                                           extensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynArrayInsertFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynArrayInsertFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynamicArrayTypeAssignUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * inObject,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      const GALGAS_omnibusType constinArgument_inTargetType,
                                                                      const GALGAS_string constinArgument_inTargetLLVMName,
                                                                      const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                      const GALGAS_location /* constinArgument_inErrorLocation */,
                                                                      const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynamicArrayTypeAssignUsage * object = (const cPtr_dynamicArrayTypeAssignUsage *) inObject ;
  macroValidSharedObject (object, cPtr_dynamicArrayTypeAssignUsage) ;
  GALGAS_string var_targetTypeName_21768 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 459)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_dynamicArrayTypeAssignUsage temp_1 = object ;
      GALGAS_string var_s_21840 = GALGAS_string (" call void  @").add_operation (temp_1.getter_mAssignFunctionName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 461)).add_operation (var_targetTypeName_21768, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 462)).add_operation (var_targetTypeName_21768, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 463)) ;
      {
      GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dynamic-array.galgas", 464)) ;
      const GALGAS_dynamicArrayTypeAssignUsage temp_3 = object ;
      temp_2.addAssign_operation (temp_3.getter_mAssignFunctionName (HERE)  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_21840, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 464)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_objectIR var_sourceValue_22217 = constinArgument_inSourcePossibleReference ;
    {
    extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionListIR, ioArgument_ioTemporaries, var_sourceValue_22217, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 467)) ;
    }
    GALGAS_string var_s_22337 = GALGAS_string ("store ").add_operation (var_targetTypeName_21768, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)).add_operation (extensionGetter_llvmName (var_sourceValue_22217, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)).add_operation (var_targetTypeName_21768, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 468)) ;
    {
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_22337, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dynamic-array.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 469)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynamicArrayTypeAssignUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_dynamicArrayTypeAssignUsage.mSlotID,
                                     extensionMethod_dynamicArrayTypeAssignUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynamicArrayTypeAssignUsage_generateCode (defineExtensionMethod_dynamicArrayTypeAssignUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dynamicArrayTypeAssignGenericFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dynamicArrayTypeAssignGenericFunctionIR * object = (const cPtr_dynamicArrayTypeAssignGenericFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_dynamicArrayTypeAssignGenericFunctionIR) ;
  ioArgument_ioGenerationAdds.mProperty_mNeedsDynamicMemoryAllocation = GALGAS_bool (true) ;
  const GALGAS_dynamicArrayTypeAssignGenericFunctionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-dynamic-array.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 487)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (%ptrtype * %inTargetPtr, %ptrtype* %inSourcePtr) nounwind optsize {\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 488)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source = load %ptrtype, %ptrtype* %inSourcePtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 489)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (%ptrtype %source)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 490)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target = load %ptrtype, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 491)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (%ptrtype %target)\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 492)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store %ptrtype %source, %ptrtype* %inTargetPtr\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 493)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 494)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-dynamic-array.galgas", 495)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_dynamicArrayTypeAssignGenericFunctionIR.mSlotID,
                                           extensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration (defineExtensionMethod_dynamicArrayTypeAssignGenericFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  {
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  const GALGAS_enumerationDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mEnumerationName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 53)) ;
  }
  GALGAS_bigint var_maxValue_2362 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 55)) ;
  const GALGAS_enumerationDeclarationAST temp_2 = object ;
  cEnumerator_enumerationConstantList enumerator_2405 (temp_2.getter_mCaseNameList (HERE), kENUMERATION_UP) ;
  while (enumerator_2405.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictInf, var_maxValue_2362.objectCompare (enumerator_2405.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_maxValue_2362 = enumerator_2405.current_mConstantValue (HERE) ;
      }
    }
    enumerator_2405.gotoNextObject () ;
  }
  GALGAS_uint var_representationBitCount_2505 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).isValid ()) {
    uint32_t variant_2516 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)).uintValue () ;
    bool loop_2516 = true ;
    while (loop_2516) {
      loop_2516 = GALGAS_bool (kIsStrictSup, var_maxValue_2362.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).isValid () ;
      if (loop_2516) {
        loop_2516 = GALGAS_bool (kIsStrictSup, var_maxValue_2362.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 62)))).boolValue () ;
      }
      if (loop_2516 && (0 == variant_2516)) {
        loop_2516 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 62)) ;
      }
      if (loop_2516) {
        variant_2516 -- ;
        var_representationBitCount_2505.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 63)) ;
        var_maxValue_2362 = var_maxValue_2362.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 64)) ;
      }
    }
  }
  {
  const GALGAS_enumerationDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_4.getter_mEnumerationName (HERE), GALGAS_string ("u").add_operation (var_representationBitCount_2505.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)).getter_nowhere (SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 66)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                               extensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_enumerationDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_enumerationDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mEnumerationName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                  extensionGetter_enumerationDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_enumerationDeclarationAST_locationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_enumerationDeclarationAST * object = (const cPtr_enumerationDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumerationDeclarationAST) ;
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("enum ").add_operation (temp_0.getter_mEnumerationName (HERE).getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 78)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                                           extensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_enumerationDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumerationDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_constantMap var_enumConstantMap_4282 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-enumeration-declaration.galgas", 96)) ;
  GALGAS_bigint var_maxValue_4306 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 97)) ;
  const GALGAS_enumerationDeclarationAST temp_0 = object ;
  cEnumerator_enumerationConstantList enumerator_4352 (temp_0.getter_mCaseNameList (HERE), kENUMERATION_UP) ;
  while (enumerator_4352.hasCurrentObject ()) {
    {
    const GALGAS_enumerationDeclarationAST temp_1 = object ;
    var_enumConstantMap_4282.setter_insertKey (enumerator_4352.current_mConstantName (HERE), enumerator_4352.current_mConstantValue (HERE), temp_1.getter_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 99)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictInf, var_maxValue_4306.objectCompare (enumerator_4352.current_mConstantValue (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_maxValue_4306 = enumerator_4352.current_mConstantValue (HERE) ;
      }
    }
    enumerator_4352.gotoNextObject () ;
  }
  {
  const GALGAS_enumerationDeclarationAST temp_3 = object ;
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (temp_3.getter_mEnumerationName (HERE), var_enumConstantMap_4282, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 104)) ;
  }
  GALGAS_uint var_representationBitCount_4667 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).isValid ()) {
    uint32_t variant_4678 = GALGAS_uint::constructor_max (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)).uintValue () ;
    bool loop_4678 = true ;
    while (loop_4678) {
      loop_4678 = GALGAS_bool (kIsStrictSup, var_maxValue_4306.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).isValid () ;
      if (loop_4678) {
        loop_4678 = GALGAS_bool (kIsStrictSup, var_maxValue_4306.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 110)))).boolValue () ;
      }
      if (loop_4678 && (0 == variant_4678)) {
        loop_4678 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-enumeration-declaration.galgas", 110)) ;
      }
      if (loop_4678) {
        variant_4678 -- ;
        var_representationBitCount_4667.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 111)) ;
        var_maxValue_4306 = var_maxValue_4306.divide_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 112)) ;
      }
    }
  }
  const GALGAS_enumerationDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_proxy var_integerTypeProxy_4856 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_representationBitCount_4667.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)), temp_4.getter_mEnumerationName (HERE).getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 117))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 115)) ;
  GALGAS_lstring var_conversionToUIntN_5325 ;
  {
  const GALGAS_enumerationDeclarationAST temp_5 = object ;
  const GALGAS_enumerationDeclarationAST temp_6 = object ;
  const GALGAS_enumerationDeclarationAST temp_7 = object ;
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, temp_5.getter_mEnumerationName (HERE), temp_6.getter_mEnumerationName (HERE).getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 121)), GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_representationBitCount_4667.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), temp_7.getter_mEnumerationName (HERE).getter_location (SOURCE_FILE ("type-enumeration-declaration.galgas", 122))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 122)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-enumeration-declaration.galgas", 123)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-enumeration-declaration.galgas", 124)), var_integerTypeProxy_4856, var_conversionToUIntN_5325, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 119)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_enumToUintRoutineIR::constructor_new (var_conversionToUIntN_5325, GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("i").add_operation (var_representationBitCount_4667.getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 132))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 128)) ;
  const GALGAS_enumerationDeclarationAST temp_8 = object ;
  const GALGAS_enumerationDeclarationAST temp_9 = object ;
  GALGAS_omnibusType var_enumerationType_5589 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-enumeration-declaration.galgas", 137)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-enumeration-declaration.galgas", 138)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-enumeration-declaration.galgas", 138)) COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 138)), temp_8.getter_mEnumerationName (HERE).getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 139)), GALGAS_typeKind::constructor_enumeration (var_representationBitCount_4667  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 140)), temp_9.getter_mEnumerationName (HERE).getter_string (SOURCE_FILE ("type-enumeration-declaration.galgas", 141))  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 135)) ;
  {
  const GALGAS_enumerationDeclarationAST temp_10 = object ;
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_10.getter_mEnumerationName (HERE), var_enumerationType_5589, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 143)) ;
  }
  const GALGAS_enumerationDeclarationAST temp_11 = object ;
  GALGAS_lstring var_key_6012 = function_assignmentOperatorKey (var_enumerationType_5589, temp_11.getter_mEnumerationName (HERE).getter_location (HERE), var_enumerationType_5589, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 145)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_6012, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-enumeration-declaration.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 146)) ;
  }
  GALGAS_omnibusType var_boolType_6335 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 149)) ;
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-enumeration-declaration.galgas", 151)), var_enumerationType_5589, GALGAS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6335, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 151)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("type-enumeration-declaration.galgas", 154)), var_enumerationType_5589, GALGAS_string ("icmp ule"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6335, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 153)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("type-enumeration-declaration.galgas", 162)), var_enumerationType_5589, GALGAS_string ("icmp ult"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_6335, inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 161)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumerationDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_enumerationDeclarationAST.mSlotID,
                                       extensionMethod_enumerationDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumerationDeclarationAST_enterInContext (defineExtensionMethod_enumerationDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumToUintRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumToUintRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumToUintRoutineIR * object = (const cPtr_enumToUintRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_enumToUintRoutineIR) ;
  const GALGAS_enumToUintRoutineIR temp_0 = object ;
  GALGAS_string var_routineLLVMName_8391 = function_llvmNameForFunction (temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 210)) ;
  const GALGAS_enumToUintRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_1.getter_mEnumerationLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)).add_operation (var_routineLLVMName_8391, inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 211)) ;
  const GALGAS_enumToUintRoutineIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.getter_mEnumerationLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)).add_operation (GALGAS_string ("* %inValue) nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 212)) ;
  const GALGAS_enumToUintRoutineIR temp_3 = object ;
  const GALGAS_enumToUintRoutineIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %r = load ").add_operation (temp_3.getter_mEnumerationLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)).add_operation (temp_4.getter_mEnumerationLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 213)) ;
  const GALGAS_enumToUintRoutineIR temp_5 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_5.getter_mEnumerationLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 214)).add_operation (GALGAS_string (" %r\n"), inCompiler COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-enumeration-declaration.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_enumToUintRoutineIR.mSlotID,
                                           extensionMethod_enumToUintRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumToUintRoutineIR_llvmCodeGeneration (defineExtensionMethod_enumToUintRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structureDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  {
  const GALGAS_structureDeclarationAST temp_0 = object ;
  const GALGAS_structureDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mReceiverTypeName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 273)) ;
  }
  const GALGAS_structureDeclarationAST temp_2 = object ;
  cEnumerator_structurePropertyListAST enumerator_9377 (temp_2.getter_mStructurePropertyListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9377.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, enumerator_9377.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GALGAS_structureDeclarationAST temp_4 = object ;
        ioArgument_ioGraph.setter_addEdge (temp_4.getter_mReceiverTypeName (HERE), enumerator_9377.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 277)) ;
        }
      }
    }
    switch (enumerator_9377.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_9734 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_9377.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_9734->mAssociatedValue0 ;
        const GALGAS_structureDeclarationAST temp_5 = object ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), temp_5.getter_mReceiverTypeName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 282)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_9884 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_9377.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_9884->mAssociatedValue0 ;
        const GALGAS_structureDeclarationAST temp_6 = object ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), temp_6.getter_mReceiverTypeName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 284)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_10016 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_9377.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_10016->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 286)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_10155 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_9377.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_10155->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9377.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                               extensionMethod_structureDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_structureDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  result_outRepresentation = temp_0.getter_mReceiverTypeName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 296)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                           extensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_structureDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@structureDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_structureDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_structureDeclarationAST * object = (const cPtr_structureDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structureDeclarationAST) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mReceiverTypeName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                                  extensionGetter_structureDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_structureDeclarationAST_locationForErrorSignaling (defineExtensionGetter_structureDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structureDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioContext,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
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
  GALGAS_propertyList var_propertyList_21071 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 556)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_21164 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-structure-declaration.galgas", 558)) ;
  GALGAS_constructorSignature var_constructorSignature_21214 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 559)) ;
  GALGAS_string var_constructorKey_21244 = GALGAS_string ("(") ;
  GALGAS_bool var_canBeCopied_21268 = GALGAS_bool (true) ;
  const GALGAS_structureDeclarationAST temp_0 = object ;
  cEnumerator_structurePropertyListAST enumerator_21324 (temp_0.getter_mStructurePropertyListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_21324.hasCurrentObject ()) {
    const GALGAS_structureDeclarationAST temp_1 = object ;
    const GALGAS_structureDeclarationAST temp_2 = object ;
    const GALGAS_structureDeclarationAST temp_3 = object ;
    extensionMethod_enterPropertyInContext (enumerator_21324.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_1.getter_mReceiverTypeName (HERE), temp_2.getter_mOmnibusTypeSpecificName (HERE), temp_3.getter_mLLVMBaseTypeName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 568)), ioArgument_ioDecoratedRoutineList, var_propertyList_21071, var_sortedOperandIRList_21164, var_constructorSignature_21214, var_constructorKey_21244, var_canBeCopied_21268, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 563)) ;
    enumerator_21324.gotoNextObject () ;
  }
  var_constructorKey_21244.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 578)) ;
  GALGAS_constructorMap var_constructorMap_21895 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-structure-declaration.galgas", 580)) ;
  {
  const GALGAS_structureDeclarationAST temp_4 = object ;
  var_constructorMap_21895.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_21244, temp_4.getter_mReceiverTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 582)), var_constructorSignature_21214, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_21164  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 581)) ;
  }
  {
  const GALGAS_structureDeclarationAST temp_5 = object ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_5.getter_mOmnibusTypeSpecificName (HERE), var_constructorMap_21895, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 586)) ;
  }
  GALGAS_omnibusTypeAttributes var_typeAttributes_22267 = GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-structure-declaration.galgas", 588)) ;
  const GALGAS_structureDeclarationAST temp_6 = object ;
  cEnumerator_lstringlist enumerator_22411 (temp_6.getter_mAttributeListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_22411.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsEqual, enumerator_22411.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 591)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_typeAttributes_22267.getter_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 592)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_22411.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 593)), GALGAS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 593)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_canBeCopied_21268.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 594)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_structureDeclarationAST temp_11 = object ;
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (temp_11.getter_mReceiverTypeName (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 595)), GALGAS_string ("this structure cannot be copied, one field is not copyable"), fixItArray12  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 595)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_7) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (enumerator_22411.current_mValue (HERE).getter_location (SOURCE_FILE ("type-structure-declaration.galgas", 598)), GALGAS_string ("only @copyable attribute is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 598)) ;
    }
    enumerator_22411.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_structureDeclarationAST temp_15 = object ;
    test_14 = temp_15.getter_mGenerateAssignmentRoutine (HERE).operator_and (var_canBeCopied_21268 COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 601)).boolEnum () ;
    if (kBoolTrue == test_14) {
      var_typeAttributes_22267 = var_typeAttributes_22267.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-structure-declaration.galgas", 602)) COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 602)) ;
    }
  }
  const GALGAS_structureDeclarationAST temp_16 = object ;
  const GALGAS_structureDeclarationAST temp_17 = object ;
  GALGAS_omnibusType var_structureType_22955 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-structure-declaration.galgas", 607)), var_typeAttributes_22267, temp_16.getter_mOmnibusTypeSpecificName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 609)), GALGAS_typeKind::constructor_structure (var_propertyList_21071  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 610)), temp_17.getter_mLLVMBaseTypeName (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 611))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 605)) ;
  {
  const GALGAS_structureDeclarationAST temp_18 = object ;
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_18.getter_mReceiverTypeName (HERE), var_structureType_22955, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 613)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_22955.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 619)), var_propertyList_21071  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 618))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 618)) ;
  GALGAS_string var_assignmentFunctionLLVMName_23653 = function_assignmentOperatorFuncName (var_structureType_22955, var_structureType_22955, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 624)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_structureTypeAssignFunctionIR::constructor_new (var_assignmentFunctionLLVMName_23653.getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 626)), GALGAS_bool (false), GALGAS_bool (false), var_structureType_22955  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 625)) ;
  GALGAS_lstring var_key_23928 = function_assignmentOperatorKey (var_structureType_22955, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 632)), var_structureType_22955, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 632)) ;
  GALGAS_structureAssignmentOperatorUsage var_operatorUsage_24014 = GALGAS_structureAssignmentOperatorUsage::constructor_new (var_structureType_22955  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 633)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_23928, var_operatorUsage_24014, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 634)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structureDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_structureDeclarationAST.mSlotID,
                                       extensionMethod_structureDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structureDeclarationAST_enterInContext (defineExtensionMethod_structureDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@userLLVMSructureTypeDefinitionIR generateLLVMType'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (const cPtr_userLLVMTypeDefinitionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_userLLVMSructureTypeDefinitionIR * object = (const cPtr_userLLVMSructureTypeDefinitionIR *) inObject ;
  macroValidSharedObject (object, cPtr_userLLVMSructureTypeDefinitionIR) ;
  const GALGAS_userLLVMSructureTypeDefinitionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0.getter_mLLVMDefinedTypeName (HERE).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 648)) ;
  const GALGAS_userLLVMSructureTypeDefinitionIR temp_1 = object ;
  cEnumerator_propertyList enumerator_24824 (temp_1.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_24824.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_24824.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 650)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 650)) ;
    if (enumerator_24824.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 651)) ;
    }
    enumerator_24824.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 653)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (void) {
  enterExtensionMethod_generateLLVMType (kTypeDescriptor_GALGAS_userLLVMSructureTypeDefinitionIR.mSlotID,
                                         extensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType (defineExtensionMethod_userLLVMSructureTypeDefinitionIR_generateLLVMType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureAssignmentOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structureAssignmentOperatorUsage_generateCode (const cPtr_abstractAssignmentOperatorUsage * /* inObject */,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionListIR,
                                                                           GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                           const GALGAS_omnibusType constinArgument_inTargetType,
                                                                           const GALGAS_string constinArgument_inTargetLLVMName,
                                                                           const GALGAS_objectIR constinArgument_inSourcePossibleReference,
                                                                           const GALGAS_location constinArgument_inErrorLocation,
                                                                           const GALGAS_bool constinArgument_inTargetIsInitialized,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_structTypeName_25741 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 675)) ;
  GALGAS_arcAssignmentList var_arcAssignmentList_25795 = callExtensionGetter_arcList ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 676)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inTargetIsInitialized.operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 677)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_arcAssignmentList enumerator_25926 (var_arcAssignmentList_25795, kENUMERATION_UP) ;
      while (enumerator_25926.hasCurrentObject ()) {
        GALGAS_string var_llvmPropertyPtrName_25960 = GALGAS_string ("%arc.init.").add_operation (constinArgument_inErrorLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 679)) ;
        GALGAS_string var_s_26021 = GALGAS_string ("  ").add_operation (var_llvmPropertyPtrName_25960, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (var_structTypeName_25741, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (var_structTypeName_25741, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)).add_operation (GALGAS_string (", i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 680)) ;
        cEnumerator_uintlist enumerator_26189 (enumerator_25926.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
        while (enumerator_26189.hasCurrentObject ()) {
          var_s_26021.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_26189.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 682)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 682)) ;
          enumerator_26189.gotoNextObject () ;
        }
        var_s_26021.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_25926.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 684)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 684)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 684)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26021, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 685)) ;
        }
        GALGAS_string var_propertyTypeLLVMName_26367 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25926.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 686)) ;
        var_s_26021 = GALGAS_string ("store ").add_operation (var_propertyTypeLLVMName_26367, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)).add_operation (var_propertyTypeLLVMName_26367, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)).add_operation (var_llvmPropertyPtrName_25960, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 687)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_26021, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 688)) ;
        }
        enumerator_25926.gotoNextObject () ;
      }
    }
  }
  switch (constinArgument_inSourcePossibleReference.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayRepeatedDynamicValue\xC2""\xBB"""), fixItArray1  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 693)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayDynamicValues\xC2""\xBB"""), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 695)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayStaticValues\xC2""\xBB"""), fixItArray3  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 697)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_27465 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_uint extractedValue_idx = extractPtr_27465->mAssociatedValue3 ;
      GALGAS_string var_assignmentFunctionLLVMName_27083 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 699)) ;
      GALGAS_string var_s_27153 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27083.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 700)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 701)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GALGAS_string ("* @gconst."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 702)) ;
      {
      GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      temp_4.addAssign_operation (var_assignmentFunctionLLVMName_27083  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27153, temp_4, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 703)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      GALGAS_string var_assignmentFunctionLLVMName_27524 = function_assignmentOperatorFuncName (constinArgument_inTargetType, constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 705)) ;
      GALGAS_string var_s_27593 = GALGAS_string (" call void  @").add_operation (var_assignmentFunctionLLVMName_27524.getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 706)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 707)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inTargetType.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (extensionGetter_llvmName (constinArgument_inSourcePossibleReference, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 708)) ;
      {
      GALGAS_stringset temp_5 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      temp_5.addAssign_operation (var_assignmentFunctionLLVMName_27524  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_27593, temp_5, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 709)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_28562 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (constinArgument_inSourcePossibleReference.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_sortedOperandValues = extractPtr_28562->mAssociatedValue1 ;
      GALGAS_uint var_uniqueValue_28002 = ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 712)) ;
      cEnumerator_sortedOperandIRList enumerator_28116 (extractedValue_sortedOperandValues, kENUMERATION_UP) ;
      while (enumerator_28116.hasCurrentObject ()) {
        GALGAS_string var_ptr_28133 = GALGAS_string ("%ptr.").add_operation (var_uniqueValue_28002.getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)).add_operation (enumerator_28116.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 714)) ;
        GALGAS_string var_s_28181 = var_ptr_28133.add_operation (GALGAS_string (" = getelementptr "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (var_structTypeName_25741, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (var_structTypeName_25741, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (constinArgument_inTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)).add_operation (enumerator_28116.current_mIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 715)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28181, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 716)) ;
        }
        var_s_28181 = GALGAS_string ("store ").add_operation (extensionGetter_llvmTypeName (enumerator_28116.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)).add_operation (extensionGetter_llvmName (enumerator_28116.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)).add_operation (extensionGetter_llvmTypeName (enumerator_28116.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)).add_operation (var_ptr_28133, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 717)) ;
        {
        extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionListIR, var_s_28181, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-structure-declaration.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 718)) ;
        }
        enumerator_28116.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""literalInteger\xC2""\xBB"""), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 721)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""literalString\xC2""\xBB"""), fixItArray7  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 723)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmArrayStaticValues\xC2""\xBB"""), fixItArray8  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 725)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""llvmValue\xC2""\xBB"""), fixItArray9  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 727)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""void\xC2""\xBB"""), fixItArray10  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 729)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid structure assignment \xC2""\xAB""zero\xC2""\xBB"""), fixItArray11  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 731)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structureAssignmentOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_structureAssignmentOperatorUsage.mSlotID,
                                     extensionMethod_structureAssignmentOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structureAssignmentOperatorUsage_generateCode (defineExtensionMethod_structureAssignmentOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structureTypeAssignFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structureTypeAssignFunctionIR * object = (const cPtr_structureTypeAssignFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_structureTypeAssignFunctionIR) ;
  const GALGAS_structureTypeAssignFunctionIR temp_0 = object ;
  GALGAS_arcAssignmentList var_arcAssignmentList_29688 = callExtensionGetter_arcList ((const cPtr_omnibusType *) temp_0.getter_mStructureType (HERE).ptr (), GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 748)) ;
  const GALGAS_structureTypeAssignFunctionIR temp_1 = object ;
  GALGAS_string var_structureTypeLLVMTypeName_29756 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_1.getter_mStructureType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 749)) ;
  const GALGAS_structureTypeAssignFunctionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_2.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 750)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)).add_operation (GALGAS_string (" * %inTarget, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 751)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_structureTypeLLVMTypeName_29756.add_operation (GALGAS_string ("* %inSource) nounwind optsize {\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 752)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Handle ARC properties\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 753)) ;
  cEnumerator_arcAssignmentList enumerator_30147 (var_arcAssignmentList_29688, kENUMERATION_UP) ;
  while (enumerator_30147.hasCurrentObject ()) {
    GALGAS_string var_propertyTypeLLVMName_30179 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30147.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 755)) ;
    GALGAS_string var_llvmVarName_30229 = GALGAS_string ("%arc.retain.").add_operation (enumerator_30147.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 756)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 757)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_30229, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)).add_operation (GALGAS_string ("* %inSource, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 758)) ;
    cEnumerator_uintlist enumerator_30537 (enumerator_30147.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_30537.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_30537.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 760)) ;
      enumerator_30537.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_30147.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 762)) ;
    GALGAS_string var_llvmLoadedVarName_30655 = var_llvmVarName_30229.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 763)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_30655, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (var_propertyTypeLLVMName_30179, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (var_propertyTypeLLVMName_30179, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (var_llvmVarName_30229, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 764)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.retain (").add_operation (var_propertyTypeLLVMName_30179, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (var_llvmLoadedVarName_30655, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 765)) ;
    enumerator_30147.gotoNextObject () ;
  }
  cEnumerator_arcAssignmentList enumerator_30994 (var_arcAssignmentList_29688, kENUMERATION_UP) ;
  while (enumerator_30994.hasCurrentObject ()) {
    GALGAS_string var_llvmVarName_31017 = GALGAS_string ("%arc.release.").add_operation (enumerator_30994.current_mPropertyName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 768)).add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 768)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 769)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmVarName_31017, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)).add_operation (GALGAS_string ("* %inTarget, i32 0"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 770)) ;
    cEnumerator_uintlist enumerator_31326 (enumerator_30994.current_mPropertyIndexPath (HERE), kENUMERATION_UP) ;
    while (enumerator_31326.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 ").add_operation (enumerator_31326.current_mValue (HERE).getter_string (SOURCE_FILE ("type-structure-declaration.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 772)) ;
      enumerator_31326.gotoNextObject () ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (enumerator_30994.current_mPropertyName (HERE), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 774)) ;
    GALGAS_string var_propertyTypeLLVMName_31447 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_30994.current_mPropertyType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 775)) ;
    GALGAS_string var_llvmLoadedVarName_31503 = var_llvmVarName_31017.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 776)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmLoadedVarName_31503, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (var_propertyTypeLLVMName_31447, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (var_propertyTypeLLVMName_31447, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (var_llvmVarName_31017, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 777)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @arc.release (").add_operation (var_propertyTypeLLVMName_31447, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (var_llvmLoadedVarName_31503, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 778)) ;
    enumerator_30994.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Compute type size\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 780)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sizeAsPtr = getelementptr inbounds ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)).add_operation (GALGAS_string ("* null, i32 1\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 781)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCount = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)).add_operation (GALGAS_string ("* %sizeAsPtr to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 782)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %useLoadStore = icmp ule i32 %byteCount, 12\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 783)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %useLoadStore, label %loadStore, label %copyBytesOrCopyWords\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 784)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Copy\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 785)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("loadStore:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 786)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %v = load ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)).add_operation (GALGAS_string ("* %inSource\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 787)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GALGAS_string (" %v, "), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)).add_operation (GALGAS_string ("* %inTarget\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 788)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 789)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytesOrCopyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 790)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountAnd3 = and i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 791)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byteCountIsMutipleOf4 = icmp eq i32 %byteCountAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 792)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %byteCountIsMutipleOf4, label %testTarget, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 793)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testTarget:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 794)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)).add_operation (GALGAS_string ("* %inTarget to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 795)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedAnd3 = and i32 %targetAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 796)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %targetAsUnsignedIsMutipleOf4 = icmp eq i32%targetAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 797)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %testSource, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 798)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("testSource:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 799)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsigned = ptrtoint ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)).add_operation (GALGAS_string ("* %inSource to i32\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 800)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedAnd3 = and i32 %sourceAsUnsigned, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 801)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %sourceAsUnsignedIsMutipleOf4 = icmp eq i32 %sourceAsUnsignedAnd3, 0\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 802)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %targetAsUnsignedIsMutipleOf4, label %copyWords, label %copyBytes\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 803)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 804)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)).add_operation (GALGAS_string ("* %inTarget to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 805)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source32 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)).add_operation (GALGAS_string ("* %inSource to i32*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 806)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %temp = add i32 %byteCount, 3\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 807)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %wordCount = udiv i32 %temp, 4\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 808)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copyWords.loop\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 809)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyWords.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 810)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.word.array (i32* %target32, i32* %source32, i32 %wordCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 811)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 812)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copyBytes:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 813)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %target8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)).add_operation (GALGAS_string ("* %inTarget to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 814)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %source8 = bitcast ").add_operation (var_structureTypeLLVMTypeName_29756, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)).add_operation (GALGAS_string ("* %inSource to i8*\n"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 815)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @copy.byte.array (i8* %target8, i8* %source8, i32 %byteCount)\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 816)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %copy.end\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 817)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("copy.end:\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 818)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 819)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 820)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_structureTypeAssignFunctionIR.mSlotID,
                                           extensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structureTypeAssignFunctionIR_llvmCodeGeneration (defineExtensionMethod_structureTypeAssignFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  {
  const GALGAS_syncDeclarationAST temp_0 = object ;
  const GALGAS_syncDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mSyncToolName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 50)) ;
  }
  const GALGAS_syncDeclarationAST temp_2 = object ;
  cEnumerator_structurePropertyListAST enumerator_2453 (temp_2.getter_mStructurePropertyListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2453.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, enumerator_2453.current_mPropertyTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        const GALGAS_syncDeclarationAST temp_4 = object ;
        ioArgument_ioGraph.setter_addEdge (temp_4.getter_mSyncToolName (HERE), enumerator_2453.current_mPropertyTypeName (HERE) COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 54)) ;
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, enumerator_2453.current_mVisibility (HERE).objectCompare (GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("type-sync-declaration.galgas", 56)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_2453.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-sync-declaration.galgas", 57)), GALGAS_string ("a sync tool property should be private"), fixItArray6  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 57)) ;
      }
    }
    switch (enumerator_2453.current_mPropertyKind (HERE).enumValue ()) {
    case GALGAS_propertyKindAST::kNotBuilt:
      break ;
    case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
      {
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_2915 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (enumerator_2453.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_2915->mAssociatedValue0 ;
        const GALGAS_syncDeclarationAST temp_7 = object ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), temp_7.getter_mSyncToolName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 62)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_3061 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (enumerator_2453.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_initExpression = extractPtr_3061->mAssociatedValue0 ;
        const GALGAS_syncDeclarationAST temp_8 = object ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_initExpression.ptr (), temp_8.getter_mSyncToolName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 64)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_3193 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (enumerator_2453.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_instructionList = extractPtr_3193->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_instructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 66)) ;
      }
      break ;
    case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
      {
        const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_3332 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (enumerator_2453.current_mPropertyKind (HERE).unsafePointer ()) ;
        const GALGAS_instructionListAST extractedValue_writeInstructionList = extractPtr_3332->mAssociatedValue0 ;
        extensionMethod_noteInstructionListTypesInPrecedenceGraph (extractedValue_writeInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 68)) ;
      }
      break ;
    }
    enumerator_2453.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                               extensionMethod_syncDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  const GALGAS_syncDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (temp_0.getter_mSyncToolName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 76)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                           extensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syncDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_syncDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  const GALGAS_syncDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mSyncToolName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                                  extensionGetter_syncDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syncDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                               GALGAS_semanticContext & ioArgument_ioContext,
                                                               GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                               GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                               GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                               GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                               GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                               GALGAS_userLLVMTypeDefinitionListIR & ioArgument_ioUserLLVMTypeDefinitionListIR,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncDeclarationAST * object = (const cPtr_syncDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncDeclarationAST) ;
  GALGAS_propertyList var_propertyList_4898 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 100)) ;
  GALGAS_sortedOperandIRList var_sortedOperandIRList_4991 = GALGAS_sortedOperandIRList::constructor_emptySortedList (SOURCE_FILE ("type-sync-declaration.galgas", 102)) ;
  GALGAS_constructorSignature var_constructorSignature_5041 = GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-sync-declaration.galgas", 103)) ;
  GALGAS_string var_constructorKey_5071 = GALGAS_string ("(") ;
  const GALGAS_syncDeclarationAST temp_0 = object ;
  cEnumerator_structurePropertyListAST enumerator_5126 (temp_0.getter_mStructurePropertyListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5126.hasCurrentObject ()) {
    GALGAS_bool joker_5541 = GALGAS_bool::constructor_default (SOURCE_FILE ("type-sync-declaration.galgas", 118)) ;
    const GALGAS_syncDeclarationAST temp_1 = object ;
    const GALGAS_syncDeclarationAST temp_2 = object ;
    const GALGAS_syncDeclarationAST temp_3 = object ;
    extensionMethod_enterPropertyInContext (enumerator_5126.current (HERE), ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_1.getter_mSyncToolName (HERE), temp_2.getter_mSyncToolName (HERE), temp_3.getter_mSyncToolName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 111)), ioArgument_ioDecoratedRoutineList, var_propertyList_4898, var_sortedOperandIRList_4991, var_constructorSignature_5041, var_constructorKey_5071, joker_5541, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 106)) ;
    enumerator_5126.gotoNextObject () ;
  }
  var_constructorKey_5071.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 121)) ;
  GALGAS_constructorMap var_constructorMap_5669 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-sync-declaration.galgas", 123)) ;
  {
  const GALGAS_syncDeclarationAST temp_4 = object ;
  var_constructorMap_5669.setter_insertKey (GALGAS_lstring::constructor_new (var_constructorKey_5071, temp_4.getter_mSyncToolName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 125)), var_constructorSignature_5041, GALGAS_constructorValue::constructor_structure (var_sortedOperandIRList_4991  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 124)) ;
  }
  {
  const GALGAS_syncDeclarationAST temp_5 = object ;
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_5.getter_mSyncToolName (HERE), var_constructorMap_5669, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 129)) ;
  }
  const GALGAS_syncDeclarationAST temp_6 = object ;
  const GALGAS_syncDeclarationAST temp_7 = object ;
  GALGAS_omnibusType var_structureType_6010 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-sync-declaration.galgas", 133)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-sync-declaration.galgas", 134)), temp_6.getter_mSyncToolName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 135)), GALGAS_typeKind::constructor_syncTool (SOURCE_FILE ("type-sync-declaration.galgas", 136)), temp_7.getter_mSyncToolName (HERE).getter_string (SOURCE_FILE ("type-sync-declaration.galgas", 137))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 131)) ;
  {
  const GALGAS_syncDeclarationAST temp_8 = object ;
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_8.getter_mSyncToolName (HERE), var_structureType_6010, inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 139)) ;
  }
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_structureType_6010.ptr (), inCompiler COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 145)), var_propertyList_4898  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-sync-declaration.galgas", 144)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncDeclarationAST.mSlotID,
                                       extensionMethod_syncDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncDeclarationAST_enterInContext (defineExtensionMethod_syncDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_integerDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 13)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                  extensionGetter_integerDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_integerDeclarationAST_locationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nodeName_1437 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 29)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 29)) ;
  {
  const GALGAS_integerDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_1437, temp_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 30)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1437, function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 31)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 31)) COMMA_SOURCE_FILE ("type-integer.galgas", 31)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1437, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 32)) COMMA_SOURCE_FILE ("type-integer.galgas", 32)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_1437, function_ctBoolTypeName (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 33)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 33)) COMMA_SOURCE_FILE ("type-integer.galgas", 33)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                               extensionMethod_integerDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_integerDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@integerDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_integerDeclarationAST * object = (const cPtr_integerDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_integerDeclarationAST) ;
  const GALGAS_integerDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("integer ").add_operation (callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 39)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                                           extensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_integerDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_integerDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'minValueForInteger'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_minValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 48)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 50)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 50)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_minValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minValueForInteger ("minValueForInteger",
                                                                    functionWithGenericHeader_minValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_minValueForInteger) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'maxValueForInteger'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_maxValueForInteger (const GALGAS_bool & constinArgument_inIsUnsigned,
                                           const GALGAS_uint & constinArgument_inBitCount,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)).left_shift_operation (constinArgument_inBitCount, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)).left_shift_operation (constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 60)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_maxValueForInteger [3] = {
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_maxValueForInteger ("maxValueForInteger",
                                                                    functionWithGenericHeader_maxValueForInteger,
                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                    2,
                                                                    functionArgs_maxValueForInteger) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_lstring var_integerTypeName_3818 = callExtensionGetter_typeName ((const cPtr_integerDeclarationAST *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 78)).getter_nowhere (SOURCE_FILE ("type-integer.galgas", 78)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_3938 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_integerTypeName_3818, var_selfTypeProxy_3938 COMMA_SOURCE_FILE ("type-integer.galgas", 79)) ;
  }
  const GALGAS_integerDeclarationAST temp_1 = object ;
  const GALGAS_integerDeclarationAST temp_2 = object ;
  GALGAS_bigint var_min_4118 = function_minValueForInteger (temp_1.getter_mIsSigned (HERE).operator_not (SOURCE_FILE ("type-integer.galgas", 82)), temp_2.getter_mSize (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 82)) ;
  const GALGAS_integerDeclarationAST temp_3 = object ;
  const GALGAS_integerDeclarationAST temp_4 = object ;
  GALGAS_bigint var_max_4183 = function_maxValueForInteger (temp_3.getter_mIsSigned (HERE).operator_not (SOURCE_FILE ("type-integer.galgas", 83)), temp_4.getter_mSize (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 83)) ;
  const GALGAS_integerDeclarationAST temp_5 = object ;
  GALGAS_string var_llvmTypeName_4311 = GALGAS_string ("i").add_operation (temp_5.getter_mSize (HERE).getter_string (SOURCE_FILE ("type-integer.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 85)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_integerDeclarationAST temp_7 = object ;
    test_6 = GALGAS_bool (kIsEqual, temp_7.getter_mSize (HERE).modulo_operation (GALGAS_uint ((uint32_t) 16U), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 87)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_lstring var_routineLLVMName_4720 ;
      {
      extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3818, var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 90)), GALGAS_string ("byteSwapped").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 91)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 92)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 93)), var_selfTypeProxy_3938, var_routineLLVMName_4720, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 88)) ;
      }
      ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_4720, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4311, GALGAS_string ("bswap")  COMMA_SOURCE_FILE ("type-integer.galgas", 97))  COMMA_SOURCE_FILE ("type-integer.galgas", 97)) ;
    }
  }
  GALGAS_lstring var_routineLLVMName_5802 ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3818, var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 125)), GALGAS_string ("bitReversed").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 126)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 127)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 128)), var_selfTypeProxy_3938, var_routineLLVMName_5802, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 123)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5802, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4311, GALGAS_string ("bitreverse")  COMMA_SOURCE_FILE ("type-integer.galgas", 132))  COMMA_SOURCE_FILE ("type-integer.galgas", 132)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3818, var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 142)), GALGAS_string ("leadingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 143)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 144)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 145)), var_selfTypeProxy_3938, var_routineLLVMName_5802, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 140)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5802, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4311, GALGAS_string ("ctlz")  COMMA_SOURCE_FILE ("type-integer.galgas", 149))  COMMA_SOURCE_FILE ("type-integer.galgas", 149)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3818, var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 159)), GALGAS_string ("trainingZeroCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 160)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 161)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 162)), var_selfTypeProxy_3938, var_routineLLVMName_5802, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 157)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5802, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4311, GALGAS_string ("cttz")  COMMA_SOURCE_FILE ("type-integer.galgas", 166))  COMMA_SOURCE_FILE ("type-integer.galgas", 166)) ;
  {
  extensionSetter_addComputedPropertyGetter (ioArgument_ioContext, var_integerTypeName_3818, var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 176)), GALGAS_string ("setBitCount").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 177)), GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("type-integer.galgas", 178)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("type-integer.galgas", 179)), var_selfTypeProxy_3938, var_routineLLVMName_5802, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 174)) ;
  }
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_integerBuiltinFunctionIR::constructor_new (var_routineLLVMName_5802, GALGAS_bool (false), GALGAS_bool (false), var_llvmTypeName_4311, GALGAS_string ("ctpop")  COMMA_SOURCE_FILE ("type-integer.galgas", 183))  COMMA_SOURCE_FILE ("type-integer.galgas", 183)) ;
  GALGAS_constantMap var_constantMap_7574 = GALGAS_constantMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 191)) ;
  {
  var_constantMap_7574.setter_insertKey (GALGAS_string ("min").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 192)), var_min_4118, var_integerTypeName_3818, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 192)) ;
  }
  {
  var_constantMap_7574.setter_insertKey (GALGAS_string ("max").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 193)), var_max_4183, var_integerTypeName_3818, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 193)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstantMap.setter_insertKey (var_integerTypeName_3818, var_constantMap_7574, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 194)) ;
  }
  GALGAS_constructorMap var_constructorMap_7887 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-integer.galgas", 199)) ;
  {
  var_constructorMap_7887.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-integer.galgas", 200)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-integer.galgas", 200)), GALGAS_constructorValue::constructor_simple (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("type-integer.galgas", 200))  COMMA_SOURCE_FILE ("type-integer.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 200)) ;
  }
  {
  ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (var_integerTypeName_3818, var_constructorMap_7887, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 201)) ;
  }
  const GALGAS_integerDeclarationAST temp_8 = object ;
  const GALGAS_integerDeclarationAST temp_9 = object ;
  GALGAS_omnibusType var_integerType_8120 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-integer.galgas", 204)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-integer.galgas", 205)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-integer.galgas", 205)) COMMA_SOURCE_FILE ("type-integer.galgas", 205)), var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 206)), GALGAS_typeKind::constructor_integer (var_min_4118, var_max_4183, temp_8.getter_mIsSigned (HERE).operator_not (SOURCE_FILE ("type-integer.galgas", 207)), temp_9.getter_mSize (HERE)  COMMA_SOURCE_FILE ("type-integer.galgas", 207)), var_integerTypeName_3818.getter_string (SOURCE_FILE ("type-integer.galgas", 208))  COMMA_SOURCE_FILE ("type-integer.galgas", 203)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_integerTypeName_3818, var_integerType_8120, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 210)) ;
  }
  GALGAS_lstring var_key_9155 = function_assignmentOperatorKey (var_integerType_8120, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 233)), var_integerType_8120, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 233)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9155, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-integer.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 234)) ;
  }
  var_key_9155 = function_assignmentOperatorKey (var_integerType_8120, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 235)), function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 235)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_9155, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-integer.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 236)) ;
  }
  GALGAS_string var_functionName_9560 = function_assignmentOperatorFuncName (var_integerType_8120, var_integerType_8120, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 238)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_simpleAssignmentCopyRoutineIR::constructor_new (var_functionName_9560.getter_nowhere (SOURCE_FILE ("type-integer.galgas", 240)), GALGAS_bool (false), GALGAS_bool (false), var_integerType_8120  COMMA_SOURCE_FILE ("type-integer.galgas", 239))  COMMA_SOURCE_FILE ("type-integer.galgas", 239)) ;
  GALGAS_omnibusType var_boolType_9862 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 246)) ;
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("type-integer.galgas", 248)), var_integerType_8120, GALGAS_string ("icmp eq"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9862, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 248)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_10 = object ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.getter_mIsSigned (HERE).boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_string ("icmp sle") ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string ("icmp ule") ;
  }
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("type-integer.galgas", 251)), var_integerType_8120, temp_11, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9862, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 250)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_13 = object ;
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = temp_13.getter_mIsSigned (HERE).boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_string ("icmp slt") ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_string ("icmp ult") ;
  }
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("type-integer.galgas", 259)), var_integerType_8120, temp_14, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_boolType_9862, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 258)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_leftShiftOp (SOURCE_FILE ("type-integer.galgas", 266)), var_integerType_8120, GALGAS_string ("shl"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 266)) ;
  }
  {
  const GALGAS_integerDeclarationAST temp_16 = object ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = temp_16.getter_mIsSigned (HERE).boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("ashr") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string ("lshr") ;
  }
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_rightShiftOp (SOURCE_FILE ("type-integer.galgas", 269)), var_integerType_8120, temp_17, ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 268)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_bitWiseOrOp (SOURCE_FILE ("type-integer.galgas", 276)), var_integerType_8120, GALGAS_string ("or"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 276)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_bitWiseAndOp (SOURCE_FILE ("type-integer.galgas", 278)), var_integerType_8120, GALGAS_string ("and"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 278)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_bitWiseXorOp (SOURCE_FILE ("type-integer.galgas", 280)), var_integerType_8120, GALGAS_string ("xor"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 280)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("type-integer.galgas", 282)), var_integerType_8120, GALGAS_string ("add"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 282)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_subOpNoOvf (SOURCE_FILE ("type-integer.galgas", 284)), var_integerType_8120, GALGAS_string ("sub"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 284)) ;
  }
  {
  routine_addIntegerInfixOperator (GALGAS_omnibusInfixOperator::constructor_mulOpNoOvf (SOURCE_FILE ("type-integer.galgas", 286)), var_integerType_8120, GALGAS_string ("mul"), ioArgument_ioContext.mProperty_mInfixOperatorMap, var_integerType_8120, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 286)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_integerDeclarationAST.mSlotID,
                                       extensionMethod_integerDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerDeclarationAST_enterInContext (defineExtensionMethod_integerDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addIntegerInfixOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addIntegerInfixOperator (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                      const GALGAS_omnibusType constinArgument_inIntegerType,
                                      const GALGAS_string constinArgument_inLLVMOp,
                                      GALGAS_infixOperatorMap & ioArgument_ioInfixOperatorMap,
                                      const GALGAS_omnibusType constinArgument_inResultType,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_ctIntType_11884 = function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 298)) ;
  GALGAS_lstring var_key_11922 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 299)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 299)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11922, constinArgument_inResultType, GALGAS_inlineInfixOperatorUsage::constructor_new (constinArgument_inLLVMOp  COMMA_SOURCE_FILE ("type-integer.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 300)) ;
  }
  var_key_11922 = function_infixOperatorMapKey (constinArgument_inIntegerType, constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 301)), var_ctIntType_11884, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 301)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11922, constinArgument_inResultType, GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage::constructor_new (constinArgument_inLLVMOp  COMMA_SOURCE_FILE ("type-integer.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 302)) ;
  }
  var_key_11922 = function_infixOperatorMapKey (var_ctIntType_11884, constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-integer.galgas", 303)), constinArgument_inIntegerType, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 303)) ;
  {
  ioArgument_ioInfixOperatorMap.setter_insertKey (var_key_11922, constinArgument_inResultType, GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage::constructor_new (constinArgument_inLLVMOp  COMMA_SOURCE_FILE ("type-integer.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 304)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_integer_compileTimeInt_operatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
                                                                                                    const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                    const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                    const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                    const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                    GALGAS_objectIR & outArgument_outResultValue,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage * object = (const cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage) ;
  GALGAS_bigint var_minValue_13533 ;
  GALGAS_bigint var_maxValue_13552 ;
  GALGAS_bool joker_13554_2 ; // Joker input parameter
  GALGAS_uint joker_13554_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)).getter_kind (HERE).method_integer (var_minValue_13533, var_maxValue_13552, joker_13554_2, joker_13554_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 328)) ;
  GALGAS_bigint var_value_13611 ;
  GALGAS_omnibusType joker_13592_1 ; // Joker input parameter
  constinArgument_inRightOperand.method_literalInteger (joker_13592_1, var_value_13611, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 329)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_value_13611.objectCompare (var_minValue_13533)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-integer.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 332)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 333)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 331)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_value_13611.objectCompare (var_maxValue_13552)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("right operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-integer.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 336)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 337)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 335)) ;
      }
    }
  }
  GALGAS_objectIR var_leftOperand_14080 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_14080, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 341)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 342)) ;
  }
  const GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage temp_4 = object ;
  GALGAS_string var_s_14258 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).add_operation (temp_4.getter_mLLVMOperation (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_14080, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 343)).add_operation (extensionGetter_llvmName (var_leftOperand_14080, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 344)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 344)).add_operation (extensionGetter_llvmName (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 344)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_14258, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 345)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage.mSlotID,
                                     extensionMethod_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_generateCode (defineExtensionMethod_inlineInfix_5F_integer_5F_compileTimeInt_5F_operatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfix_compileTimeInt_integer_operatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
                                                                                                    const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                                    const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                    const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                                    const GALGAS_omnibusType constinArgument_inResultType,
                                                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                    GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                    GALGAS_objectIR & outArgument_outResultValue,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage * object = (const cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage) ;
  GALGAS_bigint var_minValue_15529 ;
  GALGAS_bigint var_maxValue_15548 ;
  GALGAS_bool joker_15550_2 ; // Joker input parameter
  GALGAS_uint joker_15550_1 ; // Joker input parameter
  extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)).getter_kind (HERE).method_integer (var_minValue_15529, var_maxValue_15548, joker_15550_2, joker_15550_1, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 369)) ;
  GALGAS_bigint var_value_15606 ;
  GALGAS_omnibusType joker_15587_1 ; // Joker input parameter
  constinArgument_inLeftOperand.method_literalInteger (joker_15587_1, var_value_15606, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 370)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_value_15606.objectCompare (var_minValue_15529)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, lower than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-integer.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 373)).add_operation (GALGAS_string (" minimum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 374)), fixItArray1  COMMA_SOURCE_FILE ("type-integer.galgas", 372)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_value_15606.objectCompare (var_maxValue_15548)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("left operand is a compile time integer with an invalid value, greater than $").add_operation (extensionGetter_type (constinArgument_inRightOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)).getter_omnibusTypeDescriptionName (SOURCE_FILE ("type-integer.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 377)).add_operation (GALGAS_string (" maximum value"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 378)), fixItArray3  COMMA_SOURCE_FILE ("type-integer.galgas", 376)) ;
      }
    }
  }
  GALGAS_objectIR var_rightOperand_16076 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_16076, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 382)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 383)) ;
  }
  const GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage temp_4 = object ;
  GALGAS_string var_s_16256 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (temp_4.getter_mLLVMOperation (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_16076, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).ptr (), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 384)).add_operation (extensionGetter_llvmName (constinArgument_inLeftOperand, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)).add_operation (extensionGetter_llvmName (var_rightOperand_16076, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 385)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_16256, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-integer.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 386)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage.mSlotID,
                                     extensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode (defineExtensionMethod_inlineInfix_5F_compileTimeInt_5F_integer_5F_operatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerBuiltinFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerBuiltinFunctionIR * object = (const cPtr_integerBuiltinFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_integerBuiltinFunctionIR) ;
  const GALGAS_integerBuiltinFunctionIR temp_0 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (temp_0.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 883)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 883)).add_operation (temp_1.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("type-integer.galgas", 883)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 883)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 883)) ;
  const GALGAS_integerBuiltinFunctionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_2.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 884)).add_operation (GALGAS_string ("* %inValue) {\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 884)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 884)) ;
  const GALGAS_integerBuiltinFunctionIR temp_3 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value = load ").add_operation (temp_3.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 885)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 885)).add_operation (temp_4.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 885)).add_operation (GALGAS_string ("* %inValue\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 885)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 885)) ;
  const GALGAS_integerBuiltinFunctionIR temp_5 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_6 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_7 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (temp_5.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 886)).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 886)).add_operation (temp_6.getter_mIntrinsicName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 886)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 886)).add_operation (temp_7.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 886)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 886)) ;
  const GALGAS_integerBuiltinFunctionIR temp_8 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (temp_8.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 887)).add_operation (GALGAS_string (" %value)\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 887)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 887)) ;
  const GALGAS_integerBuiltinFunctionIR temp_9 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (temp_9.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 888)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 888)), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 888)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 889)) ;
  const GALGAS_integerBuiltinFunctionIR temp_10 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_11 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_12 = object ;
  const GALGAS_integerBuiltinFunctionIR temp_13 = object ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (temp_10.getter_mLLVMTypeName (HERE).add_operation (GALGAS_string (" @llvm."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891)).add_operation (temp_11.getter_mIntrinsicName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891)).add_operation (temp_12.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891)).add_operation (temp_13.getter_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 891))  COMMA_SOURCE_FILE ("type-integer.galgas", 890)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_integerBuiltinFunctionIR.mSlotID,
                                           extensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_integerBuiltinFunctionIR_llvmCodeGeneration (defineExtensionMethod_integerBuiltinFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_literalStringDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  result_outLocation = GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 11)) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                  extensionGetter_literalStringDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_literalStringDeclarationAST_locationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclarationAST * object = (const cPtr_literalStringDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclarationAST) ;
  GALGAS_lstring var_literalStringTypeName_1186 = function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 21)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 21)) ;
  {
  const GALGAS_literalStringDeclarationAST temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName_1186, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 22)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName_1186, GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 23)) COMMA_SOURCE_FILE ("type-static-string.galgas", 23)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                               extensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_literalStringDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@literalStringDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 29)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                                           extensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_literalStringDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalStringDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_literalStringDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * /* inObject */,
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
  GALGAS_omnibusType var_selfType_2637 = function_literalStringType (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 47)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 49)).getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 49)), var_selfType_2637, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 48)) ;
  }
  GALGAS_lstring var_key_2804 = function_assignmentOperatorKey (var_selfType_2637, GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-static-string.galgas", 53)), var_selfType_2637, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 53)) ;
  {
  ioArgument_ioContext.mProperty_mAssignmentOperatorMap.setter_insertKey (var_key_2804, GALGAS_simpleCopyAssignmentOperatorUsage::constructor_new (SOURCE_FILE ("type-static-string.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 54)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_literalStringDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_literalStringDeclarationAST.mSlotID,
                                       extensionMethod_literalStringDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_literalStringDeclarationAST_enterInContext (defineExtensionMethod_literalStringDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  const GALGAS_typeOpaqueDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mOpaqueTypeName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 58)) ;
  }
  const GALGAS_typeOpaqueDeclarationAST temp_2 = object ;
  const GALGAS_typeOpaqueDeclarationAST temp_3 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_2.getter_mSizeExpression (HERE).ptr (), temp_3.getter_mOpaqueTypeName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 60)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                               extensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_typeOpaqueDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("opaque ").add_operation (temp_0.getter_mOpaqueTypeName (HERE).getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 66)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                           extensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typeOpaqueDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_typeOpaqueDeclarationAST * object = (const cPtr_typeOpaqueDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeOpaqueDeclarationAST) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mOpaqueTypeName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                                  extensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typeOpaqueDeclarationAST_locationForErrorSignaling (defineExtensionGetter_typeOpaqueDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeOpaqueDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeOpaqueDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_omnibusTypeAttributes var_opaqueTypeAttributes_4274 = GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("type-opaque-declaration.galgas", 89)) ;
  GALGAS_bool var_copyable_4297 = GALGAS_bool (false) ;
  const GALGAS_typeOpaqueDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_4346 (temp_0.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_4346.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_4346.current_mValue (HERE).getter_string (HERE).objectCompare (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 92)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_opaqueTypeAttributes_4274.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 93)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4346.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 94)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_opaqueTypeAttributes_4274 = var_opaqueTypeAttributes_4274.operator_or (GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 96)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_4346.current_mValue (HERE).getter_string (HERE).objectCompare (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_copyable_4297.boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4346.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 100)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 100)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_copyable_4297 = GALGAS_bool (true) ;
            var_opaqueTypeAttributes_4274 = var_opaqueTypeAttributes_4274.operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("type-opaque-declaration.galgas", 103)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_4346.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 106)), GALGAS_string ("only @").add_operation (function_copyableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (function_instantiableAttribute (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)).add_operation (GALGAS_string (" attributes are allowed here"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), fixItArray7  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 106)) ;
      }
    }
    enumerator_4346.gotoNextObject () ;
  }
  GALGAS_objectIR var_sizeExpressionIR_5291 ;
  {
  const GALGAS_typeOpaqueDeclarationAST temp_8 = object ;
  const GALGAS_typeOpaqueDeclarationAST temp_9 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_8.getter_mSizeExpression (HERE), temp_9.getter_mSizeExpressionLocation (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 117)), var_sizeExpressionIR_5291, inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 112)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_sizeExpressionIR_5291.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_typeOpaqueDeclarationAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.getter_mSizeExpressionLocation (HERE), GALGAS_string ("array size expression is not a literal integer"), fixItArray12  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_constructorMap var_constructorMap_5477 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_opaqueTypeAttributes_4274.getter_instanciable (SOURCE_FILE ("type-opaque-declaration.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_13) {
        {
        var_constructorMap_5477.setter_insertKey (GALGAS_string ("()").getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorSignature::constructor_emptyList (SOURCE_FILE ("type-opaque-declaration.galgas", 125)), GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 125)) ;
        }
        {
        const GALGAS_typeOpaqueDeclarationAST temp_14 = object ;
        ioArgument_ioContext.mProperty_mTypeConstructorMap.setter_insertKey (temp_14.getter_mOpaqueTypeName (HERE), var_constructorMap_5477, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 126)) ;
        }
      }
    }
    GALGAS_bigint var_bitSize_5762 ;
    GALGAS_omnibusType joker_5741_1 ; // Joker input parameter
    var_sizeExpressionIR_5291.method_literalInteger (joker_5741_1, var_bitSize_5762, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 128)) ;
    const GALGAS_typeOpaqueDeclarationAST temp_15 = object ;
    const GALGAS_typeOpaqueDeclarationAST temp_16 = object ;
    GALGAS_omnibusType var_opaqueType_5782 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("type-opaque-declaration.galgas", 131)), var_opaqueTypeAttributes_4274, temp_15.getter_mOpaqueTypeName (HERE).getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 133)), GALGAS_typeKind::constructor_opaque (var_bitSize_5762  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)), temp_16.getter_mOpaqueTypeName (HERE).getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 135))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 129)) ;
    {
    const GALGAS_typeOpaqueDeclarationAST temp_17 = object ;
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (temp_17.getter_mOpaqueTypeName (HERE), var_opaqueType_5782, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 137)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = var_copyable_4297.boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_typeOpaqueDeclarationAST temp_19 = object ;
      inCompiler->printMessage (GALGAS_string ("OPAQUE ").add_operation (temp_19.getter_mOpaqueTypeName (HERE).getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144)).add_operation (GALGAS_string (" is copyable\n"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 144)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_typeOpaqueDeclarationAST.mSlotID,
                                       extensionMethod_typeOpaqueDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeOpaqueDeclarationAST_enterInContext (defineExtensionMethod_typeOpaqueDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  result_outRepresentation = function_registerGroupNameFromOmnibusName (temp_0.getter_mRegisterGroupList (HERE).getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 305)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 305)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                           extensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@controlRegisterGroupDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mRegisterGroupList (HERE).getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 311)).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 311)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                                  extensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_controlRegisterGroupDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterGroupDeclarationAST * object = (const cPtr_controlRegisterGroupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterGroupDeclarationAST) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nodeName_12369 = function_registerGroupNameFromOmnibusName (temp_0.getter_mRegisterGroupList (HERE).getter_mRegisterGroupNameAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 317)) ;
  {
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_12369, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 319)) ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_2 = object ;
  cEnumerator_controlRegisterDeclarationList enumerator_12575 (temp_2.getter_mRegisters (HERE), kENUMERATION_UP) ;
  while (enumerator_12575.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12369, enumerator_12575.current (HERE).getter_mRegisterTypeName (HERE) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 323)) ;
    }
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12369, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) COMMA_SOURCE_FILE ("declaration-control-register.galgas", 324)) ;
    }
    GALGAS_stringlist var_split_12833 = enumerator_12575.current (HERE).getter_mRegisterTypeName (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("u") COMMA_SOURCE_FILE ("declaration-control-register.galgas", 326)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_split_12833.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsEqual, var_split_12833.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).objectCompare (GALGAS_string::makeEmptyString ())) ;
      }
      GALGAS_bool test_5 = test_4 ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = var_split_12833.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 327)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("declaration-control-register.galgas", 327)) ;
      }
      test_3 = test_5.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_uint var_n_13028 = var_split_12833.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 328)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsStrictSup, var_n_13028.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_lstring var_bitSizeTypeName_13127 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_n_13028.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_significantBitCount (SOURCE_FILE ("declaration-control-register.galgas", 330)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)), enumerator_12575.current (HERE).getter_mRegisterTypeName (HERE).getter_location (SOURCE_FILE ("declaration-control-register.galgas", 330))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 330)) ;
            {
            ioArgument_ioGraph.setter_addEdge (var_nodeName_12369, var_bitSizeTypeName_13127 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 331)) ;
            }
          }
        }
      }
    }
    cEnumerator_controlRegisterBitSliceList enumerator_13366 (enumerator_12575.current (HERE).getter_mRegisterBitSliceList (HERE), kENUMERATION_UP) ;
    while (enumerator_13366.hasCurrentObject ()) {
      switch (enumerator_13366.current_mRegisterBitSlice (HERE).enumValue ()) {
      case GALGAS_controlRegisterBitSlice::kNotBuilt:
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
        {
        }
        break ;
      case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
        {
          const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_13576 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_13366.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
          const GALGAS_lbigint extractedValue_count = extractPtr_13576->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsSupOrEqual, extractedValue_count.getter_bigint (HERE).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 339)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              {
              extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)), extractedValue_count.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 340)) ;
              }
            }
          }
        }
        break ;
      }
      enumerator_13366.gotoNextObject () ;
    }
    GALGAS_lstring var_rootNode_13650 = GALGAS_lstring::constructor_new (function_configurationNodeNameForPrecedenceGraph (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)), var_nodeName_12369.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 345)) ;
    {
    ioArgument_ioGraph.setter_addEdge (var_nodeName_12369, var_rootNode_13650 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 346)) ;
    }
    cEnumerator_controlRegisterNameListAST enumerator_13863 (enumerator_12575.current (HERE).getter_mRegisterArrayList (HERE), kENUMERATION_UP) ;
    while (enumerator_13863.hasCurrentObject ()) {
      switch (enumerator_13863.current (HERE).getter_mControlRegisterKind (HERE).enumValue ()) {
      case GALGAS_controlRegisterKind::kNotBuilt:
        break ;
      case GALGAS_controlRegisterKind::kEnum_scalar:
        {
        }
        break ;
      case GALGAS_controlRegisterKind::kEnum_registerArray:
        {
          const cEnumAssociatedValues_controlRegisterKind_registerArray * extractPtr_14180 = (const cEnumAssociatedValues_controlRegisterKind_registerArray *) (enumerator_13863.current (HERE).getter_mControlRegisterKind (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_arraySize = extractPtr_14180->mAssociatedValue0 ;
          const GALGAS_expressionAST extractedValue_arrayElementSize = extractPtr_14180->mAssociatedValue2 ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arraySize.ptr (), var_nodeName_12369, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 352)) ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_arrayElementSize.ptr (), var_nodeName_12369, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 353)) ;
        }
        break ;
      }
      enumerator_13863.gotoNextObject () ;
    }
    enumerator_12575.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                               extensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'controlRegisterType'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_controlRegisterType (const GALGAS_lstring constinArgument_inRegisterTypeName,
                                  GALGAS_semanticContext & ioArgument_ioContext,
                                  GALGAS_omnibusType & outArgument_outRegisterType,
                                  GALGAS_uint & outArgument_outRegisterBitCount,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (constinArgument_inRegisterTypeName, outArgument_outRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 402)) ;
  switch (outArgument_outRegisterType.getter_kind (HERE).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_16118 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (HERE).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_16118->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 407)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray0  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 407)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 409)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray1  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 409)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 411)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 411)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 413)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray3  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 413)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 415)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 415)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 417)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray5  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 417)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 419)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 419)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 421)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray7  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 421)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 423)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray8  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 423)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 425)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray9  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 425)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 427)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray10  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 427)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 429)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray11  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 429)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 431)), GALGAS_string ("a register should be an $iXXor an $uXX"), fixItArray12  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 431)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterSliceMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterSliceMap (const GALGAS_controlRegisterBitSliceList constinArgument_inRegisterBitSliceList,
                                           const GALGAS_location constinArgument_inEndOfBitSliceLocation,
                                           GALGAS_semanticContext & /* ioArgument_ioContext */,
                                           GALGAS_omnibusType & ioArgument_ioRegisterType,
                                           const GALGAS_uint constinArgument_inRegisterBitCount,
                                           GALGAS_controlRegisterFieldMap & outArgument_outRegisterFieldMap,
                                           GALGAS_sliceMap & outArgument_outRegisterBitSliceMap,
                                           GALGAS_controlRegisterFieldList & outArgument_outControlRegisterFieldList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterFieldMap.drop () ; // Release 'out' argument
  outArgument_outRegisterBitSliceMap.drop () ; // Release 'out' argument
  outArgument_outControlRegisterFieldList.drop () ; // Release 'out' argument
  outArgument_outRegisterFieldMap = GALGAS_controlRegisterFieldMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
  outArgument_outRegisterBitSliceMap = GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
  outArgument_outControlRegisterFieldList = GALGAS_controlRegisterFieldList::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 450)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inRegisterBitSliceList.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_shiftCount_18398 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterBitSliceList enumerator_18441 (constinArgument_inRegisterBitSliceList, kENUMERATION_DOWN) ;
      while (enumerator_18441.hasCurrentObject ()) {
        switch (enumerator_18441.current_mRegisterBitSlice (HERE).enumValue ()) {
        case GALGAS_controlRegisterBitSlice::kNotBuilt:
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_unusedBits:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits * extractPtr_18636 = (const cEnumAssociatedValues_controlRegisterBitSlice_unusedBits *) (enumerator_18441.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lbigint extractedValue_count = extractPtr_18636->mAssociatedValue0 ;
            var_shiftCount_18398 = var_shiftCount_18398.add_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 456)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)), GALGAS_string ("\xE2""\x80""\x94""")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 457)) ;
          }
          break ;
        case GALGAS_controlRegisterBitSlice::kEnum_namedBit:
          {
            const cEnumAssociatedValues_controlRegisterBitSlice_namedBit * extractPtr_19157 = (const cEnumAssociatedValues_controlRegisterBitSlice_namedBit *) (enumerator_18441.current_mRegisterBitSlice (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_name = extractPtr_19157->mAssociatedValue0 ;
            const GALGAS_lbigint extractedValue_count = extractPtr_19157->mAssociatedValue1 ;
            GALGAS_uint var_bitCount_18710 = extractedValue_count.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459)) ;
            outArgument_outControlRegisterFieldList.addAssign_operation (var_bitCount_18710, extractedValue_name.getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 460)) ;
            {
            outArgument_outRegisterFieldMap.setter_insertKey (extractedValue_name, var_shiftCount_18398, var_bitCount_18710, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 461)) ;
            }
            GALGAS_bigint var_mask_18946 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_bitCount_18710, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)).left_shift_operation (var_shiftCount_18398, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 467)) ;
            {
            outArgument_outRegisterBitSliceMap.setter_insertKey (extractedValue_name, GALGAS_llvmBinaryOperation::constructor_and (SOURCE_FILE ("declaration-control-register.galgas", 470)), var_mask_18946, ioArgument_ioRegisterType, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 468)) ;
            }
            var_shiftCount_18398 = var_shiftCount_18398.add_operation (var_bitCount_18710, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 474)) ;
          }
          break ;
        }
        enumerator_18441.gotoNextObject () ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inRegisterBitCount.objectCompare (var_shiftCount_18398)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfBitSliceLocation, GALGAS_string ("total bit slice count is ").add_operation (var_shiftCount_18398.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (" (should be "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (constinArgument_inRegisterBitCount.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 480)), fixItArray2  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 479)) ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterGroupDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterGroupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_controlRegisterMap var_regMap_23957 = GALGAS_controlRegisterMap::constructor_emptyMap (SOURCE_FILE ("declaration-control-register.galgas", 596)) ;
  const GALGAS_controlRegisterGroupDeclarationAST temp_0 = object ;
  cEnumerator_controlRegisterDeclarationList enumerator_23991 (temp_0.getter_mRegisters (HERE), kENUMERATION_UP) ;
  while (enumerator_23991.hasCurrentObject ()) {
    extensionMethod_buildControlRegisterMapForGroup (enumerator_23991.current (HERE), ioArgument_ioContext, var_regMap_23957, ioArgument_ioStaticEntityMap, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 598)) ;
    enumerator_23991.gotoNextObject () ;
  }
  const GALGAS_controlRegisterGroupDeclarationAST temp_1 = object ;
  cEnumerator_registerGroupListAST enumerator_24169 (temp_1.getter_mRegisterGroupList (HERE), kENUMERATION_UP) ;
  while (enumerator_24169.hasCurrentObject ()) {
    GALGAS_controlRegisterMap var_registerMap_24208 = var_regMap_23957 ;
    cEnumerator_controlRegisterMap enumerator_24279 (var_regMap_23957, kENUMERATION_UP) ;
    while (enumerator_24279.hasCurrentObject ()) {
      GALGAS_string var_key_24296 = GALGAS_string ("#").add_operation (enumerator_24169.current (HERE).getter_mRegisterGroupName (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)).add_operation (enumerator_24279.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 608)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = ioArgument_ioControlRegisterUserAccesMapAST.getter_hasKey (var_key_24296 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          var_registerMap_24208.setter_setMUserAccessForKey (GALGAS_bool (true), enumerator_24279.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 610)) ;
          }
          {
          ioArgument_ioControlRegisterUserAccesMapAST.setter_removeKey (var_key_24296.getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 611)) ;
          }
        }
      }
      enumerator_24279.gotoNextObject () ;
    }
    switch (enumerator_24169.current (HERE).getter_mControlRegisterGroupKind (HERE).enumValue ()) {
    case GALGAS_controlRegisterGroupKindAST::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_single * extractPtr_24830 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_single *) (enumerator_24169.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_baseAddress = extractPtr_24830->mAssociatedValue0 ;
        GALGAS_registerGroupKind var_groupKind_24670 = GALGAS_registerGroupKind::constructor_single (extractedValue_baseAddress.getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 617))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 617)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24169.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_24670, var_registerMap_24208, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 618)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterGroupKindAST::kEnum_groupArray:
      {
        const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray * extractPtr_26124 = (const cEnumAssociatedValues_controlRegisterGroupKindAST_groupArray *) (enumerator_24169.current (HERE).getter_mControlRegisterGroupKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_groupSizeExpression = extractPtr_26124->mAssociatedValue0 ;
        const GALGAS_location extractedValue_groupSizeExpressionLocation = extractPtr_26124->mAssociatedValue1 ;
        const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_26124->mAssociatedValue2 ;
        GALGAS_objectIR var_groupArraySizeExpressionResult_25222 ;
        {
        routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_groupSizeExpression, extractedValue_groupSizeExpressionLocation, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-control-register.galgas", 625)), var_groupArraySizeExpressionResult_25222, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 620)) ;
        }
        GALGAS_bigint var_groupSize_25254 ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_groupArraySizeExpressionResult_25222.getter_isLiteralInteger (SOURCE_FILE ("declaration-control-register.galgas", 629)).operator_not (SOURCE_FILE ("declaration-control-register.galgas", 629)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_groupSizeExpressionLocation, GALGAS_string ("control register group size is not a static integer expression"), fixItArray4  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 630)) ;
            var_groupSize_25254.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_3) {
          GALGAS_omnibusType joker_25531_1 ; // Joker input parameter
          var_groupArraySizeExpressionResult_25222.method_literalInteger (joker_25531_1, var_groupSize_25254, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 634)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, var_groupSize_25254.getter_uint (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 636)).objectCompare (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 636)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_groupSizeExpressionLocation, GALGAS_string ("the group size is ").add_operation (var_groupSize_25254.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (", but "), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (extractedValue_baseAddresses.getter_length (SOURCE_FILE ("declaration-control-register.galgas", 638)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)).add_operation (GALGAS_string (" base addresses are defined"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 638)), fixItArray6  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 637)) ;
          }
        }
        GALGAS_registerGroupKind var_groupKind_25801 = GALGAS_registerGroupKind::constructor_arrayGroup (extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 640)) ;
        {
        ioArgument_ioContext.mProperty_mControlRegisterGroupMap.setter_insertKey (enumerator_24169.current (HERE).getter_mRegisterGroupName (HERE), var_groupKind_25801, var_registerMap_24208, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 641)) ;
        }
        ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedControlRegisterArrayGroupDeclaration::constructor_new (enumerator_24169.current (HERE).getter_mRegisterGroupName (HERE), extractedValue_baseAddresses  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 642)) ;
      }
      break ;
    }
    enumerator_24169.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_controlRegisterGroupDeclarationAST.mSlotID,
                                       extensionMethod_controlRegisterGroupDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterGroupDeclarationAST_enterInContext (defineExtensionMethod_controlRegisterGroupDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedControlRegisterArrayGroupDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                            GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedControlRegisterArrayGroupDeclaration * object = (const cPtr_decoratedControlRegisterArrayGroupDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedControlRegisterArrayGroupDeclaration) ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_0 = object ;
  const GALGAS_decoratedControlRegisterArrayGroupDeclaration temp_1 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mControlRegisterGroupArrayList.addAssign_operation (temp_0.getter_mGroupName (HERE), temp_1.getter_mBaseAddresses (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 666)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedControlRegisterArrayGroupDeclaration.mSlotID,
                                         extensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis (defineExtensionMethod_decoratedControlRegisterArrayGroupDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMapHTMLFile (const GALGAS_controlRegisterGroupMap constinArgument_inControlRegisterGroupMap,
                                              const GALGAS_lstring constinArgument_inSourceFile,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_byAddressFilePath_29419 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-address.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 727)) ;
  GALGAS_string var_byNameFilePath_29508 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".control-registers-sorted-by-name.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 728)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_controlRegisterByAddress var_controlRegisterByAddress_29701 = GALGAS_controlRegisterByAddress::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 730)) ;
      GALGAS_controlRegisterByName var_controlRegisterByName_29755 = GALGAS_controlRegisterByName::constructor_emptySortedList (SOURCE_FILE ("declaration-control-register.galgas", 731)) ;
      GALGAS_uint var_controlRegisterCount_29791 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_controlRegisterGroupMap enumerator_29842 (constinArgument_inControlRegisterGroupMap, kENUMERATION_UP) ;
      while (enumerator_29842.hasCurrentObject ()) {
        switch (enumerator_29842.current_mGroupKind (HERE).enumValue ()) {
        case GALGAS_registerGroupKind::kNotBuilt:
          break ;
        case GALGAS_registerGroupKind::kEnum_single:
          {
            const cEnumAssociatedValues_registerGroupKind_single * extractPtr_30157 = (const cEnumAssociatedValues_registerGroupKind_single *) (enumerator_29842.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_bigint extractedValue_groupBaseAddress = extractPtr_30157->mAssociatedValue0 ;
            {
            routine_buildControlRegisterMaps (enumerator_29842.current_mControlRegisterMap (HERE), extractedValue_groupBaseAddress, enumerator_29842.current_lkey (HERE).getter_string (HERE), var_controlRegisterByAddress_29701, var_controlRegisterByName_29755, var_controlRegisterCount_29791, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 736)) ;
            }
          }
          break ;
        case GALGAS_registerGroupKind::kEnum_arrayGroup:
          {
            const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_30547 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (enumerator_29842.current_mGroupKind (HERE).unsafePointer ()) ;
            const GALGAS_lbigintlist extractedValue_baseAddresses = extractPtr_30547->mAssociatedValue0 ;
            cEnumerator_lbigintlist enumerator_30250 (extractedValue_baseAddresses, kENUMERATION_UP) ;
            GALGAS_uint index_30222 ((uint32_t) 0) ;
            while (enumerator_30250.hasCurrentObject ()) {
              {
              routine_buildControlRegisterMaps (enumerator_29842.current_mControlRegisterMap (HERE), enumerator_30250.current_mValue (HERE).getter_bigint (HERE), enumerator_29842.current_lkey (HERE).getter_string (HERE).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (index_30222.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 749)), var_controlRegisterByAddress_29701, var_controlRegisterByName_29755, var_controlRegisterCount_29791, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 746)) ;
              }
              enumerator_30250.gotoNextObject () ;
              index_30222.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 745)) ;
            }
          }
          break ;
        }
        enumerator_29842.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_30588 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByAddress (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 758)), var_controlRegisterCount_29791, var_controlRegisterByAddress_29701 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 757))) ;
      GALGAS_bool joker_30835 ; // Joker input parameter
      var_typeDumpString_30588.method_writeToFileWhenDifferentContents (var_byAddressFilePath_29419, joker_30835, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 762)) ;
      var_typeDumpString_30588 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dumpByName (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 764)), var_controlRegisterCount_29791, var_controlRegisterByName_29755 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 763))) ;
      GALGAS_bool joker_31094 ; // Joker input parameter
      var_typeDumpString_30588.method_writeToFileWhenDifferentContents (var_byNameFilePath_29508, joker_31094, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byAddressFilePath_29419, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 770)) ;
    }
    {
    GALGAS_string::class_method_deleteFileIfExists (var_byNameFilePath_29508, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 771)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildControlRegisterMaps'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildControlRegisterMaps (const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                       const GALGAS_bigint constinArgument_inGroupBaseAddress,
                                       const GALGAS_string constinArgument_inGroupName,
                                       GALGAS_controlRegisterByAddress & ioArgument_ioControlRegisterByAddress,
                                       GALGAS_controlRegisterByName & ioArgument_ioControlRegisterByName,
                                       GALGAS_uint & ioArgument_ioControlRegisterCount,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_controlRegisterMap enumerator_31663 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
  while (enumerator_31663.hasCurrentObject ()) {
    GALGAS_bigint var_registerAddress_31690 = constinArgument_inGroupBaseAddress.add_operation (enumerator_31663.current_mAddressOffset (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 786)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_31663.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 788)) ;
        GALGAS_string var_registerName_31845 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)).add_operation (enumerator_31663.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 789)) ;
        GALGAS_string var_s_31888 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_31845, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 790)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 791)).add_operation (enumerator_31663.current_mType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (var_registerAddress_31690.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 792)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 793)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsStrictSup, enumerator_31663.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 794)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_s_31888.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)).add_operation (function_fieldIndexColumns (enumerator_31663.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("</tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)).add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 795)) ;
            cEnumerator_controlRegisterFieldList enumerator_32381 (enumerator_31663.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_32381.hasCurrentObject ()) {
              var_s_31888.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_32381.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (enumerator_32381.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 799)) ;
              enumerator_32381.gotoNextObject () ;
            }
            var_s_31888.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 801)) ;
          }
        }
        var_s_31888.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 803)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_31690, var_s_31888  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 804)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_31690, var_s_31888, var_registerName_31845  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 805)) ;
      }
    }
    if (kBoolFalse == test_0) {
      ioArgument_ioControlRegisterCount = ioArgument_ioControlRegisterCount.add_operation (enumerator_31663.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 807)) ;
      cEnumerator_uintlist enumerator_32829 (function_arrayIndexListFor (enumerator_31663.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 808)), kENUMERATION_UP) ;
      while (enumerator_32829.hasCurrentObject ()) {
        GALGAS_bigint var_address_32852 = var_registerAddress_31690.add_operation (enumerator_32829.current_mValue (HERE).multiply_operation (enumerator_31663.current_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)).getter_bigint (SOURCE_FILE ("declaration-control-register.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 809)) ;
        GALGAS_string var_registerName_32928 = constinArgument_inGroupName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_31663.current_lkey (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (enumerator_32829.current_mValue (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 810)) ;
        GALGAS_string var_s_33003 = GALGAS_string ("<tr class=\"result_line\"><td class=\"name\">").add_operation (var_registerName_32928, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 811)).add_operation (GALGAS_string ("</td><td class=\"type\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 812)).add_operation (enumerator_31663.current_mType (HERE).getter_omnibusTypeDescriptionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td class=\"address\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (var_address_32852.getter_hexStringSeparatedBy (GALGAS_char (TO_UNICODE (95)), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 813)).add_operation (GALGAS_string ("</td><td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 814)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsStrictSup, enumerator_31663.current_mControlRegisterFieldList (HERE).getter_length (SOURCE_FILE ("declaration-control-register.galgas", 816)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_33003.plusAssign_operation(GALGAS_string ("<table class=\"fields\">").add_operation (GALGAS_string ("<tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)).add_operation (function_fieldIndexColumns (enumerator_31663.current_mRegisterBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)).add_operation (GALGAS_string ("</tr><tr>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 818)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 817)) ;
            cEnumerator_controlRegisterFieldList enumerator_33495 (enumerator_31663.current_mControlRegisterFieldList (HERE), kENUMERATION_DOWN) ;
            while (enumerator_33495.hasCurrentObject ()) {
              var_s_33003.plusAssign_operation(GALGAS_string ("<td class=\"fields\" colspan=\"").add_operation (enumerator_33495.current_mFieldBitCount (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (enumerator_33495.current_mFieldName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 820)) ;
              enumerator_33495.gotoNextObject () ;
            }
            var_s_33003.plusAssign_operation(GALGAS_string ("</tr></table>"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 822)) ;
          }
        }
        var_s_33003.plusAssign_operation(GALGAS_string ("</td></tr>\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 824)) ;
        ioArgument_ioControlRegisterByAddress.addAssign_operation (var_registerAddress_31690, var_s_33003  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 825)) ;
        ioArgument_ioControlRegisterByName.addAssign_operation (var_registerAddress_31690, var_s_33003, var_registerName_32928  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 826)) ;
        enumerator_32829.gotoNextObject () ;
      }
    }
    enumerator_31663.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'controlRegisterDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByName'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1541_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME.isValid ()) {
    cEnumerator_controlRegisterByName enumerator_1541 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_NAME, kENUMERATION_UP) ;
    while (enumerator_1541.hasCurrentObject ()) {
      result << enumerator_1541.current_mHTML (HERE).stringValue () ;
      index_1541_.increment () ;
      enumerator_1541.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'controlRegisterDumpGenerationTemplate dumpByAddress'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "<tr><td class=\"result_title\">Control Register Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">Address</td><td class=\"resul"
    "t_title\">Value</td></tr>\n" ;
  GALGAS_uint index_1553_ (0) ;
  if (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS.isValid ()) {
    cEnumerator_controlRegisterByAddress enumerator_1553 (in_CONTROL_5F_REGISTER_5F_SORTED_5F_BY_5F_ADDRESS, kENUMERATION_UP) ;
    while (enumerator_1553.hasCurrentObject ()) {
      result << enumerator_1553.current_mHTML (HERE).stringValue () ;
      index_1553_.increment () ;
      enumerator_1553.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'fieldIndexColumns'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_fieldIndexColumns (const GALGAS_uint & constinArgument_inBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_34678 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 852))), kENUMERATION_DOWN) ;
  while (enumerator_34678.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("<td class=\"fields\">").add_operation (enumerator_34678.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)).add_operation (GALGAS_string ("</td>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 853)) ;
    enumerator_34678.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_fieldIndexColumns [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_fieldIndexColumns ("fieldIndexColumns",
                                                                   functionWithGenericHeader_fieldIndexColumns,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_fieldIndexColumns) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'arrayIndexListFor'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_uintlist function_arrayIndexListFor (const GALGAS_uint & constinArgument_inSize,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist result_result ; // Returned variable
  result_result = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("declaration-control-register.galgas", 860)) ;
  cEnumerator_range enumerator_34963 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inSize.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 861))), kENUMERATION_UP) ;
  while (enumerator_34963.hasCurrentObject ()) {
    result_result.addAssign_operation (enumerator_34963.current (HERE)  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 862)) ;
    enumerator_34963.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_arrayIndexListFor [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_arrayIndexListFor ("arrayIndexListFor",
                                                                   functionWithGenericHeader_arrayIndexListFor,
                                                                   & kTypeDescriptor_GALGAS_uintlist,
                                                                   1,
                                                                   functionArgs_arrayIndexListFor) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mConstantName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                  extensionGetter_globalConstantDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_locationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  const GALGAS_globalConstantDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mConstantName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 67)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_globalConstantDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.getter_mConstantTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_globalConstantDeclarationAST temp_4 = object ;
      const GALGAS_globalConstantDeclarationAST temp_5 = object ;
      ioArgument_ioGraph.setter_addEdge (temp_4.getter_mConstantName (HERE), temp_5.getter_mConstantTypeName (HERE) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 70)) ;
      }
    }
  }
  const GALGAS_globalConstantDeclarationAST temp_6 = object ;
  const GALGAS_globalConstantDeclarationAST temp_7 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), temp_7.getter_mConstantName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 73)) ;
  {
  const GALGAS_globalConstantDeclarationAST temp_8 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_8.getter_mConstantName (HERE), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 74)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                               extensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_globalConstantDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@globalConstantDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_globalConstantDeclarationAST * object = (const cPtr_globalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclarationAST) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (temp_0.getter_mConstantName (HERE).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 80)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                                           extensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_globalConstantDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@globalConstantDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_globalConstantDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_bool var_displayValue_4531 = GALGAS_bool (false) ;
  const GALGAS_globalConstantDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_4580 (temp_0.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_4580.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_4580.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("display"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4580.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 100)), GALGAS_string ("attribute should be @display"), fixItArray2  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 100)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_displayValue_4531.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4580.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 102)), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 102)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_displayValue_4531 = GALGAS_bool (true) ;
      }
    }
    enumerator_4580.gotoNextObject () ;
  }
  GALGAS_objectIR var_expressionResult_5112 ;
  {
  const GALGAS_globalConstantDeclarationAST temp_5 = object ;
  const GALGAS_globalConstantDeclarationAST temp_6 = object ;
  const GALGAS_globalConstantDeclarationAST temp_7 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_5.getter_mSourceExpression (HERE), temp_6.getter_mConstantName (HERE).getter_location (HERE), temp_7.getter_mConstantTypeName (HERE), var_expressionResult_5112, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }
  {
  const GALGAS_globalConstantDeclarationAST temp_8 = object ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_8.getter_mConstantName (HERE), var_expressionResult_5112, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 117)) ;
  }
  {
  const GALGAS_globalConstantDeclarationAST temp_9 = object ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_9.getter_mConstantName (HERE), var_expressionResult_5112, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 118)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_displayValue_4531.boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_globalConstantDeclarationAST temp_11 = object ;
      inCompiler->printMessage (GALGAS_string ("Global constant '").add_operation (temp_11.getter_mConstantName (HERE).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("' = "), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (extensionGetter_llvmValue (var_expressionResult_5112, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 121)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_globalConstantDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_globalConstantDeclarationAST.mSlotID,
                                       extensionMethod_globalConstantDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_globalConstantDeclarationAST_enterInContext (defineExtensionMethod_globalConstantDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildGlobalConstantMapHTMLFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildGlobalConstantMapHTMLFile (GALGAS_globalConstantMap inArgument_inGlobalConstantMap,
                                             const GALGAS_lstring constinArgument_inSourceFile,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_6083 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 134)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_omnibus_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringset var_firstLetterSet_6234 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 136)) ;
      cEnumerator_globalConstantMap enumerator_6273 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6273.hasCurrentObject ()) {
        var_firstLetterSet_6234.addAssign_operation (enumerator_6273.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 138))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 138)) ;
        enumerator_6273.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_6381 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_6415 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_globalConstantMap enumerator_6461 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
      while (enumerator_6461.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_6415.objectCompare (enumerator_6461.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_currentFirstLetter_6415 = enumerator_6461.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 144)) ;
            var_tableOfTypeString_6381.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_6415.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 145)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (var_currentFirstLetter_6415.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 145)) ;
          }
        }
        var_tableOfTypeString_6381.plusAssign_operation(function_linkForGlobalConstant (enumerator_6461.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 147)) ;
        enumerator_6461.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_6857 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 150)), inArgument_inGlobalConstantMap, var_firstLetterSet_6234, var_tableOfTypeString_6381 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 149))) ;
      GALGAS_bool joker_7101 ; // Joker input parameter
      var_typeDumpString_6857.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_6083, joker_7101, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_6083, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 157)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'constantDumpGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'constantDumpGenerationTemplate dump'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "<tr><td class=\"result_title\">Constant Name</td><td class=\"result_title\">OMNIBUS Type</td><td class=\"result_title\">LLVM Type</td><td class=\"result_titl"
    "e\">Value</td></tr>\n" ;
  GALGAS_uint index_1379_ (0) ;
  if (in_GLOBAL_5F_CONSTANT_5F_MAP.isValid ()) {
    cEnumerator_globalConstantMap enumerator_1379 (in_GLOBAL_5F_CONSTANT_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1379.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1379.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1379.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>..<'$" ;
      result << extensionGetter_omnibusTypeDescriptionName (enumerator_1379.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1379.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmName (enumerator_1379.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("globalConstantDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1379_.increment () ;
      enumerator_1379.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'linkForGlobalConstant'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_linkForGlobalConstant (const GALGAS_string & constinArgument_inConstantName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 176)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_linkForGlobalConstant [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_linkForGlobalConstant ("linkForGlobalConstant",
                                                                       functionWithGenericHeader_linkForGlobalConstant,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       1,
                                                                       functionArgs_linkForGlobalConstant) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  const GALGAS_syncToolInstanceDeclarationAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mSyncInstanceName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 46)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_syncToolInstanceDeclarationAST temp_3 = object ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.getter_mSyncTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_syncToolInstanceDeclarationAST temp_4 = object ;
      const GALGAS_syncToolInstanceDeclarationAST temp_5 = object ;
      ioArgument_ioGraph.setter_addEdge (temp_4.getter_mSyncInstanceName (HERE), temp_5.getter_mSyncTypeName (HERE) COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 48)) ;
      }
    }
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_6 = object ;
  const GALGAS_syncToolInstanceDeclarationAST temp_7 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), temp_7.getter_mSyncInstanceName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 50)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                               extensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("sync ").add_operation (temp_0.getter_mSyncInstanceName (HERE).getter_string (SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 56)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                           extensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syncToolInstanceDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_syncToolInstanceDeclarationAST * object = (const cPtr_syncToolInstanceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncToolInstanceDeclarationAST) ;
  const GALGAS_syncToolInstanceDeclarationAST temp_0 = object ;
  result_outLocation = temp_0.getter_mSyncInstanceName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                                  extensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling (defineExtensionGetter_syncToolInstanceDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncToolInstanceDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncToolInstanceDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_omnibusType var_optionalSyncType_4271 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_syncToolInstanceDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mSyncTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_optionalSyncType_4271 = function_voidType (inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 92)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_syncToolInstanceDeclarationAST temp_2 = object ;
    ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (temp_2.getter_mSyncTypeName (HERE), var_optionalSyncType_4271, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 94)) ;
  }
  GALGAS_objectIR var_expressionResult_4737 ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_3 = object ;
  const GALGAS_syncToolInstanceDeclarationAST temp_4 = object ;
  routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, temp_3.getter_mSourceExpression (HERE), temp_4.getter_mSyncInstanceName (HERE).getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 101)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-sync-instance.galgas", 102)), var_expressionResult_4737, inCompiler  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 97)) ;
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_5 = object ;
  GALGAS_objectIR var_result_4799 = function_checkAssignmentCompatibility (ioArgument_ioContext.getter_mAssignmentOperatorMap (HERE), var_expressionResult_4737, var_optionalSyncType_4271, temp_5.getter_mSyncInstanceName (HERE).getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 106)) ;
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_6 = object ;
  ioArgument_ioContext.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_6.getter_mSyncInstanceName (HERE), extensionGetter_type (var_result_4799, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 116)), var_result_4799, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 114)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = extensionGetter_type (var_result_4799, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).operator_not (SOURCE_FILE ("declaration-global-sync-instance.galgas", 120)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_syncToolInstanceDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mSyncInstanceName (HERE).getter_location (SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)), GALGAS_string ("the type is not a synchronization tool type"), fixItArray9  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 121)) ;
    }
  }
  {
  const GALGAS_syncToolInstanceDeclarationAST temp_10 = object ;
  extensionSetter_insertGlobalSyncInstance (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_10.getter_mSyncInstanceName (HERE), extensionGetter_type (var_result_4799, inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 124)) ;
  }
  const GALGAS_syncToolInstanceDeclarationAST temp_11 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedSyncInstance::constructor_new (temp_11.getter_mSyncInstanceName (HERE), var_result_4799  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126))  COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_syncToolInstanceDeclarationAST.mSlotID,
                                       extensionMethod_syncToolInstanceDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncToolInstanceDeclarationAST_enterInContext (defineExtensionMethod_syncToolInstanceDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedSyncInstance semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedSyncInstance_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                    const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                    GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                    GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedSyncInstance * object = (const cPtr_decoratedSyncInstance *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedSyncInstance) ;
  {
  const GALGAS_decoratedSyncInstance temp_0 = object ;
  const GALGAS_decoratedSyncInstance temp_1 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalSyncInstanceMap.setter_insertKey (temp_0.getter_mSyncInstanceName (HERE), temp_1.getter_mExpressionGeneratedCode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-sync-instance.galgas", 145)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedSyncInstance_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedSyncInstance.mSlotID,
                                         extensionMethod_decoratedSyncInstance_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedSyncInstance_semanticAnalysis (defineExtensionMethod_decoratedSyncInstance_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_implementedDriverAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  {
  const GALGAS_implementedDriverAST temp_0 = object ;
  const GALGAS_implementedDriverAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mDriverName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 165)) ;
  }
  {
  const GALGAS_implementedDriverAST temp_2 = object ;
  const GALGAS_implementedDriverAST temp_3 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.getter_mDriverName (HERE), function_omnibusTypeSpecificNameForDriver (temp_3.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 166)) ;
  }
  const GALGAS_implementedDriverAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_5953 (temp_4.getter_mDriverDependanceList (HERE), kENUMERATION_UP) ;
  while (enumerator_5953.hasCurrentObject ()) {
    {
    const GALGAS_implementedDriverAST temp_5 = object ;
    ioArgument_ioGraph.setter_addEdge (temp_5.getter_mDriverName (HERE), enumerator_5953.current_mValue (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 168)) ;
    }
    enumerator_5953.gotoNextObject () ;
  }
  {
  const GALGAS_implementedDriverAST temp_6 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_6.getter_mDriverName (HERE), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) COMMA_SOURCE_FILE ("declaration-driver.galgas", 170)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                               extensionMethod_implementedDriverAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_implementedDriverAST_enterInPrecedenceGraph (defineExtensionMethod_implementedDriverAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  result_outRepresentation = GALGAS_string ("driver ").add_operation (temp_0.getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-driver.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 176)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                           extensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_implementedDriverAST_keyRepresentationForErrorSignaling (defineExtensionGetter_implementedDriverAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@implementedDriverAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_implementedDriverAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_implementedDriverAST * object = (const cPtr_implementedDriverAST *) inObject ;
  macroValidSharedObject (object, cPtr_implementedDriverAST) ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  result_outLocation = temp_0.getter_mDriverName (HERE).getter_location (HERE) ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_implementedDriverAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                                  extensionGetter_implementedDriverAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_implementedDriverAST_locationForErrorSignaling (defineExtensionGetter_implementedDriverAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusTypeSpecificNameForDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusTypeSpecificNameForDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 190)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusTypeSpecificNameForDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusTypeSpecificNameForDriver (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusTypeSpecificNameForDriver (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusTypeSpecificNameForDriver ("omnibusTypeSpecificNameForDriver",
                                                                                  functionWithGenericHeader_omnibusTypeSpecificNameForDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_omnibusTypeSpecificNameForDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmDriverNameFromName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("driver$").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 196)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmBootRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmBootRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("boot.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 202)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmBootRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmBootRoutineNameFromDriver ("llvmBootRoutineNameFromDriver",
                                                                               functionWithGenericHeader_llvmBootRoutineNameFromDriver,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               1,
                                                                               functionArgs_llvmBootRoutineNameFromDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmStartupRoutineNameFromDriver'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmStartupRoutineNameFromDriver (const GALGAS_lstring & constinArgument_inDriverName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("startup.").add_operation (constinArgument_inDriverName.getter_string (SOURCE_FILE ("declaration-driver.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 208)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmStartupRoutineNameFromDriver [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmStartupRoutineNameFromDriver ("llvmStartupRoutineNameFromDriver",
                                                                                  functionWithGenericHeader_llvmStartupRoutineNameFromDriver,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmStartupRoutineNameFromDriver) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'retainRequiredDrivers'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_retainRequiredDrivers (GALGAS_ast & ioArgument_ioAST,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_driverWithNoDependenceList_9049 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 233)) ;
  cEnumerator_driverDeclarationListAST enumerator_9109 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9109.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_9109.current_mDriver (HERE).getter_mDriverDependanceList (HERE).getter_length (SOURCE_FILE ("declaration-driver.galgas", 235)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_driverWithNoDependenceList_9049.addAssign_operation (enumerator_9109.current_mDriver (HERE).getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 236)) ;
      }
    }
    enumerator_9109.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_driverWithNoDependenceList_9049.getter_length (SOURCE_FILE ("declaration-driver.galgas", 239)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_9351 (var_driverWithNoDependenceList_9049, kENUMERATION_UP) ;
      while (enumerator_9351.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9351.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 241)), GALGAS_string ("almost one driver can have no dependence"), fixItArray2  COMMA_SOURCE_FILE ("declaration-driver.galgas", 241)) ;
        enumerator_9351.gotoNextObject () ;
      }
    }
  }
  GALGAS_instanciedDriverMap var_instanciedDriverMap_9512 = GALGAS_instanciedDriverMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 245)) ;
  cEnumerator_driverInstanciationListAST enumerator_9573 (ioArgument_ioAST.getter_mRequiredDriverListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_9573.hasCurrentObject ()) {
    GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_9644 = GALGAS_driverInstanciationArgumentMap::constructor_emptyMap (SOURCE_FILE ("declaration-driver.galgas", 247)) ;
    cEnumerator_driverInstanciationArgumentListAST enumerator_9688 (enumerator_9573.current_mDriverInstanciationArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_9688.hasCurrentObject ()) {
      {
      var_driverInstanciationArgumentMap_9644.setter_insertKey (enumerator_9688.current_mSelector (HERE), enumerator_9688.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 249)) ;
      }
      enumerator_9688.gotoNextObject () ;
    }
    {
    var_instanciedDriverMap_9512.setter_insertKey (enumerator_9573.current_mDriverName (HERE), var_driverInstanciationArgumentMap_9644, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 251)) ;
    }
    enumerator_9573.gotoNextObject () ;
  }
  GALGAS_stringset var_validDriverNames_9965 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 254)) ;
  cEnumerator_driverDeclarationListAST enumerator_10080 (ioArgument_ioAST.getter_mDriverDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_10080.hasCurrentObject ()) {
    var_validDriverNames_9965.addAssign_operation (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 256)) ;
    GALGAS_bool var_driverIsInstancied_10166 = var_instanciedDriverMap_9512.getter_hasKey (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-driver.galgas", 257)) ;
    GALGAS_structurePropertyListAST var_driverPropertyListAST_10329 = GALGAS_structurePropertyListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 259)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_driverIsInstancied_10166.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_driverInstanciationArgumentMap var_driverInstanciationArgumentMap_10463 ;
        var_instanciedDriverMap_9512.method_searchKey (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE), var_driverInstanciationArgumentMap_10463, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 261)) ;
        GALGAS_stringset var_validArgumentSet_10558 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-driver.galgas", 263)) ;
        cEnumerator_structurePropertyListAST enumerator_10682 (enumerator_10080.current_mDriver (HERE).getter_mPropertyListAST (HERE), kENUMERATION_UP) ;
        while (enumerator_10682.hasCurrentObject ()) {
          GALGAS_propertyKindAST var_driverPropertyKind_10729 ;
          switch (enumerator_10682.current_mPropertyKind (HERE).enumValue ()) {
          case GALGAS_propertyKindAST::kNotBuilt:
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
            {
              GALGAS_expressionAST var_initExpression_10887 ;
              var_driverInstanciationArgumentMap_10463.method_searchKey (enumerator_10682.current_mPropertyName (HERE), var_initExpression_10887, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 268)) ;
              var_validArgumentSet_10558.addAssign_operation (enumerator_10682.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 269)) ;
              var_driverPropertyKind_10729 = GALGAS_propertyKindAST::constructor_initializedStoredProperty (var_initExpression_10887  COMMA_SOURCE_FILE ("declaration-driver.galgas", 270)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
            {
              GALGAS_expressionAST var_initExpression_11161 ;
              var_driverInstanciationArgumentMap_10463.method_searchKey (enumerator_10682.current_mPropertyName (HERE), var_initExpression_11161, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 272)) ;
              var_validArgumentSet_10558.addAssign_operation (enumerator_10682.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 273)) ;
              var_driverPropertyKind_10729 = GALGAS_propertyKindAST::constructor_initializedConstantProperty (var_initExpression_11161  COMMA_SOURCE_FILE ("declaration-driver.galgas", 274)) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
            {
              var_driverPropertyKind_10729 = enumerator_10682.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
            {
              var_driverPropertyKind_10729 = enumerator_10682.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
            {
              var_driverPropertyKind_10729 = enumerator_10682.current_mPropertyKind (HERE) ;
            }
            break ;
          case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
            {
              var_driverPropertyKind_10729 = enumerator_10682.current_mPropertyKind (HERE) ;
            }
            break ;
          }
          var_driverPropertyListAST_10329.addAssign_operation (enumerator_10682.current_mPropertyName (HERE), enumerator_10682.current_mPropertyAttributeList (HERE), GALGAS_propertyVisibility::constructor_isPrivate (SOURCE_FILE ("declaration-driver.galgas", 287)), enumerator_10682.current_mPropertyTypeName (HERE), var_driverPropertyKind_10729  COMMA_SOURCE_FILE ("declaration-driver.galgas", 284)) ;
          enumerator_10682.gotoNextObject () ;
        }
        cEnumerator_stringset enumerator_12014 (var_driverInstanciationArgumentMap_10463.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 292)).substract_operation (var_validArgumentSet_10558, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 292)), kENUMERATION_UP) ;
        while (enumerator_12014.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_driverInstanciationArgumentMap_10463.getter_locationForKey (enumerator_12014.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)), GALGAS_string ("invalid selector"), fixItArray4  COMMA_SOURCE_FILE ("declaration-driver.galgas", 293)) ;
          enumerator_12014.gotoNextObject () ;
        }
      }
    }
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_structureDeclarationAST::constructor_new (function_omnibusTypeSpecificNameForDriver (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 298)), function_omnibusTypeSpecificNameForDriver (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 299)), function_llvmDriverNameFromName (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 300)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 301)), GALGAS_bool (false), var_driverPropertyListAST_10329, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 297)) ;
    ioArgument_ioAST.mProperty_mDeclarationListAST.addAssign_operation (GALGAS_implementedDriverAST::constructor_new (enumerator_10080.current_mDriver (HERE).getter_mDriverName (HERE), enumerator_10080.current_mDriver (HERE).getter_mDriverDependanceList (HERE), var_driverIsInstancied_10166, enumerator_10080.current_mDriver (HERE).getter_mBootLocation (HERE), enumerator_10080.current_mDriver (HERE).getter_mBootInstructionList (HERE), enumerator_10080.current_mDriver (HERE).getter_mBootEndLocation (HERE), enumerator_10080.current_mDriver (HERE).getter_mStartupLocation (HERE), enumerator_10080.current_mDriver (HERE).getter_mStartupInstructionList (HERE), enumerator_10080.current_mDriver (HERE).getter_mStartupEndLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 306)) ;
    enumerator_10080.gotoNextObject () ;
  }
  ioArgument_ioAST.mProperty_mDriverDeclarationListAST = GALGAS_driverDeclarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 318)) ;
  cEnumerator_stringset enumerator_13124 (var_instanciedDriverMap_9512.getter_keySet (SOURCE_FILE ("declaration-driver.galgas", 320)).substract_operation (var_validDriverNames_9965, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 320)), kENUMERATION_UP) ;
  while (enumerator_13124.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_instanciedDriverMap_9512.getter_locationForKey (enumerator_13124.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)), GALGAS_string ("undefined driver"), fixItArray5  COMMA_SOURCE_FILE ("declaration-driver.galgas", 321)) ;
    enumerator_13124.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@implementedDriverAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_implementedDriverAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_omnibusType var_driverType_14281 ;
  const GALGAS_implementedDriverAST temp_0 = object ;
  ioArgument_ioContext.getter_mTypeMap (HERE).method_searchKey (function_omnibusTypeSpecificNameForDriver (temp_0.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 340)), var_driverType_14281, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 339)) ;
  {
  const GALGAS_implementedDriverAST temp_1 = object ;
  const GALGAS_implementedDriverAST temp_2 = object ;
  extensionSetter_insertDriver (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_1.getter_mDriverName (HERE), temp_2.getter_mIsInstancied (HERE), var_driverType_14281, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 343)) ;
  }
  const GALGAS_implementedDriverAST temp_3 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedRequiredDriver::constructor_new (temp_3.getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 345)) ;
  const GALGAS_implementedDriverAST temp_4 = object ;
  const GALGAS_implementedDriverAST temp_5 = object ;
  const GALGAS_implementedDriverAST temp_6 = object ;
  const GALGAS_implementedDriverAST temp_7 = object ;
  const GALGAS_implementedDriverAST temp_8 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_4.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 348)), GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-driver.galgas", 349)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 351)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 354)), function_llvmBootRoutineNameFromDriver (temp_5.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 355)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 356)), GALGAS_bool (true), temp_6.getter_mBootInstructionList (HERE), temp_7.getter_mBootEndLocation (HERE), GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), temp_8.getter_mBootLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 360))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 347)) ;
  const GALGAS_implementedDriverAST temp_9 = object ;
  const GALGAS_implementedDriverAST temp_10 = object ;
  const GALGAS_implementedDriverAST temp_11 = object ;
  const GALGAS_implementedDriverAST temp_12 = object ;
  const GALGAS_implementedDriverAST temp_13 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_9.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 363)), GALGAS_mode::constructor_startupMode (SOURCE_FILE ("declaration-driver.galgas", 364)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-driver.galgas", 366)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-driver.galgas", 369)), function_llvmStartupRoutineNameFromDriver (temp_10.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 370)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 371)), GALGAS_bool (true), temp_11.getter_mStartupInstructionList (HERE), temp_12.getter_mStartupEndLocation (HERE), GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), temp_13.getter_mStartupLocation (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 375))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 362)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_implementedDriverAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_implementedDriverAST.mSlotID,
                                       extensionMethod_implementedDriverAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_implementedDriverAST_enterInContext (defineExtensionMethod_implementedDriverAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedRequiredDriver semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedRequiredDriver_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedRequiredDriver * object = (const cPtr_decoratedRequiredDriver *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedRequiredDriver) ;
  GALGAS_omnibusType var_driverType_16609 ;
  const GALGAS_decoratedRequiredDriver temp_0 = object ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_omnibusTypeSpecificNameForDriver (temp_0.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 394)), var_driverType_16609, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 393)) ;
  const GALGAS_decoratedRequiredDriver temp_1 = object ;
  GALGAS_lstring var_typeName_16628 = GALGAS_lstring::constructor_new (var_driverType_16609.getter_omnibusTypeDescriptionName (HERE), temp_1.getter_mDriverName (HERE).getter_location (SOURCE_FILE ("declaration-driver.galgas", 397))  COMMA_SOURCE_FILE ("declaration-driver.galgas", 397)) ;
  GALGAS_constructorMap var_constructorMap_16775 ;
  constinArgument_inContext.getter_mTypeConstructorMap (HERE).method_searchKey (var_typeName_16628, var_constructorMap_16775, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 398)) ;
  GALGAS_constructorValue var_constructorValue_16870 ;
  const GALGAS_decoratedRequiredDriver temp_2 = object ;
  GALGAS_constructorSignature joker_16847 ; // Joker input parameter
  var_constructorMap_16775.method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("()"), temp_2.getter_mDriverName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)), joker_16847, var_constructorValue_16870, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 399)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_16942 ;
  var_constructorValue_16870.method_structure (var_sortedOperandList_16942, inCompiler COMMA_SOURCE_FILE ("declaration-driver.galgas", 400)) ;
  GALGAS_operandIRList var_initialValueList_16977 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-driver.galgas", 401)) ;
  cEnumerator_sortedOperandIRList enumerator_17026 (var_sortedOperandList_16942, kENUMERATION_UP) ;
  while (enumerator_17026.hasCurrentObject ()) {
    var_initialValueList_16977.addAssign_operation (enumerator_17026.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 403)) ;
    enumerator_17026.gotoNextObject () ;
  }
  const GALGAS_decoratedRequiredDriver temp_3 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mDriverList.addAssign_operation (temp_3.getter_mDriverName (HERE), var_driverType_16609, var_initialValueList_16977  COMMA_SOURCE_FILE ("declaration-driver.galgas", 405)) ;
  const GALGAS_decoratedRequiredDriver temp_4 = object ;
  ioArgument_ioTemporaries.mProperty_mInitializedDriverSet.addAssign_operation (temp_4.getter_mDriverName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-driver.galgas", 410)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedRequiredDriver.mSlotID,
                                         extensionMethod_decoratedRequiredDriver_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedRequiredDriver_semanticAnalysis (defineExtensionMethod_decoratedRequiredDriver_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterExtension'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListAST_enterExtension (const cPtr_abstractDeclarationAST * inObject,
                                                          GALGAS_extendStaticArrayDeclarationDictAST & ioArgument_ioExtendStaticArrayDeclarationAST,
                                                          GALGAS_abstractDeclarationAST & outArgument_outNewDeclaration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListAST temp_1 = object ;
    test_0 = ioArgument_ioExtendStaticArrayDeclarationAST.getter_hasKey (temp_1.getter_mStaticListName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_staticListValueListAST var_elements_6196 ;
      {
      const GALGAS_staticListAST temp_2 = object ;
      ioArgument_ioExtendStaticArrayDeclarationAST.setter_removeKey (temp_2.getter_mStaticListName (HERE).getter_string (HERE), var_elements_6196, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 162)) ;
      }
      const GALGAS_staticListAST temp_3 = object ;
      const GALGAS_staticListAST temp_4 = object ;
      const GALGAS_staticListAST temp_5 = object ;
      outArgument_outNewDeclaration = GALGAS_staticListAST::constructor_new (temp_3.getter_mStaticListName (HERE), temp_4.getter_mPropertyList (HERE), temp_5.getter_mValueList (HERE).add_operation (var_elements_6196, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 166))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 163)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListAST temp_6 = object ;
    outArgument_outNewDeclaration = temp_6 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListAST_enterExtension (void) {
  enterExtensionMethod_enterExtension (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterExtension) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListAST_enterExtension (defineExtensionMethod_staticListAST_enterExtension, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  {
  const GALGAS_staticListAST temp_0 = object ;
  const GALGAS_staticListAST temp_1 = object ;
  ioArgument_ioGraph.setter_addNode (temp_0.getter_mStaticListName (HERE), temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 179)) ;
  }
  {
  const GALGAS_staticListAST temp_2 = object ;
  ioArgument_ioGraph.setter_addEdge (temp_2.getter_mStaticListName (HERE), function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 180)) ;
  }
  const GALGAS_staticListAST temp_3 = object ;
  cEnumerator_staticListPropertyListAST enumerator_7067 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_7067.hasCurrentObject ()) {
    switch (enumerator_7067.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_7201 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_7067.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_7201->mAssociatedValue0 ;
        {
        const GALGAS_staticListAST temp_4 = object ;
        ioArgument_ioGraph.setter_addEdge (temp_4.getter_mStaticListName (HERE), extractedValue_propertyTypeName COMMA_SOURCE_FILE ("declaration-static-list.galgas", 185)) ;
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_7517 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_7067.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_7517->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnType = extractPtr_7517->mAssociatedValue2 ;
        cEnumerator_routineFormalArgumentListAST enumerator_7341 (extractedValue_formalArgs, kENUMERATION_UP) ;
        while (enumerator_7341.hasCurrentObject ()) {
          {
          ioArgument_ioGraph.setter_noteNode (enumerator_7341.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 188)) ;
          }
          enumerator_7341.gotoNextObject () ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            const GALGAS_staticListAST temp_6 = object ;
            ioArgument_ioGraph.setter_addEdge (temp_6.getter_mStaticListName (HERE), extractedValue_returnType COMMA_SOURCE_FILE ("declaration-static-list.galgas", 191)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_7067.gotoNextObject () ;
  }
  const GALGAS_staticListAST temp_7 = object ;
  cEnumerator_staticListValueListAST enumerator_7627 (temp_7.getter_mValueList (HERE), kENUMERATION_UP) ;
  while (enumerator_7627.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_7659 (enumerator_7627.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_7659.hasCurrentObject ()) {
      switch (enumerator_7659.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_7811 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_7659.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7811->mAssociatedValue0 ;
          const GALGAS_staticListAST temp_8 = object ;
          callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), temp_8.getter_mStaticListName (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 200)) ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_8005 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_7659.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_8005->mAssociatedValue1 ;
          cEnumerator_routineFormalArgumentListAST enumerator_7935 (extractedValue_formalArgs, kENUMERATION_UP) ;
          while (enumerator_7935.hasCurrentObject ()) {
            {
            ioArgument_ioGraph.setter_noteNode (enumerator_7935.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 203)) ;
            }
            enumerator_7935.gotoNextObject () ;
          }
        }
        break ;
      }
      enumerator_7659.gotoNextObject () ;
    }
    enumerator_7627.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                               extensionMethod_staticListAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListAST_enterInPrecedenceGraph (defineExtensionMethod_staticListAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_staticListAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  const GALGAS_staticListAST temp_0 = object ;
  result_result = temp_0.getter_mStaticListName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_staticListAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                  extensionGetter_staticListAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_staticListAST_locationForErrorSignaling (defineExtensionGetter_staticListAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@staticListAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_staticListAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_staticListAST * object = (const cPtr_staticListAST *) inObject ;
  macroValidSharedObject (object, cPtr_staticListAST) ;
  const GALGAS_staticListAST temp_0 = object ;
  result_result = GALGAS_string ("staticlist ").add_operation (temp_0.getter_mStaticListName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 219)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                                           extensionGetter_staticListAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_staticListAST_keyRepresentationForErrorSignaling (defineExtensionGetter_staticListAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 229)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 229))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 229)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListType (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListType (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListType ("omnibusNameForStaticListType",
                                                                              functionWithGenericHeader_omnibusNameForStaticListType,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_omnibusNameForStaticListType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 235)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 235))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 235)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'omnibusNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_omnibusNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist element ").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 241)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 241))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 241)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_omnibusNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_omnibusNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_omnibusNameForStaticListElementType (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_omnibusNameForStaticListElementType ("omnibusNameForStaticListElementType",
                                                                                     functionWithGenericHeader_omnibusNameForStaticListElementType,
                                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                                     1,
                                                                                     functionArgs_omnibusNameForStaticListElementType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmNameForStaticListElementType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist-element-type-").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 247)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 247)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  GALGAS_propertyList var_propertyList_11313 = GALGAS_propertyList::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 278)) ;
  GALGAS_stringset var_propertyNameSet_11392 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 280)) ;
  const GALGAS_staticListAST temp_0 = object ;
  GALGAS_lstring var_omnibusElementTypeName_11426 = function_omnibusNameForStaticListElementType (temp_0.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 281)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_11590 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioContext.mProperty_mTypeMap, var_omnibusElementTypeName_11426, var_elementTypeProxy_11590 COMMA_SOURCE_FILE ("declaration-static-list.galgas", 282)) ;
  }
  const GALGAS_staticListAST temp_1 = object ;
  cEnumerator_staticListPropertyListAST enumerator_11734 (temp_1.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_11692 ((uint32_t) 0) ;
  while (enumerator_11734.hasCurrentObject ()) {
    switch (enumerator_11734.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticListPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_valueType * extractPtr_12390 = (const cEnumAssociatedValues_staticListPropertyTypeAST_valueType *) (enumerator_11734.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_12390->mAssociatedValue0 ;
        GALGAS_omnibusType var_propertyType_11841 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 287)).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 287)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_propertyNameSet_11392.getter_hasKey (enumerator_11734.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 288)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 288)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_11734.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 289)), GALGAS_string ("duplicated property name"), fixItArray3  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 289)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_propertyNameSet_11392.addAssign_operation (enumerator_11734.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 291))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 291)) ;
          var_propertyList_11313.addAssign_operation (enumerator_11734.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 292)), var_propertyType_11841  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 292)) ;
          {
          const GALGAS_staticListAST temp_4 = object ;
          extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListElementType (temp_4.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 294)), enumerator_11734.current_mPropertyName (HERE), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 296)), GALGAS_propertyGetterKind::constructor_storedProperty (var_propertyType_11841, index_11692  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 293)) ;
          }
        }
      }
      break ;
    case GALGAS_staticListPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticListPropertyTypeAST_function * extractPtr_14200 = (const cEnumAssociatedValues_staticListPropertyTypeAST_function *) (enumerator_11734.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_14200->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_14200->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_14200->mAssociatedValue2 ;
        const GALGAS_staticListAST temp_5 = object ;
        GALGAS_lstring var_routineLLVMName_12541 = function_routineMangledNameFromAST (function_llvmNameForStaticListElementType (temp_5.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 303)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 303)), enumerator_11734.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 302)) ;
        GALGAS_routineTypedSignature var_signature_12783 ;
        {
        routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_12783, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 308)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 310)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 312)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_12832 = temp_6 ;
        GALGAS_omnibusType var_propertyType_13046 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 317)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 318)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (extractedValue_mode, var_signature_12783, var_returnTypeProxy_12832  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 320)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 315)) ;
        var_propertyList_11313.addAssign_operation (enumerator_11734.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 328)), var_propertyType_13046  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 328)) ;
        const GALGAS_staticListAST temp_8 = object ;
        GALGAS_lstring var_routineMangledName_13496 = GALGAS_lstring::constructor_new (function_omnibusNameForStaticListElementType (temp_8.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (enumerator_11734.current_mPropertyName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).add_operation (extensionGetter_routineSignature (extractedValue_formalArgs, enumerator_11734.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 331)), enumerator_11734.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 332))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 330)) ;
        {
        GALGAS_routineLLVMNameDict temp_9 = GALGAS_routineLLVMNameDict::constructor_emptyDict (SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        temp_9.addAssign_operation (GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 339)), var_routineLLVMName_12541.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 339)) ;
        ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_13496, GALGAS_bool (true), var_signature_12783, var_returnTypeProxy_12832, temp_9, GALGAS_bool (false), GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-static-list.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 334)) ;
        }
        ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_staticListIndirectRoutineIR::constructor_new (var_routineLLVMName_12541, GALGAS_bool (true), GALGAS_bool (true), var_elementTypeProxy_11590, var_signature_12783, var_returnTypeProxy_12832, index_11692  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 344)) ;
      }
      break ;
    }
    enumerator_11734.gotoNextObject () ;
    index_11692.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 284)) ;
  }
  {
  const GALGAS_staticListAST temp_10 = object ;
  ioArgument_ioContext.mProperty_mStaticListMap.setter_insertKey (temp_10.getter_mStaticListName (HERE), var_propertyList_11313, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 355)) ;
  }
  const GALGAS_staticListAST temp_11 = object ;
  const GALGAS_staticListAST temp_12 = object ;
  GALGAS_omnibusType var_elementType_14410 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_noSubscript (SOURCE_FILE ("declaration-static-list.galgas", 359)), GALGAS_omnibusTypeAttributes::constructor_none (SOURCE_FILE ("declaration-static-list.galgas", 360)), function_omnibusNameForStaticListElementType (temp_11.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 361)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 361)), GALGAS_typeKind::constructor_structure (var_propertyList_11313  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 362)), function_llvmNameForStaticListElementType (temp_12.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 363)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 363))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 357)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_omnibusElementTypeName_11426, var_elementType_14410, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 365)) ;
  }
  GALGAS_stringlist var_stringValueList_14967 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("declaration-static-list.galgas", 370)) ;
  const GALGAS_staticListAST temp_13 = object ;
  cEnumerator_staticListValueListAST enumerator_15009 (temp_13.getter_mValueList (HERE), kENUMERATION_UP) ;
  while (enumerator_15009.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsNotEqual, var_propertyList_11313.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 372)).objectCompare (enumerator_15009.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 372)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_staticListAST temp_15 = object ;
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (temp_15.getter_mStaticListName (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 373)), var_propertyList_11313.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 374)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 374)).add_operation (GALGAS_string (" expressions required, "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 374)).add_operation (enumerator_15009.current_mElement (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 375)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 374)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 375)), fixItArray16  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 373)) ;
      }
    }
    if (kBoolFalse == test_14) {
      GALGAS_string var_staticValue_15245 = GALGAS_string ("{") ;
      cEnumerator_extendStaticListElementAST enumerator_15291 (enumerator_15009.current_mElement (HERE), kENUMERATION_UP) ;
      cEnumerator_propertyList enumerator_15325 (var_propertyList_11313, kENUMERATION_UP) ;
      while (enumerator_15291.hasCurrentObject () && enumerator_15325.hasCurrentObject ()) {
        switch (enumerator_15291.current_mExpression (HERE).enumValue ()) {
        case GALGAS_extendStaticListExpressionAST::kNotBuilt:
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_expression:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_15981 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_15291.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_exp = extractPtr_15981->mAssociatedValue0 ;
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              test_17 = enumerator_15325.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 381)).boolEnum () ;
              if (kBoolTrue == test_17) {
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (enumerator_15291.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray18  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 382)) ;
              }
            }
            if (kBoolFalse == test_17) {
              GALGAS_objectIR var_expressionResult_15825 ;
              {
              routine_computeStaticExpression (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_exp, enumerator_15291.current_mEndOfExpression (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-static-list.galgas", 389)), var_expressionResult_15825, inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 384)) ;
              }
              var_staticValue_15245.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15325.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)).add_operation (extensionGetter_llvmName (var_expressionResult_15825, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 393)) ;
            }
          }
          break ;
        case GALGAS_extendStaticListExpressionAST::kEnum_function:
          {
            const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_18211 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_15291.current_mExpression (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_functionName = extractPtr_18211->mAssociatedValue0 ;
            const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_18211->mAssociatedValue1 ;
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = enumerator_15325.current_mType (HERE).getter_kind (HERE).getter_isFunction (SOURCE_FILE ("declaration-static-list.galgas", 396)).operator_not (SOURCE_FILE ("declaration-static-list.galgas", 396)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_15291.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray20  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 397)) ;
              }
            }
            if (kBoolFalse == test_19) {
              GALGAS_mode var_mode_16281 ;
              GALGAS_routineTypedSignature var_functionSignature_16328 ;
              GALGAS_unifiedTypeMap_2D_proxy var_functionReturnTypeProxy_16387 ;
              enumerator_15325.current_mType (HERE).getter_kind (HERE).method_function (var_mode_16281, var_functionSignature_16328, var_functionReturnTypeProxy_16387, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 399)) ;
              GALGAS_lstring var_argumentSignature_16435 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 404)) ;
              GALGAS_lstring var_functionMangledName_16517 = GALGAS_lstring::constructor_new (extractedValue_functionName.getter_string (HERE).add_operation (var_argumentSignature_16435.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)), extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 405))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 405)) ;
              GALGAS_bool var_candidateIsPublic_16713 ;
              GALGAS_routineTypedSignature var_candidateSignature_16751 ;
              GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnTypeProxy_16795 ;
              GALGAS_routineLLVMNameDict var_implementedModeDictionary_16868 ;
              GALGAS_bool var_implementedIsExported_16916 ;
              GALGAS_mode var_candidateMode_16956 ;
              ioArgument_ioContext.getter_mRoutineMap (HERE).method_searchKey (var_functionMangledName_16517, var_candidateIsPublic_16713, var_candidateSignature_16751, var_candidateReturnTypeProxy_16795, var_implementedModeDictionary_16868, var_implementedIsExported_16916, var_candidateMode_16956, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 406)) ;
              GALGAS_string var_routineLLVMName_17028 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_16868, var_mode_16281, extractedValue_functionName, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 416)) ;
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                GALGAS_bool test_22 = GALGAS_bool (kIsEqual, var_functionReturnTypeProxy_16387.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 417)))) ;
                if (kBoolTrue == test_22.boolEnum ()) {
                  test_22 = GALGAS_bool (kIsNotEqual, var_candidateReturnTypeProxy_16795.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 417)))) ;
                }
                test_21 = test_22.boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 418)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnTypeProxy_16795.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)), fixItArray23  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 418)) ;
                }
              }
              if (kBoolFalse == test_21) {
                enumGalgasBool test_24 = kBoolTrue ;
                if (kBoolTrue == test_24) {
                  GALGAS_bool test_25 = GALGAS_bool (kIsNotEqual, var_functionReturnTypeProxy_16387.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 419)))) ;
                  if (kBoolTrue == test_25.boolEnum ()) {
                    test_25 = GALGAS_bool (kIsEqual, var_candidateReturnTypeProxy_16795.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 419)))) ;
                  }
                  test_24 = test_25.boolEnum () ;
                  if (kBoolTrue == test_24) {
                    TC_Array <C_FixItDescription> fixItArray26 ;
                    inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 420)), GALGAS_string ("this function should return no object"), fixItArray26  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 420)) ;
                  }
                }
              }
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                test_27 = GALGAS_bool (kIsNotEqual, var_functionSignature_16328.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 422)).objectCompare (var_candidateSignature_16751.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 422)))).boolEnum () ;
                if (kBoolTrue == test_27) {
                  TC_Array <C_FixItDescription> fixItArray28 ;
                  inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-static-list.galgas", 423)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_16751.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 424)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)).add_operation (var_functionSignature_16328.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 425)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 424)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 425)), fixItArray28  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 423)) ;
                }
              }
              if (kBoolFalse == test_27) {
                cEnumerator_routineTypedSignature enumerator_17831 (var_functionSignature_16328, kENUMERATION_UP) ;
                cEnumerator_routineTypedSignature enumerator_17864 (var_candidateSignature_16751, kENUMERATION_UP) ;
                while (enumerator_17831.hasCurrentObject () && enumerator_17864.hasCurrentObject ()) {
                  enumGalgasBool test_29 = kBoolTrue ;
                  if (kBoolTrue == test_29) {
                    test_29 = GALGAS_bool (kIsNotEqual, enumerator_17831.current (HERE).getter_mTypeProxy (HERE).objectCompare (enumerator_17864.current (HERE).getter_mTypeProxy (HERE))).boolEnum () ;
                    if (kBoolTrue == test_29) {
                      TC_Array <C_FixItDescription> fixItArray30 ;
                      inCompiler->emitSemanticError (enumerator_17864.current (HERE).getter_mSelector (HERE).getter_location (SOURCE_FILE ("declaration-static-list.galgas", 429)), GALGAS_string ("argument type should be $").add_operation (enumerator_17831.current (HERE).getter_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)), fixItArray30  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 429)) ;
                    }
                  }
                  enumerator_17831.gotoNextObject () ;
                  enumerator_17864.gotoNextObject () ;
                }
              }
              var_staticValue_15245.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_15325.current_mType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)).add_operation (var_routineLLVMName_17028.getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 433)) ;
            }
          }
          break ;
        }
        if (enumerator_15291.hasNextObject () && enumerator_15325.hasNextObject ()) {
          var_staticValue_15245.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 437)) ;
        }
        enumerator_15291.gotoNextObject () ;
        enumerator_15325.gotoNextObject () ;
      }
      var_staticValue_15245.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 439)) ;
      var_stringValueList_14967.addAssign_operation (var_staticValue_15245  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 440)) ;
    }
    enumerator_15009.gotoNextObject () ;
  }
  {
  const GALGAS_staticListAST temp_31 = object ;
  ioArgument_ioStaticListValueMap.setter_insertKey (temp_31.getter_mStaticListName (HERE), var_stringValueList_14967, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 443)) ;
  }
  {
  const GALGAS_staticListAST temp_32 = object ;
  const GALGAS_staticListAST temp_33 = object ;
  const GALGAS_staticListAST temp_34 = object ;
  extensionSetter_insertGetter (ioArgument_ioContext, function_omnibusNameForStaticListType (temp_32.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 446)), GALGAS_lstring::constructor_new (GALGAS_string ("count"), temp_33.getter_mStaticListName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 447)), GALGAS_propertyVisibility::constructor_isPublic (SOURCE_FILE ("declaration-static-list.galgas", 448)), GALGAS_propertyGetterKind::constructor_constantProperty (GALGAS_objectIR::constructor_literalInteger (function_compileTimeIntegerType (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), temp_34.getter_mValueList (HERE).getter_length (SOURCE_FILE ("declaration-static-list.galgas", 449)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 445)) ;
  }
  const GALGAS_staticListAST temp_35 = object ;
  const GALGAS_staticListAST temp_36 = object ;
  GALGAS_omnibusType var_arrayType_18924 = GALGAS_omnibusType::constructor_new (GALGAS_subscript::constructor_staticSubscript (var_elementType_14410, var_stringValueList_14967.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 454)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 454))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 454)), GALGAS_omnibusTypeAttributes::constructor_instanciable (SOURCE_FILE ("declaration-static-list.galgas", 455)).operator_or (GALGAS_omnibusTypeAttributes::constructor_copyable (SOURCE_FILE ("declaration-static-list.galgas", 455)) COMMA_SOURCE_FILE ("declaration-static-list.galgas", 455)), function_omnibusNameForStaticListType (temp_35.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 456)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 456)), GALGAS_typeKind::constructor_staticArrayType (var_elementType_14410, var_stringValueList_14967.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 457)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 457))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 457)), function_llvmNameForStaticListType (temp_36.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 458)).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 458))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 452)) ;
  {
  const GALGAS_staticListAST temp_37 = object ;
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (function_omnibusNameForStaticListType (temp_37.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 461)), var_arrayType_18924, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 460)) ;
  }
  const GALGAS_staticListAST temp_38 = object ;
  GALGAS_unifiedTypeMap_2D_proxy var_staticListType_19607 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.getter_mTypeMap (HERE), function_omnibusNameForStaticListType (temp_38.getter_mStaticListName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 465)) ;
  {
  const GALGAS_staticListAST temp_39 = object ;
  const GALGAS_staticListAST temp_40 = object ;
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (temp_39.getter_mStaticListName (HERE), GALGAS_objectIR::constructor_reference (var_staticListType_19607.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 468)), function_llvmNameForGlobalVariable (temp_40.getter_mStaticListName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 468))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 466)) ;
  }
  {
  const GALGAS_staticListAST temp_41 = object ;
  const GALGAS_staticListAST temp_42 = object ;
  extensionSetter_insertGlobalConstant (ioArgument_ioContext.mProperty_mValuedObjectMap, temp_41.getter_mStaticListName (HERE), GALGAS_objectIR::constructor_reference (var_staticListType_19607.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)), function_llvmNameForGlobalVariable (temp_42.getter_mStaticListName (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 470)) ;
  }
  const GALGAS_staticListAST temp_43 = object ;
  const GALGAS_staticListAST temp_44 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedStaticList::constructor_new (temp_43.getter_mStaticListName (HERE), temp_44.getter_mValueList (HERE)  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 475)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMSructureTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_elementType_14410.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 478)), var_propertyList_11313  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 477)) ;
  ioArgument_ioUserLLVMTypeDefinitionListIR.addAssign_operation (GALGAS_userLLVMStaticArrayTypeDefinitionIR::constructor_new (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_arrayType_18924.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 482)), var_elementType_14410, var_stringValueList_14967.getter_length (SOURCE_FILE ("declaration-static-list.galgas", 484)).getter_bigint (SOURCE_FILE ("declaration-static-list.galgas", 484))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 481))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 481)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_staticListAST.mSlotID,
                                       extensionMethod_staticListAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListAST_enterInContext (defineExtensionMethod_staticListAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedStaticList semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedStaticList_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedStaticList * object = (const cPtr_decoratedStaticList *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedStaticList) ;
  GALGAS_stringset var_invokedFunctionSet_21784 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-list.galgas", 513)) ;
  const GALGAS_decoratedStaticList temp_0 = object ;
  cEnumerator_staticListValueListAST enumerator_21826 (temp_0.getter_mValueList (HERE), kENUMERATION_UP) ;
  while (enumerator_21826.hasCurrentObject ()) {
    cEnumerator_extendStaticListElementAST enumerator_21867 (enumerator_21826.current_mElement (HERE), kENUMERATION_UP) ;
    while (enumerator_21867.hasCurrentObject ()) {
      switch (enumerator_21867.current_mExpression (HERE).enumValue ()) {
      case GALGAS_extendStaticListExpressionAST::kNotBuilt:
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_expression:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_expression * extractPtr_21943 = (const cEnumAssociatedValues_extendStaticListExpressionAST_expression *) (enumerator_21867.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_21943->mAssociatedValue0 ;
        }
        break ;
      case GALGAS_extendStaticListExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticListExpressionAST_function * extractPtr_22244 = (const cEnumAssociatedValues_extendStaticListExpressionAST_function *) (enumerator_21867.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_22244->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentListAST extractedValue_formalArgs = extractPtr_22244->mAssociatedValue1 ;
          GALGAS_lstring var_routineMangledName_22093 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 520)) ;
          var_invokedFunctionSet_21784.addAssign_operation (var_routineMangledName_22093.getter_string (SOURCE_FILE ("declaration-static-list.galgas", 525))  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 525)) ;
        }
        break ;
      }
      enumerator_21867.gotoNextObject () ;
    }
    enumerator_21826.gotoNextObject () ;
  }
  {
  const GALGAS_decoratedStaticList temp_1 = object ;
  ioArgument_ioTemporaries.mProperty_mStaticArrayMapForTemporaries.setter_insertKey (temp_1.getter_mStaticListName (HERE), var_invokedFunctionSet_21784, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 529)) ;
  }
  {
  const GALGAS_decoratedStaticList temp_2 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate.setter_insertKey (temp_2.getter_mStaticListName (HERE), var_invokedFunctionSet_21784, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 530)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedStaticList_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedStaticList.mSlotID,
                                         extensionMethod_decoratedStaticList_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedStaticList_semanticAnalysis (defineExtensionMethod_decoratedStaticList_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@staticListIndirectRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticListIndirectRoutineIR * object = (const cPtr_staticListIndirectRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticListIndirectRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 580)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 581)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_staticListIndirectRoutineIR temp_2 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 584)) ;
  }
  const GALGAS_staticListIndirectRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 586)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 586)) ;
  const GALGAS_staticListIndirectRoutineIR temp_4 = object ;
  GALGAS_string var_receiverLLVMTypeName_24799 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.getter_mStaticListElementType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 587)) ;
  GALGAS_bool var_first_24863 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverLLVMTypeName_24799.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioLLVMcode.plusAssign_operation(var_receiverLLVMTypeName_24799.add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 590)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 590)) ;
      var_first_24863 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_staticListIndirectRoutineIR temp_6 = object ;
  cEnumerator_routineTypedSignature enumerator_25048 (temp_6.getter_mFormalArgumentListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_25048.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_first_24863.boolEnum () ;
      if (kBoolTrue == test_7) {
        var_first_24863 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 597)) ;
    }
    switch (enumerator_25048.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25048.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 601)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 601)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 601)).add_operation (enumerator_25048.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 601)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25048.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)).add_operation (enumerator_25048.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 603)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25048.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)).add_operation (enumerator_25048.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 605)) ;
      }
      break ;
    }
    enumerator_25048.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 608)) ;
  GALGAS_string var_llvmFunctionTypeName_25703 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_9 = object ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 611)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_llvmFunctionTypeName_25703 = GALGAS_string ("void") ;
    }
  }
  if (kBoolFalse == test_8) {
    const GALGAS_staticListIndirectRoutineIR temp_10 = object ;
    var_llvmFunctionTypeName_25703 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_10.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 614)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 614)) ;
  }
  var_llvmFunctionTypeName_25703.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 616)) ;
  var_first_24863 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_11 = object ;
  cEnumerator_routineTypedSignature enumerator_25957 (temp_11.getter_mFormalArgumentListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_25957.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_first_24863.boolEnum () ;
      if (kBoolTrue == test_12) {
        var_first_24863 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_12) {
      var_llvmFunctionTypeName_25703.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 622)) ;
    }
    switch (enumerator_25957.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        var_llvmFunctionTypeName_25703.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25957.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 626)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        var_llvmFunctionTypeName_25703.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25957.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 628)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        var_llvmFunctionTypeName_25703.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_25957.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 630)) ;
      }
      break ;
    }
    enumerator_25957.gotoNextObject () ;
  }
  var_llvmFunctionTypeName_25703.plusAssign_operation(GALGAS_string (")*"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 633)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr = getelementptr inbounds ").add_operation (var_receiverLLVMTypeName_24799, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 635)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 635)) ;
  const GALGAS_staticListIndirectRoutineIR temp_13 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_receiverLLVMTypeName_24799, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).add_operation (GALGAS_string ("* %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).add_operation (temp_13.getter_mPropertyIndex (HERE).getter_string (SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 636)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %f = load ").add_operation (var_llvmFunctionTypeName_25703, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 637)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 637)).add_operation (var_llvmFunctionTypeName_25703, inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 637)).add_operation (GALGAS_string ("* %ptr\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 637)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 637)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_15 = object ;
    test_14 = GALGAS_bool (kIsEqual, temp_15.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 638)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 639)) ;
    }
  }
  if (kBoolFalse == test_14) {
    const GALGAS_staticListIndirectRoutineIR temp_16 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %result = call ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_16.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 641)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 641)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 641)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" %f ("), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 643)) ;
  var_first_24863 = GALGAS_bool (true) ;
  const GALGAS_staticListIndirectRoutineIR temp_17 = object ;
  cEnumerator_routineTypedSignature enumerator_26939 (temp_17.getter_mFormalArgumentListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_26939.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_first_24863.boolEnum () ;
      if (kBoolTrue == test_18) {
        var_first_24863 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_18) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 649)) ;
    }
    switch (enumerator_26939.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26939.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)).add_operation (enumerator_26939.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 653)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26939.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)).add_operation (GALGAS_string ("* %out."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)).add_operation (enumerator_26939.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 655)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_26939.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)).add_operation (GALGAS_string ("* %inout."), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)).add_operation (enumerator_26939.current_mFormalArgumentName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-static-list.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 657)) ;
      }
      break ;
    }
    enumerator_26939.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 660)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_20 = object ;
    test_19 = GALGAS_bool (kIsEqual, temp_20.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-list.galgas", 662)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 663)) ;
    }
  }
  if (kBoolFalse == test_19) {
    const GALGAS_staticListIndirectRoutineIR temp_21 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_21.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)).add_operation (GALGAS_string (" %result\n"), inCompiler COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 665)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-static-list.galgas", 667)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_staticListIndirectRoutineIR.mSlotID,
                                           extensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_staticListIndirectRoutineIR_llvmCodeGeneration (defineExtensionMethod_staticListIndirectRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedTaskListDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedTaskListDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedTaskListDeclaration * object = (const cPtr_decoratedTaskListDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedTaskListDeclaration) ;
  const GALGAS_decoratedTaskListDeclaration temp_0 = object ;
  cEnumerator_decoratedTaskList enumerator_11945 (temp_0.getter_mTaskList (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_11922 ((uint32_t) 0) ;
  while (enumerator_11945.hasCurrentObject ()) {
    extensionMethod_taskSemanticAnalysis (enumerator_11945.current (HERE), constinArgument_inContext, index_11922, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 320)) ;
    enumerator_11945.gotoNextObject () ;
    index_11922.increment_operation (inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 319)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedTaskListDeclaration.mSlotID,
                                         extensionMethod_decoratedTaskListDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedTaskListDeclaration_semanticAnalysis (defineExtensionMethod_decoratedTaskListDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOrderedTaskRoutines'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOrderedTaskRoutines (const GALGAS_taskSetupListAST constinArgument_inTaskRoutineLISTAST,
                                         GALGAS_stringlist & outArgument_outSetupOrderedList,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetupOrderedList.drop () ; // Release 'out' argument
  outArgument_outSetupOrderedList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("task-declaration.galgas", 335)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 336)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numberOfEntriesWithoutAnyPrecedence_12562 = GALGAS_uint ((uint32_t) 0U) ;
      cEnumerator_taskSetupListAST enumerator_12617 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
      while (enumerator_12617.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_12617.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 340)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_numberOfEntriesWithoutAnyPrecedence_12562.plusAssign_operation(var_numberOfEntriesWithoutAnyPrecedence_12562.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 341)) ;
          }
        }
        enumerator_12617.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_numberOfEntriesWithoutAnyPrecedence_12562.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          cEnumerator_taskSetupListAST enumerator_12864 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
          while (enumerator_12864.hasCurrentObject ()) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_12864.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 346)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray3  COMMA_SOURCE_FILE ("task-declaration.galgas", 346)) ;
            enumerator_12864.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_numberOfEntriesWithoutAnyPrecedence_12562.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_4) {
            cEnumerator_taskSetupListAST enumerator_13057 (constinArgument_inTaskRoutineLISTAST, kENUMERATION_UP) ;
            while (enumerator_13057.hasCurrentObject ()) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, enumerator_13057.current_mDependanceList (HERE).getter_length (SOURCE_FILE ("task-declaration.galgas", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_13057.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 351)), GALGAS_string ("Exactly one routine should have no precedence"), fixItArray6  COMMA_SOURCE_FILE ("task-declaration.galgas", 351)) ;
                }
              }
              enumerator_13057.gotoNextObject () ;
            }
          }
        }
      }
      GALGAS_taskSetupListAST var_taskSetupListAST_13289 = constinArgument_inTaskRoutineLISTAST ;
      GALGAS_stringset var_precedenceSet_13341 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("task-declaration.galgas", 357)) ;
      GALGAS_bool var_continue_13363 = GALGAS_bool (true) ;
      if (constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 359)).isValid ()) {
        uint32_t variant_13379 = constinArgument_inTaskRoutineLISTAST.getter_length (SOURCE_FILE ("task-declaration.galgas", 359)).uintValue () ;
        bool loop_13379 = true ;
        while (loop_13379) {
          GALGAS_bool test_7 = var_continue_13363 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsStrictSup, var_taskSetupListAST_13289.getter_length (SOURCE_FILE ("task-declaration.galgas", 359)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
          }
          loop_13379 = test_7.isValid () ;
          if (loop_13379) {
            loop_13379 = test_7.boolValue () ;
          }
          if (loop_13379 && (0 == variant_13379)) {
            loop_13379 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("task-declaration.galgas", 359)) ;
          }
          if (loop_13379) {
            variant_13379 -- ;
            var_continue_13363 = GALGAS_bool (false) ;
            GALGAS_uint var_idx_13501 = GALGAS_uint ((uint32_t) 0U) ;
            cEnumerator_taskSetupListAST enumerator_13557 (var_taskSetupListAST_13289, kENUMERATION_UP) ;
            while (enumerator_13557.hasCurrentObject ()) {
              GALGAS_bool var_allPrecedenceDefined_13593 = GALGAS_bool (true) ;
              cEnumerator_lstringlist enumerator_13647 (enumerator_13557.current_mDependanceList (HERE), kENUMERATION_UP) ;
              bool bool_8 = var_allPrecedenceDefined_13593.isValidAndTrue () ;
              if (enumerator_13647.hasCurrentObject () && bool_8) {
                while (enumerator_13647.hasCurrentObject () && bool_8) {
                  var_allPrecedenceDefined_13593 = var_precedenceSet_13341.getter_hasKey (enumerator_13647.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("task-declaration.galgas", 365)) ;
                  enumerator_13647.gotoNextObject () ;
                  if (enumerator_13647.hasCurrentObject ()) {
                    bool_8 = var_allPrecedenceDefined_13593.isValidAndTrue () ;
                  }
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_allPrecedenceDefined_13593.boolEnum () ;
                if (kBoolTrue == test_9) {
                  outArgument_outSetupOrderedList.addAssign_operation (enumerator_13557.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 368)) ;
                  var_precedenceSet_13341.addAssign_operation (enumerator_13557.current_mName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("task-declaration.galgas", 369)) ;
                  var_continue_13363 = GALGAS_bool (true) ;
                  {
                  GALGAS_lstring joker_13963_2 ; // Joker input parameter
                  GALGAS_lstringlist joker_13963_1 ; // Joker input parameter
                  var_taskSetupListAST_13289.setter_removeAtIndex (joker_13963_2, joker_13963_1, var_idx_13501, inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 371)) ;
                  }
                }
              }
              if (kBoolFalse == test_9) {
                var_idx_13501 = var_idx_13501.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 373)) ;
              }
              enumerator_13557.gotoNextObject () ;
            }
          }
        }
      }
      cEnumerator_taskSetupListAST enumerator_14115 (var_taskSetupListAST_13289, kENUMERATION_UP) ;
      while (enumerator_14115.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_14115.current_mName (HERE).getter_location (SOURCE_FILE ("task-declaration.galgas", 379)), GALGAS_string ("this routine is out of execution order"), fixItArray10  COMMA_SOURCE_FILE ("task-declaration.galgas", 379)) ;
        enumerator_14115.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskActivateFunctionIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_taskActivateFunctionIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskActivateFunctionIR * object = (const cPtr_taskActivateFunctionIR *) inObject ;
  macroValidSharedObject (object, cPtr_taskActivateFunctionIR) ;
  const GALGAS_taskActivateFunctionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal void @").add_operation (temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 611)) ;
  const GALGAS_taskActivateFunctionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("(%").add_operation (temp_1.getter_mAssemblerTaskName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 612)) ;
  const GALGAS_taskActivateFunctionIR temp_2 = object ;
  const GALGAS_taskActivateFunctionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (temp_2.getter_mActivateServiceInvocationName (HERE), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (" (i8 "), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (temp_3.getter_mTaskIndex (HERE).getter_string (SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 613)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 613)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 614)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 615)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("task-declaration.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 616)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("task-declaration.galgas", 617)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_taskActivateFunctionIR.mSlotID,
                                           extensionMethod_taskActivateFunctionIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_taskActivateFunctionIR_llvmCodeGeneration (defineExtensionMethod_taskActivateFunctionIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  const GALGAS_taskSetupDeclarationAST temp_1 = object ;
  const GALGAS_taskSetupDeclarationAST temp_2 = object ;
  GALGAS_string var_s_3519 = temp_0.getter_mQualifier (HERE).add_operation (temp_1.getter_mTaskName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (temp_2.getter_mSetupName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 90)) ;
  {
  const GALGAS_taskSetupDeclarationAST temp_3 = object ;
  const GALGAS_taskSetupDeclarationAST temp_4 = object ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_3519, temp_3.getter_mSetupName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)), temp_4, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 91)) ;
  }
  {
  const GALGAS_taskSetupDeclarationAST temp_5 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_5.getter_mTaskName (HERE) COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 93)) ;
  }
  const GALGAS_taskSetupDeclarationAST temp_6 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_6.getter_mTaskSetupInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 94)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                               extensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_taskSetupDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_taskSetupDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  const GALGAS_taskSetupDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("task function ").add_operation (temp_0.getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-setup-declaration.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)).add_operation (temp_1.getter_mSetupName (HERE).getter_string (SOURCE_FILE ("task-setup-declaration.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 100)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                                           extensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_taskSetupDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@taskSetupDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_taskSetupDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mSetupName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_taskSetupDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                                  extensionGetter_taskSetupDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_taskSetupDeclarationAST_locationForErrorSignaling (defineExtensionGetter_taskSetupDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@taskSetupDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_taskSetupDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                    GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                                    GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                    GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                    GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                    GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                    GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                    GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                    GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_taskSetupDeclarationAST * object = (const cPtr_taskSetupDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_taskSetupDeclarationAST) ;
  const GALGAS_taskSetupDeclarationAST temp_0 = object ;
  const GALGAS_taskSetupDeclarationAST temp_1 = object ;
  const GALGAS_taskSetupDeclarationAST temp_2 = object ;
  GALGAS_string var_mangledName_5369 = temp_0.getter_mQualifier (HERE).add_operation (temp_1.getter_mTaskName (HERE).getter_string (SOURCE_FILE ("task-setup-declaration.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)).add_operation (temp_2.getter_mSetupName (HERE).getter_string (SOURCE_FILE ("task-setup-declaration.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 124)) ;
  const GALGAS_taskSetupDeclarationAST temp_3 = object ;
  const GALGAS_taskSetupDeclarationAST temp_4 = object ;
  const GALGAS_taskSetupDeclarationAST temp_5 = object ;
  const GALGAS_taskSetupDeclarationAST temp_6 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_3.getter_mTaskName (HERE), GALGAS_mode::constructor_userMode (SOURCE_FILE ("task-setup-declaration.galgas", 127)), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("task-setup-declaration.galgas", 129)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("task-setup-declaration.galgas", 132)), GALGAS_lstring::constructor_new (var_mangledName_5369, temp_4.getter_mSetupName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 133)), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("task-setup-declaration.galgas", 134)), GALGAS_bool (true), temp_5.getter_mTaskSetupInstructionList (HERE), temp_6.getter_mEndOfTaskSetupDeclaration (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("task-setup-declaration.galgas", 138))  COMMA_SOURCE_FILE ("task-setup-declaration.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_taskSetupDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_taskSetupDeclarationAST.mSlotID,
                                       extensionMethod_taskSetupDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_taskSetupDeclarationAST_enterInContext (defineExtensionMethod_taskSetupDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_string var_s_4591 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_functionDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mReceiverTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_functionDeclarationAST temp_2 = object ;
      var_s_4591.plusAssign_operation(temp_2.getter_mReceiverTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 153)) ;
    }
  }
  const GALGAS_functionDeclarationAST temp_3 = object ;
  var_s_4591.plusAssign_operation(temp_3.getter_mFunctionName (HERE).getter_string (HERE).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 155)) ;
  const GALGAS_functionDeclarationAST temp_4 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_4815 (temp_4.getter_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_4815.hasCurrentObject ()) {
    var_s_4591.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4815.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (enumerator_4815.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 157)) ;
    enumerator_4815.gotoNextObject () ;
  }
  var_s_4591.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 159)) ;
  const GALGAS_functionDeclarationAST temp_5 = object ;
  GALGAS_lstring var_nodeName_4928 = GALGAS_lstring::constructor_new (var_s_4591, temp_5.getter_mFunctionName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 160)) ;
  {
  const GALGAS_functionDeclarationAST temp_6 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_4928, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 161)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_nodeName_4928, function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) COMMA_SOURCE_FILE ("declaration-function.galgas", 162)) ;
  }
  const GALGAS_functionDeclarationAST temp_7 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_5159 (temp_7.getter_mFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_5159.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5159.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 165)) ;
    }
    enumerator_5159.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_8 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.getter_mFunctionInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 167)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_functionDeclarationAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.getter_mReceiverTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_functionDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_11.getter_mReceiverTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 169)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_functionDeclarationAST temp_13 = object ;
    test_12 = GALGAS_bool (kIsNotEqual, temp_13.getter_mFunctionReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      const GALGAS_functionDeclarationAST temp_14 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_14.getter_mFunctionReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 172)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                               extensionMethod_functionDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_functionDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  const GALGAS_functionDeclarationAST temp_0 = object ;
  const GALGAS_functionDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("function ").add_operation (temp_0.getter_mReceiverTypeName (HERE).getter_string (SOURCE_FILE ("declaration-function.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)).add_operation (temp_1.getter_mFunctionName (HERE).getter_string (SOURCE_FILE ("declaration-function.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 179)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                                           extensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_functionDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_functionDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  const GALGAS_functionDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mFunctionName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                                  extensionGetter_functionDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionDeclarationAST_locationForErrorSignaling (defineExtensionGetter_functionDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                   GALGAS_semanticContext & ioArgument_ioContext,
                                                                   GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                   GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                   GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                   GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                   GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                   GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                   GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_routineTypedSignature var_signature_7110 ;
  {
  const GALGAS_functionDeclarationAST temp_0 = object ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.getter_mFunctionFormalArgumentList (HERE), var_signature_7110, inCompiler  COMMA_SOURCE_FILE ("declaration-function.galgas", 203)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_7243 ;
  {
  const GALGAS_functionDeclarationAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, temp_1.getter_mFunctionReturnTypeName (HERE), var_returnTypeProxy_7243 COMMA_SOURCE_FILE ("declaration-function.galgas", 205)) ;
  }
  GALGAS_bool var_warnIfUnused_7279 = GALGAS_bool (true) ;
  GALGAS_bool var_exportedFunction_7309 = GALGAS_bool (false) ;
  GALGAS_bool var_canMutateProperties_7343 = GALGAS_bool (false) ;
  const GALGAS_functionDeclarationAST temp_2 = object ;
  cEnumerator_lstringlist enumerator_7400 (temp_2.getter_mFunctionAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_7400.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_7400.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 211)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = var_warnIfUnused_7279.operator_not (SOURCE_FILE ("declaration-function.galgas", 212)).boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (enumerator_7400.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 213)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 213)), fixItArray5  COMMA_SOURCE_FILE ("declaration-function.galgas", 213)) ;
          }
        }
        var_warnIfUnused_7279 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_7400.current_mValue (HERE).getter_string (HERE).objectCompare (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 216)))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_exportedFunction_7309.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_7400.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 218)), GALGAS_string ("duplicated @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 218)), fixItArray8  COMMA_SOURCE_FILE ("declaration-function.galgas", 218)) ;
            }
          }
          var_exportedFunction_7309 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsEqual, enumerator_7400.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 221)))).boolEnum () ;
          if (kBoolTrue == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = var_canMutateProperties_7343.boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_7400.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 223)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 223)), fixItArray11  COMMA_SOURCE_FILE ("declaration-function.galgas", 223)) ;
              }
            }
            var_canMutateProperties_7343 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_9) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_7400.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-function.galgas", 227)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 227)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (GALGAS_string (" and @"), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)).add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 228)), fixItArray12  COMMA_SOURCE_FILE ("declaration-function.galgas", 227)) ;
        }
      }
    }
    enumerator_7400.gotoNextObject () ;
  }
  const GALGAS_functionDeclarationAST temp_13 = object ;
  const GALGAS_functionDeclarationAST temp_14 = object ;
  const GALGAS_functionDeclarationAST temp_15 = object ;
  GALGAS_lstring var_functionLLVMName_8293 = function_routineMangledNameFromAST (temp_13.getter_mReceiverTypeName (HERE).getter_string (HERE), temp_14.getter_mFunctionName (HERE), temp_15.getter_mFunctionFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 232)) ;
  const GALGAS_functionDeclarationAST temp_16 = object ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_8517 = extensionGetter_routineLLVMDictionaryForFunction (temp_16.getter_mMode (HERE), var_functionLLVMName_8293.getter_string (SOURCE_FILE ("declaration-function.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 238)) ;
  const GALGAS_functionDeclarationAST temp_17 = object ;
  const GALGAS_functionDeclarationAST temp_18 = object ;
  GALGAS_lstring var_routineMangledName_8608 = extensionGetter_mangledName (var_signature_7110, temp_17.getter_mReceiverTypeName (HERE).getter_string (HERE), temp_18.getter_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 239)) ;
  {
  const GALGAS_functionDeclarationAST temp_19 = object ;
  const GALGAS_functionDeclarationAST temp_20 = object ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_8608, temp_19.getter_mPublicFunction (HERE), var_signature_7110, var_returnTypeProxy_7243, var_routineLLVMNameDict_8517, var_exportedFunction_7309, temp_20.getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-function.galgas", 240)) ;
  }
  const GALGAS_functionDeclarationAST temp_21 = object ;
  const GALGAS_functionDeclarationAST temp_22 = object ;
  const GALGAS_functionDeclarationAST temp_23 = object ;
  const GALGAS_functionDeclarationAST temp_24 = object ;
  const GALGAS_functionDeclarationAST temp_25 = object ;
  const GALGAS_functionDeclarationAST temp_26 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_21.getter_mReceiverTypeName (HERE), temp_22.getter_mMode (HERE), ioArgument_ioContext.getter_mRequiredRoutineSet (HERE).getter_hasKey (var_functionLLVMName_8293.getter_string (HERE) COMMA_SOURCE_FILE ("declaration-function.galgas", 253)), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-function.galgas", 254)), var_warnIfUnused_7279, var_exportedFunction_7309, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("declaration-function.galgas", 257)), var_functionLLVMName_8293, temp_23.getter_mFunctionFormalArgumentList (HERE), GALGAS_bool (true), temp_24.getter_mFunctionInstructionList (HERE), temp_25.getter_mEndOfFunctionDeclaration (HERE), temp_26.getter_mFunctionReturnTypeName (HERE)  COMMA_SOURCE_FILE ("declaration-function.galgas", 250)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                       extensionMethod_functionDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionDeclarationAST_enterInContext (defineExtensionMethod_functionDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  GALGAS_string var_s_4929 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemRoutineDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mReceiverTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_systemRoutineDeclarationAST temp_2 = object ;
      var_s_4929.plusAssign_operation(temp_2.getter_mReceiverTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 169)) ;
    }
  }
  const GALGAS_systemRoutineDeclarationAST temp_3 = object ;
  var_s_4929.plusAssign_operation(temp_3.getter_mSystemRoutineName (HERE).getter_string (HERE).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 171)) ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_5150 (temp_4.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_5150.hasCurrentObject ()) {
    var_s_4929.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_5150.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (enumerator_5150.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 173)) ;
    enumerator_5150.gotoNextObject () ;
  }
  var_s_4929.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 175)) ;
  const GALGAS_systemRoutineDeclarationAST temp_5 = object ;
  GALGAS_lstring var_nodeKey_5262 = GALGAS_lstring::constructor_new (var_s_4929, temp_5.getter_mSystemRoutineName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 176)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_6 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeKey_5262, temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 177)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_5419 (temp_7.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_5419.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_5419.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 180)) ;
    }
    enumerator_5419.gotoNextObject () ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_8 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.getter_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 182)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_systemRoutineDeclarationAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.getter_mReceiverTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_11.getter_mReceiverTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 184)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_12 = object ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5262, temp_12.getter_mReceiverTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 185)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_systemRoutineDeclarationAST temp_14 = object ;
    test_13 = GALGAS_bool (kIsNotEqual, temp_14.getter_mReturnTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_systemRoutineDeclarationAST temp_15 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_15.getter_mReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 188)) ;
      }
      {
      const GALGAS_systemRoutineDeclarationAST temp_16 = object ;
      ioArgument_ioGraph.setter_addEdge (var_nodeKey_5262, temp_16.getter_mReturnTypeName (HERE) COMMA_SOURCE_FILE ("declaration-svc.galgas", 189)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                               extensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_systemRoutineDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  const GALGAS_systemRoutineDeclarationAST temp_0 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("system ").add_operation (temp_0.getter_mReceiverTypeName (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)).add_operation (temp_1.getter_mSystemRoutineName (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 196)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                                           extensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_systemRoutineDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@systemRoutineDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  const GALGAS_systemRoutineDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mSystemRoutineName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                                  extensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_systemRoutineDeclarationAST_locationForErrorSignaling (defineExtensionGetter_systemRoutineDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'systemUserMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemUserMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                      const GALGAS_routineKind & constinArgument_inKind,
                                                      const GALGAS_lstring & constinArgument_inGuardName,
                                                      const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7126 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_7126 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_7126 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_7126 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_7126 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_7126.plusAssign_operation(GALGAS_string (".user."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 225)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_7126.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 227)) ;
    }
  }
  var_s_7126.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 229)) ;
  var_s_7126.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 230)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7526 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7526.hasCurrentObject ()) {
    var_s_7126.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7526.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (enumerator_7526.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 232)) ;
    enumerator_7526.gotoNextObject () ;
  }
  var_s_7126.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 234)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7126, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 235)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemUserMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemUserMangledNameFromAST ("systemUserMangledNameFromAST",
                                                                              functionWithGenericHeader_systemUserMangledNameFromAST,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              4,
                                                                              functionArgs_systemUserMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'systemImplementationMangledNameFromAST'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_systemImplementationMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                                                const GALGAS_routineKind & constinArgument_inKind,
                                                                const GALGAS_lstring & constinArgument_inGuardName,
                                                                const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_8141 ;
  switch (constinArgument_inKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_s_8141 = GALGAS_string ("section") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_s_8141 = GALGAS_string ("service") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_s_8141 = GALGAS_string ("primitive") ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_s_8141 = GALGAS_string ("\?\?\?") ;
    }
    break ;
  }
  var_s_8141.plusAssign_operation(GALGAS_string (".implementation."), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 256)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverLLVMBaseTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_8141.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 258)) ;
    }
  }
  var_s_8141.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 260)) ;
  var_s_8141.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 261)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_8551 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_8551.hasCurrentObject ()) {
    var_s_8141.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_8551.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (enumerator_8551.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
    enumerator_8551.gotoNextObject () ;
  }
  var_s_8141.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 265)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_8141, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_systemImplementationMangledNameFromAST [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_routineKind,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_systemImplementationMangledNameFromAST ("systemImplementationMangledNameFromAST",
                                                                                        functionWithGenericHeader_systemImplementationMangledNameFromAST,
                                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                                        4,
                                                                                        functionArgs_systemImplementationMangledNameFromAST) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemRoutineDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemRoutineDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioContext,
                                                                        GALGAS_declarationDecorationList & /* ioArgument_ioDecoratedDeclarationList */,
                                                                        GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                                        GALGAS_routineListIR & ioArgument_ioRoutineListIR,
                                                                        GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                        GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemRoutineDeclarationAST * object = (const cPtr_systemRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_systemRoutineDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_9805 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, temp_0.getter_mReceiverTypeName (HERE), var_selfTypeProxy_9805 COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = var_selfTypeProxy_9805.getter_isNull (SOURCE_FILE ("declaration-svc.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = var_selfTypeProxy_9805.getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 286)).getter_llvmBaseTypeName (SOURCE_FILE ("declaration-svc.galgas", 286)) ;
  }
  GALGAS_string var_receiverLLVMBaseTypeName_9862 = temp_1 ;
  GALGAS_stringset var_attributeSet_9989 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  const GALGAS_systemRoutineDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_10033 (temp_3.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_10033.hasCurrentObject ()) {
    var_attributeSet_9989.addAssign_operation (enumerator_10033.current (HERE).getter_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)) ;
    enumerator_10033.gotoNextObject () ;
  }
  GALGAS_routineKind var_routineKind_10119 ;
  const GALGAS_systemRoutineDeclarationAST temp_4 = object ;
  switch (temp_4.getter_mMode (HERE).enumValue ()) {
  case GALGAS_mode::kNotBuilt:
    break ;
  case GALGAS_mode::kEnum_sectionMode:
  case GALGAS_mode::kEnum_safeSectionMode:
    {
      var_routineKind_10119 = GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 296)) ;
    }
    break ;
  case GALGAS_mode::kEnum_serviceMode:
  case GALGAS_mode::kEnum_safeServiceMode:
    {
      var_routineKind_10119 = GALGAS_routineKind::constructor_service (SOURCE_FILE ("declaration-svc.galgas", 298)) ;
    }
    break ;
  case GALGAS_mode::kEnum_primitiveMode:
  case GALGAS_mode::kEnum_safePrimitiveMode:
    {
      var_routineKind_10119 = GALGAS_routineKind::constructor_primitive (SOURCE_FILE ("declaration-svc.galgas", 300)) ;
    }
    break ;
  case GALGAS_mode::kEnum_userMode:
  case GALGAS_mode::kEnum_safeUserMode:
  case GALGAS_mode::kEnum_anyMode:
  case GALGAS_mode::kEnum_anySafeMode:
  case GALGAS_mode::kEnum_bootMode:
  case GALGAS_mode::kEnum_guardMode:
  case GALGAS_mode::kEnum_panicMode:
  case GALGAS_mode::kEnum_safeGuardMode:
  case GALGAS_mode::kEnum_startupMode:
    {
      const GALGAS_systemRoutineDeclarationAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mSystemRoutineName (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 302)), GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("declaration-svc.galgas", 302)) ;
      var_routineKind_10119.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_7 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_8 = object ;
  GALGAS_lstring var_userRoutineMangledName_10583 = function_systemUserMangledNameFromAST (var_receiverLLVMBaseTypeName_9862, var_routineKind_10119, temp_7.getter_mSystemRoutineName (HERE), temp_8.getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
  const GALGAS_systemRoutineDeclarationAST temp_9 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_10 = object ;
  GALGAS_lstring var_implementationRoutineMangledName_10765 = function_systemImplementationMangledNameFromAST (var_receiverLLVMBaseTypeName_9862, var_routineKind_10119, temp_9.getter_mSystemRoutineName (HERE), temp_10.getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  GALGAS_routineTypedSignature var_signature_11020 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_11 = object ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_11.getter_mFormalArgumentList (HERE), var_signature_11020, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 318)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnTypeProxy_11145 ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_12 = object ;
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioContext.mProperty_mTypeMap, temp_12.getter_mReturnTypeName (HERE), var_returnTypeProxy_11145 COMMA_SOURCE_FILE ("declaration-svc.galgas", 320)) ;
  }
  GALGAS_bool var_mutating_11177 = GALGAS_bool (false) ;
  GALGAS_bool var_noUnusedWarning_11207 = GALGAS_bool (false) ;
  const GALGAS_systemRoutineDeclarationAST temp_13 = object ;
  cEnumerator_lstringlist enumerator_11256 (temp_13.getter_mAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_11256.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsEqual, enumerator_11256.current_mValue (HERE).getter_string (HERE).objectCompare (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 325)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = var_noUnusedWarning_11207.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            fixItArray16.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_11256.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 327)), GALGAS_string ("duplicated @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)), fixItArray16  COMMA_SOURCE_FILE ("declaration-svc.galgas", 327)) ;
          }
        }
        var_noUnusedWarning_11207 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_14) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsEqual, enumerator_11256.current_mValue (HERE).getter_string (HERE).objectCompare (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 330)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_mutating_11177.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              fixItArray19.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11256.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 332)), GALGAS_string ("duplicated @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)).add_operation (GALGAS_string (" attribute"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)), fixItArray19  COMMA_SOURCE_FILE ("declaration-svc.galgas", 332)) ;
            }
          }
          var_mutating_11177 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_17) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        fixItArray20.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_11256.current_mValue (HERE).getter_location (SOURCE_FILE ("declaration-svc.galgas", 336)), GALGAS_string ("unknown attribute; available attributes are @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (GALGAS_string (", @"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)).add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 337)), fixItArray20  COMMA_SOURCE_FILE ("declaration-svc.galgas", 336)) ;
      }
    }
    enumerator_11256.gotoNextObject () ;
  }
  GALGAS_routineAttributes var_attributes_11928 = GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-svc.galgas", 341)) ;
  const GALGAS_systemRoutineDeclarationAST temp_21 = object ;
  GALGAS_routineLLVMNameDict var_routineLLVMNameDict_12013 = extensionGetter_routineLLVMDictionaryForSystemRoutine (temp_21.getter_mMode (HERE), var_userRoutineMangledName_10583.getter_string (SOURCE_FILE ("declaration-svc.galgas", 344)), var_implementationRoutineMangledName_10765.getter_string (SOURCE_FILE ("declaration-svc.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 343)) ;
  const GALGAS_systemRoutineDeclarationAST temp_22 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_23 = object ;
  GALGAS_lstring var_routineMangledName_12160 = extensionGetter_mangledName (var_signature_11020, temp_22.getter_mReceiverTypeName (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 347)), temp_23.getter_mSystemRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 347)) ;
  {
  const GALGAS_systemRoutineDeclarationAST temp_24 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_25 = object ;
  ioArgument_ioContext.mProperty_mRoutineMap.setter_insertKey (var_routineMangledName_12160, temp_24.getter_mPublic (HERE), var_signature_11020, var_returnTypeProxy_11145, var_routineLLVMNameDict_12013, GALGAS_bool (true), temp_25.getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 348)) ;
  }
  const GALGAS_systemRoutineDeclarationAST temp_26 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_27 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_28 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_29 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_30 = object ;
  const GALGAS_systemRoutineDeclarationAST temp_31 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (temp_26.getter_mReceiverTypeName (HERE), temp_27.getter_mMode (HERE), GALGAS_bool (false), var_routineKind_10119, var_noUnusedWarning_11207.operator_not (SOURCE_FILE ("declaration-svc.galgas", 363)), GALGAS_bool (true), var_attributes_11928, var_implementationRoutineMangledName_10765, temp_28.getter_mFormalArgumentList (HERE), var_noUnusedWarning_11207, temp_29.getter_mInstructionList (HERE), temp_30.getter_mEndOfInstructionListLocation (HERE), temp_31.getter_mReturnTypeName (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 358)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (GALGAS_systemUserRoutineIR::constructor_new (var_userRoutineMangledName_10583, GALGAS_bool (false), GALGAS_bool (false), var_implementationRoutineMangledName_10765.getter_string (SOURCE_FILE ("declaration-svc.galgas", 377)), var_signature_11020, var_selfTypeProxy_9805, GALGAS_bool (kIsEqual, var_routineKind_10119.objectCompare (GALGAS_routineKind::constructor_section (SOURCE_FILE ("declaration-svc.galgas", 380)))), var_returnTypeProxy_11145  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373))  COMMA_SOURCE_FILE ("declaration-svc.galgas", 373)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemRoutineDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_systemRoutineDeclarationAST.mSlotID,
                                       extensionMethod_systemRoutineDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemRoutineDeclarationAST_enterInContext (defineExtensionMethod_systemRoutineDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'llvmFunctionPrototype'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmFunctionPrototype (const GALGAS_string & constinArgument_inReturnTypeLLVMName,
                                              const GALGAS_string & constinArgument_inFunctionName,
                                              const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_routineFormalArgumentListIR & constinArgument_inFormalArgumentListForGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inReturnTypeLLVMName ;
  result_result.plusAssign_operation(GALGAS_string (" @").add_operation (constinArgument_inFunctionName, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 412)) ;
  GALGAS_bool var_first_14555 = GALGAS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("declaration-svc.galgas", 414)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inReceiverType.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)).add_operation (GALGAS_string (" * %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 415)) ;
      var_first_14555 = GALGAS_bool (false) ;
    }
  }
  cEnumerator_routineFormalArgumentListIR enumerator_14732 (constinArgument_inFormalArgumentListForGeneration, kENUMERATION_UP) ;
  while (enumerator_14732.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_first_14555.boolEnum () ;
      if (kBoolTrue == test_1) {
        var_first_14555 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_1) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 422)) ;
    }
    switch (enumerator_14732.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14732.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)).add_operation (enumerator_14732.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 426)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14732.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)).add_operation (function_llvmNameForLocalVariable (enumerator_14732.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 428)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        result_result.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_14732.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)).add_operation (function_llvmNameForLocalVariable (enumerator_14732.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 430)) ;
      }
      break ;
    }
    enumerator_14732.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 433)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmFunctionPrototype [5] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListIR,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmFunctionPrototype ("llvmFunctionPrototype",
                                                                       functionWithGenericHeader_llvmFunctionPrototype,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       4,
                                                                       functionArgs_llvmFunctionPrototype) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSectionDispatcher'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSectionDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                        const GALGAS_string constinArgument_inTargetName,
                                        const GALGAS_targetParameters constinArgument_inTargetParameters,
                                        GALGAS_string & ioArgument_ioAssemblerCode,
                                        const GALGAS_sectionIRlist constinArgument_inSectionIRlist,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_sectionIRlist enumerator_15637 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_15610 ((uint32_t) 0) ;
  while (enumerator_15637.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_15637.current (HERE).getter_invocationFromAnyMode (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_15700 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromAnyMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 447)) ;
        var_s_15700 = var_s_15700.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15637.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 451)) ;
        var_s_15700 = var_s_15700.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15637.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 452)) ;
        var_s_15700 = var_s_15700.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15610.getter_string (SOURCE_FILE ("declaration-svc.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 453)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_15700, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 454)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_16180 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherInvocationFromUserMode (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 456)) ;
      var_s_16180 = var_s_16180.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_15637.current (HERE).getter_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 460)) ;
      var_s_16180 = var_s_16180.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_15637.current (HERE).getter_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 461)) ;
      var_s_16180 = var_s_16180.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_15610.getter_string (SOURCE_FILE ("declaration-svc.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 462)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16180, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 463)) ;
    }
    enumerator_15637.gotoNextObject () ;
    index_15610.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 445)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 466)) ;
  cEnumerator_sectionIRlist enumerator_16891 (constinArgument_inSectionIRlist, kENUMERATION_UP) ;
  GALGAS_uint index_16815 ((uint32_t) 0) ;
  while (enumerator_16891.hasCurrentObject ()) {
    GALGAS_string var_s_16910 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)).add_operation (constinArgument_inTargetParameters.getter_mSectionDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 471)) ;
    var_s_16910 = var_s_16910.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_16891.current_mSectionCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 475)) ;
    var_s_16910 = var_s_16910.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_16891.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 476)) ;
    var_s_16910 = var_s_16910.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_16815.getter_string (SOURCE_FILE ("declaration-svc.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 477)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_16910, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 478)) ;
    enumerator_16891.gotoNextObject () ;
    index_16815.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 470)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 480)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)).add_operation (constinArgument_inTargetParameters.getter_mSectionHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 481)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 485)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 486)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generatePrimitiveAndServiceDispatcher'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generatePrimitiveAndServiceDispatcher (const GALGAS_string constinArgument_inCurrentDirectory,
                                                    const GALGAS_string constinArgument_inTargetName,
                                                    GALGAS_string & ioArgument_ioAssemblerCode,
                                                    const GALGAS_primitiveAndServiceIRlist constinArgument_inServiceList,
                                                    const GALGAS_targetParameters constinArgument_inTargetParameters,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)).add_operation (constinArgument_inTargetParameters.getter_mServiceHandler (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 499)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_18236 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_18211 ((uint32_t) 0) ;
  while (enumerator_18236.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_18236.current (HERE).getter_mHasReturnValue (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_18293 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryWithReturnValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 506)) ;
        var_s_18293 = var_s_18293.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18236.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 510)) ;
        var_s_18293 = var_s_18293.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18211.getter_string (SOURCE_FILE ("declaration-svc.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 511)) ;
        ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18293, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 512)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_s_18638 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)).add_operation (constinArgument_inTargetParameters.getter_mServiceEntryNoReturnedValue (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 514)) ;
      var_s_18638 = var_s_18638.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_18236.current (HERE).getter_mCallName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 518)) ;
      var_s_18638 = var_s_18638.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_18211.getter_string (SOURCE_FILE ("declaration-svc.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 519)) ;
      ioArgument_ioAssemblerCode.plusAssign_operation(var_s_18638, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 520)) ;
    }
    enumerator_18236.gotoNextObject () ;
    index_18211.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 504)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherHeader (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 523)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_19162 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_19137 ((uint32_t) 0) ;
  while (enumerator_19162.hasCurrentObject ()) {
    GALGAS_string var_s_19181 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)).add_operation (constinArgument_inTargetParameters.getter_mServiceDispatcherEntry (HERE).getter_string (SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 528)) ;
    var_s_19181 = var_s_19181.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_19162.current (HERE).getter_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 532)) ;
    var_s_19181 = var_s_19181.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_19137.getter_string (SOURCE_FILE ("declaration-svc.galgas", 533)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 533)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_19181, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 534)) ;
    enumerator_19162.gotoNextObject () ;
    index_19137.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 527)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 536)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemUserRoutineIR_enterAccessibleEntities (const cPtr_abstractRoutineIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  const GALGAS_systemUserRoutineIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (temp_0.getter_mMangledImplementationName (HERE)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 557)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                extensionMethod_systemUserRoutineIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemUserRoutineIR_enterAccessibleEntities (defineExtensionMethod_systemUserRoutineIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR svcDeclarationGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemUserRoutineIR_svcDeclarationGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                          GALGAS_primitiveAndServiceIRlist & ioArgument_ioPrimitiveAndServiceList,
                                                                          GALGAS_sectionIRlist & ioArgument_ioSectionList,
                                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  const GALGAS_systemUserRoutineIR temp_0 = object ;
  GALGAS_string var_userMangledName_20750 = temp_0.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 567)) ;
  const GALGAS_systemUserRoutineIR temp_1 = object ;
  GALGAS_string var_implementationMangledName_20835 = temp_1.getter_mMangledImplementationName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 568)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_systemUserRoutineIR temp_3 = object ;
    test_2 = temp_3.getter_mIsSection (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioSectionList.addAssign_operation (var_userMangledName_20750, var_implementationMangledName_20835, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 570)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioPrimitiveAndServiceList.addAssign_operation (var_userMangledName_20750, var_implementationMangledName_20835, GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-svc.galgas", 572)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration (void) {
  enterExtensionMethod_svcDeclarationGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                                 extensionMethod_systemUserRoutineIR_svcDeclarationGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemUserRoutineIR_svcDeclarationGeneration (defineExtensionMethod_systemUserRoutineIR_svcDeclarationGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@systemUserRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_systemUserRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_systemUserRoutineIR * object = (const cPtr_systemUserRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_systemUserRoutineIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("declare "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 583)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_systemUserRoutineIR temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 584)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("void"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 585)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_systemUserRoutineIR temp_2 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 587)) ;
  }
  const GALGAS_systemUserRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 589)) ;
  GALGAS_bool var_first_21678 = GALGAS_bool (true) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_systemUserRoutineIR temp_5 = object ;
    test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mReceiverTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-svc.galgas", 591)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_systemUserRoutineIR temp_6 = object ;
      ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_6.getter_mReceiverTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)).add_operation (GALGAS_string ("* %receiver"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 592)) ;
      var_first_21678 = GALGAS_bool (false) ;
    }
  }
  const GALGAS_systemUserRoutineIR temp_7 = object ;
  cEnumerator_routineTypedSignature enumerator_21869 (temp_7.getter_mFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_21869.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_first_21678.boolEnum () ;
      if (kBoolTrue == test_8) {
        var_first_21678 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 599)) ;
    }
    switch (enumerator_21869.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_21869.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 603)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_21869.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 605)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_21869.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 607)) ;
      }
      break ;
    }
    enumerator_21869.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 610)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_systemUserRoutineIR.mSlotID,
                                           extensionMethod_systemUserRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_systemUserRoutineIR_llvmCodeGeneration (defineExtensionMethod_systemUserRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkRequiredProcedures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkRequiredProcedures (const GALGAS_ast constinArgument_inAST,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_location /* constinArgument_inEndOfSourceFile */,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_requiredFunctionDeclarationListAST enumerator_2276 (constinArgument_inAST.getter_mRequiredFunctionListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2276.hasCurrentObject ()) {
    GALGAS_lstring var_requiredFunctionSignature_2313 = extensionGetter_routineSignature (enumerator_2276.current (HERE).getter_mFormalArgumentList (HERE), enumerator_2276.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 61)) ;
    GALGAS_string var_requiredFunctionMangledName_2431 = enumerator_2276.current (HERE).getter_mName (HERE).getter_string (HERE).add_operation (var_requiredFunctionSignature_2313.getter_string (SOURCE_FILE ("declaration-required-proc.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 62)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_hasKey (var_requiredFunctionMangledName_2431 COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 63)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 63)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2276.current (HERE).getter_mName (HERE).getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_bool var_implementedPublic_2765 ;
      GALGAS_routineTypedSignature var_implementedSignature_2799 ;
      GALGAS_unifiedTypeMap_2D_proxy var_implementedReturnTypeProxy_2839 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_2913 ;
      GALGAS_bool var_implementedIsExported_2948 ;
      GALGAS_mode var_implementedMode_2977 ;
      constinArgument_inContext.getter_mRoutineMap (HERE).method_searchKey (var_requiredFunctionMangledName_2431.getter_nowhere (SOURCE_FILE ("declaration-required-proc.galgas", 67)), var_implementedPublic_2765, var_implementedSignature_2799, var_implementedReturnTypeProxy_2839, var_implementedModeDictionary_2913, var_implementedIsExported_2948, var_implementedMode_2977, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
      GALGAS_location var_errorLocation_3009 = constinArgument_inContext.getter_mRoutineMap (HERE).getter_locationForKey (var_requiredFunctionMangledName_2431, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 75)) ;
      GALGAS_routineTypedSignature var_requiredTypedSignature_3221 ;
      {
      routine_routineTypedSignature_32_ (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_2276.current (HERE).getter_mFormalArgumentList (HERE), var_requiredTypedSignature_3221, inCompiler  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 77)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_typedString (var_requiredTypedSignature_3221, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)).objectCompare (extensionGetter_typedString (var_implementedSignature_2799, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 78)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("function signature should be ").add_operation (extensionGetter_typedString (var_requiredTypedSignature_3221, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)).add_operation (GALGAS_string (" (as required by required function declaration)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 80)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_implementedReturnTypeProxy_2839.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-required-proc.galgas", 83)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("function should not return a value (as required by required function declaration)"), fixItArray5  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 84)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_implementedMode_2977.objectCompare (enumerator_2276.current (HERE).getter_mExecutionMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("required mode is '").add_operation (extensionGetter_string (enumerator_2276.current (HERE).getter_mExecutionMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)), fixItArray7  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 96)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = var_implementedPublic_2765.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 99)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("function should be public (as required by required function declaration)"), fixItArray9  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 100)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        GALGAS_bool test_11 = enumerator_2276.current (HERE).getter_mIsExported (HERE) ;
        if (kBoolTrue == test_11.boolEnum ()) {
          test_11 = var_implementedIsExported_2948.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 103)) ;
        }
        test_10 = test_11.boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItInsertAfter, GALGAS_string (" @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 106))) ;
          inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("missing @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)).add_operation (GALGAS_string (" attribute (required function declaration names it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 105)), fixItArray12  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 104)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          GALGAS_bool test_14 = var_implementedIsExported_2948 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = enumerator_2276.current (HERE).getter_mIsExported (HERE).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 107)) ;
          }
          test_13 = test_14.boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_errorLocation_3009, GALGAS_string ("incorrect @").add_operation (function_exportedAttribute (inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)).add_operation (GALGAS_string (" attribute (required function declaration does not name it)"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 109)), fixItArray15  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 108)) ;
          }
        }
      }
    }
    enumerator_2276.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

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
    const GALGAS_externRoutineIR temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mReturnType (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 176)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" void"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 177)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_externRoutineIR temp_2 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.getter_mReturnType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 179)) ;
  }
  const GALGAS_externRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @").add_operation (temp_3.getter_mRoutineMangledName (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 181)) ;
  const GALGAS_externRoutineIR temp_4 = object ;
  cEnumerator_routineFormalArgumentListIR enumerator_7185 (temp_4.getter_mFormalArgumentListForGeneration (HERE), kENUMERATION_UP) ;
  while (enumerator_7185.hasCurrentObject ()) {
    switch (enumerator_7185.current_mFormalArgumentKind (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7185.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (GALGAS_string (" %in."), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)).add_operation (enumerator_7185.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 186)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7185.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)).add_operation (function_llvmNameForLocalVariable (enumerator_7185.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 188)) ;
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) enumerator_7185.current_mFormalArgumentType (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)).add_operation (function_llvmNameForLocalVariable (enumerator_7185.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 190)) ;
      }
      break ;
    }
    if (enumerator_7185.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 193)) ;
    }
    enumerator_7185.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)).add_operation (GALGAS_string ("; declared by extern Omnibus function declaration\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 195)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_externRoutineIR.mSlotID,
                                           extensionMethod_externRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineIR_llvmCodeGeneration (defineExtensionMethod_externRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_isrDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  GALGAS_lstring var_receiverTypeName_2146 = function_omnibusTypeSpecificNameForDriver (temp_0.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 53)) ;
  const GALGAS_isrDeclarationAST temp_1 = object ;
  GALGAS_string var_s_2209 = var_receiverTypeName_2146.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (temp_1.getter_mISRName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 54)) ;
  {
  const GALGAS_isrDeclarationAST temp_2 = object ;
  const GALGAS_isrDeclarationAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_2209, temp_2.getter_mISRName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)), temp_3, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 55)) ;
  }
  const GALGAS_isrDeclarationAST temp_4 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_4.getter_mISRInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 57)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_receiverTypeName_2146.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGraph.setter_noteNode (var_receiverTypeName_2146 COMMA_SOURCE_FILE ("declaration-isr.galgas", 59)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_isrDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                               extensionMethod_isrDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_isrDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_isrDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  GALGAS_lstring var_receiverTypeName_2740 = function_omnibusTypeSpecificNameForDriver (temp_0.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 66)) ;
  const GALGAS_isrDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("function ").add_operation (var_receiverTypeName_2740.getter_string (SOURCE_FILE ("declaration-isr.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)).add_operation (temp_1.getter_mISRName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 67)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                                           extensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_isrDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_isrDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@isrDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_isrDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mISRName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_isrDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                                  extensionGetter_isrDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_isrDeclarationAST_locationForErrorSignaling (defineExtensionGetter_isrDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@isrDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_isrDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                              GALGAS_semanticContext & /* ioArgument_ioContext */,
                                                              GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                              GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                                              GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                              GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                              GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                              GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                              GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_isrDeclarationAST * object = (const cPtr_isrDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_isrDeclarationAST) ;
  const GALGAS_isrDeclarationAST temp_0 = object ;
  const GALGAS_isrDeclarationAST temp_1 = object ;
  const GALGAS_isrDeclarationAST temp_2 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedISRDeclaration::constructor_new (temp_0.getter_mISRName (HERE), temp_1.getter_mMode (HERE), temp_2.getter_mDriverName (HERE)  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 91)) ;
  const GALGAS_isrDeclarationAST temp_3 = object ;
  GALGAS_lstring var_driverLLVMBaseTypeName_4296 = function_llvmDriverNameFromName (temp_3.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 93)) ;
  const GALGAS_isrDeclarationAST temp_4 = object ;
  GALGAS_lstring var_isrRoutineMangledName_4369 = function_routineMangledNameFromAST (var_driverLLVMBaseTypeName_4296.getter_string (SOURCE_FILE ("declaration-isr.galgas", 94)), temp_4.getter_mISRName (HERE), GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 94)) ;
  const GALGAS_isrDeclarationAST temp_5 = object ;
  const GALGAS_isrDeclarationAST temp_6 = object ;
  const GALGAS_isrDeclarationAST temp_7 = object ;
  const GALGAS_isrDeclarationAST temp_8 = object ;
  ioArgument_ioDecoratedRoutineList.addAssign_operation (function_omnibusTypeSpecificNameForDriver (temp_5.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 96)), temp_6.getter_mMode (HERE), GALGAS_bool (true), GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-isr.galgas", 99)), GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineAttributes::constructor_mutating (SOURCE_FILE ("declaration-isr.galgas", 102)), var_isrRoutineMangledName_4369, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("declaration-isr.galgas", 104)), GALGAS_bool (true), temp_7.getter_mISRInstructionList (HERE), temp_8.getter_mEndOfISRDeclaration (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-isr.galgas", 108))  COMMA_SOURCE_FILE ("declaration-isr.galgas", 95)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_isrDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_isrDeclarationAST.mSlotID,
                                       extensionMethod_isrDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_isrDeclarationAST_enterInContext (defineExtensionMethod_isrDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@decoratedISRDeclaration semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_decoratedISRDeclaration_semanticAnalysis (const cPtr_abstractDecoratedDeclaration * inObject,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decoratedISRDeclaration * object = (const cPtr_decoratedISRDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_decoratedISRDeclaration) ;
  GALGAS_omnibusType var_selfType_5926 ;
  const GALGAS_decoratedISRDeclaration temp_0 = object ;
  constinArgument_inContext.getter_mTypeMap (HERE).method_searchKey (function_omnibusTypeSpecificNameForDriver (temp_0.getter_mDriverName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)), var_selfType_5926, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 129)) ;
  const GALGAS_decoratedISRDeclaration temp_1 = object ;
  GALGAS_interruptionPanicCode joker_6011 ; // Joker input parameter
  constinArgument_inContext.getter_mAvailableInterruptMap (HERE).method_searchKey (temp_1.getter_mISRName (HERE), joker_6011, inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 131)) ;
  {
  const GALGAS_decoratedISRDeclaration temp_2 = object ;
  const GALGAS_decoratedISRDeclaration temp_3 = object ;
  const GALGAS_decoratedISRDeclaration temp_4 = object ;
  ioArgument_ioIntermediateCodeStruct.mProperty_mInterruptMapIR.setter_insertKey (temp_2.getter_mISRName (HERE), var_selfType_5926, temp_3.getter_mDriverName (HERE).getter_string (SOURCE_FILE ("declaration-isr.galgas", 135)), temp_4.getter_mMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-isr.galgas", 132)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_decoratedISRDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_decoratedISRDeclaration.mSlotID,
                                         extensionMethod_decoratedISRDeclaration_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_decoratedISRDeclaration_semanticAnalysis (defineExtensionMethod_decoratedISRDeclaration_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardDeclarationAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  GALGAS_string var_s_3160 = GALGAS_string ("guard.") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_guardDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mReceiverTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_guardDeclarationAST temp_2 = object ;
      var_s_3160.plusAssign_operation(temp_2.getter_mReceiverTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 87)) ;
    }
  }
  const GALGAS_guardDeclarationAST temp_3 = object ;
  var_s_3160.plusAssign_operation(temp_3.getter_mGuardName (HERE).getter_string (HERE).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 89)) ;
  const GALGAS_guardDeclarationAST temp_4 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_3384 (temp_4.getter_mGuardFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_3384.hasCurrentObject ()) {
    var_s_3160.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3384.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (enumerator_3384.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 91)) ;
    enumerator_3384.gotoNextObject () ;
  }
  var_s_3160.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 93)) ;
  {
  const GALGAS_guardDeclarationAST temp_5 = object ;
  const GALGAS_guardDeclarationAST temp_6 = object ;
  ioArgument_ioGraph.setter_addNode (GALGAS_lstring::constructor_new (var_s_3160, temp_5.getter_mGuardName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)), temp_6, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 94)) ;
  }
  const GALGAS_guardDeclarationAST temp_7 = object ;
  cEnumerator_routineFormalArgumentListAST enumerator_3622 (temp_7.getter_mGuardFormalArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_3622.hasCurrentObject ()) {
    {
    ioArgument_ioGraph.setter_noteNode (enumerator_3622.current_mFormalArgumentTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 97)) ;
    }
    enumerator_3622.gotoNextObject () ;
  }
  const GALGAS_guardDeclarationAST temp_8 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_8.getter_mGuardInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 99)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_guardDeclarationAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.getter_mReceiverTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      const GALGAS_guardDeclarationAST temp_11 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_11.getter_mReceiverTypeName (HERE) COMMA_SOURCE_FILE ("declaration-guard.galgas", 101)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardDeclarationAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                               extensionMethod_guardDeclarationAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardDeclarationAST_enterInPrecedenceGraph (defineExtensionMethod_guardDeclarationAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  const GALGAS_guardDeclarationAST temp_0 = object ;
  const GALGAS_guardDeclarationAST temp_1 = object ;
  result_result = GALGAS_string ("guard ").add_operation (temp_0.getter_mReceiverTypeName (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)).add_operation (temp_1.getter_mGuardName (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 108)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                                           extensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_guardDeclarationAST_keyRepresentationForErrorSignaling (defineExtensionGetter_guardDeclarationAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@guardDeclarationAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_guardDeclarationAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  const GALGAS_guardDeclarationAST temp_0 = object ;
  result_result = temp_0.getter_mGuardName (HERE).getter_location (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_guardDeclarationAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                                  extensionGetter_guardDeclarationAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_guardDeclarationAST_locationForErrorSignaling (defineExtensionGetter_guardDeclarationAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@guardDeclarationAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_guardDeclarationAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
                                                                GALGAS_semanticContext & ioArgument_ioContext,
                                                                GALGAS_declarationDecorationList & ioArgument_ioDecoratedDeclarationList,
                                                                GALGAS_decoratedRegularRoutineList & /* ioArgument_ioDecoratedRoutineList */,
                                                                GALGAS_routineListIR & /* ioArgument_ioRoutineListIR */,
                                                                GALGAS_staticListInitializationMap & /* ioArgument_ioStaticListValueMap */,
                                                                GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                GALGAS_controlRegisterUserAccesMapAST & /* ioArgument_ioControlRegisterUserAccesMapAST */,
                                                                GALGAS_userLLVMTypeDefinitionListIR & /* ioArgument_ioUserLLVMTypeDefinitionListIR */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_guardDeclarationAST * object = (const cPtr_guardDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_guardDeclarationAST) ;
  GALGAS_routineTypedSignature var_signature_5436 ;
  {
  const GALGAS_guardDeclarationAST temp_0 = object ;
  routine_routineTypedSignature (ioArgument_ioContext.mProperty_mTypeMap, temp_0.getter_mGuardFormalArgumentList (HERE), var_signature_5436, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 132)) ;
  }
  const GALGAS_guardDeclarationAST temp_1 = object ;
  const GALGAS_guardDeclarationAST temp_2 = object ;
  GALGAS_lstring var_guardMangledName_5484 = extensionGetter_mangledName (var_signature_5436, temp_1.getter_mReceiverTypeName (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 134)), temp_2.getter_mGuardName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 134)) ;
  const GALGAS_guardDeclarationAST temp_3 = object ;
  const GALGAS_guardDeclarationAST temp_4 = object ;
  const GALGAS_guardDeclarationAST temp_5 = object ;
  GALGAS_lstring var_guardUserLLVMName_5641 = function_guardUserLLVMName (temp_3.getter_mReceiverLLVMBaseTypeName (HERE), temp_4.getter_mGuardName (HERE), temp_5.getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 136)) ;
  const GALGAS_guardDeclarationAST temp_6 = object ;
  const GALGAS_guardDeclarationAST temp_7 = object ;
  const GALGAS_guardDeclarationAST temp_8 = object ;
  GALGAS_lstring var_guardImplementationLLVMName_5837 = function_guardImplementationLLVMName (temp_6.getter_mReceiverLLVMBaseTypeName (HERE), temp_7.getter_mGuardName (HERE), temp_8.getter_mGuardFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 142)) ;
  {
  const GALGAS_guardDeclarationAST temp_9 = object ;
  ioArgument_ioContext.mProperty_mGuardMap.setter_insertKey (var_guardMangledName_5484, temp_9.getter_mIsPublic (HERE), var_signature_5436, var_guardUserLLVMName_5641, var_guardImplementationLLVMName_5837, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 147)) ;
  }
  const GALGAS_guardDeclarationAST temp_10 = object ;
  const GALGAS_guardDeclarationAST temp_11 = object ;
  const GALGAS_guardDeclarationAST temp_12 = object ;
  const GALGAS_guardDeclarationAST temp_13 = object ;
  const GALGAS_guardDeclarationAST temp_14 = object ;
  const GALGAS_guardDeclarationAST temp_15 = object ;
  const GALGAS_guardDeclarationAST temp_16 = object ;
  const GALGAS_guardDeclarationAST temp_17 = object ;
  ioArgument_ioDecoratedDeclarationList.addAssign_operation (GALGAS_decoratedGuardDeclaration::constructor_new (temp_10.getter_mReceiverTypeName (HERE), temp_11.getter_mGuardName (HERE), temp_12.getter_mIsPublic (HERE), temp_13.getter_mGuardAttributeList (HERE), temp_14.getter_mGuardFormalArgumentList (HERE), temp_15.getter_mGuardKind (HERE), temp_16.getter_mGuardInstructionList (HERE), temp_17.getter_mEndOfGuardDeclaration (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 154)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_guardDeclarationAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_guardDeclarationAST.mSlotID,
                                       extensionMethod_guardDeclarationAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_guardDeclarationAST_enterInContext (defineExtensionMethod_guardDeclarationAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'guardUserLLVMName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_guardUserLLVMName (const GALGAS_string & constinArgument_inReceiverLLVMBaseTypeName,
                                           const GALGAS_lstring & constinArgument_inGuardName,
                                           const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_7013 = GALGAS_string ("guard.user.") ;
  var_s_7013.plusAssign_operation(constinArgument_inReceiverLLVMBaseTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 175)) ;
  var_s_7013.plusAssign_operation(constinArgument_inGuardName.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 176)) ;
  var_s_7013.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 177)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_7198 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_7198.hasCurrentObject ()) {
    var_s_7013.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_7198.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (enumerator_7198.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 179)) ;
    enumerator_7198.gotoNextObject () ;
  }
  var_s_7013.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 181)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_7013, constinArgument_inGuardName.getter_location (HERE)  COMMA_SOURCE_FILE ("declaration-guard.galgas", 182)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_guardUserLLVMName [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_guardUserLLVMName ("guardUserLLVMName",
                                                                   functionWithGenericHeader_guardUserLLVMName,
                                                                   & kTypeDescriptor_GALGAS_lstring,
                                                                   3,
                                                                   functionArgs_guardUserLLVMName) ;

