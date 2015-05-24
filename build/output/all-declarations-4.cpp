#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-4.h"


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
  cEnumerator_variableListIR enumerator_5890 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_5890.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_5890.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 144))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 144)) ;
    if (enumerator_5890.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 145)) ;
    }
    enumerator_5890.gotoNextObject () ;
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
  cEnumerator_variableListIR enumerator_6367 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6367.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_6367.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)) ;
    enumerator_6367.gotoNextObject () ;
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
                                                                              GALGAS_uint & /* ioArgument_ioTemporaryIndex */,
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
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (outArgument_outExpressionType, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 97)) ;
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
                                                                                GALGAS_uint & ioArgument_ioTemporaryIndex,
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
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaryIndex, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 134)) ;
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
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8131 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 148)).unsafePointer ()) ;
      const GALGAS_sint_36__34_ extractedValue_min = extractPtr_8131->mAssociatedValue0 ;
      const GALGAS_uint_36__34_ extractedValue_max = extractPtr_8131->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8131->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8131->mAssociatedValue3 ;
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
              GALGAS_unifiedTypeMap_2D_proxy joker_7055 ; // Joker input parameter
              var_expressionResult.method_literalUnsignedInteger (joker_7055, var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 165)) ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (outArgument_outExpressionType, var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
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
              routine_getNewTempVariable (ioArgument_ioTemporaryIndex, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)) ;
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
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (1003").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (object->mAttribute_mInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).reader_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 220)).reader_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 220)).add_operation (object->mAttribute_mInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)) ;
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

