#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-8.h"


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
  GALGAS_lstring var_intIntOp_3901 = function_combineTypeNamesForInfixOperator (constinArgument_inIntegerTypeName.mProperty_string, constinArgument_inIntegerTypeName.mProperty_string, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 82)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_4010 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, constinArgument_inIntegerTypeName, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 83)) ;
  ioArgument_ioContext.mProperty_mLiteralIntegerType = var_selfTypeProxy_4010 ;
  {
  ioArgument_ioContext.mProperty_mEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.mProperty_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_eq (SOURCE_FILE ("type-literal-integer.galgas", 89))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 86)) ;
  }
  {
  ioArgument_ioContext.mProperty_mNonEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.mProperty_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_ne (SOURCE_FILE ("type-literal-integer.galgas", 94))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 91)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictInfOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.mProperty_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_slt (SOURCE_FILE ("type-literal-integer.galgas", 99))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 96)) ;
  }
  {
  ioArgument_ioContext.mProperty_mInfEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.mProperty_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sle (SOURCE_FILE ("type-literal-integer.galgas", 104))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 101)) ;
  }
  {
  ioArgument_ioContext.mProperty_mStrictSupOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.mProperty_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sgt (SOURCE_FILE ("type-literal-integer.galgas", 109))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 106)) ;
  }
  {
  ioArgument_ioContext.mProperty_mSupEqualOperatorMap.setter_insertKey (var_intIntOp_3901, ioArgument_ioContext.mProperty_mBooleanType, GALGAS_literal_5F_literal_5F_integerInfixOperation::constructor_new (GALGAS_llvmBinaryOperation::constructor_icmp_5F_sge (SOURCE_FILE ("type-literal-integer.galgas", 114))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 111)) ;
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
  result_outLocation = object->mProperty_mLiteralStringTypeName.mProperty_location ;
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
  result_outLocation = object->mProperty_mOpaqueTypeName.mProperty_location ;
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
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4254.current_mValue (HERE).mProperty_string.objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_flags_4214.operator_and (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 90)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4254.current_mValue (HERE).getter_location (SOURCE_FILE ("type-opaque-declaration.galgas", 91)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 91)) ;
      }else if (kBoolFalse == test_1) {
        var_flags_4214 = var_flags_4214.operator_or (function_instanciableFlag (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_4254.current_mValue (HERE).mProperty_string.objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
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
  GALGAS_staticStringMap joker_5432 = GALGAS_staticStringMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 123)) ;
  GALGAS_objectIR var_sizeExpressionIR_5611 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSizeExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 115)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_lstring::constructor_new (object->mProperty_mOpaqueTypeName.mProperty_string.add_operation (GALGAS_string (" init"), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), object->mProperty_mOpaqueTypeName.mProperty_location  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 118)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 119)), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("type-opaque-declaration.galgas", 121)), var_temporaries_4929, joker_5432, var_variableMap_5027, var_universalMap_5087, var_allocaList_4883, var_initInstructionGenerationList_4853, var_sizeExpressionIR_5611, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 114)) ;
  GALGAS_bool test_7 = GALGAS_bool (kIsStrictSup, var_allocaList_4883.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 130)).add_operation (var_initInstructionGenerationList_4853.getter_length (SOURCE_FILE ("type-opaque-declaration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 130)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_7.boolEnum ()) {
    test_7 = var_sizeExpressionIR_5611.getter_isLiteralInteger (SOURCE_FILE ("type-opaque-declaration.galgas", 130)).operator_not (SOURCE_FILE ("type-opaque-declaration.galgas", 130)) ;
  }
  const enumGalgasBool test_8 = test_7.boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mSizeExpressionLocation, GALGAS_string ("array size expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 131)) ;
  }else if (kBoolFalse == test_8) {
    GALGAS_bigint var_bitSize_5878 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_5857_1 ; // Joker input parameter
    var_sizeExpressionIR_5611.method_literalInteger (joker_5857_1, var_bitSize_5878, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 133)) ;
    {
    ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (object->mProperty_mOpaqueTypeName, GALGAS_typeKind::constructor_opaque (var_bitSize_5878, var_flags_4214  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 134)) ;
    }
    {
    ioArgument_ioContext.mProperty_mConstructorMap.setter_insertKey (object->mProperty_mOpaqueTypeName, GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 141))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 139)) ;
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
  GALGAS_string var_typeDumpFilePath_16745 = constinArgument_inSourceFile.mProperty_string.add_operation (GALGAS_string (".control-registers.html"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 438)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_writeControlRegisterHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16895 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-control-register.galgas", 440)) ;
    cEnumerator_controlRegisterMap enumerator_16935 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_16935.hasCurrentObject ()) {
      var_firstLetterSet_16895.addAssign_operation (enumerator_16935.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 442))  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 442)) ;
      enumerator_16935.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_17043 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_17077 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_controlRegisterMap enumerator_17124 (constinArgument_inControlRegisterMap, kENUMERATION_UP) ;
    while (enumerator_17124.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_17077.objectCompare (enumerator_17124.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 447)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_17077 = enumerator_17124.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 448)) ;
        var_tableOfTypeString_17043.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_17077.getter_uint (SOURCE_FILE ("declaration-control-register.galgas", 449)).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (var_currentFirstLetter_17077.getter_string (SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 449)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_17124.current_mArraySize (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_tableOfTypeString_17043.plusAssign_operation(function_linkForControlRegister (enumerator_17124.current_lkey (HERE).mProperty_string, inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 452)) ;
      }else if (kBoolFalse == test_2) {
        cEnumerator_range enumerator_17569 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_17124.current_mArraySize (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 454))), kENUMERATION_UP) ;
        while (enumerator_17569.hasCurrentObject ()) {
          var_tableOfTypeString_17043.plusAssign_operation(function_linkForControlRegister (enumerator_17124.current_lkey (HERE).mProperty_string.add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (enumerator_17569.current (HERE).getter_string (SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)).add_operation (GALGAS_string ("<br/>"), inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 455)) ;
          enumerator_17569.gotoNextObject () ;
        }
      }
      enumerator_17124.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_17734 = GALGAS_string (filewrapperTemplate_controlRegisterDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mProperty_string.getter_lastPathComponent (SOURCE_FILE ("declaration-control-register.galgas", 460)), constinArgument_inControlRegisterMap, var_firstLetterSet_16895, var_tableOfTypeString_17043 COMMA_SOURCE_FILE ("declaration-control-register.galgas", 459))) ;
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
        result << enumerator_1588.current_lkey (HERE).mProperty_string.stringValue () ;
        result << "\">" ;
        result << enumerator_1588.current_lkey (HERE).mProperty_string.stringValue () ;
        result << "</a>" ;
      }else if (kBoolFalse == test_0) {
        GALGAS_uint index_1759_ (0) ;
        if (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)).isValid ()) {
          cEnumerator_uintlist enumerator_1759 (function_arrayIndexListFor (enumerator_1588.current_mArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 85)), kENUMERATION_UP) ;
          while (enumerator_1759.hasCurrentObject ()) {
            result << "<a name=\"" ;
            result << enumerator_1588.current_lkey (HERE).mProperty_string.stringValue () ;
            result << " [" ;
            result << enumerator_1759.current_mValue (HERE).getter_string (SOURCE_FILE ("controlRegisterDump.html.galgasTemplate", 86)).stringValue () ;
            result << "]\">" ;
            result << enumerator_1588.current_lkey (HERE).mProperty_string.stringValue () ;
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
  result_outLocation = object->mProperty_mConstantName.mProperty_location ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mConstantTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
  GALGAS_unifiedSymbolMap var_variableMap_4689 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4749 ;
  {
  routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 98)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 100)), var_variableMap_4689, var_universalMap_4749, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 96)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_annotationType_4818 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mConstantTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType_4818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 107)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType_4818 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, object->mProperty_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 109)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5065 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 112)) ;
  GALGAS_instructionListIR var_instructionGenerationList_5123 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 113)) ;
  GALGAS_allocaList var_allocaList_5153 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 114)) ;
  GALGAS_objectIR var_expressionResult_5666 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 116)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 119)), var_annotationType_4818, ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-global-constant.galgas", 122)), var_temporaries_5065, ioArgument_ioGlobalLiteralStringMap, var_variableMap_4689, var_universalMap_4749, var_allocaList_5153, var_instructionGenerationList_5123, var_expressionResult_5666, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 115)) ;
  GALGAS_objectIR var_result_5719 = function_checkAssignmentCompatibility (var_expressionResult_5666, var_annotationType_4818, object->mProperty_mConstantName.mProperty_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 132)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_5123.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_5153.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_result_5719, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("declaration-global-constant.galgas", 140)), GALGAS_string ("source expression cannot be statically computed"), fixItArray4  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 140)) ;
  }
  {
  ioArgument_ioContext.mProperty_mGlobalConstantMap.setter_insertKey (object->mProperty_mConstantName, var_result_5719, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)) ;
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
  GALGAS_string var_typeDumpFilePath_7232 = constinArgument_inSourceFile.mProperty_string.add_operation (GALGAS_string (".global-constants.html"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 164)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitGlobalConstantHTMLDumpFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_7379 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 166)) ;
    cEnumerator_globalConstantMap enumerator_7418 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7418.hasCurrentObject ()) {
      var_firstLetterSet_7379.addAssign_operation (enumerator_7418.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 168))  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 168)) ;
      enumerator_7418.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_7526 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_7560 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_globalConstantMap enumerator_7606 (inArgument_inGlobalConstantMap, kENUMERATION_UP) ;
    while (enumerator_7606.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_7560.objectCompare (enumerator_7606.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_7560 = enumerator_7606.current_lkey (HERE).mProperty_string.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 174)) ;
        var_tableOfTypeString_7526.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_7560.getter_uint (SOURCE_FILE ("declaration-global-constant.galgas", 175)).getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (var_currentFirstLetter_7560.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 175)) ;
      }
      var_tableOfTypeString_7526.plusAssign_operation(function_linkForGlobalConstant (enumerator_7606.current_lkey (HERE).mProperty_string, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 177)) ;
      enumerator_7606.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_8002 = GALGAS_string (filewrapperTemplate_constantDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.mProperty_string.getter_lastPathComponent (SOURCE_FILE ("declaration-global-constant.galgas", 180)), inArgument_inGlobalConstantMap, var_firstLetterSet_7379, var_tableOfTypeString_7526 COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 179))) ;
    GALGAS_bool joker_8246 ; // Joker input parameter
    var_typeDumpString_8002.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_7232, joker_8246, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 185)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_7232, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 187)) ;
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
      result << enumerator_1375.current_lkey (HERE).mProperty_string.stringValue () ;
      result << "\">" ;
      result << enumerator_1375.current_lkey (HERE).mProperty_string.stringValue () ;
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
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (constinArgument_inConstantName, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 206)) ;
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
  result_outLocation = object->mProperty_mModuleName.mProperty_location ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_moduleType_8137 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, var_moduleTypeName_8071, inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 200)) ;
  GALGAS_constructorValue var_constructorValue_8286 ;
  constinArgument_inContext.mProperty_mConstructorMap.method_searchKey (var_moduleTypeName_8071, var_constructorValue_8286, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 201)) ;
  GALGAS_sortedOperandIRList var_sortedOperandList_8382 ;
  GALGAS_constructorSignature joker_8340 ; // Joker input parameter
  var_constructorValue_8286.method_structure (joker_8340, var_sortedOperandList_8382, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 202)) ;
  GALGAS_operandIRList var_initialValueList_8417 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("declaration-module.galgas", 203)) ;
  cEnumerator_sortedOperandIRList enumerator_8466 (var_sortedOperandList_8382, kENUMERATION_UP) ;
  while (enumerator_8466.hasCurrentObject ()) {
    var_initialValueList_8417.addAssign_operation (enumerator_8466.current_mOperand (HERE)  COMMA_SOURCE_FILE ("declaration-module.galgas", 205)) ;
    enumerator_8466.gotoNextObject () ;
  }
  ioArgument_ioIntermediateCodeStruct.mProperty_mModuleList.addAssign_operation (object->mProperty_mModuleName.mProperty_string, var_moduleType_8137, var_initialValueList_8417  COMMA_SOURCE_FILE ("declaration-module.galgas", 207)) ;
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
  result_result = object->mProperty_mStaticListName.mProperty_location ;
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
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_returnType.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
  GALGAS_stringset var_propertyNameSet_5825 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-static-array.galgas", 136)) ;
  GALGAS_lstring var_plmTypeName_5848 = function_plmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 137)) ;
  cEnumerator_staticArrayPropertyListAST enumerator_5944 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_5944.hasCurrentObject ()) {
    switch (enumerator_5944.current_mPropertyType (HERE).enumValue ()) {
    case GALGAS_staticArrayPropertyTypeAST::kNotBuilt:
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_valueType:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType * extractPtr_6550 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_valueType *) (enumerator_5944.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyTypeName = extractPtr_6550->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_6035 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_propertyTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 141)) ;
        const enumGalgasBool test_0 = var_propertyNameSet_5825.getter_hasKey (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 142)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_5944.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("declaration-static-array.galgas", 143)), GALGAS_string ("duplicated property name"), fixItArray1  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 143)) ;
        }
        var_propertyNameSet_5825.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 145))  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 145)) ;
        var_propertyList_5749.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 146)), var_propertyType_6035  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 146)) ;
        GALGAS_uint var_propertyIndex_6341 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 147)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (enumerator_5944.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_6035, enumerator_5944.current_mPropertyName (HERE), var_propertyIndex_6341  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 148)) ;
        }
      }
      break ;
    case GALGAS_staticArrayPropertyTypeAST::kEnum_function:
      {
        const cEnumAssociatedValues_staticArrayPropertyTypeAST_function * extractPtr_7965 = (const cEnumAssociatedValues_staticArrayPropertyTypeAST_function *) (enumerator_5944.current_mPropertyType (HERE).unsafePointer ()) ;
        const GALGAS_mode extractedValue_mode = extractPtr_7965->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_7965->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_returnTypeName = extractPtr_7965->mAssociatedValue2 ;
        GALGAS_lstring var_routineMangledName_6704 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_5944.current_mPropertyName (HERE), extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 155)) ;
        GALGAS_routineTypedSignature var_signature_6888 ;
        {
        routine_routineSignature (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_formalArgs, var_signature_6888, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 161)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy temp_2 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_returnTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-static-array.galgas", 163)) ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, extractedValue_returnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 165)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_returnType_6932 = temp_2 ;
        GALGAS_routineDescriptor var_descriptor_7083 = GALGAS_routineDescriptor::constructor_new (GALGAS_bool (true), GALGAS_bool (false), GALGAS_routineKind::constructor_function (extractedValue_mode  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)), var_signature_6888, var_returnType_6932, GALGAS_bool (false), GALGAS_bool (false)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 167)) ;
        const enumGalgasBool test_4 = ioArgument_ioContext.mProperty_mTypeMap.getter_hasKey (var_routineMangledName_6704.getter_string (SOURCE_FILE ("declaration-static-array.galgas", 168)) COMMA_SOURCE_FILE ("declaration-static-array.galgas", 168)).operator_not (SOURCE_FILE ("declaration-static-array.galgas", 168)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_routineMangledName_6704, GALGAS_typeKind::constructor_function (var_descriptor_7083  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 169)) ;
          }
        }
        GALGAS_unifiedTypeMap_2D_proxy var_propertyType_7585 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mProperty_mTypeMap, var_routineMangledName_6704, inCompiler  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 176)) ;
        var_propertyList_5749.addAssign_operation (enumerator_5944.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("declaration-static-array.galgas", 177)), var_propertyType_7585  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 177)) ;
        GALGAS_uint var_propertyIndex_7735 = var_staticlistPropertyMap_5791.getter_count (SOURCE_FILE ("declaration-static-array.galgas", 178)) ;
        {
        var_staticlistPropertyMap_5791.setter_insertKey (var_routineMangledName_6704, GALGAS_bool (true), GALGAS_objectIR::constructor_property (var_propertyType_7585, enumerator_5944.current_mPropertyName (HERE), var_propertyIndex_7735  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 179)) ;
        }
      }
      break ;
    }
    enumerator_5944.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mProperty_mStaticlistMap.setter_insertKey (object->mProperty_mStaticListName, var_propertyList_5749, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 186)) ;
  }
  GALGAS_typeKind var_kind_8109 = GALGAS_typeKind::constructor_structure (function_llvmNameForStaticListElementType (object->mProperty_mStaticListName, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 192)), var_staticlistPropertyMap_5791, GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("declaration-static-array.galgas", 194)), var_propertyList_5749, GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("declaration-static-array.galgas", 191)) ;
  {
  ioArgument_ioContext.mProperty_mTypeMap.setter_insertType (var_plmTypeName_5848, var_kind_8109, inCompiler COMMA_SOURCE_FILE ("declaration-static-array.galgas", 198)) ;
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
  result_outLocation = object->mProperty_mStaticlistName.mProperty_location ;
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
  GALGAS_lstring var_nodeName_3941 = GALGAS_lstring::constructor_new (object->mProperty_mStaticlistName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).add_operation (ioArgument_ioGraph.getter_keyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)), object->mProperty_mStaticlistName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 90))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 90)) ;
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
  ioArgument_ioContext.mProperty_mStaticlistMap.method_searchKey (object->mProperty_mStaticlistName, var_staticArrayPropertyList_5620, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 123)) ;
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
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_7868 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_exp = extractPtr_7868->mAssociatedValue0 ;
          const enumGalgasBool test_2 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 133)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a function name is expected here"), fixItArray3  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 134)) ;
          }else if (kBoolFalse == test_2) {
            GALGAS_unifiedSymbolMap var_variableMap_6414 ;
            GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_6482 ;
            {
            routine_initialVariableMap (ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 138)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 140)), var_variableMap_6414, var_universalMap_6482, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 136)) ;
            }
            GALGAS_semanticTemporariesStruct var_temporaries_6543 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-extend-static-array.galgas", 144)) ;
            GALGAS_instructionListIR var_instructionGenerationList_6609 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 145)) ;
            GALGAS_allocaList var_allocaList_6647 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-extend-static-array.galgas", 146)) ;
            GALGAS_objectIR var_expressionResult_7256 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_exp.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 148)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-extend-static-array.galgas", 151)), enumerator_5955.current_mType (HERE), ioArgument_ioContext, GALGAS_mode::constructor_bootMode (SOURCE_FILE ("declaration-extend-static-array.galgas", 154)), var_temporaries_6543, ioArgument_ioGlobalLiteralStringMap, var_variableMap_6414, var_universalMap_6482, var_allocaList_6647, var_instructionGenerationList_6609, var_expressionResult_7256, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 147)) ;
            GALGAS_objectIR var_result_7333 = function_checkAssignmentCompatibility (var_expressionResult_7256, enumerator_5955.current_mType (HERE), enumerator_5918.current_mEndOfExpression (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 164)) ;
            GALGAS_bool test_4 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_6609.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            if (kBoolTrue != test_4.boolEnum ()) {
              test_4 = GALGAS_bool (kIsStrictSup, var_allocaList_6647.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
            }
            GALGAS_bool test_5 = test_4 ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = extensionGetter_isStatic (var_result_7333, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 170)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 170)) ;
            }
            const enumGalgasBool test_6 = test_5.boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("source expression cannot be statically computed"), fixItArray7  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 171)) ;
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)).add_operation (extensionGetter_llvmName (var_expressionResult_7256, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 174)) ;
          }
        }
        break ;
      case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
        {
          const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_10703 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_5918.current_mExpression (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_functionName = extractPtr_10703->mAssociatedValue0 ;
          const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_10703->mAssociatedValue1 ;
          const enumGalgasBool test_8 = enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 177)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_5918.current_mEndOfExpression (HERE), GALGAS_string ("a static expression is expected here"), fixItArray9  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 178)) ;
          }else if (kBoolFalse == test_8) {
            GALGAS_routineDescriptor var_functionDescriptor_8149 ;
            enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)).method_function (var_functionDescriptor_8149, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 180)) ;
            GALGAS_lstring var_argumentSignature_8182 = extensionGetter_routineSignature (extractedValue_formalArgs, extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 181)) ;
            GALGAS_lstring var_candidateRoutineLLVMName_8389 ;
            GALGAS_routineDescriptor var_routineDescriptor_8443 ;
            GALGAS_location var_functionDefinitionLocation_8487 ;
            extensionMethod_searchKey (ioArgument_ioContext.mProperty_mRoutineMapForContext, extractedValue_functionName, var_argumentSignature_8182, var_candidateRoutineLLVMName_8389, var_routineDescriptor_8443, var_functionDefinitionLocation_8487, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 182)) ;
            GALGAS_bool var_candidateIsPublic_8531 = var_routineDescriptor_8443.mProperty_mIsPublic ;
            GALGAS_routineKind var_candidateRoutineKind_8596 = var_routineDescriptor_8443.mProperty_mRoutineKind ;
            GALGAS_mode var_candidateMode_8657 = extensionGetter_executionMode (var_routineDescriptor_8443.mProperty_mRoutineKind, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 191)) ;
            GALGAS_routineTypedSignature var_candidateSignature_8774 = var_routineDescriptor_8443.mProperty_mSignature ;
            GALGAS_unifiedTypeMap_2D_proxy var_candidateReturnType_8839 = var_routineDescriptor_8443.mProperty_mReturnType ;
            const enumGalgasBool test_10 = var_candidateIsPublic_8531.operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 195)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_declarationFile_8976 = var_functionDefinitionLocation_8487.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 196)) ;
              GALGAS_string var_invocationFile_9043 = extractedValue_functionName.mProperty_location.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 197)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_invocationFile_9043.objectCompare (var_declarationFile_8976)).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 199)), GALGAS_string ("this function is not public"), fixItArray12  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 199)) ;
              }
            }
            const enumGalgasBool test_13 = var_candidateRoutineKind_8596.getter_isFunction (SOURCE_FILE ("declaration-extend-static-array.galgas", 202)).operator_not (SOURCE_FILE ("declaration-extend-static-array.galgas", 202)).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 203)), GALGAS_string ("this routine is not a function"), fixItArray14  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 203)) ;
            }
            GALGAS_mode var_currentMode_9385 = extensionGetter_executionMode (var_functionDescriptor_8149.mProperty_mRoutineKind, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 205)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_currentMode_9385.objectCompare (var_candidateMode_8657)).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), GALGAS_string ("this function runs in ").add_operation (extensionGetter_string (var_candidateMode_8657, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (GALGAS_string (" mode, but "), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (extensionGetter_string (var_currentMode_9385, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)).add_operation (GALGAS_string (" is required"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)), fixItArray16  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 207)) ;
            }
            GALGAS_bool test_17 = GALGAS_bool (kIsEqual, var_functionDescriptor_8149.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
            if (kBoolTrue == test_17.boolEnum ()) {
              test_17 = GALGAS_bool (kIsNotEqual, var_candidateReturnType_8839.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 209)))) ;
            }
            const enumGalgasBool test_18 = test_17.boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), GALGAS_string ("this function should return an $").add_operation (var_candidateReturnType_8839.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)).add_operation (GALGAS_string (" object"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)), fixItArray19  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 210)) ;
            }else if (kBoolFalse == test_18) {
              GALGAS_bool test_20 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8149.mProperty_mReturnType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)))) ;
              if (kBoolTrue == test_20.boolEnum ()) {
                test_20 = GALGAS_bool (kIsEqual, var_candidateReturnType_8839.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extend-static-array.galgas", 211)))) ;
              }
              const enumGalgasBool test_21 = test_20.boolEnum () ;
              if (kBoolTrue == test_21) {
                TC_Array <C_FixItDescription> fixItArray22 ;
                inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 212)), GALGAS_string ("this function should return no object"), fixItArray22  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 212)) ;
              }
            }
            const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, var_functionDescriptor_8149.mProperty_mSignature.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)).objectCompare (var_candidateSignature_8774.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 214)))).boolEnum () ;
            if (kBoolTrue == test_23) {
              TC_Array <C_FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_functionName.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 215)), GALGAS_string ("this function has ").add_operation (var_candidateSignature_8774.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (GALGAS_string (" argument(s) ("), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (var_functionDescriptor_8149.mProperty_mSignature.getter_length (SOURCE_FILE ("declaration-extend-static-array.galgas", 217)).getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 216)).add_operation (GALGAS_string (" required)"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 217)), fixItArray24  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 215)) ;
            }else if (kBoolFalse == test_23) {
              cEnumerator_routineTypedSignature enumerator_10347 (var_functionDescriptor_8149.mProperty_mSignature, kENUMERATION_UP) ;
              cEnumerator_routineTypedSignature enumerator_10380 (var_candidateSignature_8774, kENUMERATION_UP) ;
              while (enumerator_10347.hasCurrentObject () && enumerator_10380.hasCurrentObject ()) {
                const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_10347.current (HERE).mProperty_mType.objectCompare (enumerator_10380.current (HERE).mProperty_mType)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (enumerator_10380.current (HERE).mProperty_mSelector.getter_location (SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), GALGAS_string ("argument type should be $").add_operation (enumerator_10347.current (HERE).mProperty_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)), fixItArray26  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 221)) ;
                }
                enumerator_10347.gotoNextObject () ;
                enumerator_10380.gotoNextObject () ;
              }
            }
            var_staticValue_5869.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_5955.current_mType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)).add_operation (function_llvmNameForFunction (var_candidateRoutineLLVMName_8389.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 225)) ;
          }
        }
        break ;
      }
      if (enumerator_5918.hasNextObject () && enumerator_5955.hasNextObject ()) {
        var_staticValue_5869.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 229)) ;
      }
      enumerator_5918.gotoNextObject () ;
      enumerator_5955.gotoNextObject () ;
    }
    var_staticValue_5869.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 231)) ;
    ioArgument_ioStaticListValueMap.addAssign_operation (object->mProperty_mStaticlistName.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 232)), var_staticValue_5869  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 232)) ;
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
  GALGAS_stringset var_invokedFunctionSet_12170 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-extend-static-array.galgas", 263)) ;
  cEnumerator_extendStaticArrayExpressionListAST enumerator_12216 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_12216.hasCurrentObject ()) {
    switch (enumerator_12216.current_mExpression (HERE).enumValue ()) {
    case GALGAS_extendStaticArrayExpressionAST::kNotBuilt:
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_expression:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression * extractPtr_12288 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_expression *) (enumerator_12216.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_exp = extractPtr_12288->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_extendStaticArrayExpressionAST::kEnum_function:
      {
        const cEnumAssociatedValues_extendStaticArrayExpressionAST_function * extractPtr_12570 = (const cEnumAssociatedValues_extendStaticArrayExpressionAST_function *) (enumerator_12216.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_functionName = extractPtr_12570->mAssociatedValue0 ;
        const GALGAS_routineFormalArgumentList extractedValue_formalArgs = extractPtr_12570->mAssociatedValue1 ;
        GALGAS_lstring var_routineMangledName_12429 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), extractedValue_functionName, extractedValue_formalArgs, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 269)) ;
        var_invokedFunctionSet_12170.addAssign_operation (var_routineMangledName_12429.getter_string (SOURCE_FILE ("declaration-extend-static-array.galgas", 274))  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 274)) ;
      }
      break ;
    }
    enumerator_12216.gotoNextObject () ;
  }
  cMapElement_staticArrayMap * objectArray_12591 = (cMapElement_staticArrayMap *) ioArgument_ioTemporaries.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.mProperty_string  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 277)) ;
  if (NULL != objectArray_12591) {
      macroValidSharedObject (objectArray_12591, cMapElement_staticArrayMap) ;
    objectArray_12591->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12170, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 278)) ;
  }else{
    {
    ioArgument_ioTemporaries.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12170, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 280)) ;
    }
  }
  cMapElement_staticArrayMap * objectArray_12803 = (cMapElement_staticArrayMap *) ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.readWriteAccessForWithInstruction (inCompiler, object->mProperty_mStaticlistName.mProperty_string  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 282)) ;
  if (NULL != objectArray_12803) {
      macroValidSharedObject (objectArray_12803, cMapElement_staticArrayMap) ;
    objectArray_12803->mProperty_mInvokedFunctionSet.plusAssign_operation(var_invokedFunctionSet_12170, inCompiler  COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 283)) ;
  }else{
    {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMap.setter_insertKey (object->mProperty_mStaticlistName, var_invokedFunctionSet_12170, inCompiler COMMA_SOURCE_FILE ("declaration-extend-static-array.galgas", 285)) ;
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
  cEnumerator__32_stringlist enumerator_9585 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_9531 ((uint32_t) 0) ;
  while (enumerator_9585.hasCurrentObject ()) {
    GALGAS_string var_s_9604 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)).add_operation (GALGAS_string ("-section-invocation.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 264)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_9585.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 268)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_9585.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 269)) ;
    var_s_9604 = var_s_9604.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_9531.getter_string (SOURCE_FILE ("declaration-svc.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 270)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_9604, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 271)) ;
    enumerator_9585.gotoNextObject () ;
    index_9531.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 263)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)).add_operation (GALGAS_string ("-section-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 273)) ;
  cEnumerator__32_stringlist enumerator_10246 (constinArgument_inSectionAndSafeList, kENUMERATION_UP) ;
  GALGAS_uint index_10192 ((uint32_t) 0) ;
  while (enumerator_10246.hasCurrentObject ()) {
    GALGAS_string var_s_10265 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)).add_operation (GALGAS_string ("-section-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 278)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!USER_ROUTINE!"), enumerator_10246.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 282)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!IMPLEMENTATION_ROUTINE!"), enumerator_10246.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 283)) ;
    var_s_10265 = var_s_10265.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_10192.getter_string (SOURCE_FILE ("declaration-svc.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 284)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_10265, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 285)) ;
    enumerator_10246.gotoNextObject () ;
    index_10192.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 277)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 287)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)).add_operation (constinArgument_inSectionInvocationScheme, inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)).add_operation (GALGAS_string ("-section-dispatcher-code.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 288)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("@-------------------------------------------------------------"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 292)) ;
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("---------------------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 293)) ;
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
  cEnumerator__32_stringlist enumerator_11377 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11347 ((uint32_t) 0) ;
  while (enumerator_11377.hasCurrentObject ()) {
    GALGAS_string var_s_11396 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 305)) ;
    var_s_11396 = var_s_11396.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11377.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 306)) ;
    var_s_11396 = var_s_11396.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11347.getter_string (SOURCE_FILE ("declaration-svc.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 307)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11396, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 308)) ;
    enumerator_11377.gotoNextObject () ;
    index_11347.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 304)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-header.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 310)) ;
  cEnumerator__32_stringlist enumerator_11822 (constinArgument_inServiceList, kENUMERATION_UP) ;
  GALGAS_uint index_11782 ((uint32_t) 0) ;
  while (enumerator_11822.hasCurrentObject ()) {
    GALGAS_string var_s_11841 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.add_operation (GALGAS_string ("/service-dispatcher-entry.s"), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 312)) ;
    var_s_11841 = var_s_11841.getter_stringByReplacingStringByString (GALGAS_string ("!ENTRY!"), enumerator_11822.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 313)) ;
    var_s_11841 = var_s_11841.getter_stringByReplacingStringByString (GALGAS_string ("!IDX!"), index_11782.getter_string (SOURCE_FILE ("declaration-svc.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("declaration-svc.galgas", 314)) ;
    ioArgument_ioAssemblerCode.plusAssign_operation(var_s_11841, inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 315)) ;
    enumerator_11822.gotoNextObject () ;
    index_11782.increment_operation (inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 311)) ;
  }
  ioArgument_ioAssemblerCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-svc.galgas", 317)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.getter_isNodeDefined (var_routineNameForInvocationGraph_5574.mProperty_string COMMA_SOURCE_FILE ("declaration-init.galgas", 141)).operator_not (SOURCE_FILE ("declaration-init.galgas", 141)).boolEnum () ;
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
  extensionMethod_checkLocalVariableFinalState (var_universalMap_6397, inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 181)) ;
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
  cEnumerator_requiredProcedureDeclarationListAST enumerator_2388 (constinArgument_inAST.mProperty_mRequiredProcListAST, kENUMERATION_UP) ;
  while (enumerator_2388.hasCurrentObject ()) {
    GALGAS_lstring var_argumentSignature_2417 = extensionGetter_routineSignature (enumerator_2388.current (HERE).mProperty_mFormalArgumentList, enumerator_2388.current (HERE).mProperty_mName.getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 64)) ;
    const enumGalgasBool test_0 = extensionGetter_hasKey (constinArgument_inSemanticContext.mProperty_mRoutineMapForContext, enumerator_2388.current (HERE).mProperty_mName, var_argumentSignature_2417, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 65)).operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 65)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_2388.current (HERE).mProperty_mName.getter_location (SOURCE_FILE ("declaration-required-proc.galgas", 66)), GALGAS_string ("required func is not implemented"), fixItArray1  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 66)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_routineDescriptor var_routineDescriptor_2845 ;
      GALGAS_location var_routineLocation_2884 ;
      GALGAS_lstring joker_2794 ; // Joker input parameter
      extensionMethod_searchKey (constinArgument_inSemanticContext.mProperty_mRoutineMapForContext, enumerator_2388.current (HERE).mProperty_mName, var_argumentSignature_2417, joker_2794, var_routineDescriptor_2845, var_routineLocation_2884, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 68)) ;
      GALGAS_bool var_isExported_2913 = var_routineDescriptor_2845.mProperty_mExported ;
      GALGAS_mode var_mode_2958 = extensionGetter_executionMode (var_routineDescriptor_2845.mProperty_mRoutineKind, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 76)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_mode_2958.objectCompare (enumerator_2388.current (HERE).mProperty_mExecutionMode)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_routineLocation_2884, GALGAS_string ("required mode should be '").add_operation (extensionGetter_string (enumerator_2388.current (HERE).mProperty_mExecutionMode, inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)), fixItArray3  COMMA_SOURCE_FILE ("declaration-required-proc.galgas", 79)) ;
      }
      GALGAS_bool test_4 = enumerator_2388.current (HERE).mProperty_mIsExported ;
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
          test_7 = enumerator_2388.current (HERE).mProperty_mIsExported.operator_not (SOURCE_FILE ("declaration-required-proc.galgas", 86)) ;
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
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.getter_isNodeDefined (var_guardMangledName_6153.mProperty_string COMMA_SOURCE_FILE ("declaration-guard.galgas", 174)).operator_not (SOURCE_FILE ("declaration-guard.galgas", 174)).boolEnum () ;
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
      GALGAS_lstring var_resultVarName_7099 = GALGAS_lstring::constructor_new (function_acceptVariableName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)), constinArgument_inRoutineName.mProperty_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 196)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_7181 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)).getter_nowhere (SOURCE_FILE ("declaration-guard.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 197)) ;
      var_allocaList_6944.addAssign_operation (var_resultVarName_7099.mProperty_string, extensionGetter_llvmTypeName (var_resultType_7181.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 198))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 198)) ;
      {
      var_variableMap_6738.setter_insertOutputFormalArgument (var_resultVarName_7099, var_resultType_7181, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_resultType_7181, var_resultVarName_7099  COMMA_SOURCE_FILE ("declaration-guard.galgas", 203)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 199)) ;
      }
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_universalMap_6798, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 208)) ;
      }
      var_convenienceGuardGenerationIR_6919 = GALGAS_guardKindGenerationIR::constructor_baseGuard (SOURCE_FILE ("declaration-guard.galgas", 215)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_guardMode (SOURCE_FILE ("declaration-guard.galgas", 223)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_allocaList_6944, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 217)) ;
    }
    break ;
  case GALGAS_guardKind::kEnum_convenienceGuard:
    {
      const cEnumAssociatedValues_guardKind_convenienceGuard * extractPtr_9676 = (const cEnumAssociatedValues_guardKind_convenienceGuard *) (constinArgument_inGuardKind.unsafePointer ()) ;
      const GALGAS_callInstructionAST extractedValue_baseGuardInstruction = extractPtr_9676->mAssociatedValue0 ;
      {
      routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_6738, var_universalMap_6798, var_formalArguments_6860, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 233)) ;
      }
      callExtensionMethod_baseGuardAnalyze ((const cPtr_callInstructionAST *) extractedValue_baseGuardInstruction.ptr (), constinArgument_inSelfType, var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 245)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_convenienceGuardGenerationIR_6919, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 241)) ;
      extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_guardMangledName_6153, constinArgument_inContext, GALGAS_mode::constructor_userMode (SOURCE_FILE ("declaration-guard.galgas", 259)), ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_6738, var_universalMap_6798, var_allocaList_6944, var_instructionGenerationList_6996, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 253)) ;
    }
    break ;
  }
  extensionMethod_checkLocalVariableFinalState (var_universalMap_6798, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 270)) ;
  var_variableMap_6738.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 271)) ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR.setter_insertKey (var_guardMangledName_6153, var_formalArguments_6860, constinArgument_inSelfType, var_convenienceGuardGenerationIR_6919, var_allocaList_6944, var_instructionGenerationList_6996, constinArgument_inWarnIfUnused, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 274)) ;
  }
}


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
//                        Overriding extension method '@convertExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_convertExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                    const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4689 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4689, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4850 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4689, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 101)), var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).operator_not (SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 106)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 106)), fixItArray1  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_5055 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 109)) ;
  const enumGalgasBool test_2 = var_resultType_5055.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 111)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 111)).operator_not (SOURCE_FILE ("expression-convert.galgas", 111)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 112)), GALGAS_string ("this type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-convert.galgas", 112)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 113)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 113)).operator_not (SOURCE_FILE ("expression-convert.galgas", 113)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-convert.galgas", 114)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource_5450 ;
      GALGAS_bigint var_maxSource_5469 ;
      GALGAS_bool joker_5471_2 ; // Joker input parameter
      GALGAS_uint joker_5471_1 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)).method_integer (var_minSource_5450, var_maxSource_5469, joker_5471_2, joker_5471_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
      GALGAS_bigint var_minTarget_5524 ;
      GALGAS_bigint var_maxTarget_5543 ;
      GALGAS_bool joker_5545_2 ; // Joker input parameter
      GALGAS_uint joker_5545_1 ; // Joker input parameter
      var_resultType_5055.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 117)).method_integer (var_minTarget_5524, var_maxTarget_5543, joker_5545_2, joker_5545_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 117)) ;
      GALGAS_bool test_6 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5524.objectCompare (var_minSource_5450)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        test_6 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5543.objectCompare (var_maxSource_5469)) ;
      }
      GALGAS_bool var_alwaysPossible_5571 = test_6 ;
      const enumGalgasBool test_7 = var_alwaysPossible_5571.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-convert.galgas", 120)), GALGAS_string ("useless explicit conversion"), fixItArray8  COMMA_SOURCE_FILE ("expression-convert.galgas", 120)) ;
      }
      {
      routine_getNewTempVariable (var_resultType_5055, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 122)) ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4850  COMMA_SOURCE_FILE ("expression-convert.galgas", 124))  COMMA_SOURCE_FILE ("expression-convert.galgas", 124)) ;
      }else if (kBoolFalse == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4850, object->mProperty_mTypeName.mProperty_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 129))  COMMA_SOURCE_FILE ("expression-convert.galgas", 129)) ;
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
  GALGAS_uint var_staticStringIndex_7512 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 166)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 166)), var_staticStringIndex_7512, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
  }
  GALGAS_string var_lbl_7526 = object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).getter_string (SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_convertMinOkLabel_7587 = GALGAS_string ("min.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  GALGAS_string var_convertMaxOkLabel_7634 = GALGAS_string ("max.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 171)) ;
  GALGAS_string var_convertFailLabel_7680 = GALGAS_string ("fail.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
  GALGAS_string var_compareMinVar_7717 = GALGAS_string ("cmp.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
  GALGAS_string var_compareMaxVar_7765 = GALGAS_string ("cmp.").add_operation (var_lbl_7526, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
  GALGAS_bigint var_minTarget_7838 ;
  GALGAS_bigint var_maxTarget_7857 ;
  GALGAS_bool joker_7859_2 ; // Joker input parameter
  GALGAS_uint joker_7859_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).method_integer (var_minTarget_7838, var_maxTarget_7857, joker_7859_2, joker_7859_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
  GALGAS_bigint var_minSource_7908 ;
  GALGAS_bool var_operandIsUnsigned_7947 ;
  GALGAS_bigint joker_7914 ; // Joker input parameter
  GALGAS_uint joker_7949_1 ; // Joker input parameter
  extensionGetter_kind (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)).method_integer (var_minSource_7908, joker_7914, var_operandIsUnsigned_7947, joker_7949_1, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  GALGAS_string var_operandType_7970 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 177)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget_7838.objectCompare (var_minSource_7908)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar_7717, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned_7947.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7970, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_minTarget_7838.getter_string (SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar_7717, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertMinOkLabel_7587, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (var_convertFailLabel_7680, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel_7587.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar_7765, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned_7947.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType_7970, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (var_maxTarget_7857.getter_string (SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar_7765, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertMaxOkLabel_7634, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_convertFailLabel_7680, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel_7680.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 189)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_7512.getter_string (SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 190)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).getter_string (SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 191)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (function_panicCodeForConvertOverflow (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_string (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 192)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel_7634.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 194)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (var_operandType_7970, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 195)) ;
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
//                        Overriding extension method '@extendExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                   const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_mode constinArgument_inCurrentMode,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4683 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4683, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4844 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4683, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 101)), var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4885 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
  const enumGalgasBool test_0 = var_resultType_4885.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 107)).operator_not (SOURCE_FILE ("expression-extend.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 109)).operator_not (SOURCE_FILE ("expression-extend.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned_5306 ;
      GALGAS_uint var_sourceSize_5331 ;
      GALGAS_bigint joker_5267 ; // Joker input parameter
      GALGAS_bigint joker_5274 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 112)).method_integer (joker_5267, joker_5274, var_sourceIsUnsigned_5306, var_sourceSize_5331, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 112)) ;
      GALGAS_bool var_targetIsUnsigned_5408 ;
      GALGAS_uint var_targetSize_5433 ;
      GALGAS_bigint joker_5369 ; // Joker input parameter
      GALGAS_bigint joker_5376 ; // Joker input parameter
      var_resultType_4885.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)).method_integer (joker_5369, joker_5376, var_targetIsUnsigned_5408, var_targetSize_5433, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 113)) ;
      GALGAS_bool test_4 = var_sourceIsUnsigned_5306 ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = var_targetIsUnsigned_5408 ;
      }
      const enumGalgasBool test_5 = test_4.boolEnum () ;
      if (kBoolTrue == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 116)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray7  COMMA_SOURCE_FILE ("expression-extend.galgas", 116)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 118)), GALGAS_string ("same size: useless extend operation"), fixItArray9  COMMA_SOURCE_FILE ("expression-extend.galgas", 118)) ;
          }
        }
      }else if (kBoolFalse == test_5) {
        GALGAS_bool test_10 = var_sourceIsUnsigned_5306 ;
        if (kBoolTrue == test_10.boolEnum ()) {
          test_10 = var_targetIsUnsigned_5408.operator_not (SOURCE_FILE ("expression-extend.galgas", 120)) ;
        }
        const enumGalgasBool test_11 = test_10.boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsSupOrEqual, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 122)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray13  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
          }
        }else if (kBoolFalse == test_11) {
          GALGAS_bool test_14 = var_sourceIsUnsigned_5306.operator_not (SOURCE_FILE ("expression-extend.galgas", 124)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = var_targetIsUnsigned_5408 ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 125)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray16  COMMA_SOURCE_FILE ("expression-extend.galgas", 125)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 128)), GALGAS_string ("cannot extend, use convert or trunc"), fixItArray18  COMMA_SOURCE_FILE ("expression-extend.galgas", 128)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_sourceSize_5331.objectCompare (var_targetSize_5433)).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 130)), GALGAS_string ("same size: useless extend operation"), fixItArray20  COMMA_SOURCE_FILE ("expression-extend.galgas", 130)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType_4885, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-extend.galgas", 133)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 133)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult_4844, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 134)) ;
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
//                       Overriding extension method '@truncateExpressionAST analyzeExpression'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncateExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_bool constinArgument_inGuard,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_objectIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_4689 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-truncate.galgas", 87)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4689, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 82)) ;
  GALGAS_objectIR var_expressionResult_4850 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4689, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 101)), var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_4891 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)) ;
  const enumGalgasBool test_0 = var_resultType_4891.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 107)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 107)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 108)), GALGAS_string ("this type is not an integer type"), fixItArray1  COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 109)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 109)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 109)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfExpression, GALGAS_string ("expression type is not an integer type"), fixItArray3  COMMA_SOURCE_FILE ("expression-truncate.galgas", 110)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource_5286 ;
      GALGAS_bigint var_maxSource_5305 ;
      GALGAS_uint var_expSize_5339 ;
      GALGAS_bool joker_5316 ; // Joker input parameter
      extensionGetter_kind (var_expressionResult_4850, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)).method_integer (var_minSource_5286, var_maxSource_5305, joker_5316, var_expSize_5339, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
      GALGAS_bigint var_minTarget_5390 ;
      GALGAS_bigint var_maxTarget_5409 ;
      GALGAS_uint var_resultSize_5446 ;
      GALGAS_bool joker_5420 ; // Joker input parameter
      var_resultType_4891.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)).method_integer (var_minTarget_5390, var_maxTarget_5409, joker_5420, var_resultSize_5446, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 113)) ;
      GALGAS_bool test_4 = GALGAS_bool (kIsInfOrEqual, var_minTarget_5390.objectCompare (var_minSource_5286)) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (kIsSupOrEqual, var_maxTarget_5409.objectCompare (var_maxSource_5305)) ;
      }
      GALGAS_bool var_alwaysPossible_5470 = test_4 ;
      const enumGalgasBool test_5 = var_alwaysPossible_5470.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("expression-truncate.galgas", 116)), GALGAS_string ("useless explicit conversion"), fixItArray6  COMMA_SOURCE_FILE ("expression-truncate.galgas", 116)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_resultSize_5446.objectCompare (var_expSize_5339)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        routine_getNewTempVariable (var_resultType_4891, object->mProperty_mEndOfExpression, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 119)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult_4850  COMMA_SOURCE_FILE ("expression-truncate.galgas", 120))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 120)) ;
      }else if (kBoolFalse == test_7) {
        outArgument_outResult = extensionGetter_withType (var_expressionResult_4850, var_resultType_4891, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 125)) ;
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
  GALGAS_string var_operandType_7152 = extensionGetter_llvmTypeName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (var_operandType_7152, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (extensionGetter_llvmName (object->mProperty_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 158)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 157)) ;
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
//                          Overriding extension method '@constructorCall analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_constructorCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_3970 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType_3970 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType_3970 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType_3970.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 90)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue_4295 ;
    constinArgument_inContext.mProperty_mConstructorMap.method_searchKey (var_resultType_3970.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 92)), var_initValue_4295, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
    switch (var_initValue_4295.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_zero:
      {
        outArgument_outResult = GALGAS_objectIR::constructor_zero (var_resultType_3970  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
      }
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_4644 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4295.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_4644->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 97)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType_3970.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)), fixItArray4  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 98)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_3970, extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_6624 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4295.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_6624->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_6624->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList_4736 = extractedValue_sortedOperandList ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 106)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 105)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 106)).add_operation (object->mProperty_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 107)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 107)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 105)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          cEnumerator_constructorSignature enumerator_5143 (extractedValue_constructorSignature, kENUMERATION_UP) ;
          cEnumerator_functionCallEffectiveParameterList enumerator_5176 (object->mProperty_mParameterList, kENUMERATION_UP) ;
          while (enumerator_5143.hasCurrentObject () && enumerator_5176.hasCurrentObject ()) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_5176.current_mSelector (HERE).mProperty_string.objectCompare (enumerator_5143.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_5176.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-constructor-call.galgas", 112)), GALGAS_string ("the selector should be '!").add_operation (enumerator_5143.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)), fixItArray10  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 112)) ;
            }
            GALGAS_objectIR var_expressionResult_6042 ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5176.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_5143.current_mType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6042, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
            GALGAS_objectIR var_result_6075 = function_checkAssignmentCompatibility (var_expressionResult_6042, enumerator_5143.current_mType (HERE), enumerator_5176.current_mSelector (HERE).mProperty_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
            var_sortedOperandIRList_4736.addAssign_operation (var_result_6075, enumerator_5143.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
            enumerator_5143.gotoNextObject () ;
            enumerator_5176.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList_6410 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
          cEnumerator_sortedOperandIRList enumerator_6467 (var_sortedOperandIRList_4736, kENUMERATION_UP) ;
          while (enumerator_6467.hasCurrentObject ()) {
            var_initialValueList_6410.addAssign_operation (enumerator_6467.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 140)) ;
            enumerator_6467.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (var_resultType_3970, var_initialValueList_6410  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
        }
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCall.mSlotID,
                                          extensionMethod_constructorCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorCall_analyzeExpression (defineExtensionMethod_constructorCall_analyzeExpression, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
//                         Overriding extension method '@typedConstantCall analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typedConstantCall_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                 const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                 const GALGAS_bool /* constinArgument_inGuard */,
                                                                 const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredResultType_4001 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_4001 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_4001 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 81)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_4001.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 83)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 84)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 84)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_classConstantMap var_classConstantMap_4309 = extensionGetter_classConstantMap (var_inferredResultType_4001, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 86)) ;
    var_classConstantMap_4309.method_searchKey (object->mProperty_mConstructorName, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 87)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typedConstantCall_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_typedConstantCall.mSlotID,
                                          extensionMethod_typedConstantCall_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typedConstantCall_analyzeExpression (defineExtensionMethod_typedConstantCall_analyzeExpression, NULL) ;

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
//                          Overriding extension method '@ifExpressionAST analyzeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                               const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_mode constinArgument_inCurrentMode,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResult_5020 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResult_5020, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 90)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_ifExpressionResult_5020, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 107)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 107)).operator_not (SOURCE_FILE ("expression-if.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 108)) ;
  }
  GALGAS_objectIR var_thenExpressionTempResult_5808 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionTempResult_5808, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 111)) ;
  GALGAS_objectIR var_thenExpressionResult_5839 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_5808, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 127)) ;
  GALGAS_objectIR var_elseExpressionTempResult_6645 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionTempResult_6645, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 134)) ;
  GALGAS_objectIR var_elseExpressionResult_6676 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_6645, extensionGetter_type (var_thenExpressionResult_5839, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 152)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 150)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5020, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 157)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7043 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_7024_1 ; // Joker input parameter
    var_ifExpressionResult_5020.method_literalInteger (joker_7024_1, var_value_7043, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 158)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7043.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_5839 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_6676 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_6676, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 161)), object->mProperty_mIfExpressionEndLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 161)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5020, var_thenExpressionResult_5839, var_elseExpressionResult_6676, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 162)) ;
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
//                     Overriding extension method '@infixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_infixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperandPossibleReference_6264 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_6264, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 131)) ;
  GALGAS_objectIR var_leftOperand_6423 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_6264, object->mProperty_mOperatorLocation, var_leftOperand_6423, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 147)) ;
  }
  GALGAS_objectIR var_rightOperandPossibleReference_7058 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_6423, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 159)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperandPossibleReference_7058, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 154)) ;
  GALGAS_objectIR var_rightOperand_7219 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_7058, object->mProperty_mOperatorLocation, var_rightOperand_7219, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 170)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_7281 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 177)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_7588 ;
  GALGAS_infixOperatorDescription var_binaryOperator_7641 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_7281, extensionGetter_type (var_leftOperand_6423, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 180)), extensionGetter_type (var_rightOperand_7219, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 181)), object->mProperty_mOperatorLocation, var_resultType_7588, var_binaryOperator_7641, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 179)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_7641.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_6423, object->mProperty_mOperatorLocation, var_rightOperand_7219, var_resultType_7588, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 187)) ;
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
      result_outOperatorMap = constinArgument_inContext.mProperty_mEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mNonEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mStrictInfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mInfEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mStrictSupOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mSupEqualOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mAndOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mOrOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mBooleanXorOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 230)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 231)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mAddOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 241)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 242)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mSubOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 252)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 253)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mMulOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 263)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 264)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mDivOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 274)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 275)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.mProperty_mModOperatorMap ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mLeftShiftOperatorMap ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.mProperty_mRightShiftOperatorMap ;
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
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_12248 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 310)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_12838 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_12248, var_leftOperandPossibleReference_12838, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
  GALGAS_objectIR var_leftOperand_12997 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_12838, object->mProperty_mOperatorLocation, var_leftOperand_12997, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 327)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_13085 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 334)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_13676 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_12997, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 340)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_13085, var_rightOperandPossibleReference_13676, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 335)) ;
  GALGAS_objectIR var_rightOperand_13837 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_13676, object->mProperty_mOperatorLocation, var_rightOperand_13837, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 351)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_leftOperand_12997, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 358)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 358)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 359)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_rightOperand_13837, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 362)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 362)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 363)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.mProperty_mBooleanType, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 366)) ;
  }
  {
  extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_12997, var_leftInstructionGenerationList_12248, var_rightOperand_13837, var_rightInstructionGenerationList_13085, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 368)) ;
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
//                    Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_3662 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3662, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 60)) ;
  GALGAS_objectIR var_expressionResult_3831 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3662, object->mProperty_mOperatorLocation, var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 76)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3927 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3965 ;
  GALGAS_objectIR var_leftOperand_3989 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.mProperty_mUnsignedComplementOperatorMap ;
      var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
      switch (extensionGetter_kind (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 92)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 94)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 98)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 102)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)) ;
          var_leftOperand_3989.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 108)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray9  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
            var_leftOperand_3989.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 110)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 110)).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_bigint var_minTarget_5181 ;
              GALGAS_bigint var_maxTarget_5200 ;
              GALGAS_bool joker_5202_2 ; // Joker input parameter
              GALGAS_uint joker_5202_1 ; // Joker input parameter
              constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)).method_integer (var_minTarget_5181, var_maxTarget_5200, joker_5202_2, joker_5202_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
              const enumGalgasBool test_11 = GALGAS_bool (kIsStrictInf, var_minTarget_5181.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <C_FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray12  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 113)) ;
                var_leftOperand_3989.drop () ; // Release error dropped variable
              }else if (kBoolFalse == test_11) {
                var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, var_maxTarget_5200  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 115)) ;
              }
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 118)) ;
              var_leftOperand_3989.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_5761 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5761->mAssociatedValue3 ;
          var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 121)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.mProperty_mNotOperatorMap ;
      var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
      var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.mProperty_mUnaryMinusOperatorMap ;
      var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 129)) ;
      var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 130)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3927 = constinArgument_inContext.mProperty_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 133)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)), fixItArray15  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
      }
      const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_16) {
        var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 138)) ;
        var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
      }else if (kBoolFalse == test_16) {
        var_binaryOperator_3965 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 141)) ;
        var_leftOperand_3989 = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 142)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3927.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 146)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_6822 = extensionGetter_type (var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
  const enumGalgasBool test_17 = var_expressionResult_3831.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 149)).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_bigint var_value_6965 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_6938_1 ; // Joker input parameter
    var_expressionResult_3831.method_literalInteger (joker_6938_1, var_value_6965, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
    GALGAS_bigint var_result_6985 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6985 = var_value_6965.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-prefix-operators.galgas", 156)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to static int, without inferred type"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
          var_result_6985.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_18) {
          const enumGalgasBool test_20 = constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)).getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 158)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_bigint var_minTarget_7356 ;
            GALGAS_bigint var_maxTarget_7375 ;
            GALGAS_bool joker_7377_2 ; // Joker input parameter
            GALGAS_uint joker_7377_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)).method_integer (var_minTarget_7356, var_maxTarget_7375, joker_7377_2, joker_7377_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 159)) ;
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictInf, var_minTarget_7356.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray22  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
              var_result_6985.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_21) {
              var_result_6985 = var_value_6965.operator_xor (var_maxTarget_7375 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
            }
          }else if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray23  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 166)) ;
            var_result_6985.drop () ; // Release error dropped variable
          }
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6985 = var_value_6965.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 169)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6985 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)).operator_xor (var_value_6965 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6822, var_result_6985  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 173)) ;
  }else if (kBoolFalse == test_17) {
    {
    routine_getNewTempVariable (var_resultType_6822, object->mProperty_mOperatorLocation, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 176)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 180)), object->mProperty_mOperatorLocation, var_leftOperand_3989, var_binaryOperator_3965, var_expressionResult_3831, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 178)) ;
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
//                   Overriding extension method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, object->mProperty_mLiteralInteger.mProperty_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 65)) ;
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
//          Overriding extension method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inConstantName,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.mProperty_location  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
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
//                    Overriding extension method '@literalStringInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_3769 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
  GALGAS_uint var_staticStringIndex_3959 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.mProperty_string, var_staticStringIndex_3959, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (var_type_3769, object->mProperty_mLiteralString.mProperty_string.getter_length (SOURCE_FILE ("expression-literal-string.galgas", 67)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 67)), var_staticStringIndex_3959  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 67)) ;
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
//                   Overriding extension method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
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
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mBooleanType, temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 72)) ;
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
//                   Overriding extension method '@registerConstantExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_4447 ;
  GALGAS_sliceMap var_registerBitSliceMap_4507 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4558 ;
  GALGAS_bigint var_registerAddress_4598 ;
  GALGAS_uint var_registerBitCount_4631 ;
  GALGAS_uint var_powerOfTwoForArraySize_4670 ;
  GALGAS_uint var_elementArraySize_4703 ;
  GALGAS_bool joker_4453 ; // Joker input parameter
  GALGAS_bool joker_4460 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4604 ; // Joker input parameter
  constinArgument_inContext.mProperty_mControlRegisterMap.method_searchKey (object->mProperty_mRegisterName, var_registerType_4447, joker_4453, joker_4460, var_registerBitSliceMap_4507, var_registerFieldMap_4558, var_registerAddress_4598, joker_4604, var_registerBitCount_4631, var_powerOfTwoForArraySize_4670, var_elementArraySize_4703, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 95)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4815 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 109)) ;
  cEnumerator_lstringlist enumerator_4857 (object->mProperty_mMaskFieldNames, kENUMERATION_UP) ;
  while (enumerator_4857.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_4940 ;
    GALGAS_uint var_fieldBitCount_4971 ;
    var_registerFieldMap_4558.method_searchKey (enumerator_4857.current_mValue (HERE), var_fieldBitIndex_4940, var_fieldBitCount_4971, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 111)) ;
    GALGAS_bigint var_mask_4990 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)).left_shift_operation (var_fieldBitCount_4971 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)) ;
    var_accumulatedFieldStaticValues_4815 = var_accumulatedFieldStaticValues_4815.operator_or (var_mask_4990.left_shift_operation (var_fieldBitIndex_4940 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 117)) ;
    enumerator_4857.gotoNextObject () ;
  }
  GALGAS_operandList var_operandList_5214 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 120)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_5283 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_5283.hasCurrentObject ()) {
    GALGAS_uint var_fieldBitIndex_5366 ;
    GALGAS_uint var_fieldBitCount_5397 ;
    var_registerFieldMap_4558.method_searchKey (enumerator_5283.current_mFieldName (HERE), var_fieldBitIndex_5366, var_fieldBitCount_5397, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 122)) ;
    GALGAS_objectIR var_expressionResult_6010 ;
    callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5283.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-cst-registre.galgas", 133)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6010, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 128)) ;
    switch (extensionGetter_kind (var_expressionResult_6010, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        TC_Array <C_FixItDescription> fixItArray0 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray0  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_pointer:
      {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_function:
      {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_bigint var_value_7039 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_7012_1 ; // Joker input parameter
        var_expressionResult_6010.method_literalInteger (joker_7012_1, var_value_7039, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_value_7039.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_7039.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)).left_shift_operation (var_fieldBitCount_5397 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            var_accumulatedFieldStaticValues_4815 = var_accumulatedFieldStaticValues_4815.operator_or (var_value_7039.left_shift_operation (var_fieldBitIndex_5366 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).left_shift_operation (var_fieldBitCount_5397 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
          }
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_9255 = (const cEnumAssociatedValues_typeKind_integer *) (extensionGetter_kind (var_expressionResult_6010, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_min = extractPtr_9255->mAssociatedValue0 ;
        const GALGAS_bigint extractedValue_max = extractPtr_9255->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_unsigned = extractPtr_9255->mAssociatedValue2 ;
        const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9255->mAssociatedValue3 ;
        const enumGalgasBool test_12 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 172)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)) ;
        }else if (kBoolFalse == test_12) {
          GALGAS_bool test_14 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5397)) ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
          }
          const enumGalgasBool test_15 = test_14.boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (enumerator_5283.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_5397.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)), fixItArray16  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176)) ;
          }
          GALGAS_bool test_17 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_5397)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
          }
          GALGAS_bool test_18 = test_17 ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
          }
          const enumGalgasBool test_19 = test_18.boolEnum () ;
          if (kBoolTrue == test_19) {
            {
            extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_6010, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)).left_shift_operation (var_fieldBitCount_5397 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)), GALGAS_uint ((uint32_t) 8U), enumerator_5283.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)) ;
            }
          }
          GALGAS_objectIR var_partialResult_8354 = var_expressionResult_6010 ;
          const enumGalgasBool test_20 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4631)).boolEnum () ;
          if (kBoolTrue == test_20) {
            GALGAS_objectIR var_extendedResult_8527 ;
            {
            routine_getNewTempVariable (var_registerType_4447, enumerator_5283.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_extendedResult_8527, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 191)) ;
            }
            {
            extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8527, var_partialResult_8354, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)) ;
            }
            var_partialResult_8354 = var_extendedResult_8527 ;
          }else if (kBoolFalse == test_20) {
            const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4631)).boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_objectIR var_truncatedResult_8813 ;
              {
              routine_getNewTempVariable (var_registerType_4447, enumerator_5283.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_truncatedResult_8813, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)) ;
              }
              {
              extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8813, var_partialResult_8354, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 196)) ;
              }
              var_partialResult_8354 = var_truncatedResult_8813 ;
            }
          }
          GALGAS_objectIR var_shiftedResult_9081 ;
          {
          routine_getNewTempVariable (var_registerType_4447, enumerator_5283.current_mExpressionLocation (HERE), ioArgument_ioTemporaries, var_shiftedResult_9081, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)) ;
          }
          {
          extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_9081, var_partialResult_8354, var_fieldBitIndex_5366, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 201)) ;
          }
          var_operandList_5214.addAssign_operation (var_shiftedResult_9081  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
        }
      }
      break ;
    }
    enumerator_5283.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4447, var_accumulatedFieldStaticValues_4815  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 208)) ;
  cEnumerator_operandList enumerator_9450 (var_operandList_5214, kENUMERATION_UP) ;
  while (enumerator_9450.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9537 ;
    {
    routine_getNewTempVariable (var_registerType_4447, object->mProperty_mRegisterName.getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 210)), ioArgument_ioTemporaries, var_newResult_9537, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9537, extensionGetter_type (var_newResult_9537, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 216)), enumerator_9450.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)) ;
    }
    outArgument_outResult = var_newResult_9537 ;
    enumerator_9450.gotoNextObject () ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mObjectName COMMA_SOURCE_FILE ("expression-primary.galgas", 167)) ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_6234 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_6234.hasCurrentObject ()) {
    switch (enumerator_6234.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_6298 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_6234.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6298->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_6443 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_6234.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_6443->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 172)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6993 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_6234.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_6993->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_6529 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_6529.hasCurrentObject ()) {
          switch (enumerator_6529.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6783 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6529.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_6783->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 179)) COMMA_SOURCE_FILE ("expression-primary.galgas", 179)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6896 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6529.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_6896->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 181)) ;
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
          enumerator_6529.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_6234.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_7522 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_7522.hasCurrentObject ()) {
    switch (enumerator_7522.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_7586 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_7522.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7586->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_7715 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_7522.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7715->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_8249 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_7522.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_8249->mAssociatedValue0 ;
        cEnumerator_effectiveArgumentListAST enumerator_7801 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_7801.hasCurrentObject ()) {
          switch (enumerator_7801.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_8055 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_7801.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_8055->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 206)) COMMA_SOURCE_FILE ("expression-primary.galgas", 206)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_8152 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_7801.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_8152->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 208)) ;
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
          enumerator_7801.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7522.gotoNextObject () ;
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
//                    Overriding extension method '@primaryInNoSelfExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInNoSelfExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                            const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                            const GALGAS_bool constinArgument_inGuard,
                                                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode constinArgument_inCurrentMode,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInNoSelfExpressionAST * object = (const cPtr_primaryInNoSelfExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInNoSelfExpressionAST) ;
  GALGAS_objectIR var_currentPointer_9476 ;
  GALGAS_string var_globalVariableReceiverName_9513 ;
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 240)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 240)) ;
    var_currentPointer_9476.drop () ; // Release error dropped variable
    var_globalVariableReceiverName_9513.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 241)) COMMA_SOURCE_FILE ("expression-primary.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_unifiedTypeMap_2D_proxy joker_9767_2 ; // Joker input parameter
      GALGAS_bool joker_9767_1 ; // Joker input parameter
      GALGAS_bool joker_9808_2 ; // Joker input parameter
      GALGAS_bool joker_9808_1 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mObjectName, joker_9767_2, joker_9767_1, var_currentPointer_9476, joker_9808_2, joker_9808_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 242)) ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = var_currentPointer_9476.getter_isGlobalVariableReference (SOURCE_FILE ("expression-primary.galgas", 247)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = object->mProperty_mObjectName.mProperty_string ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      var_globalVariableReceiverName_9513 = temp_3 ;
    }else if (kBoolFalse == test_2) {
      var_currentPointer_9476 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("expression-primary.galgas", 249)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 249)) ;
      var_globalVariableReceiverName_9513 = GALGAS_string::makeEmptyString () ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_10140 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_10140.hasCurrentObject ()) {
    switch (enumerator_10140.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_10734 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_10140.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_10734->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_9476, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 256)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_11414 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_10140.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11414->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_11414->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_9476, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 272)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_12350 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_10140.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_12350->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_12350->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_12203 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_9513, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_9476, var_returnedType_12203, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 290)) ;
        }
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_returnedType_12203.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 310)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 311)) ;
        }
      }
      break ;
    }
    enumerator_10140.gotoNextObject () ;
  }
  outArgument_outResult = var_currentPointer_9476 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInNoSelfExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInNoSelfExpressionAST.mSlotID,
                                          extensionMethod_primaryInNoSelfExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInNoSelfExpressionAST_analyzeExpression (defineExtensionMethod_primaryInNoSelfExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@primaryInSelfExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInSelfExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInSelfExpressionAST * object = (const cPtr_primaryInSelfExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInSelfExpressionAST) ;
  GALGAS_objectIR var_currentPointer_13403 ;
  GALGAS_string var_globalVariableReceiverName_13440 = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 339)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 340)), GALGAS_string ("'self' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 340)) ;
    var_currentPointer_13403.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 341)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 341)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_propertyMap var_structureObjectMap_13684 ;
      GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_13722 ;
      GALGAS_lstring joker_13647 ; // Joker input parameter
      GALGAS_propertyList joker_13724_2 ; // Joker input parameter
      GALGAS_uint joker_13724_1 ; // Joker input parameter
      constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 342)).method_structure (joker_13647, var_structureObjectMap_13684, var_universalMap_13722, joker_13724_2, joker_13724_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 342)) ;
      const enumGalgasBool test_3 = var_structureObjectMap_13684.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 343)) COMMA_SOURCE_FILE ("expression-primary.galgas", 343)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_object_13868 ;
        GALGAS_bool joker_13847 ; // Joker input parameter
        var_structureObjectMap_13684.method_searchKey (object->mProperty_mObjectName, joker_13847, var_object_13868, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 344)) ;
        {
        routine_handleSelfAccessInExpression (constinArgument_inSelfType, var_object_13868, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_currentPointer_13403, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 349)) ;
        }
      }else if (kBoolFalse == test_3) {
        var_currentPointer_13403 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 357)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 357)) ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 360)), GALGAS_string ("'self' should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 360)) ;
      var_currentPointer_13403.drop () ; // Release error dropped variable
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_14329 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_14329.hasCurrentObject ()) {
    switch (enumerator_14329.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14923 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14329.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14923->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_13403, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 366)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15603 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14329.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15603->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15603->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_13403, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 382)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_16539 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14329.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_16539->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_16539->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_16392 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_13440, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_13403, var_returnedType_16392, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 400)) ;
        }
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_returnedType_16392.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 420)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 421)) ;
        }
      }
      break ;
    }
    enumerator_14329.gotoNextObject () ;
  }
  outArgument_outResult = var_currentPointer_13403 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInSelfExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInSelfExpressionAST.mSlotID,
                                          extensionMethod_primaryInSelfExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInSelfExpressionAST_analyzeExpression (defineExtensionMethod_primaryInSelfExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInExpression'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 437)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_17009 ;
    GALGAS_lstring var_name_17027 ;
    GALGAS_uint var_index_17044 ;
    constinArgument_inObject.method_property (var_type_17009, var_name_17027, var_index_17044, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 438)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_17009, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 441)), var_name_17027.getter_location (SOURCE_FILE ("expression-primary.galgas", 441))  COMMA_SOURCE_FILE ("expression-primary.galgas", 441)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 442)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 439)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 445)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_17027.getter_string (SOURCE_FILE ("expression-primary.galgas", 449)), var_index_17044, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 446)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 453)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 453)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_objectIR constinArgument_inProperty,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 466)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_17904 ;
    GALGAS_lstring var_name_17922 ;
    GALGAS_uint var_index_17939 ;
    constinArgument_inProperty.method_property (var_type_17904, var_name_17922, var_index_17939, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 467)) ;
    GALGAS_objectIR var_newObject_17958 = GALGAS_objectIR::constructor_temporaryReference (var_type_17904, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 470)), var_name_17922.getter_location (SOURCE_FILE ("expression-primary.galgas", 470))  COMMA_SOURCE_FILE ("expression-primary.galgas", 470)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 471)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 468)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 474)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_17958, ioArgument_ioObject, var_name_17922.getter_string (SOURCE_FILE ("expression-primary.galgas", 478)), var_index_17939.getter_string (SOURCE_FILE ("expression-primary.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 475)) ;
    }
    ioArgument_ioObject = var_newObject_17958 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 483)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'handlePropertyInExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyInExpression (const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                         const GALGAS_bool /* constinArgument_inGuard */,
                                         const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode /* constinArgument_inCurrentMode */,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                         GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                         GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                         const GALGAS_lstring constinArgument_inPropertyName,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_objectIR & ioArgument_ioObjectPtr,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 505)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_19390 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_19428 ;
    GALGAS_lstring joker_19353 ; // Joker input parameter
    GALGAS_propertyList joker_19430_2 ; // Joker input parameter
    GALGAS_uint joker_19430_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 506)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 506)).method_structure (joker_19353, var_structureObjectMap_19390, var_universalMap_19428, joker_19430_2, joker_19430_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_19390.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 507)) COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_19564 ;
      GALGAS_bool joker_19543 ; // Joker input parameter
      var_structureObjectMap_19390.method_searchKey (constinArgument_inPropertyName, joker_19543, var_property_19564, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mProperty_location, var_property_19564, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 509)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 517)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 520)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 520)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_19962 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.mProperty_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 521)) ;
      GALGAS_objectIR var_loadedRegisterValue_20181 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.mProperty_location, var_loadedRegisterValue_20181, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 522)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_20280 ;
      GALGAS_bigint var_accessRightOperand_20318 ;
      GALGAS_sliceMap var_resultSliceMap_20354 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_20398 ;
      var_sliceMap_19962.method_searchKey (constinArgument_inPropertyName, var_accessOperator_20280, var_accessRightOperand_20318, var_resultSliceMap_20354, var_resultType_20398, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 528)) ;
      GALGAS_objectIR var_resultObject_20425 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_20398, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 537)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 537))  COMMA_SOURCE_FILE ("expression-primary.galgas", 537)), var_resultSliceMap_20354  COMMA_SOURCE_FILE ("expression-primary.galgas", 535)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 540)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_20425, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 543)), constinArgument_inPropertyName.mProperty_location, var_loadedRegisterValue_20181, var_accessOperator_20280, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.mProperty_mLiteralIntegerType, var_accessRightOperand_20318  COMMA_SOURCE_FILE ("expression-primary.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_20425 ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 551)), GALGAS_string ("the current object has no property"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 551)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
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
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 577)).operator_not (SOURCE_FILE ("expression-primary.galgas", 577)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 578)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_22327 ;
      GALGAS_objectIR joker_22294_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_22294_1, var_functionName_22327, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_22327.getter_location (SOURCE_FILE ("expression-primary.galgas", 581)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 581)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_22498 ;
      GALGAS_lstring var_functionName_22529 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_22498, var_functionName_22529, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 583)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_23236 ;
      GALGAS_calleeKindIR var_routineKind_23285 ;
      GALGAS_lstring var_functionMangledName_23344 ;
      GALGAS_lstring var_functionNameForGeneration_23415 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_22498, var_functionName_22529, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_23236, var_routineKind_23285, var_functionMangledName_23344, var_functionNameForGeneration_23415, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
      }
      GALGAS_objectIR var_functionResult_23603 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_23344.getter_location (SOURCE_FILE ("expression-primary.galgas", 607)), ioArgument_ioTemporaries, var_functionResult_23603, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 607)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_23603, var_functionMangledName_23344, var_functionNameForGeneration_23415, var_routineKind_23285, var_effectiveParameterListIR_23236  COMMA_SOURCE_FILE ("expression-primary.galgas", 609))  COMMA_SOURCE_FILE ("expression-primary.galgas", 609)) ;
      ioArgument_ioObjectPtr = var_functionResult_23603 ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeFunctionCallInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionCallInExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
                                              GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                                              GALGAS_calleeKindIR & outArgument_outRoutineKindIR,
                                              GALGAS_lstring & outArgument_outRoutineMangledName,
                                              GALGAS_lstring & outArgument_outRoutineNameForGeneration,
                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outRoutineKindIR.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  outArgument_outRoutineNameForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 647)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_25254 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_25254.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 650)))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_receiverType_25254.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 650)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 650)) ;
  }
  GALGAS_bool var_specialCase_25367 = test_0 ;
  const enumGalgasBool test_1 = var_specialCase_25367.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_propertyMap var_propertyMap_25541 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_25579 ;
    GALGAS_lstring joker_25498 ; // Joker input parameter
    GALGAS_propertyList joker_25581_2 ; // Joker input parameter
    GALGAS_uint joker_25581_1 ; // Joker input parameter
    var_receiverType_25254.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)).method_structure (joker_25498, var_propertyMap_25541, var_universalMap_25579, joker_25581_2, joker_25581_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    const enumGalgasBool test_2 = var_propertyMap_25541.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 653)) COMMA_SOURCE_FILE ("expression-primary.galgas", 653)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_objectIR var_propertyObject_25709 ;
      GALGAS_bool joker_25678 ; // Joker input parameter
      var_propertyMap_25541.method_searchKey (constinArgument_inRoutineName, joker_25678, var_propertyObject_25709, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 654)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_type_25756 ;
      GALGAS_lstring var_plmName_25784 ;
      GALGAS_uint var_index_25808 ;
      var_propertyObject_25709.method_property (var_type_25756, var_plmName_25784, var_index_25808, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
      var_specialCase_25367 = var_type_25756.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 656)).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 656)) ;
      const enumGalgasBool test_3 = var_specialCase_25367.boolEnum () ;
      if (kBoolTrue == test_3) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 658)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_receiverType_25254.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 663)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 664)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 664)) ;
  }
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_receiverType_25254.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 668)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string ("$").add_operation (var_receiverType_25254.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 668)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 668)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_5, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 667)) ;
  GALGAS_routineDescriptor var_routineDescriptor_26481 ;
  GALGAS_location var_outRoutineLocation_26519 ;
  extensionMethod_searchKey (constinArgument_inContext.mProperty_mRoutineMapForContext, constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 674)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_26481, var_outRoutineLocation_26519, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 672)) ;
  GALGAS_bool var_isPublic_26538 = var_routineDescriptor_26481.mProperty_mIsPublic ;
  GALGAS_routineKind var_routineKind_26586 = var_routineDescriptor_26481.mProperty_mRoutineKind ;
  GALGAS_mode var_calleeMode_26636 = extensionGetter_executionMode (var_routineKind_26586, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 681)) ;
  GALGAS_routineTypedSignature var_formalSignature_26723 = var_routineDescriptor_26481.mProperty_mSignature ;
  outArgument_outReturnedType = var_routineDescriptor_26481.mProperty_mReturnType ;
  const enumGalgasBool test_7 = var_isPublic_26538.operator_not (SOURCE_FILE ("expression-primary.galgas", 685)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_25254.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 686)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_26942 = var_outRoutineLocation_26519.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 687)) ;
      GALGAS_string var_invocationFile_26995 = constinArgument_inRoutineName.mProperty_location.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 688)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_26995.objectCompare (var_declarationFile_26942)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 690)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 690)) ;
      }
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_receiverType_25254.objectCompare (constinArgument_inSelfType)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 693)), GALGAS_string ("this routine is not public"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 693)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 697)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_26636, var_routineKind_26586, constinArgument_inRoutineName.mProperty_location, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 699)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_26723, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.mProperty_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 706)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_29448 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 747)) ;
  cEnumerator_routineTypedSignature enumerator_29491 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_29534 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_29491.hasCurrentObject () && enumerator_29534.hasCurrentObject ()) {
    switch (enumerator_29534.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_30872 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_29534.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_30872->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_30872->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_30872->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_29491.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 754)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_29672 = temp_0 ;
        GALGAS_lstring var_varLLVMName_29840 = GALGAS_lstring::constructor_new (extractedValue_name.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 756)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("expression-primary.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 756)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 756))  COMMA_SOURCE_FILE ("expression-primary.galgas", 756)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 757)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_29672, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_29672, var_varLLVMName_29840  COMMA_SOURCE_FILE ("expression-primary.galgas", 763)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 759)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_29672, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_29672, var_varLLVMName_29840  COMMA_SOURCE_FILE ("expression-primary.galgas", 772)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 768)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_29840.getter_string (SOURCE_FILE ("expression-primary.galgas", 777)), extensionGetter_llvmTypeName (var_type_29672.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 777))  COMMA_SOURCE_FILE ("expression-primary.galgas", 777)) ;
        var_parameterList_29448.addAssign_operation (enumerator_29534.current_mEffectiveParameterKind (HERE), enumerator_29534.current_mSelector (HERE), var_type_29672  COMMA_SOURCE_FILE ("expression-primary.galgas", 778)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 780)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_29672, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_29840.getter_string (SOURCE_FILE ("expression-primary.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 781)), var_varLLVMName_29840.getter_location (SOURCE_FILE ("expression-primary.galgas", 781))  COMMA_SOURCE_FILE ("expression-primary.galgas", 781)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 781))  COMMA_SOURCE_FILE ("expression-primary.galgas", 781))  COMMA_SOURCE_FILE ("expression-primary.galgas", 779)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_31850 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_29534.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_31850->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_30991 ;
        GALGAS_bool var_accessIsAllowed_31038 ;
        GALGAS_objectIR var_objectIR_31069 ;
        GALGAS_bool var_isCopyable_31102 ;
        GALGAS_bool var_canBeUsedAsInputParameter_31216 ;
        {
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_30991, var_accessIsAllowed_31038, var_objectIR_31069, var_isCopyable_31102, var_canBeUsedAsInputParameter_31216, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 783)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_31038.operator_not (SOURCE_FILE ("expression-primary.galgas", 791)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 792)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 792)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_31216.operator_not (SOURCE_FILE ("expression-primary.galgas", 794)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 795)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 795)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_31102.operator_not (SOURCE_FILE ("expression-primary.galgas", 797)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 798)), GALGAS_string ("an $").add_operation (var_type_30991.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 798)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 798)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 798)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 798)) ;
        }
        var_parameterList_29448.addAssign_operation (enumerator_29534.current_mEffectiveParameterKind (HERE), enumerator_29534.current_mSelector (HERE), var_type_30991  COMMA_SOURCE_FILE ("expression-primary.galgas", 800)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 802)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_30991, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_31069, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 803)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 803)), extensionGetter_location (var_objectIR_31069, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 803))  COMMA_SOURCE_FILE ("expression-primary.galgas", 803)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 803))  COMMA_SOURCE_FILE ("expression-primary.galgas", 803))  COMMA_SOURCE_FILE ("expression-primary.galgas", 801)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_33052 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_29534.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_33052->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_33052->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_32532 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_29491.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_32532, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 805)) ;
        GALGAS_objectIR var_expressionValue_32698 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_32532, extractedValue_endOfExp, var_expressionValue_32698, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 821)) ;
        }
        GALGAS_objectIR var_result_32725 = function_checkAssignmentCompatibility (var_expressionValue_32698, enumerator_29491.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 827)) ;
        var_parameterList_29448.addAssign_operation (enumerator_29534.current_mEffectiveParameterKind (HERE), enumerator_29534.current_mSelector (HERE), enumerator_29491.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 833)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 834)), var_result_32725  COMMA_SOURCE_FILE ("expression-primary.galgas", 834)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_33936 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_29534.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_33936->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_33181 ;
        GALGAS_bool var_accessIsAllowed_33228 ;
        GALGAS_objectIR var_objectIR_33259 ;
        GALGAS_bool var_canBeUsedAsInputParameter_33336 ;
        {
        GALGAS_bool joker_33269_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_33181, var_accessIsAllowed_33228, var_objectIR_33259, joker_33269_1, var_canBeUsedAsInputParameter_33336, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 836)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_33336.operator_not (SOURCE_FILE ("expression-primary.galgas", 844)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 845)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 845)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_33228.operator_not (SOURCE_FILE ("expression-primary.galgas", 847)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 848)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 848)) ;
        }
        var_parameterList_29448.addAssign_operation (enumerator_29534.current_mEffectiveParameterKind (HERE), enumerator_29534.current_mSelector (HERE), var_type_33181  COMMA_SOURCE_FILE ("expression-primary.galgas", 850)) ;
        GALGAS_objectIR var_argumentIR_33698 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_33181, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_33259, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 853)), extensionGetter_location (var_objectIR_33259, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 853))  COMMA_SOURCE_FILE ("expression-primary.galgas", 853)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 854))  COMMA_SOURCE_FILE ("expression-primary.galgas", 851)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 856)), var_argumentIR_33698  COMMA_SOURCE_FILE ("expression-primary.galgas", 856)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_36395 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_29534.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_36395->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 858)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 859)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 859)) ;
          var_parameterList_29448.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 860)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 861)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 861)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 861)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 862)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 863)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 863)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 863)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 865)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 867)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 867)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 869)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 869)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 871)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 871)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 873)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 873)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 875)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 875)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 877)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 877)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 879)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 879)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 881)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 881)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 883)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 883)) ;
                  var_parameterList_29448.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_36369 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 865)).unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_36369->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_35712 = extractedValue_universalMap ;
                  GALGAS_bool var_public_35799 ;
                  GALGAS_objectIR var_propertyObject_35819 ;
                  {
                  extensionSetter_searchValuedObjectForReadAccess (var_m_35712, extractedValue_name, var_public_35799, var_propertyObject_35819, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 886)) ;
                  }
                  GALGAS_uint var_idx_35874 ;
                  GALGAS_unifiedTypeMap_2D_proxy joker_35857_2 ; // Joker input parameter
                  GALGAS_lstring joker_35857_1 ; // Joker input parameter
                  var_propertyObject_35819.method_property (joker_35857_2, joker_35857_1, var_idx_35874, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 887)) ;
                  GALGAS_objectIR var_fieldObjectReference_35976 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_35819, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 888)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 888)), ioArgument_ioTemporaries, var_fieldObjectReference_35976, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 888)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_35976, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 892)), var_idx_35874, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 889)) ;
                  }
                  var_parameterList_29448.addAssign_operation (enumerator_29534.current_mEffectiveParameterKind (HERE), enumerator_29534.current_mSelector (HERE), extensionGetter_type (var_propertyObject_35819, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 895))  COMMA_SOURCE_FILE ("expression-primary.galgas", 895)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 897)), var_fieldObjectReference_35976  COMMA_SOURCE_FILE ("expression-primary.galgas", 896)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_29491.gotoNextObject () ;
    enumerator_29534.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 904)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 904)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 905)).getter_string (SOURCE_FILE ("expression-primary.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 905)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 905)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 906)).getter_string (SOURCE_FILE ("expression-primary.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 905)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 906)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 905)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_36727 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_36756 (var_parameterList_29448, kENUMERATION_UP) ;
    while (enumerator_36727.hasCurrentObject () && enumerator_36756.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_36727.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 909)).objectCompare (enumerator_36756.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 909)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_36756.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 910)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_36756.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 910)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 910)).add_operation (enumerator_36727.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 911)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 911)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 910)) ;
      }
      GALGAS_string var_requiredPassingMode_37047 = extensionGetter_requiredActualPassingModeForSelector (enumerator_36727.current_mFormalArgumentPassingMode (HERE), enumerator_36727.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 913)) ;
      GALGAS_string var_testedPassingMode_37168 = extensionGetter_passingModeForActualSelector (enumerator_36756.current_mEffectiveParameterPassingMode (HERE), enumerator_36756.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 914)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_37047.objectCompare (var_testedPassingMode_37168)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_36756.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 916)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_37047, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 916)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 916)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 916)) ;
      }
      enumerator_36727.gotoNextObject () ;
      enumerator_36756.gotoNextObject () ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 37)) ;
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
//                             Overriding extension method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3094 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 59)) ;
  GALGAS_objectIR var_expressionResult_3643 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 65)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3094, var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 77)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 77)).operator_not (SOURCE_FILE ("directive-check.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 81)).operator_not (SOURCE_FILE ("directive-check.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_4036 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4013_1 ; // Joker input parameter
    var_expressionResult_3643.method_literalInteger (joker_4013_1, var_value_4036, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_4036.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 85)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 86)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 38)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
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
//                         Overriding extension method '@varAssignmentInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varAssignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                 const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                 const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  GALGAS_objectIR var_currentObject_3846 ;
  GALGAS_string var_globalVariableReceiverName_3916 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 62)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_3846, var_globalVariableReceiverName_3916, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 60)) ;
  const enumGalgasBool test_0 = var_currentObject_3846.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 78)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 78)) ;
    var_currentObject_3846.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_4672 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_3846, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 86)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_4672, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 81)) ;
  GALGAS_objectIR var_sourceOperand_4850 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_4672, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 100)), var_sourceOperand_4850, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  }
  GALGAS_objectIR var_result_4869 = function_checkAssignmentCompatibility (var_sourceOperand_4850, extensionGetter_type (var_currentObject_3846, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)), object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 106)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 103)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_3846, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment.galgas", 109)), var_result_4869, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 93)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 94)) ;
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
//                       Overriding extension method '@varOperatorAssignInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  GALGAS_objectIR var_targetObject_5082 ;
  GALGAS_string var_globalVariableReceiverName_5152 ;
  extensionMethod_analyzeAssignmentTarget (object->mProperty_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment-operator.galgas", 118)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_5082, var_globalVariableReceiverName_5152, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 116)) ;
  const enumGalgasBool test_0 = var_targetObject_5082.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 133)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 134)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 134)) ;
    var_targetObject_5082.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_5898 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_5082, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 142)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5898, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 137)) ;
  GALGAS_objectIR var_sourceValue_6057 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5898, object->mProperty_mEndOfSourceExpression, var_sourceValue_6057, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 153)) ;
  }
  GALGAS_bool var_noPanicGeneration_6531 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_6594 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 173)))) ;
  GALGAS_infixOperatorMap var_operatorMap_6656 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mAndOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mOrOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mXorOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_6594.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 184)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 185)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 184)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_6531.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.mProperty_mAddOperatorMap ;
      }
      var_operatorMap_6656 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_6594.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 192)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 193)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 192)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_6531.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.mProperty_mSubOperatorMap ;
      }
      var_operatorMap_6656 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_6594.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 200)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 201)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 201)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 200)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_6531.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.mProperty_mMulOperatorMap ;
      }
      var_operatorMap_6656 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_6594.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 208)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 209)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 209)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 208)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_6531.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.mProperty_mDivOperatorMap ;
      }
      var_operatorMap_6656 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_6594.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 216)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 217)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 217)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 216)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_6531.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.mProperty_mModOperatorMap ;
      }
      var_operatorMap_6656 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_6656 = constinArgument_inContext.mProperty_mModNoOvfOperatorMap ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_8989 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_8935 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_6656, extensionGetter_type (var_targetObject_5082, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 224)), extensionGetter_type (var_sourceValue_6057, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 225)), object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 226)), joker_8935, var_binaryOperator_8989, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 223)) ;
  GALGAS_objectIR var_variableValue_9170 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_5082, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 234)), var_variableValue_9170, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 231)) ;
  }
  GALGAS_objectIR var_newResultingValue_9398 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_8989.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_9170, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 241)), var_sourceValue_6057, extensionGetter_type (var_targetObject_5082, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 243)), var_newResultingValue_9398, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 237)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_5082, object->mProperty_mAssignmentTargetAST.mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 248)), var_newResultingValue_9398, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2711 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2711 COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
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
  GALGAS_lstring var_typeName_3133 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3133 COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
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
//                       Overriding extension method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4365 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_5078 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4365, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5078, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 102)) ;
  GALGAS_objectIR var_expressionResult_5228 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5078, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 121)), var_expressionResult_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4365.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4365 = extensionGetter_type (var_expressionResult_5228, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  }
  GALGAS_objectIR var_result_5354 = function_checkAssignmentCompatibility (var_expressionResult_5228, var_targetType_4365, object->mProperty_mVarName.mProperty_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_lstring var_varName_5601 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 136))  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
  GALGAS_objectIR var_objectIR_5733 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)), var_varName_5601  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, object->mProperty_mVarName, var_objectIR_5733, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 139)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)), GALGAS_bool (true), var_objectIR_5733, extensionGetter_copyable (extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_5601.getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149))  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_5601.getter_string (SOURCE_FILE ("instruction-var.galgas", 151)), extensionGetter_type (var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 152)), var_result_5354, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
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
                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                       const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                       const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_7243 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 173)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_7243.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 175)).operator_not (SOURCE_FILE ("instruction-var.galgas", 175)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 176)), GALGAS_string ("$").add_operation (var_targetType_7243.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 176)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 176)) ;
  }
  GALGAS_lstring var_varLLVMName_7467 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 179))  COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_7243, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_targetType_7243, var_varLLVMName_7467  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), extensionGetter_copyable (var_targetType_7243, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 186)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 181)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_7467.getter_string (SOURCE_FILE ("instruction-var.galgas", 190)), extensionGetter_llvmTypeName (var_targetType_7243.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190))  COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2137 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 47)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2137 COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
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
//                       Overriding extension method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mProperty_mTypeMap, object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3458 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4185 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3458, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4185, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 76)) ;
  GALGAS_objectIR var_expressionResult_4345 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4185, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 95)), var_expressionResult_4345, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 92)) ;
  }
  GALGAS_objectIR var_result_4392 = function_checkAssignmentCompatibility (var_expressionResult_4345, var_targetType_3458, object->mProperty_mVarName.mProperty_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)).operator_not (SOURCE_FILE ("instruction-let.galgas", 107)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 108)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
    var_result_4392.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_4763 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)).add_operation (ioArgument_ioTemporaries.mProperty_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-let.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 111))  COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 112)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_varPLMName_4763.getter_string (SOURCE_FILE ("instruction-let.galgas", 114)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114))  COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
    GALGAS_objectIR var_localConstant_5022 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 115)), var_varPLMName_4763  COMMA_SOURCE_FILE ("instruction-let.galgas", 115)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_5022, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 116)), var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
    }
  }
  {
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, object->mProperty_mVarName, var_expressionResult_4345, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mProperty_mVarName, extensionGetter_type (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 121)), GALGAS_bool (true), var_expressionResult_4345, extensionGetter_copyable (extensionGetter_type (var_result_4392, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 124)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
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
//              Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 37)) ;
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
//                             Overriding extension method '@assertInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                          const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 58)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3263 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 62)) ;
  GALGAS_objectIR var_expressionValue_3811 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 68)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3263, var_expressionValue_3811, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 63)) ;
  const enumGalgasBool test_2 = extensionGetter_kind (var_expressionValue_3811, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 80)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 80)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 80)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3811, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 85)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 88)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mAssertInstructionLocation, var_instructionGenerationList_3263, var_expressionValue_3811  COMMA_SOURCE_FILE ("instruction-assert.galgas", 89))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 89)) ;
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
  GALGAS_uint var_assertErrorCode_5208 = GALGAS_uint ((uint32_t) 7U) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode_5208.getter_string (SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 118)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 129)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 34)) ;
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
//                             Overriding extension method '@panicInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_panicInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3251 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 60)) ;
  GALGAS_objectIR var_result_3811 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.mProperty_mPanicCodeType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3251, var_result_3811, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 61)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3251.getter_length (SOURCE_FILE ("instruction-panic.galgas", 79)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3811.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 80)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 80)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3811, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_4147 ;
    GALGAS_bigint var_max_4160 ;
    GALGAS_bool joker_4171 ; // Joker input parameter
    GALGAS_uint joker_4174_1 ; // Joker input parameter
    constinArgument_inContext.mProperty_mPanicCodeType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)).method_integer (var_min_4147, var_max_4160, joker_4171, joker_4174_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)) ;
    GALGAS_bigint var_throwValue_4230 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4206_1 ; // Joker input parameter
    var_result_3811.method_literalInteger (joker_4206_1, var_throwValue_4230, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4230.objectCompare (var_min_4147)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4230.objectCompare (var_max_4160)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.mProperty_mPanicCodeType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 88)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mThrowLocation, var_throwValue_4230  COMMA_SOURCE_FILE ("instruction-panic.galgas", 89))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 89)) ;
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
  GALGAS_uint var_staticStringIndex_5512 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 114)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 114)), var_staticStringIndex_5512, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_5512.getter_string (SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 119)) ;
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
//                               Overriding extension method '@ifInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResultPossibleReference_5384 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 118)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5384, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
  GALGAS_objectIR var_testResult_5550 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5384, object->mProperty_mTestExpressionEndLocation, var_testResult_5550, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testResult_5550, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 136)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_5550, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5550, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)).operator_not (SOURCE_FILE ("instruction-if.galgas", 138)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5550, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 140)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6235 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 146)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6235, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6919 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 163)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6919, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5550, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_6235, var_elseInstructionGenerationList_6919  COMMA_SOURCE_FILE ("instruction-if.galgas", 182))  COMMA_SOURCE_FILE ("instruction-if.galgas", 182)) ;
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
  GALGAS_string var_labelTrue_8700 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).getter_string (SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  GALGAS_string var_labelFalse_8763 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).getter_string (SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  GALGAS_string var_labelEnd_8825 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)).getter_string (SOURCE_FILE ("instruction-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (var_labelTrue_8700, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (var_labelFalse_8763, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8700.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8825, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8763.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 218)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8825, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8825.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 221)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 230)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 231)) ;
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
  cEnumerator_syncInstructionBranchList enumerator_5704 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5704.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5704.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 148)) ;
    enumerator_5704.gotoNextObject () ;
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
//                              Overriding extension method '@syncInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syncInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inCurrentMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6938 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 170)) ;
  cEnumerator_syncInstructionBranchList enumerator_7009 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_7009.hasCurrentObject ()) {
    {
    extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 172)) ;
    }
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 173)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_7163 ;
    switch (enumerator_7009.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommand::kNotBuilt:
      break ;
    case GALGAS_guardedCommand::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommand_synchronization * extractPtr_8367 = (const cEnumAssociatedValues_guardedCommand_synchronization *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8367->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_8367->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_8367->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_8367->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7342 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 178)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_7976 ;
        GALGAS_lstring var_guardMangledName_8032 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_7342, var_guardEffectiveParameterListIR_7976, var_guardMangledName_8032, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 179)) ;
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_8032.mProperty_string, extractedValue_optionalReceiverName.mProperty_string, var_guardInstructionGenerationList_7342, var_guardEffectiveParameterListIR_7976  COMMA_SOURCE_FILE ("instruction-sync.galgas", 196)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_9528 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9528->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9528->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9528->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8486 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 204)) ;
        GALGAS_objectIR var_sourceOperand_9095 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 210)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8486, var_sourceOperand_9095, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 205)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_9095, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 222)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_9095, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 223)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 224)) ;
          }
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8486, var_sourceOperand_9095  COMMA_SOURCE_FILE ("instruction-sync.galgas", 226)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_11787 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_11787->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_11787->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11787->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_11787->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_11787->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_11787->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_9707 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 232)) ;
        GALGAS_objectIR var_boolExpressionResult_10329 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 238)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_9707, var_boolExpressionResult_10329, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 233)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_10329, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 249)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 249)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 250)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_10329, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 251)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 252)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_10647 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 254)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_11281 ;
        GALGAS_lstring var_guardMangledName_11337 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_10647, var_guardEffectiveParameterListIR_11281, var_guardMangledName_11337, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 255)) ;
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_9707, var_boolExpressionResult_10329, var_guardMangledName_11337.mProperty_string, extractedValue_optionalReceiverName.mProperty_string, var_guardInstructionGenerationList_10647, var_guardEffectiveParameterListIR_11281  COMMA_SOURCE_FILE ("instruction-sync.galgas", 272)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_11874 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 283)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_7009.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_7009.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_11874, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 284)) ;
    {
    extensionSetter_closeOverride (ioArgument_ioUniversalMap, enumerator_7009.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 299)) ;
    }
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_7009.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 300)) ;
    }
    var_onInstructionBranchListIR_6938.addAssign_operation (var_guardedCommandIR_7163, var_branchInstructionGenerationList_11874  COMMA_SOURCE_FILE ("instruction-sync.galgas", 302)) ;
    enumerator_7009.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mStartOf_5F_on_5F_instruction, var_onInstructionBranchListIR_6938  COMMA_SOURCE_FILE ("instruction-sync.galgas", 307))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 307)) ;
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

void routine_analyzeGuardCall (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                               const GALGAS_lstring constinArgument_inReceiverName,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 329)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_13865 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_14035 ;
    {
    GALGAS_bool joker_14004_1 ; // Joker input parameter
    GALGAS_bool joker_14043_2 ; // Joker input parameter
    GALGAS_bool joker_14043_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_13865, joker_14004_1, var_objectIR_14035, joker_14043_2, joker_14043_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 332)) ;
    }
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 339)), var_objectIR_14035  COMMA_SOURCE_FILE ("instruction-sync.galgas", 339)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_13865 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 341)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (var_receiverType_13865.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 344)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 343)) ;
  GALGAS_bool var_isPublic_14416 ;
  GALGAS_routineTypedSignature var_formalSignature_14464 ;
  constinArgument_inContext.mProperty_mGuardMapForContext.method_searchKey (outArgument_outGuardMangledName, var_isPublic_14416, var_formalSignature_14464, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 348)) ;
  const enumGalgasBool test_3 = var_isPublic_14416.operator_not (SOURCE_FILE ("instruction-sync.galgas", 354)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.mProperty_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_14612 = constinArgument_inContext.mProperty_mGuardMapForContext.getter_locationForKey (outArgument_outGuardMangledName.mProperty_string, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 356)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 356)) ;
      GALGAS_string var_invocationFile_14721 = constinArgument_inGuardName.mProperty_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 357)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_14721.objectCompare (var_declarationFile_14612)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 359)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 359)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 362)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 366)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_14464, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.mProperty_location, outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 368)) ;
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
  GALGAS_string var_startLabel_17978 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.getter_string (SOURCE_FILE ("instruction-sync.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 434)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17978, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)) ;
  GALGAS_string var_startLabelName_18142 = var_startLabel_17978.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_18142.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)) ;
  GALGAS_string var_exitLabelName_18226 = var_startLabel_17978.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 440)) ;
  GALGAS_string var_selectLabelName_18271 = var_startLabel_17978.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 441)) ;
  GALGAS_string var_errorLabelName_18317 = var_startLabel_17978.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 442)) ;
  GALGAS_string var_currentStartBranchLabel_18371 = var_startLabelName_18142 ;
  cEnumerator_syncInstructionBranchListIR enumerator_18431 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_18394 ((uint32_t) 0) ;
  while (enumerator_18431.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_18466 = GALGAS_string ("%").add_operation (var_startLabel_17978, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)) ;
    GALGAS_bool var_isWhileGuardedCommand_18536 ;
    switch (enumerator_18431.current (HERE).mProperty_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_19470 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_18431.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19470->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_19470->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_19470->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_19470->mAssociatedValue4 ;
        var_isWhileGuardedCommand_18536 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 450)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18466, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_19021 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_19021.hasCurrentObject ()) {
          switch (enumerator_19021.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19021.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)).add_operation (extensionGetter_llvmName (enumerator_19021.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19021.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)).add_operation (extensionGetter_llvmName (enumerator_19021.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 458)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19021.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)).add_operation (extensionGetter_llvmName (enumerator_19021.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 460)) ;
            }
            break ;
          }
          if (enumerator_19021.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
          }
          enumerator_19021.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20288 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_18431.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20288->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20288->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_20288->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18536 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)) ;
        GALGAS_string var_acceptedLabelName_19738 = var_startLabel_17978.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
        GALGAS_string var_rejectedLabelName_19801 = var_startLabel_17978.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (var_acceptedLabelName_19738, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (var_rejectedLabelName_19801, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_19738.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_19801, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_19801.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18466, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_22019 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_18431.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_22019->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_22019->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_22019->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22019->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_22019->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_22019->mAssociatedValue6 ;
        var_isWhileGuardedCommand_18536 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        GALGAS_string var_testOkLabelName_20595 = var_startLabel_17978.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        GALGAS_string var_testExitLabelName_20666 = var_startLabel_17978.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (var_testOkLabelName_20595, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (var_testExitLabelName_20666, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_20595.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
        GALGAS_string var_guardAcceptationLabelName_21021 = var_startLabel_17978.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_21021, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21247 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_21247.hasCurrentObject ()) {
          switch (enumerator_21247.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21247.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (extensionGetter_llvmName (enumerator_21247.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21247.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)).add_operation (extensionGetter_llvmName (enumerator_21247.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21247.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)).add_operation (extensionGetter_llvmName (enumerator_21247.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 495)) ;
            }
            break ;
          }
          if (enumerator_21247.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)) ;
          }
          enumerator_21247.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_20666, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_20666.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18466, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_21021, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (var_testOkLabelName_20595, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18371, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_22053 = var_startLabel_17978.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)) ;
    GALGAS_string var_rejectedLabelName_22113 = var_startLabel_17978.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (index_18394.getter_string (SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_18466, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (var_acceptedLabelName_22053, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (var_rejectedLabelName_22113, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_22053.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18431.current (HERE).mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18536.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_18142 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18226 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_22113.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)) ;
    var_currentStartBranchLabel_18371 = var_rejectedLabelName_22113 ;
    enumerator_18431.gotoNextObject () ;
    index_18394.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 444)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18271, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18271, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (var_startLabelName_18142, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (var_errorLabelName_18317, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18317.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18226, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 520)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_23305 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 523)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 523)), var_staticStringIndex_23305, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_23305.getter_string (SOURCE_FILE ("instruction-sync.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mProperty_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18226.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)) ;
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
  GALGAS_uint var_branchCount_23958 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 540)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23958)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23958 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_24143 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_24143.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_24143.current (HERE).mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)) ;
    switch (enumerator_24143.current (HERE).mProperty_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_24697 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_24143.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24697->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24697->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24697->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24864 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_24143.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24864->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_25399 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_24143.current (HERE).mProperty_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25399->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25399->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25399->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25399->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 560)) ;
        }
      }
      break ;
    }
    enumerator_24143.gotoNextObject () ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 47)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
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
//                             Overriding extension method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3528 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 70)) ;
  GALGAS_objectIR var_testValuePossibleReference_4095 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 76)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3528, var_testValuePossibleReference_4095, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_objectIR var_testValue_4255 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_4095, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_4255, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testValue_4255, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 94)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4255, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4255, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4630 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 100)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 102)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4630, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 103)) ;
  {
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)), var_testInstructionGenerationList_3528, var_testValue_4255, var_instructionGenerationList_4630  COMMA_SOURCE_FILE ("instruction-while.galgas", 121))  COMMA_SOURCE_FILE ("instruction-while.galgas", 121)) ;
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
  GALGAS_string var_labelTest_6520 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  GALGAS_string var_labelLoop_6571 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  GALGAS_string var_labelEnd_6621 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6520, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6520.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (var_labelLoop_6571, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (var_labelEnd_6621, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6571.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6520, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6621.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                            extensionMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineExtensionMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

