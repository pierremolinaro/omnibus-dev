#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@operatorInfixExpressionIR instructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorInfixExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorInfixExpressionIR * object = (const cPtr_operatorInfixExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_infixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixNoOvf:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixNoOvf * extractPtr_20729 = (const cEnumAssociatedValues_infixOperatorIR_infixNoOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_infixOperator = extractPtr_20729->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 591)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 591)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 591)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)).add_operation (extractedValue_infixOperator, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 592)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixOvf:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixOvf * extractPtr_21377 = (const cEnumAssociatedValues_infixOperatorIR_infixOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_builtinFunction = extractPtr_21377->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_code = extractPtr_21377->mAssociatedValue1 ;
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (object->mAttribute_mOperatorLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 594)) ;
      result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 595)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 596)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 596)).add_operation (extractedValue_builtinFunction, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 596)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 596)).add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 596)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 597)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 597)).add_operation (GALGAS_string (", &"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 598)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 599))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 596)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 600)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 600))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 600)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 601)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 601)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 601)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 602)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 602)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 602)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 602)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 603))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 601)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 604)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixUnsignedDivide:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixUnsignedDivide * extractPtr_21881 = (const cEnumAssociatedValues_infixOperatorIR_infixUnsignedDivide *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_21881->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("if (0 == ").add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 606)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 606)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 607)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 607)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 608)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 608)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 608)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 608)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 609)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 609)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 609))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 607)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 610)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 611)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 612)) ;
    }
    break ;
  case GALGAS_infixOperatorIR::kEnum_infixModulo:
    {
      const cEnumAssociatedValues_infixOperatorIR_infixModulo * extractPtr_22376 = (const cEnumAssociatedValues_infixOperatorIR_infixModulo *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_22376->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("if (0 == ").add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 614)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 616)).reader_lastPathComponent (SOURCE_FILE ("expression-infix-operators.galgas", 616)).reader_utf_38_Representation (SOURCE_FILE ("expression-infix-operators.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 616)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 616)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 617)).reader_string (SOURCE_FILE ("expression-infix-operators.galgas", 617)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 617)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 617))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 615)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 618)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 619)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)).add_operation (GALGAS_string (" % "), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)).add_operation (categoryReader_mangledName (object->mAttribute_mRighOperand, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620))  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 620)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorInfixExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_operatorInfixExpressionIR.mSlotID,
                                       categoryReader_operatorInfixExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorInfixExpressionIR_instructionCode (defineCategoryReader_operatorInfixExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@operatorInfixExpressionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorInfixExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorInfixExpressionIR * object = (const cPtr_operatorInfixExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorInfixExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mLeftOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 627)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mRighOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 628)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorInfixExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_operatorInfixExpressionIR.mSlotID,
                                               categoryMethod_operatorInfixExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorInfixExpressionIR_enterAccessibleEntities (defineCategoryMethod_operatorInfixExpressionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inConstantName,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  callCategoryMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 90)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                            categoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@prefixOperatorExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_variableKindIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_result, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)) ;
  GALGAS_prefixOperatorMap var_operatorMap ;
  GALGAS_prefixOperatorIR var_prefixOperatorIR ;
  switch (object->mAttribute_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnsignedComplementOperatorMap ;
      var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("~")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mNotOperatorMap ;
      var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("!")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 153)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mUnaryMinusOperatorMap ;
      const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)) COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 156)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 158))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
      }
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefix (GALGAS_string ("-")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 161)) ;
      }else if (kBoolFalse == test_1) {
        var_prefixOperatorIR = GALGAS_prefixOperatorIR::constructor_prefixMinusOvf (GALGAS_uint ((uint32_t) 3U)  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 163)) ;
      }
    }
    break ;
  }
  categoryMethod_checkWith (var_operatorMap, var_expressionType, object->mAttribute_mOperatorLocation, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 166)) ;
  const enumGalgasBool test_2 = var_result.reader_isLiteralSignedInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 172)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_sint_36__34_ var_value ;
    var_result.method_literalSignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 173)) ;
    GALGAS_sint_36__34_ var_result ;
    switch (object->mAttribute_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result = var_value.operator_unary_minus_no_ovf () ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 177)) ;
        var_result.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result = var_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 178)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result = GALGAS_sint_36__34_ ((int64_t) 1LL).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 179)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_variableKindIR::constructor_literalSignedInteger (var_result  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 181)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_3 = var_result.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_uint_36__34_ var_value ;
      var_result.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 183)) ;
      switch (object->mAttribute_mOp.enumValue ()) {
      case GALGAS_prefixOperator::kNotBuilt:
        break ;
      case GALGAS_prefixOperator::kEnum_minusNoOvf:
      case GALGAS_prefixOperator::kEnum_minus:
        {
          GALGAS_sint_36__34_ var_signedValue = var_value.reader_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 186)) ;
          outArgument_outResult = GALGAS_variableKindIR::constructor_literalSignedInteger (var_signedValue.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 187))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 187)) ;
        }
        break ;
      case GALGAS_prefixOperator::kEnum_notOperator:
        {
          outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (GALGAS_uint_36__34_ ((uint64_t) 1ULL).operator_xor (var_value COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 189)) ;
        }
        break ;
      case GALGAS_prefixOperator::kEnum_unsignedComplement:
        {
          outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_value.operator_tilde (SOURCE_FILE ("expression-prefix-operators.galgas", 191))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 191)) ;
        }
        break ;
      }
    }else if (kBoolFalse == test_3) {
      {
      routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 195)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_prefixOperatorExpressionIR::constructor_new (outArgument_outExpressionType, outArgument_outResult, var_result, var_prefixOperatorIR, object->mAttribute_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 197))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 197)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                         categoryMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineCategoryMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@prefixOperatorExpressionIR instructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_prefixOperatorExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_prefixOperatorExpressionIR * object = (const cPtr_prefixOperatorExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_prefixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefix:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefix * extractPtr_9052 = (const cEnumAssociatedValues_prefixOperatorIR_prefix *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_prefixOperator = extractPtr_9052->mAssociatedValue0 ;
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 233)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 233)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 233)) ;
      result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (extractedValue_prefixOperator, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 234)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 234)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 234))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 234)) ;
    }
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefixMinusOvf:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf * extractPtr_10020 = (const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_10020->mAssociatedValue0 ;
      GALGAS_sint_36__34_ var_minValue ;
      switch (object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 237)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_boolset:
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 239)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 241)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 243)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_9472 = (const cEnumAssociatedValues_typeKind_integer *) (object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 237)).unsafePointer ()) ;
          const GALGAS_sint_36__34_ extractedValue_min = extractPtr_9472->mAssociatedValue0 ;
          var_minValue = extractedValue_min ;
        }
        break ;
      }
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (object->mAttribute_mOperatorLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 247)).reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 247)) ;
      result_outCode = GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)).add_operation (var_minValue.reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 248)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 249)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 249))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 249)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 251)).reader_lastPathComponent (SOURCE_FILE ("expression-prefix-operators.galgas", 251)).reader_utf_38_Representation (SOURCE_FILE ("expression-prefix-operators.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 251)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 252)).reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 252)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 252))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 250)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 253)) ;
      result_outCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)).add_operation (GALGAS_string (" = - "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 255)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 255))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 254)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_prefixOperatorExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                       categoryReader_prefixOperatorExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_prefixOperatorExpressionIR_instructionCode (defineCategoryReader_prefixOperatorExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@prefixOperatorExpressionIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionIR * object = (const cPtr_prefixOperatorExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 262)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                               categoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionIR_enterAccessibleEntities (defineCategoryMethod_prefixOperatorExpressionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalIntegerInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                                            categoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalIntegerInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalIntegerInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntegerInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                            GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                            GALGAS_variableKindIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-literal-integer.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 50)) ;
    outArgument_outExpressionType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 52)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_3065 = (const cEnumAssociatedValues_typeKind_integer *) (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 52)).unsafePointer ()) ;
        const GALGAS_uint_36__34_ extractedValue_max = extractPtr_3065->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_.objectCompare (extractedValue_max)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("literal integer is > ").add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)).add_operation (GALGAS_string (" max value ("), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)).add_operation (extractedValue_max.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 55)) ;
          outArgument_outExpressionType.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outExpressionType = constinArgument_inOptionalTargetType ;
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_4 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 61)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a structure cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_6 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a boolean cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 65)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_7 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a boolset cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 67)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_8 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a literal string cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 69)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    }
  }
  outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (object->mAttribute_mLiteralInteger.mAttribute_uint_36__34_  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 73)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntegerInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalIntegerInExpressionAST.mSlotID,
                                         categoryMethod_literalIntegerInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntegerInExpressionAST_analyzeExpression (defineCategoryMethod_literalIntegerInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@literalStringInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                              const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                              GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                                            categoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalStringInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalStringInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                           const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                           GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                           GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                           GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_string var_literalStringName ;
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 50)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 53)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 53)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)) ;
    }
  }
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 57)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 57)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string, var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalStringInExpressionAST.mSlotID,
                                         categoryMethod_literalStringInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringInExpressionAST_analyzeExpression (defineCategoryMethod_literalStringInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@literalBooleanInExpressionAST addDependenceEdgeForStaticExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                               const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                                            categoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_literalBooleanInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@literalBooleanInExpressionAST analyzeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBooleanInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                            const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                            const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                            GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                            GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBooleanInExpressionAST * object = (const cPtr_literalBooleanInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalBooleanInExpressionAST) ;
  outArgument_outExpressionType = constinArgument_inContext.mAttribute_mBooleanType ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (object->mAttribute_mValue  COMMA_SOURCE_FILE ("expression-true-false.galgas", 57)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBooleanInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_literalBooleanInExpressionAST.mSlotID,
                                         categoryMethod_literalBooleanInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBooleanInExpressionAST_analyzeExpression (defineCategoryMethod_literalBooleanInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@varInExpressionAST addDependenceEdgeForStaticExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mSourceVarName COMMA_SOURCE_FILE ("expression-var.galgas", 38)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                            categoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_varInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@varInExpressionAST analyzeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                 GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_variableType ;
  GALGAS_stringset var_varModeSet ;
  GALGAS_string var_varAccess ;
  GALGAS_variableKindIR var_resultingVariable ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_2973 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_variableType, var_varModeSet, var_varAccess, var_resultingVariable, joker_2973, var_registerBitSliceMap, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 59)) ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_varModeSet, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 69)) ;
  }
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 75)) ;
  cEnumerator_lstringlist enumerator_3383 (object->mAttribute_mFieldNameList, kEnumeration_up) ;
  while (enumerator_3383.hasCurrentObject ()) {
    GALGAS_infixOperatorIR var_accessOperator ;
    GALGAS_variableKindIR var_accessRightOperand ;
    GALGAS_registerBitSliceAccessMap var_submap ;
    GALGAS_unifiedTypeMap_2D_proxy var_newResultType ;
    var_registerBitSliceMap.method_searchKey (enumerator_3383.current_mValue (HERE), var_accessOperator, var_accessRightOperand, var_submap, var_newResultType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 82)) ;
    GALGAS_variableKindIR var_newResultingVariable ;
    {
    routine_getNewTempVariable (ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 90)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorInfixExpressionIR::constructor_new (var_newResultType, var_newResultingVariable, var_resultingVariable, var_accessOperator, var_accessRightOperand, object->mAttribute_mSourceVarName.mAttribute_location  COMMA_SOURCE_FILE ("expression-var.galgas", 91))  COMMA_SOURCE_FILE ("expression-var.galgas", 91)) ;
    var_resultingVariable = var_newResultingVariable ;
    var_registerBitSliceMap = var_submap ;
    outArgument_outExpressionType = var_newResultType ;
    enumerator_3383.gotoNextObject () ;
  }
  outArgument_outResultValueName = var_resultingVariable ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                         categoryMethod_varInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeExpression (defineCategoryMethod_varInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionCallInExpressionAST addDependenceEdgeForStaticExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * /* inObject */,
                                                                                             const GALGAS_lstring /* constinArgument_inConstantName */,
                                                                                             GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                                            categoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_functionCallInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@functionCallInExpressionAST analyzeExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                          const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                          GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallInExpressionAST * object = (const cPtr_functionCallInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallInExpressionAST) ;
  GALGAS_modeMap var_functionModeSet ;
  GALGAS_funcSignature var_formalParameterList ;
  constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionVarName, var_functionModeSet, var_formalParameterList, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 66)) ;
  {
  routine_checkMode (constinArgument_inModeSet, var_functionModeSet.reader_keySet (SOURCE_FILE ("expression-func-call.galgas", 75)), object->mAttribute_mFunctionVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 73)) ;
  }
  GALGAS_variableListIR var_variableList = GALGAS_variableListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 79)) ;
  GALGAS_string var_s = function_mangledNameForFunction (object->mAttribute_mFunctionVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 80)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 81)).objectCompare (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 81)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this function declares ").add_operation (var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 82)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 82)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 82)).add_operation (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 83)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 83)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 83))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 82)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_funcSignature enumerator_3758 (var_formalParameterList, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_3784 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_3758.hasCurrentObject () && enumerator_3784.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_3784.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_3758.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_3758.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_s.dotAssign_operation (enumerator_3758.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 90))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 90)) ;
        }
        GALGAS_location location_4 (enumerator_3784.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 92))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 92)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_argumentExpressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_3784.current (HERE).mAttribute_mExpression.ptr (), GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("expression-func-call.galgas", 95)), enumerator_3758.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_argumentExpressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 94)) ;
      var_variableList.addAssign_operation (var_resultValueName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 107)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108)).objectCompare (enumerator_3758.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 108)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (enumerator_3784.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the actual parameter has the ").add_operation (var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)).add_operation (GALGAS_string (", but the formal argument has the "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)).add_operation (enumerator_3758.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 110)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 110))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 109)) ;
      }
      if (enumerator_3758.hasNextObject () && enumerator_3784.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 113)) ;
      }
      enumerator_3758.gotoNextObject () ;
      enumerator_3784.gotoNextObject () ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 116)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 118)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outExpressionType, object->mAttribute_mFunctionVarName.mAttribute_string, outArgument_outResultValueName, var_variableList  COMMA_SOURCE_FILE ("expression-func-call.galgas", 120))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_functionCallInExpressionAST.mSlotID,
                                         categoryMethod_functionCallInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallInExpressionAST_analyzeExpression (defineCategoryMethod_functionCallInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@functionCallIR instructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_functionCallIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 140)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 141))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 141)) ;
  result_outCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 142))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 142)) ;
  cEnumerator_variableListIR enumerator_5902 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_5902.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_5902.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 144))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 144)) ;
    if (enumerator_5902.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 145)) ;
    }
    enumerator_5902.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 147)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionCallIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                       categoryReader_functionCallIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionCallIR_instructionCode (defineCategoryReader_functionCallIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionCallIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTempConstantTarget, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)) ;
  cEnumerator_variableListIR enumerator_6379 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6379.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_6379.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)) ;
    enumerator_6379.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                               categoryMethod_functionCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_enterAccessibleEntities (defineCategoryMethod_functionCallIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@registerConstantInExpressionAST addDependenceEdgeForStaticExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inConstantName,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterName COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 53)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                                            categoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_registerConstantInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@registerIntegerExpInExpressionAST addDependenceEdgeForStaticExpression'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inConstantName,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inConstantName, object->mAttribute_mRegisterName COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 62)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterCategoryMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                                            categoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression (defineCategoryMethod_registerIntegerExpInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@registerConstantInExpressionAST analyzeExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerConstantInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                              const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_stringset /* constinArgument_inModeSet */,
                                                                              const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                                              GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                              GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                              GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                              GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantInExpressionAST * object = (const cPtr_registerConstantInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantInExpressionAST) ;
  GALGAS_bool var_readOnly ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_registerFieldMap var_registerFieldMap ;
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, outArgument_outExpressionType, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 83)) ;
  GALGAS_uint var_bitIndex ;
  GALGAS_uint var_bitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_bitIndex, var_bitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 91)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerConstantInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerConstantInExpressionAST.mSlotID,
                                         categoryMethod_registerConstantInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerConstantInExpressionAST_analyzeExpression (defineCategoryMethod_registerConstantInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@registerIntegerExpInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerExpInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                const GALGAS_receiverType constinArgument_inReceiverType,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                                const GALGAS_semanticContext constinArgument_inContext,
                                                                                const GALGAS_stringset constinArgument_inModeSet,
                                                                                const GALGAS_bool constinArgument_inAllowExceptions,
                                                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                GALGAS_unifiedTypeMap_2D_proxy & outArgument_outExpressionType,
                                                                                GALGAS_variableKindIR & outArgument_outResultValueName,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerExpInExpressionAST * object = (const cPtr_registerIntegerExpInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerExpInExpressionAST) ;
  GALGAS_bool var_readOnly ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  GALGAS_registerFieldMap var_registerFieldMap ;
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, outArgument_outExpressionType, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 116)) ;
  GALGAS_uint var_fieldBitIndex ;
  GALGAS_uint var_fieldBitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_fieldBitIndex, var_fieldBitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 124)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_fieldBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFieldName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this field is not an integer field")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 131)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 134)) ;
  switch (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 148)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 152)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 154)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 156)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8108 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 148)).unsafePointer ()) ;
      const GALGAS_sint_36__34_ extractedValue_min = extractPtr_8108->mAssociatedValue0 ;
      const GALGAS_uint_36__34_ extractedValue_max = extractPtr_8108->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8108->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8108->mAssociatedValue3 ;
      const enumGalgasBool test_2 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 158)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
        outArgument_outResultValueName.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = var_expressionResult.reader_isLiteralSignedInteger (SOURCE_FILE ("expression-cst-registre.galgas", 160)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
          outArgument_outResultValueName.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = var_expressionResult.reader_isLiteralString (SOURCE_FILE ("expression-cst-registre.galgas", 162)).boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)) ;
            outArgument_outResultValueName.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_expressionResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-cst-registre.galgas", 164)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_uint_36__34_ var_value ;
              var_expressionResult.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
              }else if (kBoolFalse == test_6) {
                inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("static unsigned integer expression overflow: maximum value is ").add_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)) ;
                outArgument_outResultValueName.drop () ; // Release error dropped variable
              }
            }else if (kBoolFalse == test_5) {
              GALGAS_bool var_assertGenerated = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount)) ;
              GALGAS_bool test_7 = var_assertGenerated ;
              if (kBoolTrue == test_7.boolEnum ()) {
                test_7 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 175)) ;
              }
              const enumGalgasBool test_8 = test_7.boolEnum () ;
              if (kBoolTrue == test_8) {
                inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 176)) ;
              }
              {
              routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_registerIntegerConstantInExpressionIR::constructor_new (object->mAttribute_mExpressionLocation, var_expressionResult, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)), var_fieldBitIndex, outArgument_outResultValueName, outArgument_outExpressionType, var_assertGenerated.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 187))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)) ;
            }
          }
        }
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerExpInExpressionAST_analyzeExpression (void) {
  enterCategoryMethod_analyzeExpression (kTypeDescriptor_GALGAS_registerIntegerExpInExpressionAST.mSlotID,
                                         categoryMethod_registerIntegerExpInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerExpInExpressionAST_analyzeExpression (defineCategoryMethod_registerIntegerExpInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@registerIntegerConstantInExpressionIR instructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_registerIntegerConstantInExpressionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  const enumGalgasBool test_0 = object->mAttribute_mNoCheck.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (GALGAS_string (" = (("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 211)).add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 212)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 213)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)) ;
    }else if (kBoolFalse == test_1) {
      result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (4, ").add_operation (object->mAttribute_mInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).reader_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 220)).reader_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).add_operation (object->mAttribute_mInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)) ;
    }
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_registerIntegerConstantInExpressionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                       categoryReader_registerIntegerConstantInExpressionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_registerIntegerConstantInExpressionIR_instructionCode (defineCategoryReader_registerIntegerConstantInExpressionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@registerIntegerConstantInExpressionIR enterAccessibleEntities'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mExpressionValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 233)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                               categoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities (defineCategoryMethod_registerIntegerConstantInExpressionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@checkInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_checkInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 48)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 51)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 49)) ;
  const enumGalgasBool test_0 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 63)).reader_isBoolean (SOURCE_FILE ("directive-check.galgas", 63)).operator_not (SOURCE_FILE ("directive-check.galgas", 63)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("directive-check.galgas", 64)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 67)).operator_not (SOURCE_FILE ("directive-check.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction")  COMMA_SOURCE_FILE ("directive-check.galgas", 68)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_uint_36__34_ var_value ;
    var_expressionValueName.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 70)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_value.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false")  COMMA_SOURCE_FILE ("directive-check.galgas", 72)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_checkInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                               categoryMethod_checkInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_checkInstructionAST_analyze (defineCategoryMethod_checkInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@incDecInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                         const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                         GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_stringset var_varModeSet ;
  GALGAS_string var_variableCName ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_3692_2 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3692_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_varModeSet, var_variableCName, var_variable, joker_3692_2, joker_3692_1, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 89)) ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_varModeSet, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 104)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 105)).add_operation (GALGAS_string (" type does not handle incrementation/decrementation operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 105))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 105)) ;
  }
  GALGAS_sint_36__34_ var_min ;
  GALGAS_uint_36__34_ var_max ;
  switch (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_2 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 111)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 113)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_4 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4373 = (const cEnumAssociatedValues_typeKind_integer *) (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 109)).unsafePointer ()) ;
      const GALGAS_sint_36__34_ extractedValue_kMin = extractPtr_4373->mAssociatedValue0 ;
      const GALGAS_uint_36__34_ extractedValue_kMax = extractPtr_4373->mAssociatedValue1 ;
      var_min = extractedValue_kMin ;
      var_max = extractedValue_kMax ;
    }
    break ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
    }
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      const enumGalgasBool test_5 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 125)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 125))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 125)) ;
      }
    }
    break ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_incDecInstructionIR::constructor_new (var_min, var_max, object->mAttribute_mKind, var_variable, object->mAttribute_mVarName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                               categoryMethod_incDecInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionAST_analyze (defineCategoryMethod_incDecInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@incDecInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_incDecInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 156)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)).add_operation (object->mAttribute_mMax.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (1, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 159)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 159)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 158)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 159)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 159)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 158)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 161)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 163)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 163))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 163)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).add_operation (object->mAttribute_mMin.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (2, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 169)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 169)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 169)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 171)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 173)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 175)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 175)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 177)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_incDecInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                       categoryReader_incDecInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_incDecInstructionIR_instructionCode (defineCategoryReader_incDecInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@incDecInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                               categoryMethod_incDecInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionIR_enterAccessibleEntities (defineCategoryMethod_incDecInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@varInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModes,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 78)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 82)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 96)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionType ;
  }
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_targetType, constinArgument_inModes, function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 110)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 112)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 106)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationInstructionWithSimpleAssignmentIR::constructor_new (var_targetType, var_targetVar, var_expressionResultValueName  COMMA_SOURCE_FILE ("instruction-var.galgas", 116))  COMMA_SOURCE_FILE ("instruction-var.galgas", 116)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_varInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_analyze (defineCategoryMethod_varInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@varInstructionAST analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                      const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                      const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_stringset constinArgument_inModes,
                                                      const GALGAS_bool /* constinArgument_inAllowExceptions */,
                                                      GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                      GALGAS_globalLiteralStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, constinArgument_inModes, function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationIR::constructor_new (var_targetType, var_targetVar  COMMA_SOURCE_FILE ("instruction-var.galgas", 149))  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_varInstructionAST.mSlotID,
                               categoryMethod_varInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInstructionAST_analyze (defineCategoryMethod_varInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@varDeclarationInstructionWithSimpleAssignmentIR instructionCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 170)) ;
  result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171))  COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                       categoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode (defineCategoryReader_varDeclarationInstructionWithSimpleAssignmentIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@varDeclarationInstructionWithSimpleAssignmentIR enterAccessibleEntities'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                               categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@varDeclarationIR instructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_varDeclarationIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 195)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_varDeclarationIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                       categoryReader_varDeclarationIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_varDeclarationIR_instructionCode (defineCategoryReader_varDeclarationIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@varDeclarationIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 201)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                               categoryMethod_varDeclarationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationIR_enterAccessibleEntities (defineCategoryMethod_varDeclarationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@letInstructionWithAssignmentAST analyze'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentAST_analyze (const cPtr_instructionAST * inObject,
                                                                    const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                    const GALGAS_receiverType constinArgument_inReceiverType,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_stringset constinArgument_inModeSet,
                                                                    const GALGAS_bool constinArgument_inAllowExceptions,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 78)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_variableKindIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 82)) ;
  GALGAS_variableKindIR var_targetConstant = GALGAS_variableKindIR::constructor_localConstant (object->mAttribute_mVarName.mAttribute_string  COMMA_SOURCE_FILE ("instruction-let.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVarName, var_inferredType, constinArgument_inModeSet, function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)), var_targetConstant, var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 97)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_letInstructionWithAssignmentIR::constructor_new (var_inferredType, var_targetConstant, var_resultValueName  COMMA_SOURCE_FILE ("instruction-let.galgas", 107))  COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                               categoryMethod_letInstructionWithAssignmentAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_analyze (defineCategoryMethod_letInstructionWithAssignmentAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@letInstructionWithAssignmentIR instructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_letInstructionWithAssignmentIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetConstantIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_letInstructionWithAssignmentIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                       categoryReader_letInstructionWithAssignmentIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_letInstructionWithAssignmentIR_instructionCode (defineCategoryReader_letInstructionWithAssignmentIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@letInstructionWithAssignmentIR enterAccessibleEntities'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                   GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetConstantIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 136)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 137)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                               categoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentIR_enterAccessibleEntities (defineCategoryMethod_letInstructionWithAssignmentIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentInstructionAST analyze'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                             const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                             const GALGAS_receiverType constinArgument_inReceiverType,
                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                             const GALGAS_stringset constinArgument_inModeSet,
                                                             const GALGAS_bool constinArgument_inAllowExceptions,
                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                             GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_stringset joker_2390_5 ; // Joker input parameter
  GALGAS_string joker_2390_4 ; // Joker input parameter
  GALGAS_variableKindIR joker_2390_3 ; // Joker input parameter
  GALGAS_bool joker_2390_2 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2390_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2390_5, joker_2390_4, joker_2390_3, joker_2390_2, joker_2390_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 48)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 54)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  }
  GALGAS_stringset var_varModeSet ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3428 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3529 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_3428, var_varModeSet, var_targetVar, var_targetVariableKind, var_isCopiable, joker_3529, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 81)) ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_varModeSet, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
  }
  const enumGalgasBool test_0 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 96)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-assignment.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assignmentInstructionIR::constructor_new (var_targetVariableKind, var_targetType, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 100))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                               categoryMethod_assignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyze (defineCategoryMethod_assignmentInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@assignmentInstructionIR instructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_assignmentInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_assignmentInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                       categoryReader_assignmentInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_assignmentInstructionIR_instructionCode (defineCategoryReader_assignmentInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@assignmentInstructionIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 126)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 127)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                               categoryMethod_assignmentInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionIR_enterAccessibleEntities (defineCategoryMethod_assignmentInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@assertInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                         const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                         const GALGAS_receiverType constinArgument_inReceiverType,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowExceptions,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 51)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 54)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 52)) ;
  const enumGalgasBool test_1 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 66)).reader_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 66)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 66)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 67)) ;
  }
  const enumGalgasBool test_2 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 70)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 71)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValueName  COMMA_SOURCE_FILE ("instruction-assert.galgas", 75))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 75)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                               categoryMethod_assertInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionAST_analyze (defineCategoryMethod_assertInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@assertInstructionIR instructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_assertInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  result_outCode = categoryReader_instructionListCode (object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 96)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("if (!").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 97)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 97))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 97)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (20").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)).reader_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 99)).reader_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).reader_string (SOURCE_FILE ("instruction-assert.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_assertInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                       categoryReader_assertInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_assertInstructionIR_instructionCode (defineCategoryReader_assertInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@assertInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mExpressionValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                               categoryMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineCategoryMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@throwInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)) COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-throw.galgas", 49)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inReceiverType, constinArgument_inContext.mAttribute_mExceptionCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_unusedInstructionListIR, var_expressionType, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 64)).objectCompare (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 64)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression type is ").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)).add_operation (GALGAS_string (", required type is "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)).add_operation (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 66))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.reader_length (SOURCE_FILE ("instruction-throw.galgas", 69)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = categoryReader_isStatic (var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 69)).operator_not (SOURCE_FILE ("instruction-throw.galgas", 69)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression cannot be statically computed")  COMMA_SOURCE_FILE ("instruction-throw.galgas", 70)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-throw.galgas", 73)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_result  COMMA_SOURCE_FILE ("instruction-throw.galgas", 74))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 74)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_throwInstructionAST.mSlotID,
                               categoryMethod_throwInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionAST_analyze (defineCategoryMethod_throwInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@throwInstructionIR instructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_throwInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  result_outCode = GALGAS_string ("raise_exception (").add_operation (categoryReader_mangledName (object->mAttribute_mCode, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 93)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 93)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).reader_lastPathComponent (SOURCE_FILE ("instruction-throw.galgas", 94)).reader_utf_38_Representation (SOURCE_FILE ("instruction-throw.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).reader_string (SOURCE_FILE ("instruction-throw.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_throwInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                       categoryReader_throwInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_throwInstructionIR_instructionCode (defineCategoryReader_throwInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@throwInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                               categoryMethod_throwInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_enterAccessibleEntities (defineCategoryMethod_throwInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@operatorAssignInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                 const GALGAS_receiverType constinArgument_inReceiverType,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_stringset constinArgument_inModeSet,
                                                                 const GALGAS_bool constinArgument_inAllowExceptions,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_stringset joker_2898_5 ; // Joker input parameter
  GALGAS_string joker_2898_4 ; // Joker input parameter
  GALGAS_variableKindIR joker_2898_3 ; // Joker input parameter
  GALGAS_bool joker_2898_2 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2898_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2898_5, joker_2898_4, joker_2898_3, joker_2898_2, joker_2898_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 68)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 88)).objectCompare (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 88)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)) ;
  }
  GALGAS_stringset var_targetVarModeSet ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3732 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3839 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3732, var_targetVarModeSet, var_targetVar, var_targetVariableKind, var_isCopiable, joker_3839, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 93)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap ;
  GALGAS_string var_generatedOperator ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mAndOperatorMap ;
      var_generatedOperator = GALGAS_string ("&=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mOrOperatorMap ;
      var_generatedOperator = GALGAS_string ("|=") ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap = constinArgument_inContext.mAttribute_mXorOperatorMap ;
      var_generatedOperator = GALGAS_string ("^=") ;
    }
    break ;
  }
  GALGAS_unifiedTypeMap_2D_proxy joker_4414 ; // Joker input parameter
  categoryMethod_checkWith (var_operatorMap, var_targetType, var_rightExpressionType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4414, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 116)) ;
  {
  routine_checkMode (constinArgument_inModeSet, var_targetVarModeSet, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 123)) ;
  }
  const enumGalgasBool test_2 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 128)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-operator-assign.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 129)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorAssignInstructionIR::constructor_new (var_targetVariableKind, var_targetType, object->mAttribute_mOperator, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 132))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 132)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_operatorAssignInstructionAST.mSlotID,
                               categoryMethod_operatorAssignInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionAST_analyze (defineCategoryMethod_operatorAssignInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@operatorAssignInstructionIR instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_operatorAssignInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 160)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 160)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 160)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 160)) ;
    }
    break ;
  }
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_operatorAssignInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                       categoryReader_operatorAssignInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_operatorAssignInstructionIR_instructionCode (defineCategoryReader_operatorAssignInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@operatorAssignInstructionIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 168)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                               categoryMethod_operatorAssignInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionIR_enterAccessibleEntities (defineCategoryMethod_operatorAssignInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding category method '@ifInstructionAST analyze'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                     const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                     const GALGAS_receiverType constinArgument_inReceiverType,
                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                     const GALGAS_stringset constinArgument_inModeSet,
                                                     const GALGAS_bool constinArgument_inAllowExceptions,
                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                     GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 83)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testExpressionType, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 81)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 95)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 96))  COMMA_SOURCE_FILE ("instruction-if.galgas", 96)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 98)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 99)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 101)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 103)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 104)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 117)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 118)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 132))  COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                               categoryMethod_ifInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionAST_analyze (defineCategoryMethod_ifInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@ifInstructionIR instructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_ifInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 152)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mThenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 153))  COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionGenerationList.reader_length (SOURCE_FILE ("instruction-if.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 155)) ;
    result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mElseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 156))  COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 158)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ifInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                       categoryReader_ifInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ifInstructionIR_instructionCode (defineCategoryReader_ifInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@ifInstructionIR enterAccessibleEntities'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                               categoryMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineCategoryMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@procCallInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                           const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                           const GALGAS_receiverType constinArgument_inReceiverType,
                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                           const GALGAS_stringset constinArgument_inModeSet,
                                                           const GALGAS_bool constinArgument_inAllowExceptions,
                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                           GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_string var_procMangledName = object->mAttribute_mProcRoutineName.mAttribute_string ;
  cEnumerator_procEffectiveParameterListAST enumerator_4012 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4012.hasCurrentObject ()) {
    var_procMangledName.dotAssign_operation (GALGAS_string (" ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)) ;
    switch (enumerator_4012.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 104)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_4012.current_mSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
    enumerator_4012.gotoNextObject () ;
  }
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_4432 ; // Joker input parameter
  GALGAS_bool joker_4508 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 110)), joker_4432, var_procedureModeMap, var_procSignature, joker_4508, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 109)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)), object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 119)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 117)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 123)) ;
  cEnumerator_procedureSignature enumerator_4884 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_4915 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4884.hasCurrentObject () && enumerator_4915.hasCurrentObject ()) {
    switch (enumerator_4915.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5591 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4915.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5591->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_varModeSet ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        {
        GALGAS_registerBitSliceAccessMap joker_5185 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_varModeSet, var_variableAccess, var_parameterAccess, var_isCopiable, joker_5185, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
        }
        {
        routine_checkMode (constinArgument_inModeSet, var_varModeSet, extractedValue_name.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 137)) ;
        }
        const enumGalgasBool test_0 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (extractedValue_name.reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4915.current_mEffectiveParameterKind (HERE), enumerator_4915.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 146)), enumerator_4915.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_6465 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4915.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6465->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_6465->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
        GALGAS_variableKindIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inReceiverType, enumerator_4884.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
        {
        routine_checkAssignmentCompatibility (var_expressionType, enumerator_4884.current_mType (HERE), extractedValue_endOfExp, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 161)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4915.current_mEffectiveParameterKind (HERE), enumerator_4915.current_mSelector (HERE), enumerator_4884.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 166)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 167)), enumerator_4915.current_mSelector (HERE), enumerator_4884.current_mType (HERE), var_expressionResult  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_6989 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4915.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6989->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_stringset var_varModeSet ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        {
        GALGAS_bool joker_6682_2 ; // Joker input parameter
        GALGAS_registerBitSliceAccessMap joker_6682_1 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_varModeSet, var_variableAccess, var_parameterAccess, joker_6682_2, joker_6682_1, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 169)) ;
        }
        {
        routine_checkMode (constinArgument_inModeSet, var_varModeSet, extractedValue_name.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 178)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4915.current_mEffectiveParameterKind (HERE), enumerator_4915.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 183)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 184)), enumerator_4915.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 184)) ;
      }
      break ;
    }
    enumerator_4884.gotoNextObject () ;
    enumerator_4915.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.reader_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 190)), object->mAttribute_mProcRoutineName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 188)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 193)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 193)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 194)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 195))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 194)) ;
  }else if (kBoolFalse == test_2) {
    cEnumerator_procedureSignature enumerator_7408 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7437 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7408.hasCurrentObject () && enumerator_7437.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_7408.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 198)).objectCompare (enumerator_7437.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_location location_5 (enumerator_7437.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7437.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)).add_operation (enumerator_7408.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 199)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_7408.current_mFormalArgumentPassingMode (HERE), enumerator_7408.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_7437.current_mEffectiveParameterPassingMode (HERE), enumerator_7437.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 203)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_7437.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)) ;
      }
      enumerator_7408.gotoNextObject () ;
      enumerator_7437.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 210))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 210)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                               categoryMethod_procCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyze (defineCategoryMethod_procCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@procCallInstructionIR instructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_procCallInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  result_outCode = function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 245)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9581 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_9581.hasCurrentObject ()) {
    switch (enumerator_9581.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9581.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 249)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_9581.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9581.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253)) ;
      }
      break ;
    }
    if (enumerator_9581.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 256)) ;
    }
    enumerator_9581.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_procCallInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                       categoryReader_procCallInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_procCallInstructionIR_instructionCode (defineCategoryReader_procCallInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@procCallInstructionIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 264)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_10206 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_10206.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_10206.current_mParameter (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266)) ;
    enumerator_10206.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                               categoryMethod_procCallInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_enterAccessibleEntities (defineCategoryMethod_procCallInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@whileInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                        const GALGAS_receiverType constinArgument_inReceiverType,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_stringset constinArgument_inModeSet,
                                                        const GALGAS_bool constinArgument_inAllowExceptions,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 56)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 59)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testExpressionType, var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 57)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 71)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72))  COMMA_SOURCE_FILE ("instruction-while.galgas", 72)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 75)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 78)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 79)) ;
  }
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 80)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 95)), var_testInstructionGenerationList, var_testValueName, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 94))  COMMA_SOURCE_FILE ("instruction-while.galgas", 94)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                               categoryMethod_whileInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionAST_analyze (defineCategoryMethod_whileInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category reader '@whileInstructionIR instructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_whileInstructionIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  result_outCode = GALGAS_string ("LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 116)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 116)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mTestInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117))  COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 118))  COMMA_SOURCE_FILE ("instruction-while.galgas", 118)) ;
  {
  result_outCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
  }
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 120))  COMMA_SOURCE_FILE ("instruction-while.galgas", 120)) ;
  {
  result_outCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 121)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("    goto LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122))  COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 123)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_whileInstructionIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                       categoryReader_whileInstructionIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_whileInstructionIR_instructionCode (defineCategoryReader_whileInstructionIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@whileInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 130)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestExpression, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 131)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 132)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                               categoryMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineCategoryMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@foreverInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
                                                          const GALGAS_receiverType constinArgument_inReceiverType,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_stringset constinArgument_inModeSet,
                                                          const GALGAS_bool constinArgument_inAllowExceptions,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_globalLiteralStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionAST * object = (const cPtr_foreverInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionAST) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 49)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-forever.galgas", 50)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 51)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 63)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_foreverInstructionGeneration::constructor_new (var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-forever.galgas", 65))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 65)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionAST_analyze (void) {
  enterCategoryMethod_analyze (kTypeDescriptor_GALGAS_foreverInstructionAST.mSlotID,
                               categoryMethod_foreverInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionAST_analyze (defineCategoryMethod_foreverInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@foreverInstructionGeneration instructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_foreverInstructionGeneration_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  result_outCode = GALGAS_string ("while (1) {\n") ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 82))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 82)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-forever.galgas", 83)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_foreverInstructionGeneration_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                       categoryReader_foreverInstructionGeneration_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_foreverInstructionGeneration_instructionCode (defineCategoryReader_foreverInstructionGeneration_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@foreverInstructionGeneration enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionGeneration_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 89)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                               categoryMethod_foreverInstructionGeneration_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionGeneration_enterAccessibleEntities (defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities, NULL) ;

