#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@integerObject_literal_divisionOperator generateInfixOperatorCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                    const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                    const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                    const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                    GALGAS_operandIR & outArgument_outResult,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerObject_5F_literal_5F_divisionOperator * object = (const cPtr_integerObject_5F_literal_5F_divisionOperator *) inObject ;
  macroValidSharedObject (object, cPtr_integerObject_5F_literal_5F_divisionOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 475)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_18249 ; // Joker input parameter
  GALGAS_uint joker_18261 ; // Joker input parameter
  constinArgument_inLeftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 476)).method_integer (var_min, var_max, joker_18249, joker_18261, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 476)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 478)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 478))  COMMA_SOURCE_FILE ("type-integer.galgas", 478)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal right integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 480)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 480))  COMMA_SOURCE_FILE ("type-integer.galgas", 480)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_literalValue.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 481)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("division by zero")  COMMA_SOURCE_FILE ("type-integer.galgas", 482)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 484)) ;
        }
        {
        extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inLeftOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 485)) ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (void) {
  enterExtensionMethod_generateInfixOperatorCode (kTypeDescriptor_GALGAS_integerObject_5F_literal_5F_divisionOperator.mSlotID,
                                                  extensionMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode (defineExtensionMethod_integerObject_5F_literal_5F_divisionOperator_generateInfixOperatorCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@literal_integerObject_infixOperator generateInfixOperatorCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literal_5F_integerObject_5F_infixOperator_generateInfixOperatorCode (const cPtr_infixOperatorDescription * inObject,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                 const GALGAS_location constinArgument_inOperatorLocation,
                                                                                                 const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                 GALGAS_operandIR & outArgument_outResult,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_integerObject_5F_infixOperator * object = (const cPtr_literal_5F_integerObject_5F_infixOperator *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_integerObject_5F_infixOperator) ;
  GALGAS_bigint var_literalValue ;
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_literalValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 641)) ;
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  GALGAS_bool joker_24473 ; // Joker input parameter
  GALGAS_uint joker_24485 ; // Joker input parameter
  constinArgument_inRightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 642)).method_integer (var_min, var_max, joker_24473, joker_24485, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 642)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_literalValue.objectCompare (var_min)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too small (should be >= ").add_operation (var_min.getter_string (SOURCE_FILE ("type-integer.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 644)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 644))  COMMA_SOURCE_FILE ("type-integer.galgas", 644)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_literalValue.objectCompare (var_max)).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("literal left integer expression too large (should be <= ").add_operation (var_max.getter_string (SOURCE_FILE ("type-integer.galgas", 646)), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 646)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 646))  COMMA_SOURCE_FILE ("type-integer.galgas", 646)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("type-integer.galgas", 648)) ;
      }
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, constinArgument_inRightOperand.mAttribute_mType, constinArgument_inOperatorLocation, constinArgument_inLeftOperand.mAttribute_mValue, object->mAttribute_mOperator, constinArgument_inRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("type-integer.galgas", 649)) ;
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
  GALGAS_lstring var_staticIntegerTypeName = GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 32)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 32)) ;
  {
  const GALGAS_literalIntegerDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_staticIntegerTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 33)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_staticIntegerTypeName, GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("type-literal-integer.galgas", 34)) ;
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
                                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
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
                                                                      const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_integerTypeName = function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 61)).getter_nowhere (SOURCE_FILE ("type-literal-integer.galgas", 61)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (var_integerTypeName, GALGAS_string ("<<literal integer>>"), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("type-literal-integer.galgas", 66)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-literal-integer.galgas", 67)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-literal-integer.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 63)) ;
  }
  {
  routine_enterLiteralIntegerOperators (var_integerTypeName, ioArgument_ioContext, inCompiler  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 75)) ;
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
                                                                                                   const GALGAS_operandIR constinArgument_inLeftOperand,
                                                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                                   const GALGAS_operandIR constinArgument_inRightOperand,
                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                                                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literal_5F_literal_5F_integerInfixOperation * object = (const cPtr_literal_5F_literal_5F_integerInfixOperation *) inObject ;
  macroValidSharedObject (object, cPtr_literal_5F_literal_5F_integerInfixOperation) ;
  GALGAS_bigint var_leftValue ;
  constinArgument_inLeftOperand.mAttribute_mValue.method_literalInteger (var_leftValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 261)) ;
  GALGAS_bigint var_rightValue ;
  constinArgument_inRightOperand.mAttribute_mValue.method_literalInteger (var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 262)) ;
  const GALGAS_literal_5F_literal_5F_integerInfixOperation temp_0 = object ;
  GALGAS_bigint var_result = callExtensionGetter_performStaticOperation ((const cPtr_literal_5F_literal_5F_integerInfixOperation *) temp_0.ptr (), var_leftValue, var_rightValue, inCompiler COMMA_SOURCE_FILE ("type-literal-integer.galgas", 263)) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inResultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 282))  COMMA_SOURCE_FILE ("type-literal-integer.galgas", 282)) ;
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
  result_outLocation = object->mAttribute_mLiteralStringTypeName.mAttribute_location ;
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
  GALGAS_lstring var_literalStringTypeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 33)), object->mAttribute_mLiteralStringTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-static-string.galgas", 33)) ;
  {
  const GALGAS_literalStringDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_literalStringTypeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 34)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_literalStringTypeName, GALGAS_string ("$uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 35)) COMMA_SOURCE_FILE ("type-static-string.galgas", 35)) ;
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
  result_outRepresentation = GALGAS_string ("literal string ").add_operation (object->mAttribute_mLiteralStringTypeName.getter_string (SOURCE_FILE ("type-static-string.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 41)) ;
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
                                                                             const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
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
                                                                     const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                     GALGAS_semanticContext & ioArgument_ioContext,
                                                                     GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringDeclaration * object = (const cPtr_literalStringDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringDeclaration) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uint_38_Type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("type-static-string.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("type-static-string.galgas", 62)) ;
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mLiteralStringTypeName, GALGAS_string ("i8*"), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("type-static-string.galgas", 67)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-static-string.galgas", 68)), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), var_uint_38_Type, inCompiler COMMA_SOURCE_FILE ("type-static-string.galgas", 64)) ;
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
  result_outLocation = object->mAttribute_mOpaqueTypeName.mAttribute_location ;
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
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 61)), object->mAttribute_mOpaqueTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 61)) ;
  {
  const GALGAS_opaqueTypeDeclaration temp_0 = object ;
  ioArgument_ioGraph.setter_addNode (var_typeName, temp_0, inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 62)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (var_typeName, GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 63)).getter_nowhere (SOURCE_FILE ("type-opaque-declaration.galgas", 63)) COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 63)) ;
  }
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
  result_outRepresentation = GALGAS_string ("opaqueType $").add_operation (object->mAttribute_mOpaqueTypeName.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 69)) ;
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
                                                                  const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                  GALGAS_semanticContext & ioArgument_ioContext,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opaqueTypeDeclaration * object = (const cPtr_opaqueTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_opaqueTypeDeclaration) ;
  GALGAS_bool var_copyable = GALGAS_bool (false) ;
  GALGAS_bool var_instantiable = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_3954 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3954.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3954.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("instantiable"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_instantiable.boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_3954.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 87)) ;
      }else if (kBoolFalse == test_1) {
        var_instantiable = GALGAS_bool (true) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3954.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("copyable"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const enumGalgasBool test_4 = var_copyable.boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_3954.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 93)) ;
        }else if (kBoolFalse == test_4) {
          var_copyable = GALGAS_bool (true) ;
        }
      }else if (kBoolFalse == test_3) {
        GALGAS_location location_6 (enumerator_3954.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("only @copyable and @instantiable attributes are allowed here")  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 98)) ;
      }
    }
    enumerator_3954.gotoNextObject () ;
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mSize.mAttribute_bigint.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 102)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (object->mAttribute_mSize.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_8, GALGAS_string ("the opaque type size should be > 0")  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 103)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mOpaqueTypeName, GALGAS_string ("i").add_operation (object->mAttribute_mSize.mAttribute_bigint.getter_string (SOURCE_FILE ("type-opaque-declaration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 107)), GALGAS_typeKind::constructor_opaque (object->mAttribute_mSize.mAttribute_bigint  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 108)), GALGAS_typedConstantMap::constructor_emptyMap (SOURCE_FILE ("type-opaque-declaration.galgas", 109)), var_instantiable, var_copyable, GALGAS_bool (false), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-opaque-declaration.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 105)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mConstructorMap.setter_insertKey (object->mAttribute_mOpaqueTypeName, GALGAS_constructorValue::constructor_simple (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117))  COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("type-opaque-declaration.galgas", 117)) ;
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
                                                                          const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
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
//                          Overriding extension getter '@globalConstantDeclaration location'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_globalConstantDeclaration_location (const cPtr_abstractDeclaration * inObject,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  result_outLocation = object->mAttribute_mConstantName.mAttribute_location ;
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
  ioArgument_ioGraph.setter_addNode (object->mAttribute_mConstantName, temp_0, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 72)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mConstantTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mConstantTypeName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 75)), object->mAttribute_mConstantTypeName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 75)) ;
    {
    ioArgument_ioGraph.setter_addEdge (object->mAttribute_mConstantName, var_typeName COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 76)) ;
    }
  }
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), object->mAttribute_mConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 79)) ;
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
  result_outRepresentation = GALGAS_string ("global constant ").add_operation (object->mAttribute_mConstantName.getter_string (SOURCE_FILE ("declaration-global-constant.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 85)) ;
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
                                                                      const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
                                                                      GALGAS_semanticContext & ioArgument_ioContext,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_globalConstantDeclaration * object = (const cPtr_globalConstantDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_globalConstantDeclaration) ;
  GALGAS_variableMap var_variableMap = function_initialVariableMap (GALGAS_string ("compiler"), ioArgument_ioContext, GALGAS_bool (false), GALGAS_accessKind::constructor_readWriteAccess (SOURCE_FILE ("declaration-global-constant.galgas", 101)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 97)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_annotationType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mConstantTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_annotationType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 108)) ;
  }else if (kBoolFalse == test_0) {
    var_annotationType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, object->mAttribute_mConstantTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 110)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-constant.galgas", 113)) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 114)) ;
  GALGAS_allocaList var_allocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-constant.galgas", 115)) ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-constant.galgas", 117)), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-constant.galgas", 119)), var_annotationType, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-constant.galgas", 122)), GALGAS_bool (true), var_temporaries, ioArgument_ioGlobalLiteralStringMap, var_variableMap, var_allocaList, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 116)) ;
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, var_annotationType, object->mAttribute_mConstantName.mAttribute_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 132)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList.getter_length (SOURCE_FILE ("declaration-global-constant.galgas", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_result.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 139)).operator_not (SOURCE_FILE ("declaration-global-constant.galgas", 139)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mConstantName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 140)) ;
  }
  {
  ioArgument_ioContext.mAttribute_mGlobalConstantMap.setter_insertKey (object->mAttribute_mConstantName, var_result, inCompiler COMMA_SOURCE_FILE ("declaration-global-constant.galgas", 143)) ;
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
                                                                              const GALGAS_procedureDeclarationListAST /* constinArgument_inProcedureListAST */,
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
//                 Overriding extension method '@standaloneRoutineCallInstructionAST baseGuardAnalyze'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneRoutineCallInstructionAST_baseGuardAnalyze (const cPtr_abstractCallInstructionAST * inObject,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                  const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                  GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallInstructionAST * object = (const cPtr_standaloneRoutineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallInstructionAST) ;
  GALGAS_lstring var_routineMangledName = GALGAS_lstring::constructor_new (GALGAS_string (".").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 296)), object->mAttribute_mRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 296)) ;
  GALGAS_bool var_isPublic ;
  GALGAS_procedureSignature var_formalSignature ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (var_routineMangledName, var_isPublic, var_formalSignature, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 297)) ;
  const enumGalgasBool test_0 = var_isPublic.operator_not (SOURCE_FILE ("declaration-guard.galgas", 303)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_declarationFile = constinArgument_inContext.mAttribute_mGuardMapForContext.getter_locationForKey (var_routineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)).getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 304)) ;
    GALGAS_string var_invocationFile = object->mAttribute_mRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 305)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_invocationFile.objectCompare (var_declarationFile)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 307)) ;
    }
  }
  GALGAS_lstring var_routineNameForInvocationGraph = function_guardNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 311)), object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 311)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("declaration-guard.galgas", 312)) ;
  }
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 314)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 315)) ;
  GALGAS_allocaList var_baseGuardAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 316)) ;
  {
  GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 324)) ;
  temp_3.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 324))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 324)) ;
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature, object->mAttribute_mEffectiveParameterList, object->mAttribute_mRoutineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, temp_3, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_effectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 317)) ;
  }
  outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_routineMangledName.mAttribute_string, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("declaration-guard.galgas", 334)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneRoutineCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_standaloneRoutineCallInstructionAST.mSlotID,
                                         extensionMethod_standaloneRoutineCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneRoutineCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_standaloneRoutineCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@unifiedSelfCallInstructionAST baseGuardAnalyze'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unifiedSelfCallInstructionAST_baseGuardAnalyze (const cPtr_abstractCallInstructionAST * inObject,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unifiedSelfCallInstructionAST * object = (const cPtr_unifiedSelfCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unifiedSelfCallInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-guard.galgas", 353)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 354)) ;
    outArgument_outConvenienceGuardGenerationIR.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_currentType = constinArgument_inSelfType ;
    GALGAS_lstringlist var_propertyList = object->mAttribute_mPropertyList ;
    GALGAS_lstring var_methodName ;
    {
    var_propertyList.setter_popLast (var_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 358)) ;
    }
    GALGAS_elementPtrList var_elementPtrList = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 359)) ;
    GALGAS_bool var_needsPublic = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14134 (var_propertyList, kEnumeration_up) ;
    while (enumerator_14134.hasCurrentObject ()) {
      switch (var_currentType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 362)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          GALGAS_location location_1 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_1, GALGAS_string ("an opaque type does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 364)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          GALGAS_location location_2 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 366)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          GALGAS_location location_3 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 368)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          GALGAS_location location_4 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 370)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          GALGAS_location location_5 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 372)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          GALGAS_location location_6 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 374)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          GALGAS_location location_7 (enumerator_14134.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 376)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          const cEnumAssociatedValues_typeKind_structure * extractPtr_15214 = (const cEnumAssociatedValues_typeKind_structure *) (var_currentType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 362)).unsafePointer ()) ;
          const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_15214->mAssociatedValue0 ;
          GALGAS_bool var_public ;
          GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
          GALGAS_uint var_idx ;
          extractedValue_propertyMap.method_searchKey (enumerator_14134.current_mValue (HERE), var_public, var_propertyType, var_idx, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 378)) ;
          var_elementPtrList.addAssign_operation (var_idx, enumerator_14134.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("declaration-guard.galgas", 379)) ;
          var_currentType = var_propertyType ;
          var_needsPublic = GALGAS_bool (true) ;
        }
        break ;
      }
      enumerator_14134.gotoNextObject () ;
    }
    GALGAS_objectInMemoryIR var_propertyAddressLLVMvar ;
    {
    routine_getLocalNameOfNewTempObjectInMemory (var_currentType, ioArgument_ioTemporaries, var_propertyAddressLLVMvar, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 384)) ;
    }
    GALGAS_instructionListIR var_baseGuardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 385)) ;
    {
    extensionSetter_appendGetElementPtrFromSelf (var_baseGuardInstructionGenerationList, var_propertyAddressLLVMvar, constinArgument_inSelfType, var_elementPtrList, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 386)) ;
    }
    GALGAS_lstring var_routineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_currentType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)).add_operation (var_methodName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)), var_methodName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 391)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 392)) ;
    var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 393)), extensionGetter_address (var_propertyAddressLLVMvar, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 393))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 393)) ;
    GALGAS_bool var_isPublic ;
    GALGAS_procedureSignature var_formalSignature ;
    constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (var_routineMangledName, var_isPublic, var_formalSignature, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 394)) ;
    GALGAS_bool test_8 = var_needsPublic ;
    if (kBoolTrue == test_8.boolEnum ()) {
      test_8 = var_isPublic.operator_not (SOURCE_FILE ("declaration-guard.galgas", 400)) ;
    }
    const enumGalgasBool test_9 = test_8.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_location location_10 (var_methodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_10, GALGAS_string ("this guard is not public")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 401)) ;
    }
    GALGAS_lstring var_routineNameForInvocationGraph = function_guardNameForInvocationGraph (var_currentType, var_methodName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 404)) ;
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("declaration-guard.galgas", 405)) ;
    }
    GALGAS_allocaList var_baseGuardAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 407)) ;
    {
    GALGAS_stringset temp_11 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 415)) ;
    temp_11.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 415))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 415)) ;
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature, object->mAttribute_mEffectiveParameterList, var_methodName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, temp_11, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_effectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 408)) ;
    }
    outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_routineMangledName.mAttribute_string, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("declaration-guard.galgas", 425)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unifiedSelfCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_unifiedSelfCallInstructionAST.mSlotID,
                                         extensionMethod_unifiedSelfCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unifiedSelfCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_unifiedSelfCallInstructionAST_baseGuardAnalyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@remoteRoutineCallInstructionAST baseGuardAnalyze'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_remoteRoutineCallInstructionAST_baseGuardAnalyze (const cPtr_abstractCallInstructionAST * inObject,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_guardKindGenerationIR & outArgument_outConvenienceGuardGenerationIR,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_remoteRoutineCallInstructionAST * object = (const cPtr_remoteRoutineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_remoteRoutineCallInstructionAST) ;
  GALGAS_lstringlist var_propertyList = object->mAttribute_mPropertyList ;
  GALGAS_lstring var_receiverName ;
  {
  var_propertyList.setter_popFirst (var_receiverName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 446)) ;
  }
  GALGAS_lstring var_routineName ;
  {
  var_propertyList.setter_popLast (var_routineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 447)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  GALGAS_objectInMemoryIR var_variableKind ;
  {
  GALGAS_bool joker_18183_1 ; // Joker input parameter
  GALGAS_bool joker_18240_4 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_18240_3 ; // Joker input parameter
  GALGAS_bool joker_18240_2 ; // Joker input parameter
  GALGAS_bool joker_18240_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (var_receiverName, var_receiverType, joker_18183_1, var_variableKind, joker_18240_4, joker_18240_3, joker_18240_2, joker_18240_1, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 449)) ;
  }
  cEnumerator_lstringlist enumerator_18283 (var_propertyList, kEnumeration_up) ;
  while (enumerator_18283.hasCurrentObject ()) {
    GALGAS_location location_0 (enumerator_18283.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_0, GALGAS_string ("not handled yet (1)")  COMMA_SOURCE_FILE ("declaration-guard.galgas", 457)) ;
    enumerator_18283.gotoNextObject () ;
  }
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 459)) ;
  var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("declaration-guard.galgas", 460)), extensionGetter_address (var_variableKind, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 460))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 460)) ;
  GALGAS_instructionListIR var_baseGuardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 461)) ;
  GALGAS_lstring var_routineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 462)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 462)).add_operation (var_routineName.getter_string (SOURCE_FILE ("declaration-guard.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 462)), var_routineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-guard.galgas", 462)) ;
  GALGAS_bool var_isPublic ;
  GALGAS_procedureSignature var_formalSignature ;
  constinArgument_inContext.mAttribute_mGuardMapForContext.method_searchKey (var_routineMangledName, var_isPublic, var_formalSignature, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 463)) ;
  GALGAS_lstring var_routineNameForInvocationGraph = function_guardNameForInvocationGraph (var_receiverType, var_routineName, inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 469)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("declaration-guard.galgas", 470)) ;
  }
  GALGAS_allocaList var_baseGuardAllocaList = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-guard.galgas", 472)) ;
  {
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-guard.galgas", 480)) ;
  temp_1.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-guard.galgas", 480))  COMMA_SOURCE_FILE ("declaration-guard.galgas", 480)) ;
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature, object->mAttribute_mEffectiveParameterList, var_routineName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, temp_1, GALGAS_bool (true), ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_effectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("declaration-guard.galgas", 473)) ;
  }
  outArgument_outConvenienceGuardGenerationIR = GALGAS_guardKindGenerationIR::constructor_convenienceGuard (var_baseGuardAllocaList, var_baseGuardInstructionGenerationList, var_routineMangledName.mAttribute_string, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("declaration-guard.galgas", 490)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_remoteRoutineCallInstructionAST_baseGuardAnalyze (void) {
  enterExtensionMethod_baseGuardAnalyze (kTypeDescriptor_GALGAS_remoteRoutineCallInstructionAST.mSlotID,
                                         extensionMethod_remoteRoutineCallInstructionAST_baseGuardAnalyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_remoteRoutineCallInstructionAST_baseGuardAnalyze (defineExtensionMethod_remoteRoutineCallInstructionAST_baseGuardAnalyze, NULL) ;

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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 44)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-convert.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-convert.galgas", 46)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 54)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-convert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-convert.galgas", 56)) ;
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
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowPanic,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_operandIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_convertExpressionAST * object = (const cPtr_convertExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_convertExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 81)) ;
  const enumGalgasBool test_0 = constinArgument_inAllowPanic.operator_not (SOURCE_FILE ("expression-convert.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 98))  COMMA_SOURCE_FILE ("expression-convert.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 101)) ;
  const enumGalgasBool test_2 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 103)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 103)).operator_not (SOURCE_FILE ("expression-convert.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-convert.galgas", 104)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 105)).getter_isInteger (SOURCE_FILE ("expression-convert.galgas", 105)).operator_not (SOURCE_FILE ("expression-convert.galgas", 105)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-convert.galgas", 106)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      GALGAS_bigint var_minSource ;
      GALGAS_bigint var_maxSource ;
      GALGAS_bool joker_5116 ; // Joker input parameter
      GALGAS_uint joker_5128 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 108)).method_integer (var_minSource, var_maxSource, joker_5116, joker_5128, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 108)) ;
      GALGAS_bigint var_minTarget ;
      GALGAS_bigint var_maxTarget ;
      GALGAS_bool joker_5210 ; // Joker input parameter
      GALGAS_uint joker_5222 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 109)).method_integer (var_minTarget, var_maxTarget, joker_5210, joker_5222, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 109)) ;
      GALGAS_bool test_5 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_5 ;
      const enumGalgasBool test_6 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-convert.galgas", 112)) ;
      }
      {
      routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 114)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-convert.galgas", 116))  COMMA_SOURCE_FILE ("expression-convert.galgas", 116)) ;
      }else if (kBoolFalse == test_8) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_convertInstructionIR::constructor_new (outArgument_outResult, var_expressionResult, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-convert.galgas", 121))  COMMA_SOURCE_FILE ("expression-convert.galgas", 121)) ;
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
  GALGAS_uint var_convertOverflowCode = GALGAS_uint ((uint32_t) 9U) ;
  GALGAS_uint var_staticStringIndex ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 159)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 159)).getter_stringByDeletingPathExtension (SOURCE_FILE ("expression-convert.galgas", 159)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 158)) ;
  }
  GALGAS_string var_lbl = object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 162)).getter_string (SOURCE_FILE ("expression-convert.galgas", 162)) ;
  GALGAS_string var_convertMinOkLabel = GALGAS_string ("min.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 163)) ;
  GALGAS_string var_convertMaxOkLabel = GALGAS_string ("max.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164)).add_operation (GALGAS_string (".ok"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 164)) ;
  GALGAS_string var_convertFailLabel = GALGAS_string ("fail.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 165)) ;
  GALGAS_string var_compareMinVar = GALGAS_string ("cmp.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)).add_operation (GALGAS_string (".min"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 166)) ;
  GALGAS_string var_compareMaxVar = GALGAS_string ("cmp.").add_operation (var_lbl, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)).add_operation (GALGAS_string (".max"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 167)) ;
  GALGAS_bigint var_minTarget ;
  GALGAS_bigint var_maxTarget ;
  GALGAS_bool joker_7564 ; // Joker input parameter
  GALGAS_uint joker_7576 ; // Joker input parameter
  object->mAttribute_mTarget.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)).method_integer (var_minTarget, var_maxTarget, joker_7564, joker_7576, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 168)) ;
  GALGAS_bigint var_minSource ;
  GALGAS_bool var_operandIsUnsigned ;
  GALGAS_bigint joker_7636 ; // Joker input parameter
  GALGAS_uint joker_7680 ; // Joker input parameter
  object->mAttribute_mOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)).method_integer (var_minSource, joker_7636, var_operandIsUnsigned, joker_7680, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 169)) ;
  GALGAS_string var_operandType = object->mAttribute_mOperand.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 170)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_minTarget.objectCompare (var_minSource)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMinVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 172)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_operandIsUnsigned.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("uge") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string ("sge") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_1, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 173)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (var_minTarget.getter_string (SOURCE_FILE ("expression-convert.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 174)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMinVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (var_convertMinOkLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (var_convertFailLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 175)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_convertMinOkLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 176)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_compareMaxVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 178)) ;
  GALGAS_string temp_3 ;
  const enumGalgasBool test_4 = var_operandIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_string ("ule") ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_string ("sle") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_3, inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 179)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (var_maxTarget.getter_string (SOURCE_FILE ("expression-convert.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 180)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_compareMaxVar, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_convertMaxOkLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (var_convertFailLabel, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 181)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertFailLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 182)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 183)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 183)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).getter_string (SOURCE_FILE ("expression-convert.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 184)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (var_convertOverflowCode.getter_string (SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string (") ; File '"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).getter_lastPathComponent (SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)).add_operation (GALGAS_string ("'\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 185)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 186)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_convertMaxOkLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 187)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (object->mAttribute_mTarget.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-convert.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("expression-convert.galgas", 188)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 44)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-extend.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-extend.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-extend.galgas", 46)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 54)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-extend.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-extend.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-extend.galgas", 56)) ;
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
                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_stringset constinArgument_inModeSet,
                                                                   const GALGAS_bool constinArgument_inAllowPanic,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendExpressionAST * object = (const cPtr_extendExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_extendExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 81)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 97)) ;
  const enumGalgasBool test_0 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 99)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 99)).operator_not (SOURCE_FILE ("expression-extend.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-extend.galgas", 100)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 101)).getter_isInteger (SOURCE_FILE ("expression-extend.galgas", 101)).operator_not (SOURCE_FILE ("expression-extend.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-extend.galgas", 102)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_sourceIsUnsigned ;
      GALGAS_uint var_sourceSize ;
      GALGAS_bigint joker_4918 ; // Joker input parameter
      GALGAS_bigint joker_4925 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 104)).method_integer (joker_4918, joker_4925, var_sourceIsUnsigned, var_sourceSize, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 104)) ;
      GALGAS_bool var_targetIsUnsigned ;
      GALGAS_uint var_targetSize ;
      GALGAS_bigint joker_5020 ; // Joker input parameter
      GALGAS_bigint joker_5027 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)).method_integer (joker_5020, joker_5027, var_targetIsUnsigned, var_targetSize, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 105)) ;
      GALGAS_bool test_3 = var_sourceIsUnsigned ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = var_targetIsUnsigned ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 108)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("same size: useless extend operation")  COMMA_SOURCE_FILE ("expression-extend.galgas", 110)) ;
          }
        }
      }else if (kBoolFalse == test_4) {
        GALGAS_bool test_9 = var_sourceIsUnsigned ;
        if (kBoolTrue == test_9.boolEnum ()) {
          test_9 = var_targetIsUnsigned.operator_not (SOURCE_FILE ("expression-extend.galgas", 112)) ;
        }
        const enumGalgasBool test_10 = test_9.boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsSupOrEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
          if (kBoolTrue == test_11) {
            GALGAS_location location_12 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 114)) ;
          }
        }else if (kBoolFalse == test_10) {
          GALGAS_bool test_13 = var_sourceIsUnsigned.operator_not (SOURCE_FILE ("expression-extend.galgas", 116)) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = var_targetIsUnsigned ;
          }
          const enumGalgasBool test_14 = test_13.boolEnum () ;
          if (kBoolTrue == test_14) {
            GALGAS_location location_15 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_15, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 117)) ;
          }else if (kBoolFalse == test_14) {
            const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_location location_17 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_17, GALGAS_string ("cannot extend, use convert or trunc")  COMMA_SOURCE_FILE ("expression-extend.galgas", 120)) ;
            }else if (kBoolFalse == test_16) {
              const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, var_sourceSize.objectCompare (var_targetSize)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_location location_19 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
                inCompiler->emitSemanticError (location_19, GALGAS_string ("same size: useless extend operation")  COMMA_SOURCE_FILE ("expression-extend.galgas", 122)) ;
              }
            }
          }
        }
      }
      {
      routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-extend.galgas", 125)) ;
      }
      {
      extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-extend.galgas", 126)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 44)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-truncate.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-truncate.galgas", 45)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-truncate.galgas", 46)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 54)) ;
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-truncate.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-truncate.galgas", 55)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-truncate.galgas", 56)) ;
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
                                                                     const GALGAS_bool constinArgument_inGuard,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     GALGAS_operandIR & outArgument_outResult,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncateExpressionAST * object = (const cPtr_truncateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_truncateExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 81)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 97)) ;
  const enumGalgasBool test_0 = var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 99)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 99)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 99)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this type is not an integer type")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 100)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 101)).getter_isInteger (SOURCE_FILE ("expression-truncate.galgas", 101)).operator_not (SOURCE_FILE ("expression-truncate.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfExpression, GALGAS_string ("expression type is not an integer type")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 102)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_bigint var_minSource ;
      GALGAS_bigint var_maxSource ;
      GALGAS_uint var_expSize ;
      GALGAS_bool joker_4975 ; // Joker input parameter
      var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)).method_integer (var_minSource, var_maxSource, joker_4975, var_expSize, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 104)) ;
      GALGAS_bigint var_minTarget ;
      GALGAS_bigint var_maxTarget ;
      GALGAS_uint var_resultSize ;
      GALGAS_bool joker_5079 ; // Joker input parameter
      var_resultType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)).method_integer (var_minTarget, var_maxTarget, joker_5079, var_resultSize, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 105)) ;
      GALGAS_bool test_3 = GALGAS_bool (kIsInfOrEqual, var_minTarget.objectCompare (var_minSource)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = GALGAS_bool (kIsSupOrEqual, var_maxTarget.objectCompare (var_maxSource)) ;
      }
      GALGAS_bool var_alwaysPossible = test_3 ;
      const enumGalgasBool test_4 = var_alwaysPossible.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("useless explicit conversion")  COMMA_SOURCE_FILE ("expression-truncate.galgas", 108)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_resultSize.objectCompare (var_expSize)).boolEnum () ;
      if (kBoolTrue == test_6) {
        {
        routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 111)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_truncateInstructionIR::constructor_new (outArgument_outResult, var_expressionResult  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112))  COMMA_SOURCE_FILE ("expression-truncate.galgas", 112)) ;
      }else if (kBoolFalse == test_6) {
        outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, var_expressionResult.mAttribute_mValue  COMMA_SOURCE_FILE ("expression-truncate.galgas", 117)) ;
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
  GALGAS_string var_operandType = object->mAttribute_mOperand.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (var_operandType, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)).add_operation (object->mAttribute_mTarget.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 150)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-truncate.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("expression-truncate.galgas", 149)) ;
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
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, var_typeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 50)) ;
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
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 58)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 59)) ;
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
                                                               const GALGAS_bool constinArgument_inGuard,
                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                               const GALGAS_stringset constinArgument_inModeSet,
                                                               const GALGAS_bool constinArgument_inAllowPanic,
                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_operandIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCall * object = (const cPtr_constructorCall *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 86)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-constructor-call.galgas", 88)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constructorValue var_initValue ;
    constinArgument_inContext.mAttribute_mConstructorMap.method_searchKey (var_resultType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)).getter_nowhere (SOURCE_FILE ("expression-constructor-call.galgas", 91)), var_initValue, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
    switch (var_initValue.enumValue ()) {
    case GALGAS_constructorValue::kNotBuilt:
      break ;
    case GALGAS_constructorValue::kEnum_simple:
      {
        const cEnumAssociatedValues_constructorValue_simple * extractPtr_4482 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_value = extractPtr_4482->mAssociatedValue0 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 94)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("$").add_operation (var_resultType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)).add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_literalInteger (extractedValue_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 97)) ;
        }
      }
      break ;
    case GALGAS_constructorValue::kEnum_structure:
      {
        const cEnumAssociatedValues_constructorValue_structure * extractPtr_6379 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue.unsafePointer ()) ;
        const GALGAS_constructorSignature extractedValue_constructorSignature = extractPtr_6379->mAssociatedValue0 ;
        const GALGAS_sortedOperandIRList extractedValue_sortedOperandList = extractPtr_6379->mAssociatedValue1 ;
        GALGAS_sortedOperandIRList var_sortedOperandIRList = extractedValue_sortedOperandList ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 101)).objectCompare (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 101)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 103)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_5) {
            temp_4 = GALGAS_string::makeEmptyString () ;
          }
          inCompiler->emitSemanticError (object->mAttribute_mErrorLocation, GALGAS_string ("this constructor call should name ").add_operation (extractedValue_constructorSignature.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 102)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 102)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 102)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 102)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 103)).add_operation (object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 104)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 104))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 102)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          cEnumerator_constructorSignature enumerator_4981 (extractedValue_constructorSignature, kEnumeration_up) ;
          cEnumerator_functionCallEffectiveParameterList enumerator_5014 (object->mAttribute_mParameterList, kEnumeration_up) ;
          while (enumerator_4981.hasCurrentObject () && enumerator_5014.hasCurrentObject ()) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5014.current_mSelector (HERE).mAttribute_string.objectCompare (enumerator_4981.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_6) {
              GALGAS_location location_7 (enumerator_5014.current_mSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_7, GALGAS_string ("the selector should be '!").add_operation (enumerator_4981.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 109)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 109))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 109)) ;
            }
            GALGAS_operandIR var_expressionResult ;
            callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_5014.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, enumerator_4981.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 111)) ;
            GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, enumerator_4981.current_mType (HERE), enumerator_5014.current_mSelector (HERE).mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
            var_sortedOperandIRList.addAssign_operation (var_result, enumerator_4981.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 132)) ;
            enumerator_4981.gotoNextObject () ;
            enumerator_5014.gotoNextObject () ;
          }
          GALGAS_operandIRList var_initialValueList = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 134)) ;
          cEnumerator_sortedOperandIRList enumerator_6220 (var_sortedOperandIRList, kEnumeration_up) ;
          while (enumerator_6220.hasCurrentObject ()) {
            var_initialValueList.addAssign_operation (enumerator_6220.current_mOperand (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 136)) ;
            enumerator_6220.gotoNextObject () ;
          }
          outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_llvmStructureConstant (var_initialValueList  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138))  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 138)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("expression-typed-constant.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 42)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("expression-typed-constant.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 52)) ;
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
                                                                 const GALGAS_bool /* constinArgument_inGuard */,
                                                                 const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                 const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                 GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                 GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                 GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                 GALGAS_operandIR & outArgument_outResult,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCall * object = (const cPtr_typedConstantCall *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCall) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_resultType = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_resultType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 80)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_resultType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-typed-constant.galgas", 82)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mConstructorName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 83)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_typedConstantMap var_constructorMap = var_resultType.getter_typedConstantMap (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 85)) ;
    GALGAS_valueIR var_resultValue ;
    var_constructorMap.method_searchKey (object->mAttribute_mConstructorName, var_resultValue, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 86)) ;
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, var_resultValue  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 87)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 55)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 56)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 65)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 66)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 74)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 75)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 81)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 82)) ;
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
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowPanic,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_operandIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_operandIR var_leftOperand ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 130)) ;
  GALGAS_operandIR var_rightOperand ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, var_leftOperand.mAttribute_mType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 146)) ;
  GALGAS_infixOperatorMap var_operatorMap = function_getInfixOperatorMap (object->mAttribute_mOp, constinArgument_inContext, constinArgument_inModeSet, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 162)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  GALGAS_infixOperatorDescription var_binaryOperator ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap, var_leftOperand.mAttribute_mType, var_rightOperand.mAttribute_mType, object->mAttribute_mOperatorLocation, var_resultType, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 164)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand, object->mAttribute_mOperatorLocation, var_rightOperand, var_resultType, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 172)) ;
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
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                                                           const GALGAS_bool constinArgument_inAllowPanic,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 294)) ;
  GALGAS_operandIR var_leftOperand ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList, var_leftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 295)) ;
  GALGAS_instructionListIR var_rightInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-infix-operators.galgas", 311)) ;
  GALGAS_operandIR var_rightOperand ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, var_leftOperand.mAttribute_mType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList, var_rightOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 312)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 328)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 328)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 329)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightOperand.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 332)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("expression-infix-operators.galgas", 332)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand should be boolean")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 333)) ;
  }
  {
  routine_getNewTempVariable (constinArgument_inContext.mAttribute_mBooleanType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 336)) ;
  }
  {
  extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand, var_leftInstructionGenerationList, var_rightOperand, var_rightInstructionGenerationList, object->mAttribute_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 338)) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
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
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                                           const GALGAS_bool constinArgument_inAllowPanic,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 59)) ;
  GALGAS_prefixOperatorMap var_prefixOperatorMap ;
  GALGAS_llvmBinaryOperation var_binaryOperator ;
  GALGAS_operandIR var_leftOperand ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mUnsignedComplementOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 81)) ;
      switch (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 82)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 83)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 83)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 84)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 84)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 85)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 86)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 86)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 87)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 87)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 88)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 88)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-prefix-operators.galgas", 89)), GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
          var_leftOperand.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_4433 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 82)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_4433->mAssociatedValue3 ;
          var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mNotOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 95)) ;
      var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 96)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 99)) ;
      var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 100)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)) COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 103)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 108)) ;
        var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 109)) ;
      }else if (kBoolFalse == test_1) {
        var_binaryOperator = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
        var_leftOperand = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 112)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap.method_searchKey (GALGAS_lstring::constructor_new (var_expressionResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 116)), object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 116)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType = var_expressionResult.mAttribute_mType ;
  const enumGalgasBool test_2 = var_expressionResult.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 119)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value ;
    var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 120)) ;
    GALGAS_bigint var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 124)) ;
        var_result.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 125)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 126)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_operandIR::constructor_new (var_resultType, GALGAS_valueIR::constructor_literalInteger (var_result  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)) ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (var_resultType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 131)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult.mAttribute_mValue, outArgument_outResult.mAttribute_mType, object->mAttribute_mOperatorLocation, var_leftOperand.mAttribute_mValue, var_binaryOperator, var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 133)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-integer.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
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
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                             const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_operandIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mLiteralIntegerType, GALGAS_valueIR::constructor_literalInteger (object->mAttribute_mLiteralInteger.mAttribute_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.mAttribute_location  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
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
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 42)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 42)) ;
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
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_operandIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)).getter_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
  GALGAS_uint var_staticStringIndex ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mAttribute_mLiteralString.mAttribute_string, var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 65)) ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string.getter_length (SOURCE_FILE ("expression-literal-string.galgas", 66)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)), var_staticStringIndex  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66))  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 66)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 41)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 41)) ;
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
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("$").add_operation (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)).getter_nowhere (SOURCE_FILE ("expression-true-false.galgas", 49)) COMMA_SOURCE_FILE ("expression-true-false.galgas", 49)) ;
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
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                             const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_operandIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mValue.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
  }
  outArgument_outResult = GALGAS_operandIR::constructor_new (constinArgument_inContext.mAttribute_mBooleanType, GALGAS_valueIR::constructor_literalInteger (temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 71)) ;
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
//               Overriding extension method '@varInExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 70)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                             extensionMethod_varInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_varInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@selfVarInExpressionAST addDependenceEdgeForStaticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarInExpressionAST * object = (const cPtr_selfVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 79)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_selfVarInExpressionAST.mSlotID,
                                                             extensionMethod_selfVarInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_selfVarInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@controlRegisterFieldInExpressionAST addDependenceEdgeForStaticExpression'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterFieldInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterFieldInExpressionAST * object = (const cPtr_controlRegisterFieldInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterFieldInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterVarName COMMA_SOURCE_FILE ("expression-var.galgas", 88)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterFieldInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_controlRegisterFieldInExpressionAST.mSlotID,
                                                             extensionMethod_controlRegisterFieldInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterFieldInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_controlRegisterFieldInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@varInExpressionAST noteExpressionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                     GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                             extensionMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_varInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@selfVarInExpressionAST noteExpressionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                         GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_selfVarInExpressionAST.mSlotID,
                                                             extensionMethod_selfVarInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_selfVarInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@controlRegisterFieldInExpressionAST noteExpressionTypesInPrecedenceGraph'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterFieldInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                      GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterFieldInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterFieldInExpressionAST.mSlotID,
                                                             extensionMethod_controlRegisterFieldInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterFieldInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterFieldInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@varInExpressionAST analyzeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                  const GALGAS_bool constinArgument_inGuard,
                                                                  const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                  const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                  const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                  const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                  GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_operandIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_variableKind ;
  GALGAS_bool var_copyable ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_6120_2 ; // Joker input parameter
  GALGAS_bool joker_6120_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mSourceVarName, var_variableType, var_accessIsAllowed, var_variableKind, var_copyable, var_registerBitSliceMap, joker_6120_2, joker_6120_1, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 128)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("expression-var.galgas", 137)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on this variable")  COMMA_SOURCE_FILE ("expression-var.galgas", 138)) ;
  }
  const enumGalgasBool test_2 = var_copyable.operator_not (SOURCE_FILE ("expression-var.galgas", 140)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("an $").add_operation (var_variableType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 141)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 141))  COMMA_SOURCE_FILE ("expression-var.galgas", 141)) ;
  }
  const enumGalgasBool test_4 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_4) {
    switch (var_variableKind.enumValue ()) {
    case GALGAS_objectInMemoryIR::kNotBuilt:
      break ;
    case GALGAS_objectInMemoryIR::kEnum_register:
      {
        GALGAS_location location_5 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a control register cannot be read in guard boolean expression")  COMMA_SOURCE_FILE ("expression-var.galgas", 145)) ;
      }
      break ;
    case GALGAS_objectInMemoryIR::kEnum_globalVariable:
      {
        GALGAS_location location_6 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a global variable cannot be read in guard boolean expression")  COMMA_SOURCE_FILE ("expression-var.galgas", 146)) ;
      }
      break ;
    case GALGAS_objectInMemoryIR::kEnum_localValue:
      {
      }
      break ;
    case GALGAS_objectInMemoryIR::kEnum_globalConstant:
      {
      }
      break ;
    }
  }
  extensionMethod_loadFromMemory (var_variableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 152)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 158)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                          extensionMethod_varInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeExpression (defineExtensionMethod_varInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@selfVarInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_bool /* constinArgument_inGuard */,
                                                                      const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                      const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                      const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                      const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                      GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                      GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_operandIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarInExpressionAST * object = (const cPtr_selfVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-var.galgas", 182)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("expression-var.galgas", 183)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 185)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        GALGAS_location location_2 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("an opaque type does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 187)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_3 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 189)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_4 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 191)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_5 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 193)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_6 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 195)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_7 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 197)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_8 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_9490 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 185)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_9490->mAssociatedValue0 ;
        GALGAS_bool var_public ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_uint var_idx ;
        extractedValue_propertyMap.method_searchKey (object->mAttribute_mSourceVarName, var_public, var_type, var_idx, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 201)) ;
        const enumGalgasBool test_9 = var_type.getter_copyable (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 202)).operator_not (SOURCE_FILE ("expression-var.galgas", 202)).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (object->mAttribute_mSourceVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("an $").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 203)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 203))  COMMA_SOURCE_FILE ("expression-var.galgas", 203)) ;
        }
        GALGAS_objectInMemoryIR var_fieldAddress ;
        {
        routine_getLocalNameOfNewTempObjectInMemory (var_type, ioArgument_ioTemporaries, var_fieldAddress, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 205)) ;
        }
        {
        GALGAS_elementPtrList temp_11 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("expression-var.galgas", 209)) ;
        temp_11.addAssign_operation (var_idx, object->mAttribute_mSourceVarName.mAttribute_string  COMMA_SOURCE_FILE ("expression-var.galgas", 209)) ;
        extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, var_fieldAddress, constinArgument_inSelfType, temp_11, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 206)) ;
        }
        extensionMethod_loadFromMemory (var_fieldAddress, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 211)) ;
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_selfVarInExpressionAST.mSlotID,
                                          extensionMethod_selfVarInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarInExpressionAST_analyzeExpression (defineExtensionMethod_selfVarInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@controlRegisterFieldInExpressionAST analyzeExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_controlRegisterFieldInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                                   const GALGAS_bool constinArgument_inGuard,
                                                                                   const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                   const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                                   const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                                   const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                   GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                   GALGAS_operandIR & outArgument_outResult,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterFieldInExpressionAST * object = (const cPtr_controlRegisterFieldInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterFieldInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_variableKind ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_10638_1 ; // Joker input parameter
  GALGAS_bool joker_10714_2 ; // Joker input parameter
  GALGAS_bool joker_10714_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mAttribute_mRegisterVarName, var_variableType, var_accessIsAllowed, var_variableKind, joker_10638_1, var_registerBitSliceMap, joker_10714_2, joker_10714_1, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 238)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("expression-var.galgas", 247)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRegisterVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on this variable")  COMMA_SOURCE_FILE ("expression-var.galgas", 248)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_2) {
    switch (var_variableKind.enumValue ()) {
    case GALGAS_objectInMemoryIR::kNotBuilt:
      break ;
    case GALGAS_objectInMemoryIR::kEnum_register:
      {
        GALGAS_location location_3 (object->mAttribute_mRegisterVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a control register cannot be read in guard boolean expression")  COMMA_SOURCE_FILE ("expression-var.galgas", 252)) ;
      }
      break ;
    case GALGAS_objectInMemoryIR::kEnum_globalVariable:
      {
        GALGAS_location location_4 (object->mAttribute_mRegisterVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("a global variable cannot be read in guard boolean expression")  COMMA_SOURCE_FILE ("expression-var.galgas", 253)) ;
      }
      break ;
    case GALGAS_objectInMemoryIR::kEnum_localValue:
      {
      }
      break ;
    case GALGAS_objectInMemoryIR::kEnum_globalConstant:
      {
      }
      break ;
    }
  }
  extensionMethod_loadFromMemory (var_variableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 259)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mRegisterVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 265)) ;
  cEnumerator_lstringlist enumerator_11575 (object->mAttribute_mSliceNameList, kEnumeration_up) ;
  while (enumerator_11575.hasCurrentObject ()) {
    GALGAS_llvmBinaryOperation var_accessOperator ;
    GALGAS_bigint var_accessRightOperand ;
    GALGAS_controlRegisterBitSliceAccessMap var_submap ;
    GALGAS_unifiedTypeMap_2D_proxy var_newResultType ;
    var_registerBitSliceMap.method_searchKey (enumerator_11575.current_mValue (HERE), var_accessOperator, var_accessRightOperand, var_submap, var_newResultType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 272)) ;
    GALGAS_operandIR var_newResultingVariable ;
    {
    routine_getNewTempVariable (var_newResultType, ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 280)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResultingVariable.mAttribute_mValue, outArgument_outResult.mAttribute_mType, object->mAttribute_mRegisterVarName.mAttribute_location, outArgument_outResult.mAttribute_mValue, var_accessOperator, GALGAS_valueIR::constructor_literalInteger (var_accessRightOperand  COMMA_SOURCE_FILE ("expression-var.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 281)) ;
    }
    outArgument_outResult = var_newResultingVariable ;
    var_registerBitSliceMap = var_submap ;
    enumerator_11575.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_controlRegisterFieldInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_controlRegisterFieldInExpressionAST.mSlotID,
                                          extensionMethod_controlRegisterFieldInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_controlRegisterFieldInExpressionAST_analyzeExpression (defineExtensionMethod_controlRegisterFieldInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@abstractFunctionCallInExpressionAST addDependenceEdgeForStaticExpression'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractFunctionCallInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                      const GALGAS_lstring constinArgument_inConstantName,
                                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractFunctionCallInExpressionAST * object = (const cPtr_abstractFunctionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractFunctionCallInExpressionAST) ;
  cEnumerator_effectiveParameterListAST enumerator_3281 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_3281.hasCurrentObject ()) {
    switch (enumerator_3281.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_3506 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_3281.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3506->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("expression-func-call.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 72)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-func-call.galgas", 72)) COMMA_SOURCE_FILE ("expression-func-call.galgas", 72)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_3615 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_3281.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3615->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 74)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_3281.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractFunctionCallInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_abstractFunctionCallInExpressionAST.mSlotID,
                                                             extensionMethod_abstractFunctionCallInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractFunctionCallInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_abstractFunctionCallInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@abstractFunctionCallInExpressionAST noteExpressionTypesInPrecedenceGraph'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractFunctionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractFunctionCallInExpressionAST * object = (const cPtr_abstractFunctionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractFunctionCallInExpressionAST) ;
  cEnumerator_effectiveParameterListAST enumerator_4230 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4230.hasCurrentObject ()) {
    switch (enumerator_4230.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_4455 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_4230.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4455->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("expression-func-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)) COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_4548 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_4230.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4548->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_4230.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractFunctionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_abstractFunctionCallInExpressionAST.mSlotID,
                                                             extensionMethod_abstractFunctionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractFunctionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_abstractFunctionCallInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                           const GALGAS_bool constinArgument_inAllowPanic,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_operandIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a function cannot be called in guard expression")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR ;
  GALGAS_routineKindIR var_routineKind ;
  GALGAS_lstring var_functionMangledName ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  {
  routine_analyzeRoutineCall (constinArgument_inSelfType, object->mAttribute_mReceiverName, object->mAttribute_mFunctionName, object->mAttribute_mEffectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR, var_routineKind, var_functionMangledName, var_returnedType, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 122)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_returnedType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-func-call.galgas", 141)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("cannot be called in expression: no return value")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)) ;
  }
  {
  routine_getNewTempVariable (var_returnedType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 145)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outResult, var_functionMangledName.mAttribute_string, var_routineKind, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("expression-func-call.galgas", 147))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                          extensionMethod_functionCallInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_analyzeExpression (defineExtensionMethod_functionCallInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@selfFunctionCallInExpressionAST analyzeExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfFunctionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                               const GALGAS_bool constinArgument_inGuard,
                                                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                               const GALGAS_bool constinArgument_inAllowPanic,
                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               GALGAS_operandIR & outArgument_outResult,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfFunctionCallInExpressionAST * object = (const cPtr_selfFunctionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfFunctionCallInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a function cannot be called in guard expression")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 173)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 175)) ;
  GALGAS_lstring var_routineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)).add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("expression-func-call.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)), object->mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("expression-func-call.galgas", 176)) ;
  var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-func-call.galgas", 177)), GALGAS_operandIR::constructor_new (constinArgument_inSelfType, GALGAS_valueIR::constructor_selfObject (SOURCE_FILE ("expression-func-call.galgas", 177))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 177))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 177)) ;
  GALGAS_bool var_isPublic ;
  GALGAS_modeMap var_modeMap ;
  GALGAS_procedureSignature var_formalSignature ;
  GALGAS_routineKind var_routineKind ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  GALGAS_bool joker_8317 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (var_routineMangledName, var_isPublic, var_modeMap, var_formalSignature, var_routineKind, joker_8317, var_returnedType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 178)) ;
  const enumGalgasBool test_2 = var_isPublic.operator_not (SOURCE_FILE ("expression-func-call.galgas", 188)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_declarationFile = constinArgument_inContext.mAttribute_mRoutineMapForContext.getter_locationForKey (var_routineMangledName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 189)).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 189)) ;
    GALGAS_string var_invocationFile = object->mAttribute_mFunctionName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 190)) ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_invocationFile.objectCompare (var_declarationFile)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("this function is not public")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 192)) ;
    }
  }
  GALGAS_lstring var_routineNameForInvocationGraph ;
  switch (var_routineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      var_routineNameForInvocationGraph = function_procNameForInvocationGraph (constinArgument_inSelfType, object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 199)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      var_routineNameForInvocationGraph = function_sectionNameForInvocationGraph (constinArgument_inSelfType, object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 201)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      var_routineNameForInvocationGraph = function_serviceNameForInvocationGraph (constinArgument_inSelfType, object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 203)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      var_routineNameForInvocationGraph = function_primitiveNameForInvocationGraph (constinArgument_inSelfType, object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 205)) ;
    }
    break ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("expression-func-call.galgas", 207)) ;
  }
  GALGAS_routineKindIR var_routineKindIR = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap.getter_keySet (SOURCE_FILE ("expression-func-call.galgas", 211)), var_routineKind, object->mAttribute_mFunctionName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 209)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature, object->mAttribute_mEffectiveParameterList, object->mAttribute_mFunctionName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 216)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_returnedType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-func-call.galgas", 232)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_6, GALGAS_string ("cannot be called in expression: no return value")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 233)) ;
  }
  {
  routine_getNewTempVariable (var_returnedType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 236)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outResult, var_routineMangledName.mAttribute_string, var_routineKindIR, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("expression-func-call.galgas", 238))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 238)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfFunctionCallInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_selfFunctionCallInExpressionAST.mSlotID,
                                          extensionMethod_selfFunctionCallInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfFunctionCallInExpressionAST_analyzeExpression (defineExtensionMethod_selfFunctionCallInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@functionCallIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)).add_operation (object->mAttribute_mResult.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 262)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_routineKindIR::kNotBuilt:
    break ;
  case GALGAS_routineKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 264)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 265)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 266)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 267)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 268)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 269)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 270)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 272)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_11943 (object->mAttribute_mArgumentList, kEnumeration_up) ;
  while (enumerator_11943.hasCurrentObject ()) {
    switch (enumerator_11943.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_11943.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 276)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 276)).add_operation (extensionGetter_llvmName (enumerator_11943.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 276)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_11943.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 278)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 278)).add_operation (extensionGetter_llvmName (enumerator_11943.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 278)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_11943.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 280)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 280)).add_operation (extensionGetter_llvmName (enumerator_11943.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 280)) ;
      }
      break ;
    }
    if (enumerator_11943.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 283)) ;
    }
    enumerator_11943.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 285)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                            extensionMethod_functionCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_llvmInstructionCode (defineExtensionMethod_functionCallIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@functionCallIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 294)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                                extensionMethod_functionCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_enterAccessibleEntities (defineExtensionMethod_functionCallIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@registerConstantInExpressionAST addDependenceEdgeForStaticExpression'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                  const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@registerIntegerExpInExpressionAST addDependenceEdgeForStaticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                                    const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                                             extensionMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@registerConstantInExpressionAST noteExpressionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                                             extensionMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerConstantInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@registerIntegerExpInExpressionAST noteExpressionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * /* inObject */,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                                             extensionMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_registerIntegerExpInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@registerConstantInExpressionAST analyzeExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerConstantInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inSelfType */,
                                                                               const GALGAS_bool /* constinArgument_inGuard */,
                                                                               const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                               const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                                               GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                               GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                               GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                               GALGAS_operandIR & outArgument_outResult,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap ;
  GALGAS_bigint var_registerAddress ;
  GALGAS_bool joker_5036_2 ; // Joker input parameter
  GALGAS_bool joker_5036_1 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_5205_2 ; // Joker input parameter
  GALGAS_uint joker_5205_1 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mControlRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_type, joker_5036_2, joker_5036_1, var_registerBitSliceMap, var_registerFieldMap, var_registerAddress, joker_5205_2, joker_5205_1, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 103)) ;
  GALGAS_uint var_bitIndex ;
  GALGAS_uint var_bitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_bitIndex, var_bitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 113)) ;
  outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerConstantInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                          extensionMethod_registerConstantInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_analyzeExpression (defineExtensionMethod_registerConstantInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@registerIntegerExpInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerIntegerExpInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                 const GALGAS_bool constinArgument_inGuard,
                                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                                 const GALGAS_bool constinArgument_inAllowPanic,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_operandIR & outArgument_outResult,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_controlRegisterBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap ;
  GALGAS_bigint var_registerAddress ;
  GALGAS_bool joker_6356 ; // Joker input parameter
  GALGAS_bool joker_6363 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_6531_2 ; // Joker input parameter
  GALGAS_uint joker_6531_1 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mControlRegisterMap.method_searchKey (object->mAttribute_mRegisterName, var_type, joker_6356, joker_6363, var_registerBitSliceMap, var_registerFieldMap, var_registerAddress, joker_6531_2, joker_6531_1, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 140)) ;
  GALGAS_uint var_fieldBitIndex ;
  GALGAS_uint var_fieldBitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_fieldBitIndex, var_fieldBitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_fieldBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFieldName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this field is not an integer field")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 158)) ;
  }
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
  switch (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 185)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 187)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      GALGAS_bigint var_value ;
      var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 189)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 190)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("this integer expression should be positive")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 191)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 192)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outResult = GALGAS_operandIR::constructor_new (var_type, GALGAS_valueIR::constructor_literalInteger (var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 193)) ;
        }else if (kBoolFalse == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_9219 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_9219->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_9219->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_9219->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_9219->mAssociatedValue3 ;
      const enumGalgasBool test_4 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 198)).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        GALGAS_bool var_assertGenerated = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount)) ;
        GALGAS_bool test_5 = var_assertGenerated ;
        if (kBoolTrue == test_5.boolEnum ()) {
          test_5 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 202)) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 204))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 203)) ;
        }
        {
        routine_getNewTempVariable (var_type, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 206)) ;
        }
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_registerIntegerConstantInExpressionIR::constructor_new (object->mAttribute_mExpressionLocation, var_expressionResult, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 210)), var_fieldBitIndex, outArgument_outResult, var_assertGenerated.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 213))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 207))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 207)) ;
      }
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerIntegerExpInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                          extensionMethod_registerIntegerExpInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_analyzeExpression (defineExtensionMethod_registerIntegerExpInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@registerIntegerConstantInExpressionIR llvmInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("<< @registerIntegerConstantInExpressionIR llvmInstructionCode not implemented >>\n"), inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)) ;
  const enumGalgasBool test_0 = object->mAttribute_mNoCheck.boolEnum () ;
  if (kBoolTrue == test_0) {
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                            extensionMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (defineExtensionMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@registerIntegerConstantInExpressionIR enterAccessibleEntities'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                                extensionMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (defineExtensionMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 37)) ;
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
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 57)) ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 62)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 58)) ;
  const enumGalgasBool test_0 = var_expressionResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 74)).operator_not (SOURCE_FILE ("directive-check.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("directive-check.galgas", 75)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_expressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 78)).operator_not (SOURCE_FILE ("directive-check.galgas", 78)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction")  COMMA_SOURCE_FILE ("directive-check.galgas", 79)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_bigint var_value ;
    var_expressionResult.mAttribute_mValue.method_literalInteger (var_value, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 81)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 82)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false")  COMMA_SOURCE_FILE ("directive-check.galgas", 83)) ;
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
//        Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("instruction-var.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 66)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-var.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-var.galgas", 67)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
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
  GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-var.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 75)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-var.galgas", 75)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-var.galgas", 76)) ;
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
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inModes,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 96)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 116)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionResult.mAttribute_mType ;
  }
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, var_targetType, object->mAttribute_mVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 119)) ;
  GALGAS_string var_varLLVMName = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 127)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_result.mAttribute_mType, var_varLLVMName  COMMA_SOURCE_FILE ("instruction-var.galgas", 129)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mVarName, var_result.mAttribute_mType, GALGAS_bool (true), var_targetVar, var_result.mAttribute_mType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 135)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 136)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 130)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName, var_result.mAttribute_mType  COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varLLVMName, var_result.mAttribute_mType, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)) ;
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
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_stringset /* constinArgument_inModes */,
                                                       const GALGAS_bool /* constinArgument_inAllowPanic */,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 163)) ;
  const enumGalgasBool test_0 = var_targetType.getter_instantiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 165)).operator_not (SOURCE_FILE ("instruction-var.galgas", 165)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("$").add_operation (var_targetType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 166)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 166))  COMMA_SOURCE_FILE ("instruction-var.galgas", 166)) ;
  }
  GALGAS_string var_varLLVMName = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 169)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-var.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 169)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 170)) ;
  GALGAS_objectInMemoryIR var_targetVar = GALGAS_objectInMemoryIR::constructor_localValue (var_targetType, var_varLLVMName  COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
  {
  ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), var_targetVar, var_targetType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 177)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 178)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName, var_targetType  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("instruction-let.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 47)), object->mAttribute_mOptionalTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-let.galgas", 47)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
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
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 71)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_operandIR var_expressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 74)) ;
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_expressionResult, var_targetType, object->mAttribute_mVarName.mAttribute_location, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  const enumGalgasBool test_2 = var_result.mAttribute_mType.getter_instantiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 98)).operator_not (SOURCE_FILE ("instruction-let.galgas", 98)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("$").add_operation (var_result.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 99))  COMMA_SOURCE_FILE ("instruction-let.galgas", 99)) ;
  }
  GALGAS_string var_varLLVMName = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 102)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-let.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 103)) ;
  GALGAS_objectInMemoryIR var_localConstant = GALGAS_objectInMemoryIR::constructor_localValue (var_result.mAttribute_mType, var_varLLVMName  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mVarName, var_result.mAttribute_mType, GALGAS_bool (true), var_localConstant, var_result.mAttribute_mType.getter_copyable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 111)), GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName, var_result.mAttribute_mType  COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  extensionMethod_storeInMemory (var_localConstant, var_result, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
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
//        Overriding extension method '@selfVarAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarAssignmentInstructionAST * object = (const cPtr_selfVarAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarAssignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_selfVarAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_selfVarAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_selfVarAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 64)) ;
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
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool constinArgument_inAllowPanic,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varAssignmentInstructionAST * object = (const cPtr_varAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varAssignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_objectInMemoryIR var_target ;
  {
  GALGAS_bool joker_4013_1 ; // Joker input parameter
  GALGAS_bool joker_4064_4 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_4064_3 ; // Joker input parameter
  GALGAS_bool joker_4064_2 ; // Joker input parameter
  GALGAS_bool joker_4064_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_4013_1, var_target, joker_4064_4, joker_4064_3, joker_4064_2, joker_4064_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 84)) ;
  }
  GALGAS_operandIR var_sourceOperand ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 92)) ;
  GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_sourceOperand, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_bool var_isCopyable ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4864_1 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_4915_1 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_4952_2 ; // Joker input parameter
  GALGAS_bool joker_4952_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_4864_1, var_accessIsAllowed, joker_4915_1, var_isCopyable, joker_4952_2, joker_4952_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
  }
  const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 124)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 127)) ;
  }
  const enumGalgasBool test_4 = var_isCopyable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("an $").add_operation (var_targetType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)) ;
  }
  extensionMethod_storeInMemory (var_target, var_result, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 132)) ;
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
//                       Overriding extension method '@selfVarAssignmentInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarAssignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarAssignmentInstructionAST * object = (const cPtr_selfVarAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarAssignmentInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assignment.galgas", 149)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 150)) ;
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 153)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_2 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a boolean does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 155)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_3 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolset does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 157)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_4 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("a static string does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 159)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_5 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("an enumeration does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_6 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_7 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 165)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        GALGAS_location location_8 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("an opaque type does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 167)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_8129 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 153)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_8129->mAssociatedValue0 ;
        GALGAS_bool var_public ;
        GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
        GALGAS_uint var_idx ;
        extractedValue_propertyMap.method_searchKey (object->mAttribute_mTargetVarName, var_public, var_targetType, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 169)) ;
        GALGAS_objectInMemoryIR var_fieldPtr ;
        {
        routine_getLocalNameOfNewTempObjectInMemory (var_targetType, ioArgument_ioTemporaries, var_fieldPtr, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 170)) ;
        }
        {
        GALGAS_elementPtrList temp_9 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 174)) ;
        temp_9.addAssign_operation (var_idx, object->mAttribute_mTargetVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 174)) ;
        extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, var_fieldPtr, constinArgument_inSelfType, temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 171)) ;
        }
        GALGAS_operandIR var_sourceOperand ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 177)) ;
        GALGAS_operandIR var_result = function_checkAssignmentCompatibility (var_sourceOperand, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 192)) ;
        extensionMethod_storeInMemory (var_fieldPtr, var_result, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarAssignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_selfVarAssignmentInstructionAST.mSlotID,
                                extensionMethod_selfVarAssignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarAssignmentInstructionAST_analyze (defineExtensionMethod_selfVarAssignmentInstructionAST_analyze, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 37)) ;
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
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                          const GALGAS_bool constinArgument_inAllowPanic,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 56)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 60)) ;
  GALGAS_operandIR var_expressionValue ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 65)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList, var_expressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 61)) ;
  const enumGalgasBool test_1 = var_expressionValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 77)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 85)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValue  COMMA_SOURCE_FILE ("instruction-assert.galgas", 86))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 86)) ;
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
  GALGAS_uint var_assertErrorCode = GALGAS_uint ((uint32_t) 7U) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode.getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 115)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (object->mAttribute_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
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
//              Overriding extension method '@throwInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                                                              extensionMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_throwInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@throwInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_throwInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)) COMMA_SOURCE_FILE ("instruction-panic.galgas", 54)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 58)) ;
  GALGAS_operandIR var_result ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.mAttribute_mPanicCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_unusedInstructionListIR, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 59)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.getter_length (SOURCE_FILE ("instruction-panic.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = var_result.mAttribute_mValue.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 77)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 77)) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = GALGAS_bool (kIsNotEqual, var_result.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)))) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression should be a literal integer")  COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bigint var_min ;
    GALGAS_bigint var_max ;
    GALGAS_bool joker_3956 ; // Joker input parameter
    GALGAS_uint joker_3968 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mPanicCodeType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)).method_integer (var_min, var_max, joker_3956, joker_3968, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)) ;
    GALGAS_bigint var_throwValue ;
    var_result.mAttribute_mValue.method_literalInteger (var_throwValue, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
    GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_throwValue.objectCompare (var_min)) ;
    if (kBoolTrue != test_4.boolEnum ()) {
      test_4 = GALGAS_bool (kIsStrictSup, var_throwValue.objectCompare (var_max)) ;
    }
    const enumGalgasBool test_5 = test_4.boolEnum () ;
    if (kBoolTrue == test_5) {
      inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.mAttribute_mPanicCodeType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 84))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 84)) ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 85)).boolEnum () ;
      if (kBoolTrue == test_6) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_throwValue  COMMA_SOURCE_FILE ("instruction-panic.galgas", 86))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 86)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_throwInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                                extensionMethod_throwInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_analyze (defineExtensionMethod_throwInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@throwInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_throwInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  GALGAS_uint var_staticStringIndex ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 111)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 111)), var_staticStringIndex, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex.getter_string (SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (object->mAttribute_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (object->mAttribute_mCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_throwInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                            extensionMethod_throwInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_llvmInstructionCode (defineExtensionMethod_throwInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@throwInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_throwInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                        GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_throwInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                                extensionMethod_throwInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_enterAccessibleEntities (defineExtensionMethod_throwInstructionIR_enterAccessibleEntities, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 113)) ;
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
//      Overriding extension method '@selfVarOperatorAssignInstructionAST noteInstructionTypesInPrecedenceGraph'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarOperatorAssignInstructionAST * object = (const cPtr_selfVarOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarOperatorAssignInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST.mSlotID,
                                                              extensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_selfVarOperatorAssignInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@varOperatorAssignInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_varOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varOperatorAssignInstructionAST * object = (const cPtr_varOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varOperatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_bool var_isConstant ;
  {
  GALGAS_bool joker_5261_5 ; // Joker input parameter
  GALGAS_objectInMemoryIR joker_5261_4 ; // Joker input parameter
  GALGAS_bool joker_5261_3 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_5261_2 ; // Joker input parameter
  GALGAS_bool joker_5261_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_5261_5, joker_5261_4, joker_5261_3, joker_5261_2, joker_5261_1, var_isConstant, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 139)) ;
  }
  const enumGalgasBool test_0 = var_isConstant.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a constant cannot be modified")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 146)) ;
  }
  GALGAS_operandIR var_sourceValue ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 149)) ;
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_objectInMemoryIR var_targetVariableKind ;
  GALGAS_bool var_isCopyable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_5995_1 ; // Joker input parameter
  GALGAS_controlRegisterBitSliceAccessMap joker_6165_3 ; // Joker input parameter
  GALGAS_bool joker_6165_2 ; // Joker input parameter
  GALGAS_bool joker_6165_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_5995_1, var_accessIsAllowed, var_targetVariableKind, var_isCopyable, joker_6165_3, joker_6165_2, joker_6165_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 165)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 173)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 174)) ;
  }
  GALGAS_bool var_noPanicGeneration = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178)) COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178)) ;
  GALGAS_infixOperatorMap var_operatorMap ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_addAssign:
    {
      const enumGalgasBool test_4 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 189)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 189))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 189)) ;
      }
      GALGAS_infixOperatorMap temp_6 ;
      const enumGalgasBool test_7 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
      }else if (kBoolFalse == test_7) {
        temp_6 = constinArgument_inContext.mAttribute_mAddOperatorMap ;
      }
      var_operatorMap = temp_6 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_addModuloAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_subAssign:
    {
      const enumGalgasBool test_8 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_location location_9 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 196)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 196))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 196)) ;
      }
      GALGAS_infixOperatorMap temp_10 ;
      const enumGalgasBool test_11 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_11) {
        temp_10 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
      }else if (kBoolFalse == test_11) {
        temp_10 = constinArgument_inContext.mAttribute_mSubOperatorMap ;
      }
      var_operatorMap = temp_10 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_subModuloAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_12 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 203)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 203))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 203)) ;
      }
      GALGAS_infixOperatorMap temp_14 ;
      const enumGalgasBool test_15 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
      }else if (kBoolFalse == test_15) {
        temp_14 = constinArgument_inContext.mAttribute_mMulOperatorMap ;
      }
      var_operatorMap = temp_14 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_mulModuloAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_divAssign:
    {
      const enumGalgasBool test_16 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_location location_17 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_17, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 210)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 210))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 210)) ;
      }
      GALGAS_infixOperatorMap temp_18 ;
      const enumGalgasBool test_19 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
      }else if (kBoolFalse == test_19) {
        temp_18 = constinArgument_inContext.mAttribute_mDivOperatorMap ;
      }
      var_operatorMap = temp_18 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_divZeroAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_modAssign:
    {
      const enumGalgasBool test_20 = var_panicMode.boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_location location_21 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_21, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 217)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 217))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 217)) ;
      }
      GALGAS_infixOperatorMap temp_22 ;
      const enumGalgasBool test_23 = var_noPanicGeneration.boolEnum () ;
      if (kBoolTrue == test_23) {
        temp_22 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
      }else if (kBoolFalse == test_23) {
        temp_22 = constinArgument_inContext.mAttribute_mModOperatorMap ;
      }
      var_operatorMap = temp_22 ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_modZeroAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator ;
  GALGAS_unifiedTypeMap_2D_proxy joker_8620 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap, var_targetType, var_sourceValue.mAttribute_mType, object->mAttribute_mTargetVarName.mAttribute_location, joker_8620, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 223)) ;
  const enumGalgasBool test_24 = var_isCopyable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 230)).boolEnum () ;
  if (kBoolTrue == test_24) {
    GALGAS_location location_25 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_25, GALGAS_string ("an $").add_operation (var_targetType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 231)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 231))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 231)) ;
  }
  GALGAS_operandIR var_variableValue ;
  extensionMethod_loadFromMemory (var_targetVariableKind, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 234)) ;
  GALGAS_operandIR var_newResultingValue ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue, object->mAttribute_mTargetVarName.mAttribute_location, var_sourceValue, var_targetType, var_newResultingValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 239)) ;
  extensionMethod_storeInMemory (var_targetVariableKind, var_newResultingValue, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 248)) ;
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
//                     Overriding extension method '@selfVarOperatorAssignInstructionAST analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfVarOperatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfVarOperatorAssignInstructionAST * object = (const cPtr_selfVarOperatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfVarOperatorAssignInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-operator-assign.galgas", 268)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 269)) ;
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 271)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
        GALGAS_location location_2 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("an opaque type does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 273)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_3 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 275)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
        GALGAS_location location_4 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 277)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_5 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 279)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_6 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 281)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_7 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 283)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_8 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 285)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_14950 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 271)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_14950->mAssociatedValue0 ;
        GALGAS_bool var_public ;
        GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
        GALGAS_uint var_idx ;
        extractedValue_propertyMap.method_searchKey (object->mAttribute_mTargetVarName, var_public, var_targetType, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 287)) ;
        GALGAS_operandIR var_sourceValue ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 289)) ;
        GALGAS_bool var_noPanicGeneration = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
        GALGAS_bool var_panicMode = constinArgument_inModeSet.getter_hasKey (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 306)) COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 306)) ;
        GALGAS_infixOperatorMap var_operatorMap ;
        switch (object->mAttribute_mOperator.enumValue ()) {
        case GALGAS_operatorAssignKind::kNotBuilt:
          break ;
        case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_addAssign:
          {
            const enumGalgasBool test_9 = var_panicMode.boolEnum () ;
            if (kBoolTrue == test_9) {
              GALGAS_location location_10 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_10, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 317)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 317))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 317)) ;
            }
            GALGAS_infixOperatorMap temp_11 ;
            const enumGalgasBool test_12 = var_noPanicGeneration.boolEnum () ;
            if (kBoolTrue == test_12) {
              temp_11 = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
            }else if (kBoolFalse == test_12) {
              temp_11 = constinArgument_inContext.mAttribute_mAddOperatorMap ;
            }
            var_operatorMap = temp_11 ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_addModuloAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mAddNoOvfOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_subAssign:
          {
            const enumGalgasBool test_13 = var_panicMode.boolEnum () ;
            if (kBoolTrue == test_13) {
              GALGAS_location location_14 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_14, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 324)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 324))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 324)) ;
            }
            GALGAS_infixOperatorMap temp_15 ;
            const enumGalgasBool test_16 = var_noPanicGeneration.boolEnum () ;
            if (kBoolTrue == test_16) {
              temp_15 = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
            }else if (kBoolFalse == test_16) {
              temp_15 = constinArgument_inContext.mAttribute_mSubOperatorMap ;
            }
            var_operatorMap = temp_15 ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_subModuloAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mSubNoOvfOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_mulAssign:
          {
            const enumGalgasBool test_17 = var_panicMode.boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_location location_18 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_18, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 331)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 331))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 331)) ;
            }
            GALGAS_infixOperatorMap temp_19 ;
            const enumGalgasBool test_20 = var_noPanicGeneration.boolEnum () ;
            if (kBoolTrue == test_20) {
              temp_19 = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
            }else if (kBoolFalse == test_20) {
              temp_19 = constinArgument_inContext.mAttribute_mMulOperatorMap ;
            }
            var_operatorMap = temp_19 ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_mulModuloAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mMulNoOvfOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_divAssign:
          {
            const enumGalgasBool test_21 = var_panicMode.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_location location_22 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_22, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 338)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 338))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 338)) ;
            }
            GALGAS_infixOperatorMap temp_23 ;
            const enumGalgasBool test_24 = var_noPanicGeneration.boolEnum () ;
            if (kBoolTrue == test_24) {
              temp_23 = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
            }else if (kBoolFalse == test_24) {
              temp_23 = constinArgument_inContext.mAttribute_mDivOperatorMap ;
            }
            var_operatorMap = temp_23 ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_divZeroAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mDivNoOvfOperatorMap ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_modAssign:
          {
            const enumGalgasBool test_25 = var_panicMode.boolEnum () ;
            if (kBoolTrue == test_25) {
              GALGAS_location location_26 (object->mAttribute_mTargetVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_26, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 345)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 345))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 345)) ;
            }
            GALGAS_infixOperatorMap temp_27 ;
            const enumGalgasBool test_28 = var_noPanicGeneration.boolEnum () ;
            if (kBoolTrue == test_28) {
              temp_27 = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
            }else if (kBoolFalse == test_28) {
              temp_27 = constinArgument_inContext.mAttribute_mModOperatorMap ;
            }
            var_operatorMap = temp_27 ;
          }
          break ;
        case GALGAS_operatorAssignKind::kEnum_modZeroAssign:
          {
            var_operatorMap = constinArgument_inContext.mAttribute_mModNoOvfOperatorMap ;
          }
          break ;
        }
        GALGAS_infixOperatorDescription var_binaryOperator ;
        GALGAS_unifiedTypeMap_2D_proxy joker_13924 ; // Joker input parameter
        extensionMethod_checkBinaryOperationWith (var_operatorMap, var_targetType, var_sourceValue.mAttribute_mType, object->mAttribute_mTargetVarName.mAttribute_location, joker_13924, var_binaryOperator, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 351)) ;
        GALGAS_objectInMemoryIR var_fieldAddress ;
        {
        routine_getLocalNameOfNewTempObjectInMemory (var_targetType, ioArgument_ioTemporaries, var_fieldAddress, inCompiler  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 362)) ;
        }
        {
        GALGAS_elementPtrList temp_29 = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("instruction-operator-assign.galgas", 366)) ;
        temp_29.addAssign_operation (var_idx, object->mAttribute_mTargetVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 366)) ;
        extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, var_fieldAddress, constinArgument_inSelfType, temp_29, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 363)) ;
        }
        GALGAS_operandIR var_targetVariableValue ;
        extensionMethod_loadFromMemory (var_fieldAddress, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_targetVariableValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 368)) ;
        GALGAS_operandIR var_newResultingValue ;
        callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_targetVariableValue, object->mAttribute_mTargetVarName.mAttribute_location, var_sourceValue, var_targetType, var_newResultingValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 373)) ;
        extensionMethod_storeInMemory (var_fieldAddress, var_newResultingValue, ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 382)) ;
      }
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfVarOperatorAssignInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_selfVarOperatorAssignInstructionAST.mSlotID,
                                extensionMethod_selfVarOperatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfVarOperatorAssignInstructionAST_analyze (defineExtensionMethod_selfVarOperatorAssignInstructionAST_analyze, NULL) ;

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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mThenInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 107)) ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mElseInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 109)) ;
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
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                      const GALGAS_bool constinArgument_inAllowPanic,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_operandIR var_testResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 133)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testResult.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 145)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 145)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 146)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 146))  COMMA_SOURCE_FILE ("instruction-if.galgas", 146)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 148)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 151)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 153)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 168)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 169)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 182)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, object->mAttribute_mTestExpressionEndLocation, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 184))  COMMA_SOURCE_FILE ("instruction-if.galgas", 184)) ;
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
  GALGAS_string var_labelTrue = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)).getter_string (SOURCE_FILE ("instruction-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
  GALGAS_string var_labelFalse = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).getter_string (SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("if.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)).getter_string (SOURCE_FILE ("instruction-if.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestVariable.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (var_labelTrue, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (var_labelFalse, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 220)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 221)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 221)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 223)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 232)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 233)) ;
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
//                Overriding extension method '@onInstructionAST noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onInstructionAST * object = (const cPtr_onInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_onInstructionAST) ;
  cEnumerator_onInstructionBranchList enumerator_5248 (object->mAttribute_mBranchList, kEnumeration_up) ;
  while (enumerator_5248.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5248.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 132)) ;
    enumerator_5248.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_onInstructionAST.mSlotID,
                                                              extensionMethod_onInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_onInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension method '@onInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                      const GALGAS_bool constinArgument_inAllowPanic,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onInstructionAST * object = (const cPtr_onInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_onInstructionAST) ;
  GALGAS_onInstructionBranchListIR var_onInstructionBranchListIR = GALGAS_onInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 152)) ;
  cEnumerator_onInstructionBranchList enumerator_6376 (object->mAttribute_mBranchList, kEnumeration_up) ;
  while (enumerator_6376.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 154)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR ;
    switch (enumerator_6376.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommand::kNotBuilt:
      break ;
    case GALGAS_guardedCommand::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommand_synchronization * extractPtr_7633 = (const cEnumAssociatedValues_guardedCommand_synchronization *) (enumerator_6376.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_7633->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_7633->mAssociatedValue1 ;
        const GALGAS_effectiveParameterListAST extractedValue_effectiveParameterList = extractPtr_7633->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 159)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR ;
        GALGAS_lstring var_guardMangledName ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList, var_guardEffectiveParameterListIR, var_guardMangledName, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 160)) ;
        }
        var_guardedCommandIR = GALGAS_guardedCommandIR::constructor_synchronization (var_guardMangledName.mAttribute_string, extractedValue_optionalReceiverName.mAttribute_string, var_guardInstructionGenerationList, var_guardEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-select.galgas", 177)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_8680 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_6376.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_8680->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_8680->mAssociatedValue1 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 184)) ;
        GALGAS_operandIR var_sourceOperand ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-select.galgas", 189)), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList, var_sourceOperand, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 185)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_sourceOperand.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 200)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 200)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean")  COMMA_SOURCE_FILE ("instruction-select.galgas", 201)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_1 = extensionGetter_isStatic (var_sourceOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 202)).boolEnum () ;
          if (kBoolTrue == test_1) {
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static")  COMMA_SOURCE_FILE ("instruction-select.galgas", 203)) ;
          }
        }
        var_guardedCommandIR = GALGAS_guardedCommandIR::constructor_booleanGuard (var_guardInstructionGenerationList, var_sourceOperand  COMMA_SOURCE_FILE ("instruction-select.galgas", 205)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_10828 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_6376.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_10828->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_10828->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_10828->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_10828->mAssociatedValue3 ;
        const GALGAS_effectiveParameterListAST extractedValue_effectiveParameterList = extractPtr_10828->mAssociatedValue4 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 210)) ;
        GALGAS_operandIR var_boolExpressionResult ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-select.galgas", 215)), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList, var_boolExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 211)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_boolExpressionResult.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 226)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 226)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean")  COMMA_SOURCE_FILE ("instruction-select.galgas", 227)) ;
        }else if (kBoolFalse == test_2) {
          const enumGalgasBool test_3 = extensionGetter_isStatic (var_boolExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 228)).boolEnum () ;
          if (kBoolTrue == test_3) {
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static")  COMMA_SOURCE_FILE ("instruction-select.galgas", 229)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 231)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR ;
        GALGAS_lstring var_guardMangledName ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList, var_guardEffectiveParameterListIR, var_guardMangledName, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 232)) ;
        }
        var_guardedCommandIR = GALGAS_guardedCommandIR::constructor_boolAndSync (var_boolExpInstructionGenerationList, var_boolExpressionResult, var_guardMangledName.mAttribute_string, extractedValue_optionalReceiverName.mAttribute_string, var_guardInstructionGenerationList, var_guardEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-select.galgas", 249)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 259)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6376.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, enumerator_6376.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_6376.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
    }
    var_onInstructionBranchListIR.addAssign_operation (var_guardedCommandIR, var_branchInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-select.galgas", 275)) ;
    enumerator_6376.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_onInstructionIR::constructor_new (var_onInstructionBranchListIR  COMMA_SOURCE_FILE ("instruction-select.galgas", 280))  COMMA_SOURCE_FILE ("instruction-select.galgas", 280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_onInstructionAST.mSlotID,
                                extensionMethod_onInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onInstructionAST_analyze (defineExtensionMethod_onInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@onInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onInstructionIR * object = (const cPtr_onInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_onInstructionIR) ;
  ioArgument_ioGenerationAdds.mAttribute_mUsesGuards = GALGAS_bool (true) ;
  GALGAS_string var_startLabel = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("instruction-select.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 398)) ;
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 401)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 401)) ;
  GALGAS_string var_startLabelName = var_startLabel.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 402)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 403)) ;
  GALGAS_string var_exitLabelName = var_startLabel.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 404)) ;
  GALGAS_string var_currentStartBranchLabel = var_startLabelName ;
  cEnumerator_onInstructionBranchListIR enumerator_16953 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  GALGAS_uint index_16916 ((uint32_t) 0) ;
  while (enumerator_16953.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName = GALGAS_string ("%").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 407)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 407)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 407)) ;
    switch (enumerator_16953.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_17938 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_16953.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_17938->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_17938->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_17938->mAssociatedValue3 ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 410)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 411)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 411)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 411)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 412)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_17452 (extractedValue_effectiveParameterListIR, kEnumeration_up) ;
        while (enumerator_17452.hasCurrentObject ()) {
          switch (enumerator_17452.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_17452.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 416)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 416)).add_operation (extensionGetter_llvmName (enumerator_17452.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 416)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_17452.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 418)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 418)).add_operation (extensionGetter_llvmName (enumerator_17452.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 418)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_17452.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 420)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 420)).add_operation (extensionGetter_llvmName (enumerator_17452.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 420)) ;
            }
            break ;
          }
          if (enumerator_17452.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 423)) ;
          }
          enumerator_17452.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 425)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_18711 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_16953.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_18711->mAssociatedValue0 ;
        const GALGAS_operandIR extractedValue_result = extractPtr_18711->mAssociatedValue1 ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 427)) ;
        GALGAS_string var_acceptedLabelName = var_startLabel.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 428)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 428)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 428)) ;
        GALGAS_string var_rejectedLabelName = var_startLabel.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 429)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 429)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 429)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)).add_operation (var_acceptedLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)).add_operation (var_rejectedLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 430)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 431)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 432)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 433)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 433)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 434)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 435)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 435)).add_operation (extensionGetter_llvmName (extractedValue_result.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 435)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 435)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_20426 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_16953.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_ExpInstructionList = extractPtr_20426->mAssociatedValue0 ;
        const GALGAS_operandIR extractedValue_expResult = extractPtr_20426->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_20426->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_20426->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_20426->mAssociatedValue5 ;
        extensionMethod_instructionListLLVMCode (extractedValue_ExpInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 437)) ;
        GALGAS_string var_testOkLabelName = var_startLabel.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 438)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 438)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 438)) ;
        GALGAS_string var_testExitLabelName = var_startLabel.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 439)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 439)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 439)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)).add_operation (var_testOkLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)).add_operation (var_testExitLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 440)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 441)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 442)) ;
        GALGAS_string var_guardAcceptationLabelName = var_startLabel.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 443)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 443)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 443)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 444)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 444)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 444)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 445)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_19617 (extractedValue_effectiveParameterList, kEnumeration_up) ;
        while (enumerator_19617.hasCurrentObject ()) {
          switch (enumerator_19617.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19617.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 449)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 449)).add_operation (extensionGetter_llvmName (enumerator_19617.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 449)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19617.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 451)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 451)).add_operation (extensionGetter_llvmName (enumerator_19617.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 451)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(enumerator_19617.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 453)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 453)).add_operation (extensionGetter_llvmName (enumerator_19617.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 453)) ;
            }
            break ;
          }
          if (enumerator_19617.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 456)) ;
          }
          enumerator_19617.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 458)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 459)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 459)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 460)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 461)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 461)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 462)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 462)).add_operation (var_testOkLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 462)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 462)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 463)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 463)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 463)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName = var_startLabel.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 465)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 465)) ;
    GALGAS_string var_rejectedLabelName = var_startLabel.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 466)).add_operation (index_16916.getter_string (SOURCE_FILE ("instruction-select.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 466)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 467)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 467)).add_operation (var_acceptedLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 467)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 467)).add_operation (var_rejectedLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 467)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 467)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 468)) ;
    extensionMethod_instructionListLLVMCode (enumerator_16953.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 469)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 470)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 470)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 471)) ;
    var_currentStartBranchLabel = var_rejectedLabelName ;
    enumerator_16953.gotoNextObject () ;
    index_16916.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 406)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 474)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 474)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabelName, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 475)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 475)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 476)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_onInstructionIR.mSlotID,
                                            extensionMethod_onInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onInstructionIR_llvmInstructionCode (defineExtensionMethod_onInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@onInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onInstructionIR * object = (const cPtr_onInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_onInstructionIR) ;
  GALGAS_uint var_branchCount = object->mAttribute_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-select.galgas", 485)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount ;
  }
  cEnumerator_onInstructionBranchListIR enumerator_21666 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  while (enumerator_21666.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_21666.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 490)) ;
    switch (enumerator_21666.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_22218 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_21666.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22218->mAssociatedValue0 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_22218->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_22218->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 493)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-select.galgas", 494)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-select.galgas", 496)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_22383 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_21666.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_22383->mAssociatedValue0 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 499)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_22916 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_21666.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_22916->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22916->mAssociatedValue2 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_22916->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_22916->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 501)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 502)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-select.galgas", 503)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-select.galgas", 505)) ;
        }
      }
      break ;
    }
    enumerator_21666.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_onInstructionIR.mSlotID,
                                                extensionMethod_onInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onInstructionIR_enterAccessibleEntities (defineExtensionMethod_onInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@abstractCallInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCallInstructionAST * object = (const cPtr_abstractCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCallInstructionAST) ;
  cEnumerator_effectiveParameterListAST enumerator_6199 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_6199.hasCurrentObject ()) {
    switch (enumerator_6199.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_6424 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_6199.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_6424->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_6517 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_6199.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6517->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_6199.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_abstractCallInstructionAST.mSlotID,
                                                              extensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_abstractCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@unifiedSelfCallInstructionAST analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unifiedSelfCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                   const GALGAS_semanticContext constinArgument_inContext,
                                                                   const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                   const GALGAS_bool constinArgument_inAllowPanic,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unifiedSelfCallInstructionAST * object = (const cPtr_unifiedSelfCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unifiedSelfCallInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 215)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mSelfLocation, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 216)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_currentType = constinArgument_inSelfType ;
    GALGAS_lstringlist var_propertyList = object->mAttribute_mPropertyList ;
    GALGAS_lstring var_methodName ;
    {
    var_propertyList.setter_popLast (var_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 220)) ;
    }
    GALGAS_elementPtrList var_elementPtrList = GALGAS_elementPtrList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 221)) ;
    GALGAS_bool var_needsPublic = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8736 (var_propertyList, kEnumeration_up) ;
    while (enumerator_8736.hasCurrentObject ()) {
      switch (var_currentType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 224)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_opaque:
        {
          GALGAS_location location_1 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_1, GALGAS_string ("an opaque type does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 226)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          GALGAS_location location_2 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 228)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_staticInteger:
        {
          GALGAS_location location_3 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 230)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          GALGAS_location location_4 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_4, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 232)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          GALGAS_location location_5 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 234)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          GALGAS_location location_6 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 236)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          GALGAS_location location_7 (enumerator_8736.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_7, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 238)) ;
          var_currentType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          const cEnumAssociatedValues_typeKind_structure * extractPtr_9782 = (const cEnumAssociatedValues_typeKind_structure *) (var_currentType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 224)).unsafePointer ()) ;
          const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_9782->mAssociatedValue0 ;
          GALGAS_bool var_public ;
          GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
          GALGAS_uint var_idx ;
          extractedValue_propertyMap.method_searchKey (enumerator_8736.current_mValue (HERE), var_public, var_propertyType, var_idx, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 240)) ;
          var_elementPtrList.addAssign_operation (var_idx, enumerator_8736.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 241)) ;
          var_currentType = var_propertyType ;
        }
        break ;
      }
      var_needsPublic = GALGAS_bool (true) ;
      enumerator_8736.gotoNextObject () ;
    }
    GALGAS_lstring var_routineMangledName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (var_currentType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)).add_operation (var_methodName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)), var_methodName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 246)) ;
    GALGAS_objectInMemoryIR var_propertyAddressLLVMvar ;
    {
    routine_getLocalNameOfNewTempObjectInMemory (var_currentType, ioArgument_ioTemporaries, var_propertyAddressLLVMvar, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)) ;
    }
    {
    extensionSetter_appendGetElementPtrFromSelf (ioArgument_ioInstructionGenerationList, var_propertyAddressLLVMvar, constinArgument_inSelfType, var_elementPtrList, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 248)) ;
    }
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 253)) ;
    var_effectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 254)), extensionGetter_address (var_propertyAddressLLVMvar, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 254)) ;
    GALGAS_bool var_isPublic ;
    GALGAS_modeMap var_modeMap ;
    GALGAS_procedureSignature var_formalSignature ;
    GALGAS_routineKind var_routineKind ;
    GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
    GALGAS_bool joker_10571 ; // Joker input parameter
    constinArgument_inContext.mAttribute_mRoutineMapForContext.method_searchKey (var_routineMangledName, var_isPublic, var_modeMap, var_formalSignature, var_routineKind, joker_10571, var_returnedType, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)) ;
    GALGAS_bool test_8 = var_needsPublic ;
    if (kBoolTrue == test_8.boolEnum ()) {
      test_8 = var_isPublic.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 264)) ;
    }
    const enumGalgasBool test_9 = test_8.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_location location_10 (var_routineMangledName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_10, GALGAS_string ("this routine is not public")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 265)) ;
    }
    GALGAS_lstring var_routineNameForInvocationGraph ;
    switch (var_routineKind.enumValue ()) {
    case GALGAS_routineKind::kNotBuilt:
      break ;
    case GALGAS_routineKind::kEnum_function:
      {
        var_routineNameForInvocationGraph = function_procNameForInvocationGraph (var_currentType, var_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 271)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_section:
      {
        var_routineNameForInvocationGraph = function_sectionNameForInvocationGraph (var_currentType, var_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 273)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_service:
      {
        var_routineNameForInvocationGraph = function_serviceNameForInvocationGraph (var_currentType, var_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 275)) ;
      }
      break ;
    case GALGAS_routineKind::kEnum_primitive:
      {
        var_routineNameForInvocationGraph = function_primitiveNameForInvocationGraph (var_currentType, var_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 277)) ;
      }
      break ;
    }
    {
    ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineNameForInvocationGraph COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 279)) ;
    }
    GALGAS_routineKindIR var_routineKindIR = function_checkMode (constinArgument_inRequiredModeSet, var_modeMap.getter_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 283)), var_routineKind, var_methodName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 281)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature, object->mAttribute_mEffectiveParameterList, var_methodName.mAttribute_location, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 288)) ;
    }
    const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_returnedType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 304)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_location location_12 (var_methodName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_12, GALGAS_string ("cannot be called in instruction: return value")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 305)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (GALGAS_string::makeEmptyString (), var_routineMangledName.mAttribute_string, var_routineKindIR, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 308))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 308)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unifiedSelfCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_unifiedSelfCallInstructionAST.mSlotID,
                                extensionMethod_unifiedSelfCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unifiedSelfCallInstructionAST_analyze (defineExtensionMethod_unifiedSelfCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@standaloneRoutineCallInstructionAST analyze'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneRoutineCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                         const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallInstructionAST * object = (const cPtr_standaloneRoutineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallInstructionAST) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR ;
  GALGAS_routineKindIR var_routineKindIR ;
  GALGAS_lstring var_routineMangledName ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  {
  routine_analyzeRoutineCall (constinArgument_inSelfType, GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 333)), object->mAttribute_mRoutineName, object->mAttribute_mEffectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR, var_routineKindIR, var_routineMangledName, var_returnedType, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 331)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 350)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("cannot be called in instruction: return value")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 351)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (GALGAS_string::makeEmptyString (), var_routineMangledName.mAttribute_string, var_routineKindIR, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 354))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 354)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneRoutineCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_standaloneRoutineCallInstructionAST.mSlotID,
                                extensionMethod_standaloneRoutineCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneRoutineCallInstructionAST_analyze (defineExtensionMethod_standaloneRoutineCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@remoteRoutineCallInstructionAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_remoteRoutineCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_stringset constinArgument_inRequiredModeSet,
                                                                     const GALGAS_bool constinArgument_inAllowPanic,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_remoteRoutineCallInstructionAST * object = (const cPtr_remoteRoutineCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_remoteRoutineCallInstructionAST) ;
  GALGAS_lstringlist var_propertyList = object->mAttribute_mPropertyList ;
  GALGAS_lstring var_receiverName ;
  {
  var_propertyList.setter_popFirst (var_receiverName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 377)) ;
  }
  GALGAS_lstring var_routineName ;
  {
  var_propertyList.setter_popLast (var_routineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 378)) ;
  }
  cEnumerator_lstringlist enumerator_15143 (var_propertyList, kEnumeration_up) ;
  while (enumerator_15143.hasCurrentObject ()) {
    GALGAS_location location_0 (enumerator_15143.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_0, GALGAS_string ("not handled yet (2)")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 380)) ;
    enumerator_15143.gotoNextObject () ;
  }
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR ;
  GALGAS_routineKindIR var_routineKindIR ;
  GALGAS_lstring var_routineMangledName ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType ;
  {
  routine_analyzeRoutineCall (constinArgument_inSelfType, var_receiverName, var_routineName, object->mAttribute_mEffectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR, var_routineKindIR, var_routineMangledName, var_returnedType, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 383)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_returnedType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-proc-call.galgas", 402)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (var_routineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, GALGAS_string ("cannot be called in instruction: return value")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 403)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (var_receiverName.mAttribute_string, var_routineMangledName.mAttribute_string, var_routineKindIR, var_effectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 406))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_remoteRoutineCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_remoteRoutineCallInstructionAST.mSlotID,
                                extensionMethod_remoteRoutineCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_remoteRoutineCallInstructionAST_analyze (defineExtensionMethod_remoteRoutineCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@procCallInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 740)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_routineKindIR::kNotBuilt:
    break ;
  case GALGAS_routineKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 742)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 742)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 743)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 743)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 744)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 745)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 745)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 746)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 746)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 747)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 747)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 748)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 750)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_30697 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_30697.hasCurrentObject ()) {
    switch (enumerator_30697.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_30697.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 754)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 754)).add_operation (extensionGetter_llvmName (enumerator_30697.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 754)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 754)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_30697.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 756)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 756)).add_operation (extensionGetter_llvmName (enumerator_30697.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 756)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 756)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(enumerator_30697.current_mParameter (HERE).mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 758)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 758)).add_operation (extensionGetter_llvmName (enumerator_30697.current_mParameter (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 758)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 758)) ;
      }
      break ;
    }
    if (enumerator_30697.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 761)) ;
    }
    enumerator_30697.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 763)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                            extensionMethod_procCallInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_llvmInstructionCode (defineExtensionMethod_procCallInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 772)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVariableName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 774)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                                extensionMethod_procCallInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_enterAccessibleEntities (defineExtensionMethod_procCallInstructionIR_enterAccessibleEntities, NULL) ;

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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 62)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 63)) ;
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
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 83)) ;
  GALGAS_operandIR var_testValue ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 88)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_testInstructionGenerationList, var_testValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 84)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testValue.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 100)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 100)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testValue.mAttribute_mType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101))  COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 104)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 107)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList, var_testValue, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 124))  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
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
  GALGAS_string var_labelTest = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  GALGAS_string var_labelLoop = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  GALGAS_string var_labelEnd = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestExpression.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 49)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
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
//                              Overriding extension method '@forInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_stringset constinArgument_inModeSet,
                                                       const GALGAS_bool constinArgument_inAllowPanic,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_operandIR var_iteratedExpressionResult ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 74)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_iteratedExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 70)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType = var_iteratedExpressionResult.mAttribute_mType.getter_enumerationType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 86)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedElementType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 87)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, GALGAS_string ("this object is not enumerable")  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 88)) ;
  }
  GALGAS_string var_enumeratedVarLLVMName = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 91)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 91)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName, var_iteratedElementType  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 93)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 95)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mAttribute_mVarName, var_iteratedElementType, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_iteratedElementType, var_enumeratedVarLLVMName  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 100)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-for-in-do.galgas", 102)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 96)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 120)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionIR::constructor_new (var_enumeratedVarLLVMName, var_iteratedElementType, object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, var_iteratedExpressionResult, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122)) ;
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
//                         Overriding extension method '@forInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 150)) ;
  GALGAS_string var_testLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  GALGAS_string var_loopLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)) ;
  GALGAS_string var_endLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GALGAS_string var_ptrVar = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)).add_operation (GALGAS_string (".ptr"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  GALGAS_string var_currentVar = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
  GALGAS_string var_elementTypeName = object->mAttribute_mElementType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 160)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 161)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)).add_operation (GALGAS_string (" = phi i8* ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (var_endLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 173)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 173)).add_operation (var_currentVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 173)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 173)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 174)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (var_elementTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)).add_operation (var_ptrVar, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 178)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                            extensionMethod_forInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_llvmInstructionCode (defineExtensionMethod_forInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@forInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                      GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 190)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                                extensionMethod_forInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_enterAccessibleEntities (defineExtensionMethod_forInstructionIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 61)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 63)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 65)) ;
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
//                       Overriding extension method '@forLowerUpperBoundInstructionAST analyze'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                                      const GALGAS_bool constinArgument_inAllowPanic,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 85)) ;
  switch (var_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 86)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      GALGAS_location location_0 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_0, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
    {
      GALGAS_location location_1 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_2 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      GALGAS_location location_3 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      GALGAS_location location_4 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_5 (object->mAttribute_mTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_7678 = (const cEnumAssociatedValues_typeKind_integer *) (var_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 86)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_7678->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_7678->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_7678->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_7678->mAssociatedValue3 ;
      GALGAS_operandIR var_lowerBoundExpressionResult ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
      GALGAS_operandIR var_upperBoundExpressionResult ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 121)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 117)) ;
      GALGAS_operandIR var_lowerBound = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult, var_type, object->mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 133)) ;
      GALGAS_operandIR var_upperBound = function_checkAssignmentCompatibility (var_upperBoundExpressionResult, var_type, object->mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 139)) ;
      GALGAS_string var_enumeratedVarLLVMName = object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 146)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 146)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName, var_type  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 148)) ;
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)) ;
      }
      {
      ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mAttribute_mVarName, var_type, GALGAS_bool (true), GALGAS_objectInMemoryIR::constructor_localValue (var_type, var_enumeratedVarLLVMName  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 155)), GALGAS_bool (true), GALGAS_controlRegisterBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 157)), GALGAS_bool (false), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 151)) ;
      }
      GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 162)) ;
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName, var_type, extractedValue_unsigned, object->mAttribute_mEndOf_5F_do_5F_instruction, var_lowerBound, var_upperBound, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 213)) ;
  GALGAS_string var_llvmVarName = function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 214)) ;
  GALGAS_string var_testLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 215)) ;
  GALGAS_string var_loopLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 216)) ;
  GALGAS_string var_endLabel = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)) ;
  GALGAS_string var_testResult = GALGAS_string ("%for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)) ;
  GALGAS_string var_loadedVarName = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)).add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)) ;
  GALGAS_string var_currentVarName = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)).add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)) ;
  GALGAS_string var_nextVarName = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)).add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (extensionGetter_llvmName (object->mAttribute_mLowerExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (var_llvmVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 226)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (var_loadedVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (extensionGetter_llvmName (object->mAttribute_mUpperExpressionResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_loopLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_endLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_llvmVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (var_currentVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_nextVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (var_llvmVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                            extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                                extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@extendIR llvmInstructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                          const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                          GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extendIR * object = (const cPtr_extendIR *) inObject ;
  macroValidSharedObject (object, cPtr_extendIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_bool var_sourceIsUnsigned ;
  GALGAS_bigint joker_739 ; // Joker input parameter
  GALGAS_bigint joker_746 ; // Joker input parameter
  GALGAS_uint joker_789 ; // Joker input parameter
  object->mAttribute_mSource.mAttribute_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_739, joker_746, var_sourceIsUnsigned, joker_789, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("zext") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("sext") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (object->mAttribute_mSource.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (object->mAttribute_mResult.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                            extensionMethod_extendIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_llvmInstructionCode (defineExtensionMethod_extendIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@extendIR enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extendIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                              GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                              GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extendIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_extendIR.mSlotID,
                                                extensionMethod_extendIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extendIR_enterAccessibleEntities (defineExtensionMethod_extendIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@binaryOperationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                extensionMethod_binaryOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterAccessibleEntities (defineExtensionMethod_binaryOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@binaryOperationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = (const cPtr_binaryOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), GALGAS_uint ((uint32_t) 10U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 161)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 169)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), GALGAS_uint ((uint32_t) 13U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 177)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), GALGAS_uint ((uint32_t) 33U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 185)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), GALGAS_uint ((uint32_t) 33U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 193)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), GALGAS_uint ((uint32_t) 39U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 201)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), GALGAS_uint ((uint32_t) 39U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 209)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), GALGAS_uint ((uint32_t) 44U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 217)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), GALGAS_uint ((uint32_t) 44U), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 225)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                            extensionMethod_binaryOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_llvmInstructionCode (defineExtensionMethod_binaryOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@shortCircuitAndOperationIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mLeftInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 38)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mRightInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                                extensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_enterAccessibleEntities (defineExtensionMethod_shortCircuitAndOperationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@shortCircuitAndOperationIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                            GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_shortCircuitAndOperationIR * object = (const cPtr_shortCircuitAndOperationIR *) inObject ;
  macroValidSharedObject (object, cPtr_shortCircuitAndOperationIR) ;
  GALGAS_string var_startLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  GALGAS_string var_trueLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  GALGAS_string var_falseLabel = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mLeftOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (extensionGetter_llvmName (object->mAttribute_mRightOperand.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_trueLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_startLabel, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_shortCircuitAndOperationIR.mSlotID,
                                            extensionMethod_shortCircuitAndOperationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_shortCircuitAndOperationIR_llvmInstructionCode (defineExtensionMethod_shortCircuitAndOperationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@loadRegisterIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadRegisterIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadRegisterIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                            extensionMethod_loadRegisterIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_llvmInstructionCode (defineExtensionMethod_loadRegisterIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@loadRegisterIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadRegisterIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterIR * object = (const cPtr_loadRegisterIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadRegisterIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadRegisterIR.mSlotID,
                                                extensionMethod_loadRegisterIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterIR_enterAccessibleEntities (defineExtensionMethod_loadRegisterIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@loadGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadGlobalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                            extensionMethod_loadGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_llvmInstructionCode (defineExtensionMethod_loadGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadGlobalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                                extensionMethod_loadGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_enterAccessibleEntities (defineExtensionMethod_loadGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@loadLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 24)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadLocalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                            extensionMethod_loadLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_llvmInstructionCode (defineExtensionMethod_loadLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadLocalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                                extensionMethod_loadLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_enterAccessibleEntities (defineExtensionMethod_loadLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@loadTaskVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadTaskVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadTaskVariableIR * object = (const cPtr_loadTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadTaskVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetValue.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (function_llvmNameForTaskVariable (object->mAttribute_mTaskName, object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadTaskVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadTaskVariableIR.mSlotID,
                                            extensionMethod_loadTaskVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadTaskVariableIR_llvmInstructionCode (defineExtensionMethod_loadTaskVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@loadTaskVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadTaskVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadTaskVariableIR * object = (const cPtr_loadTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadTaskVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mTaskVariableSet.addAssign_operation (object->mAttribute_mTaskName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36)).add_operation (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36))  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadTaskVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadTaskVariableIR.mSlotID,
                                                extensionMethod_loadTaskVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadTaskVariableIR_enterAccessibleEntities (defineExtensionMethod_loadTaskVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@storeVolatileIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store volatile ").add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (GALGAS_string ("* inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)).add_operation (object->mAttribute_mAddress.getter_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (object->mAttribute_mAddress.getter_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                            extensionMethod_storeVolatileIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_llvmInstructionCode (defineExtensionMethod_storeVolatileIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@storeVolatileIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIR * object = (const cPtr_storeVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mAccessibleRegisterSet.addAssign_operation (object->mAttribute_mRegisterName  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeVolatileIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeVolatileIR.mSlotID,
                                                extensionMethod_storeVolatileIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIR_enterAccessibleEntities (defineExtensionMethod_storeVolatileIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@storeGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 30)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeGlobalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                            extensionMethod_storeGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_llvmInstructionCode (defineExtensionMethod_storeGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@storeGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeGlobalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                                extensionMethod_storeGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_enterAccessibleEntities (defineExtensionMethod_storeGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@storeTaskVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeTaskVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeTaskVariableIR * object = (const cPtr_storeTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeTaskVariableIR) ;
  GALGAS_string var_llvmType = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue.mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (var_llvmType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (GALGAS_string ("* @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForTaskVariable (object->mAttribute_mTaskName, object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeTaskVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeTaskVariableIR.mSlotID,
                                            extensionMethod_storeTaskVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeTaskVariableIR_llvmInstructionCode (defineExtensionMethod_storeTaskVariableIR_llvmInstructionCode, NULL) ;

