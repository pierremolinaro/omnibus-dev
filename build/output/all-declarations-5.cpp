#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@prefixOperatorExpressionIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefixOperatorExpressionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_string & ioArgument_ioCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionIR * object = (const cPtr_prefixOperatorExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_prefixOperatorIR::kNotBuilt:
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefix:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefix * extractPtr_8520 = (const cEnumAssociatedValues_prefixOperatorIR_prefix *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_string extractedValue_prefixOperator = extractPtr_8520->mAssociatedValue0 ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 203)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string (" = ").add_operation (extractedValue_prefixOperator, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 204)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 204)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 204)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 204))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 204)) ;
    }
    break ;
  case GALGAS_prefixOperatorIR::kEnum_prefixMinusOvf:
    {
      const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf * extractPtr_9483 = (const cEnumAssociatedValues_prefixOperatorIR_prefixMinusOvf *) (object->mAttribute_mOperator.unsafePointer ()) ;
      const GALGAS_uint extractedValue_code = extractPtr_9483->mAssociatedValue0 ;
      GALGAS_bigint var_minValue ;
      switch (object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 207)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
      case GALGAS_typeKind::kEnum_boolset:
      case GALGAS_typeKind::kEnum_literalString:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 209)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 211)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("Internal Error")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 213)) ;
          var_minValue.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          const cEnumAssociatedValues_typeKind_integer * extractPtr_8940 = (const cEnumAssociatedValues_typeKind_integer *) (object->mAttribute_mTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 207)).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_min = extractPtr_8940->mAssociatedValue0 ;
          var_minValue = extractedValue_min ;
        }
        break ;
      }
      GALGAS_string var_ovfVar = GALGAS_string ("ovf").add_operation (object->mAttribute_mOperatorLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 217)).reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 217)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)).add_operation (var_minValue.reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 218)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_ovfVar, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 219))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 219)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  raise_exception (").add_operation (extractedValue_code.reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 220)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 220)).add_operation (object->mAttribute_mOperatorLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 221)).reader_lastPathComponent (SOURCE_FILE ("expression-prefix-operators.galgas", 221)).reader_utf_38_Representation (SOURCE_FILE ("expression-prefix-operators.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 221)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 221)).add_operation (object->mAttribute_mOperatorLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 222)).reader_string (SOURCE_FILE ("expression-prefix-operators.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 222)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 222))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 220)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 223)) ;
      ioArgument_ioCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)).add_operation (GALGAS_string (" = - "), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)).add_operation (categoryReader_mangledName (object->mAttribute_mOperand, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 225)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 225))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 224)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefixOperatorExpressionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_prefixOperatorExpressionIR.mSlotID,
                                           categoryMethod_prefixOperatorExpressionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefixOperatorExpressionIR_llvmInstructionCode (defineCategoryMethod_prefixOperatorExpressionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mOperand, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 232)) ;
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
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-literal-integer.galgas", 50)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("Cannot infer type")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 51)) ;
    outArgument_outExpressionType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    switch (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        const cEnumAssociatedValues_typeKind_integer * extractPtr_3150 = (const cEnumAssociatedValues_typeKind_integer *) (constinArgument_inOptionalTargetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 53)).unsafePointer ()) ;
        const GALGAS_bigint extractedValue_max = extractPtr_3150->mAssociatedValue1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mLiteralInteger.mAttribute_bigint.objectCompare (extractedValue_max)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("literal integer is > ").add_operation (constinArgument_inOptionalTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)).add_operation (GALGAS_string (" max value ("), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)).add_operation (extractedValue_max.reader_string (SOURCE_FILE ("expression-literal-integer.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57))  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
          outArgument_outExpressionType.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          outArgument_outExpressionType = constinArgument_inOptionalTargetType ;
        }
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_4 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an enumeration cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 62)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        GALGAS_location location_5 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("a structure cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_6 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("a boolean cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 66)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_7 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a boolset cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 68)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_8 (object->mAttribute_mLiteralInteger.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("a literal string cannot be assigned from a literal integer")  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
        outArgument_outExpressionType.drop () ; // Release error dropped variable
      }
      break ;
    }
  }
  outArgument_outResult = GALGAS_variableKindIR::constructor_literalUnsignedInteger (object->mAttribute_mLiteralInteger.mAttribute_bigint  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 74)) ;
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
                                                                           const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
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
  const enumGalgasBool test_0 = ioArgument_ioGlobalLiteralStringMap.reader_hasKey (object->mAttribute_mLiteralString.mAttribute_string COMMA_SOURCE_FILE ("expression-literal-string.galgas", 51)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGlobalLiteralStringMap.method_searchKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 52)) ;
  }else if (kBoolFalse == test_0) {
    var_literalStringName = function_literalStringPrefix (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)).add_operation (ioArgument_ioGlobalLiteralStringMap.reader_count (SOURCE_FILE ("expression-literal-string.galgas", 54)).reader_string (SOURCE_FILE ("expression-literal-string.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 54)) ;
    {
    ioArgument_ioGlobalLiteralStringMap.modifier_insertKey (object->mAttribute_mLiteralString, var_literalStringName, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 55)) ;
    }
  }
  outArgument_outExpressionType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)).reader_nowhere (SOURCE_FILE ("expression-literal-string.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 58)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalString (object->mAttribute_mLiteralString.mAttribute_string, var_literalStringName  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 59)) ;
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
                                                                            const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
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
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (object->mAttribute_mValue  COMMA_SOURCE_FILE ("expression-true-false.galgas", 58)) ;
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
                                                                 const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
                                                                 const GALGAS_receiverType /* constinArgument_inReceiverType */,
                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inOptionalTargetType,
                                                                 const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                 const GALGAS_stringset /* constinArgument_inModeSet */,
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
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_varAccess ;
  GALGAS_variableKindIR var_resultingVariable ;
  GALGAS_registerBitSliceAccessMap var_registerBitSliceMap ;
  {
  GALGAS_bool joker_3070 ; // Joker input parameter
  GALGAS_bool joker_3129 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadAccess (object->mAttribute_mSourceVarName, var_variableType, var_accessIsAllowed, var_varAccess, var_resultingVariable, joker_3070, var_registerBitSliceMap, joker_3129, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 60)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("expression-var.galgas", 70)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSourceVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("expression-var.galgas", 71)) ;
  }
  outArgument_outExpressionType = function_solveInferredType (constinArgument_inOptionalTargetType, var_variableType, object->mAttribute_mSourceVarName.mAttribute_location, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 74)) ;
  cEnumerator_lstringlist enumerator_3473 (object->mAttribute_mFieldNameList, kEnumeration_up) ;
  while (enumerator_3473.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_registerBitSliceMap.reader_count (SOURCE_FILE ("expression-var.galgas", 81)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_infixOperatorIR var_accessOperator ;
      GALGAS_variableKindIR var_accessRightOperand ;
      GALGAS_registerBitSliceAccessMap var_submap ;
      GALGAS_unifiedTypeMap_2D_proxy var_newResultType ;
      var_registerBitSliceMap.method_searchKey (enumerator_3473.current_mValue (HERE), var_accessOperator, var_accessRightOperand, var_submap, var_newResultType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 82)) ;
      GALGAS_variableKindIR var_newResultingVariable ;
      {
      routine_getNewTempVariable (ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 90)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorInfixExpressionIR::constructor_new (var_newResultType, var_newResultingVariable, var_resultingVariable, var_accessOperator, var_accessRightOperand, object->mAttribute_mSourceVarName.mAttribute_location  COMMA_SOURCE_FILE ("expression-var.galgas", 91))  COMMA_SOURCE_FILE ("expression-var.galgas", 91)) ;
      var_resultingVariable = var_newResultingVariable ;
      var_registerBitSliceMap = var_submap ;
      outArgument_outExpressionType = var_newResultType ;
    }else if (kBoolFalse == test_2) {
      switch (outArgument_outExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 103)).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolean:
        {
          GALGAS_location location_3 (enumerator_3473.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("a boolean does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 105)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolset:
        {
          GALGAS_location location_4 (enumerator_3473.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("a boolset does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 107)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_literalString:
        {
          GALGAS_location location_5 (enumerator_3473.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("a literal string does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 109)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_enumeration:
        {
          GALGAS_location location_6 (enumerator_3473.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("an enumeration does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 111)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_structure:
        {
          const cEnumAssociatedValues_typeKind_structure * extractPtr_5045 = (const cEnumAssociatedValues_typeKind_structure *) (outArgument_outExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 103)).unsafePointer ()) ;
          const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_5045->mAssociatedValue0 ;
          extractedValue_propertyMap.method_searchKey (enumerator_3473.current_mValue (HERE), outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 113)) ;
          GALGAS_variableKindIR var_newResultingVariable ;
          {
          routine_getNewTempVariable (ioArgument_ioTemporaries, var_newResultingVariable, inCompiler  COMMA_SOURCE_FILE ("expression-var.galgas", 114)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_fieldAccessIR::constructor_new (outArgument_outExpressionType, var_newResultingVariable, var_resultingVariable, enumerator_3473.current_mValue (HERE)  COMMA_SOURCE_FILE ("expression-var.galgas", 115))  COMMA_SOURCE_FILE ("expression-var.galgas", 115)) ;
          var_resultingVariable = var_newResultingVariable ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integer:
        {
          GALGAS_location location_7 (enumerator_3473.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("an integer does not handle field access")  COMMA_SOURCE_FILE ("expression-var.galgas", 123)) ;
        }
        break ;
      }
    }
    enumerator_3473.gotoNextObject () ;
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
//                             Overriding category reader '@fieldAccessIR instructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_fieldAccessIR_instructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCode ; // Returned variable
  const cPtr_fieldAccessIR * object = (const cPtr_fieldAccessIR *) inObject ;
  macroValidSharedObject (object, cPtr_fieldAccessIR) ;
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 143)) ;
  result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 144)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 144)).add_operation (function_mangledNameForProperty (object->mAttribute_mField.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 144)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 144))  COMMA_SOURCE_FILE ("expression-var.galgas", 144)) ;
//---
  return result_outCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_fieldAccessIR_instructionCode (void) {
  enterCategoryReader_instructionCode (kTypeDescriptor_GALGAS_fieldAccessIR.mSlotID,
                                       categoryReader_fieldAccessIR_instructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_fieldAccessIR_instructionCode (defineCategoryReader_fieldAccessIR_instructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@fieldAccessIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_fieldAccessIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                              GALGAS_string & ioArgument_ioCode,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fieldAccessIR * object = (const cPtr_fieldAccessIR *) inObject ;
  macroValidSharedObject (object, cPtr_fieldAccessIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 150)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 150)).add_operation (categoryReader_mangledName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 150))  COMMA_SOURCE_FILE ("expression-var.galgas", 150)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 151)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 151)).add_operation (function_mangledNameForProperty (object->mAttribute_mField.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 151)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 151))  COMMA_SOURCE_FILE ("expression-var.galgas", 151)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_fieldAccessIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_fieldAccessIR.mSlotID,
                                           categoryMethod_fieldAccessIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_fieldAccessIR_llvmInstructionCode (defineCategoryMethod_fieldAccessIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@fieldAccessIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_fieldAccessIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_fieldAccessIR * object = (const cPtr_fieldAccessIR *) inObject ;
  macroValidSharedObject (object, cPtr_fieldAccessIR) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSource, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-var.galgas", 157)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_fieldAccessIR_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_fieldAccessIR.mSlotID,
                                               categoryMethod_fieldAccessIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_fieldAccessIR_enterAccessibleEntities (defineCategoryMethod_fieldAccessIR_enterAccessibleEntities, NULL) ;

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
                                                                          const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
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
  constinArgument_inContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionVarName, var_functionModeSet, var_formalParameterList, outArgument_outExpressionType, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 67)) ;
  GALGAS_string var_mangledName = object->mAttribute_mFunctionVarName.mAttribute_string ;
  cEnumerator_functionCallEffectiveParameterList enumerator_3377 (object->mAttribute_mParameterList, kEnumeration_up) ;
  while (enumerator_3377.hasCurrentObject ()) {
    var_mangledName.dotAssign_operation (GALGAS_string ("\?").add_operation (enumerator_3377.current (HERE).mAttribute_mSelector.reader_string (SOURCE_FILE ("expression-func-call.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 76)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 76))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 76)) ;
    enumerator_3377.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_functionModeSet.reader_keySet (SOURCE_FILE ("expression-func-call.galgas", 81)), object->mAttribute_mFunctionVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 79)) ;
  }
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("func ").add_operation (var_mangledName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 87)), object->mAttribute_mFunctionVarName.mAttribute_location  COMMA_SOURCE_FILE ("expression-func-call.galgas", 87)) COMMA_SOURCE_FILE ("expression-func-call.galgas", 85)) ;
  }
  GALGAS_variableListIR var_variableList = GALGAS_variableListIR::constructor_emptyList (SOURCE_FILE ("expression-func-call.galgas", 90)) ;
  GALGAS_string var_s = function_mangledNameForFunction (object->mAttribute_mFunctionVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 91)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 92)).objectCompare (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this function declares ").add_operation (var_formalParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 93)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)).add_operation (GALGAS_string (" formal parameters, the call names "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)).add_operation (object->mAttribute_mParameterList.reader_length (SOURCE_FILE ("expression-func-call.galgas", 94)).reader_string (SOURCE_FILE ("expression-func-call.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 94)).add_operation (GALGAS_string (" effective arguments"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 94))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_funcSignature enumerator_4174 (var_formalParameterList, kEnumeration_up) ;
    cEnumerator_functionCallEffectiveParameterList enumerator_4200 (object->mAttribute_mParameterList, kEnumeration_up) ;
    while (enumerator_4174.hasCurrentObject () && enumerator_4200.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_4200.current (HERE).mAttribute_mSelector.mAttribute_string.objectCompare (enumerator_4174.current (HERE).mAttribute_mFormalSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s = GALGAS_string ("!") ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_4174.current (HERE).mAttribute_mFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_s.dotAssign_operation (enumerator_4174.current (HERE).mAttribute_mFormalSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 101))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 101)) ;
        }
        GALGAS_location location_4 (enumerator_4200.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("required selector: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 103))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 103)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_argumentExpressionType ;
      GALGAS_variableKindIR var_resultValueName ;
      callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4200.current (HERE).mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, GALGAS_receiverType::constructor_noReceiver (SOURCE_FILE ("expression-func-call.galgas", 107)), enumerator_4174.current (HERE).mAttribute_mArgumentType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_argumentExpressionType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 105)) ;
      var_variableList.addAssign_operation (var_resultValueName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 119)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)).objectCompare (enumerator_4174.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 120)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_location location_6 (enumerator_4200.current (HERE).mAttribute_mSelector.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the actual parameter has the ").add_operation (var_argumentExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)).add_operation (GALGAS_string (", but the formal argument has the "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)).add_operation (enumerator_4174.current (HERE).mAttribute_mArgumentType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 122)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 122))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 121)) ;
      }
      if (enumerator_4174.hasNextObject () && enumerator_4200.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 125)) ;
      }
      enumerator_4174.gotoNextObject () ;
      enumerator_4200.gotoNextObject () ;
    }
  }
  var_s.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 128)) ;
  {
  routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-func-call.galgas", 130)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (outArgument_outExpressionType, object->mAttribute_mFunctionVarName.mAttribute_string, outArgument_outResultValueName, var_variableList  COMMA_SOURCE_FILE ("expression-func-call.galgas", 132))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 132)) ;
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
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 152)) ;
  result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 153))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 153)) ;
  result_outCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 154))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 154)) ;
  cEnumerator_variableListIR enumerator_6389 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6389.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_6389.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 156))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 156)) ;
    if (enumerator_6389.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 157)) ;
    }
    enumerator_6389.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 159)) ;
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
//                          Overriding category method '@functionCallIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                               GALGAS_string & ioArgument_ioCode,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallIR * object = (const cPtr_functionCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 165))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 165)) ;
  ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTempConstantTarget, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 166)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 166))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 166)) ;
  ioArgument_ioCode.dotAssign_operation (function_mangledNameForFunction (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 167)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 167))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 167)) ;
  cEnumerator_variableListIR enumerator_6903 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_6903.hasCurrentObject ()) {
    ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (enumerator_6903.current_mVar (HERE), inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 169))  COMMA_SOURCE_FILE ("expression-func-call.galgas", 169)) ;
    if (enumerator_6903.hasNextObject ()) {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 170)) ;
    }
    enumerator_6903.gotoNextObject () ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("expression-func-call.galgas", 172)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_functionCallIR.mSlotID,
                                           categoryMethod_functionCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallIR_llvmInstructionCode (defineCategoryMethod_functionCallIR_llvmInstructionCode, NULL) ;

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
  ioArgument_ioAccessibleEntities.mAttribute_mFunctionSet.addAssign_operation (object->mAttribute_mFunctionName  COMMA_SOURCE_FILE ("expression-func-call.galgas", 178)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTempConstantTarget, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 179)) ;
  cEnumerator_variableListIR enumerator_7377 (object->mAttribute_mVariableList, kEnumeration_up) ;
  while (enumerator_7377.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_7377.current_mVar (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-func-call.galgas", 181)) ;
    enumerator_7377.gotoNextObject () ;
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
                                                                              const GALGAS_lstring /* constinArgument_inRoutineNameForInvocationGraph */,
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
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, outArgument_outExpressionType, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 84)) ;
  GALGAS_uint var_bitIndex ;
  GALGAS_uint var_bitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_bitIndex, var_bitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 92)) ;
  outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).left_shift_operation (var_bitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)).left_shift_operation (var_bitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 98)) ;
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
                                                                                const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
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
  constinArgument_inContext.mAttribute_mRegisterMap.method_searchKey (object->mAttribute_mRegisterName, outArgument_outExpressionType, var_readOnly, var_registerBitSliceMap, var_registerFieldMap, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 118)) ;
  GALGAS_uint var_fieldBitIndex ;
  GALGAS_uint var_fieldBitCount ;
  var_registerFieldMap.method_searchKey (object->mAttribute_mFieldName, var_fieldBitIndex, var_fieldBitCount, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 126)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_fieldBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFieldName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this field is not an integer field")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 133)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResult ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 136)) ;
  switch (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 157)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
      outArgument_outResultValueName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8338 = (const cEnumAssociatedValues_typeKind_integer *) (var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8338->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8338->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8338->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8338->mAssociatedValue3 ;
      const enumGalgasBool test_2 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 161)).boolEnum () ;
      if (kBoolTrue == test_2) {
        inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("an unsigned integer expression is required here")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)) ;
        outArgument_outResultValueName.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = var_expressionResult.reader_isLiteralSignedInteger (SOURCE_FILE ("expression-cst-registre.galgas", 163)).boolEnum () ;
        if (kBoolTrue == test_3) {
          inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 164)) ;
          outArgument_outResultValueName.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = var_expressionResult.reader_isLiteralString (SOURCE_FILE ("expression-cst-registre.galgas", 165)).boolEnum () ;
          if (kBoolTrue == test_4) {
            inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
            outArgument_outResultValueName.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_expressionResult.reader_isLiteralUnsignedInteger (SOURCE_FILE ("expression-cst-registre.galgas", 167)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_bigint var_value ;
              var_expressionResult.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 168)) ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsStrictInf, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                outArgument_outResultValueName = GALGAS_variableKindIR::constructor_literalUnsignedInteger (var_value.left_shift_operation (var_fieldBitIndex COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)) ;
              }else if (kBoolFalse == test_6) {
                inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("static unsigned integer expression overflow: maximum value is ").add_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 173))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 172)) ;
                outArgument_outResultValueName.drop () ; // Release error dropped variable
              }
            }else if (kBoolFalse == test_5) {
              GALGAS_bool var_assertGenerated = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount)) ;
              GALGAS_bool test_7 = var_assertGenerated ;
              if (kBoolTrue == test_7.boolEnum ()) {
                test_7 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
              }
              const enumGalgasBool test_8 = test_7.boolEnum () ;
              if (kBoolTrue == test_8) {
                inCompiler->emitSemanticError (object->mAttribute_mExpressionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 180))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 179)) ;
              }
              {
              routine_getNewTempVariable (ioArgument_ioTemporaries, outArgument_outResultValueName, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_registerIntegerConstantInExpressionIR::constructor_new (object->mAttribute_mExpressionLocation, var_expressionResult, GALGAS_uint_36__34_ ((uint64_t) 1ULL).left_shift_operation (var_fieldBitCount COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)).substract_operation (GALGAS_uint_36__34_ ((uint64_t) 1ULL), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)), var_fieldBitIndex, outArgument_outResultValueName, outArgument_outExpressionType, var_assertGenerated.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 190))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 183)) ;
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
    result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (GALGAS_string (" = (("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 214)).add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 215)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 216)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 218)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 219)) ;
    }else if (kBoolFalse == test_1) {
      result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 221)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (4, ").add_operation (object->mAttribute_mInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).reader_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 223)).reader_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 223)).add_operation (object->mAttribute_mInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 224))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 222)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 225)) ;
      result_outCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 227))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 226)) ;
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
//               Overriding category method '@registerIntegerConstantInExpressionIR llvmInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                      GALGAS_string & ioArgument_ioCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerIntegerConstantInExpressionIR * object = (const cPtr_registerIntegerConstantInExpressionIR *) inObject ;
  macroValidSharedObject (object, cPtr_registerIntegerConstantInExpressionIR) ;
  const enumGalgasBool test_0 = object->mAttribute_mNoCheck.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)).add_operation (GALGAS_string (" = (("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)).add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 236)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 237))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 235)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)).add_operation (GALGAS_string (") << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 240))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 239)) ;
    }else if (kBoolFalse == test_1) {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242)).add_operation (object->mAttribute_mMaxBound.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 242)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  raise_exception (4, ").add_operation (object->mAttribute_mInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 244)).reader_lastPathComponent (SOURCE_FILE ("expression-cst-registre.galgas", 244)).reader_utf_38_Representation (SOURCE_FILE ("expression-cst-registre.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 244)).add_operation (object->mAttribute_mInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 245)).reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 245)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 245))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 243)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 246)) ;
      ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)).add_operation (categoryReader_mangledName (object->mAttribute_mResultVariable, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)).add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 248)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 248)).add_operation (object->mAttribute_mBitShift.reader_string (SOURCE_FILE ("expression-cst-registre.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 248)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 248))  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 247)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_registerIntegerConstantInExpressionIR.mSlotID,
                                           categoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode (defineCategoryMethod_registerIntegerConstantInExpressionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mExpressionValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 257)) ;
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
                                                        const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
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
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 52)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 49)) ;
  const enumGalgasBool test_0 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)).reader_isBoolean (SOURCE_FILE ("directive-check.galgas", 64)).operator_not (SOURCE_FILE ("directive-check.galgas", 64)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("directive-check.galgas", 65)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 68)).operator_not (SOURCE_FILE ("directive-check.galgas", 68)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction")  COMMA_SOURCE_FILE ("directive-check.galgas", 69)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_bigint var_value ;
    var_expressionValueName.method_literalUnsignedInteger (var_value, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 71)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_value.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 72)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mCheckInstructionLocation, GALGAS_string ("check expression value is false")  COMMA_SOURCE_FILE ("directive-check.galgas", 73)) ;
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
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_variableCName ;
  GALGAS_variableKindIR var_variable ;
  {
  GALGAS_bool joker_3814_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3814_2 ; // Joker input parameter
  GALGAS_bool joker_3814_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mVarName, var_type, var_accessIsAllowed, var_variableCName, var_variable, joker_3814_3, joker_3814_2, joker_3814_1, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 89)) ;
  }
  const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 97)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 98)) ;
  }
  const enumGalgasBool test_2 = constinArgument_inContext.mAttribute_mTypeNameSetForIncDec.reader_hasKey (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 101)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)).add_operation (GALGAS_string (" type does not handle incrementation/decrementation operator"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 102)) ;
  }
  GALGAS_bigint var_min ;
  GALGAS_bigint var_max ;
  switch (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_boolset:
  case GALGAS_typeKind::kEnum_literalString:
    {
      GALGAS_location location_4 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 108)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      GALGAS_location location_5 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 110)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      GALGAS_location location_6 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 112)) ;
      var_min.drop () ; // Release error dropped variable
      var_max.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_4481 = (const cEnumAssociatedValues_typeKind_integer *) (var_type.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 106)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_kMin = extractPtr_4481->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_kMax = extractPtr_4481->mAssociatedValue1 ;
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
      const enumGalgasBool test_7 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 121)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (object->mAttribute_mVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 122)) ;
      }
    }
    break ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_incDecInstructionIR::constructor_new (var_min, var_max, object->mAttribute_mKind, var_variable, object->mAttribute_mVarName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 126)) ;
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
      const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (object->mAttribute_mMax.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 154)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (1, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 156)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 156)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 157))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 155)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 158)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 160)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      result_outCode = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 163)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (object->mAttribute_mMin.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 164)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (2, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 166)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 166)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 167))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 165)) ;
        result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 168)) ;
      }
      result_outCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 170)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 172)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 174)) ;
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
//                        Overriding category method '@incDecInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioCode,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionIR * object = (const cPtr_incDecInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionIR) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_incWithOverflowCheck:
    {
      const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 183)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184)).add_operation (object->mAttribute_mMax.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 184)) ;
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  raise_exception (1, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 186)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 185)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 187)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 187))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 185)) ;
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 188)) ;
      }
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 190)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 190))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 190)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decWithOverflowCheck:
    {
      const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)).add_operation (object->mAttribute_mMin.reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)) ;
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  raise_exception (2, ").add_operation (object->mAttribute_mVariableLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)).reader_lastPathComponent (SOURCE_FILE ("instruction-inc-dec.galgas", 195)).reader_utf_38_Representation (SOURCE_FILE ("instruction-inc-dec.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 194)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)).add_operation (object->mAttribute_mVariableLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196)).reader_string (SOURCE_FILE ("instruction-inc-dec.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 196))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 194)) ;
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 197)) ;
      }
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 199)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 199))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 199)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_incNoOverflowCheck:
    {
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 201)).add_operation (GALGAS_string (" ++ ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 201))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 201)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decNoOverflowCheck:
    {
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mVariable, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 203)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 203))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 203)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_incDecInstructionIR.mSlotID,
                                           categoryMethod_incDecInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionIR_llvmInstructionCode (defineCategoryMethod_incDecInstructionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
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
                                                                    const GALGAS_lstring constinArgument_inRoutineNameForInvocationGraph,
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
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 76)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionResultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModes, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 80)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 95)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType = var_expressionType ;
  }
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-var.galgas", 104)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 109)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 111)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 112)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
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
                                                      const GALGAS_stringset /* constinArgument_inModes */,
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
  GALGAS_variableKindIR var_targetVar = GALGAS_variableKindIR::constructor_localVariable (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  ioArgument_ioVariableMap.modifier_insertUndefinedLocalVariable (object->mAttribute_mVarName, var_targetType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), var_targetVar, var_targetType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 145)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-var.galgas", 146)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_varDeclarationIR::constructor_new (var_targetType, var_targetVar  COMMA_SOURCE_FILE ("instruction-var.galgas", 150))  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
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
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
  result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 172))  COMMA_SOURCE_FILE ("instruction-var.galgas", 172)) ;
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
//          Overriding category method '@varDeclarationInstructionWithSimpleAssignmentIR llvmInstructionCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                                GALGAS_string & ioArgument_ioCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionWithSimpleAssignmentIR * object = (const cPtr_varDeclarationInstructionWithSimpleAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionWithSimpleAssignmentIR) ;
  ioArgument_ioCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 178)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 178)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 178))  COMMA_SOURCE_FILE ("instruction-var.galgas", 178)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 179))  COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_varDeclarationInstructionWithSimpleAssignmentIR.mSlotID,
                                           categoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode (defineCategoryMethod_varDeclarationInstructionWithSimpleAssignmentIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 187)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)) ;
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
  result_outCode = function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 203)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 203)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 203)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 203)) ;
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
//                         Overriding category method '@varDeclarationIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varDeclarationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioCode,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationIR * object = (const cPtr_varDeclarationIR *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationIR) ;
  ioArgument_ioCode.dotAssign_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 209)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 209)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetVar, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 209)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 209))  COMMA_SOURCE_FILE ("instruction-var.galgas", 209)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varDeclarationIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_varDeclarationIR.mSlotID,
                                           categoryMethod_varDeclarationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varDeclarationIR_llvmInstructionCode (defineCategoryMethod_varDeclarationIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVar, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 215)) ;
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
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 77)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 78)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType = temp_0 ;
  GALGAS_unifiedTypeMap_2D_proxy var_inferredType ;
  GALGAS_variableKindIR var_resultValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_inferredType, var_resultValueName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 81)) ;
  GALGAS_variableKindIR var_targetConstant = GALGAS_variableKindIR::constructor_localConstant (object->mAttribute_mVarName  COMMA_SOURCE_FILE ("instruction-let.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mVarName, var_inferredType, GALGAS_bool (true), function_mangledNameForLocalVariable (object->mAttribute_mVarName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)), var_targetConstant, var_inferredType.reader_copiable (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 103)), GALGAS_registerBitSliceAccessMap::constructor_emptyMap (SOURCE_FILE ("instruction-let.galgas", 104)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 97)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_letInstructionWithAssignmentIR::constructor_new (var_inferredType, var_targetConstant, var_resultValueName  COMMA_SOURCE_FILE ("instruction-let.galgas", 108))  COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
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
  result_outCode = GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetConstantIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 131)) ;
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
//                  Overriding category method '@letInstructionWithAssignmentIR llvmInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_letInstructionWithAssignmentIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentIR * object = (const cPtr_letInstructionWithAssignmentIR *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("const ").add_operation (function_mangledNameForType (object->mAttribute_mTargetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 137)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 137)).add_operation (categoryReader_mangledName (object->mAttribute_mTargetConstantIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 137)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceIR, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 139)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 140))  COMMA_SOURCE_FILE ("instruction-let.galgas", 137)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_letInstructionWithAssignmentIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_letInstructionWithAssignmentIR.mSlotID,
                                           categoryMethod_letInstructionWithAssignmentIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionWithAssignmentIR_llvmInstructionCode (defineCategoryMethod_letInstructionWithAssignmentIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetConstantIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 146)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceIR, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 147)) ;
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
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_bool joker_2609_6 ; // Joker input parameter
  GALGAS_string joker_2609_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2609_4 ; // Joker input parameter
  GALGAS_bool joker_2609_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2609_2 ; // Joker input parameter
  GALGAS_bool joker_2609_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2609_6, joker_2609_5, joker_2609_4, joker_2609_3, joker_2609_2, joker_2609_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
  }
  cEnumerator_lstringlist enumerator_2671 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_2671.hasCurrentObject ()) {
    switch (var_targetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 64)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
        GALGAS_location location_0 (enumerator_2671.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_0, GALGAS_string ("a boolean does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 66)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_boolset:
      {
        GALGAS_location location_1 (enumerator_2671.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a boolset does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 68)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
        GALGAS_location location_2 (enumerator_2671.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a static string does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 70)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
        GALGAS_location location_3 (enumerator_2671.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an enumeration does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 72)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_3133 = (const cEnumAssociatedValues_typeKind_structure *) (var_targetType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 64)).unsafePointer ()) ;
        const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_3133->mAssociatedValue0 ;
        extractedValue_propertyMap.method_searchKey (enumerator_2671.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 74)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
        GALGAS_location location_4 (enumerator_2671.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("an integer does not have fields")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
      }
      break ;
    }
    enumerator_2671.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 80)) ;
  {
  routine_checkAssignmentCompatibility (var_expressionType, var_targetType, object->mAttribute_mTargetVarName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4009 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_4115_2 ; // Joker input parameter
  GALGAS_bool joker_4115_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mTargetVarName, joker_4009, var_accessIsAllowed, var_targetVar, var_targetVariableKind, var_isCopiable, joker_4115_2, joker_4115_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 100)) ;
  }
  const enumGalgasBool test_5 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 109)).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_location location_6 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_6, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
  }
  const enumGalgasBool test_7 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 112)).boolEnum () ;
  if (kBoolTrue == test_7) {
    GALGAS_location location_8 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-assignment.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 113)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 113))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 113)) ;
  }
  const enumGalgasBool test_9 = var_sourceValueName.reader_isLiteralStructure (SOURCE_FILE ("instruction-assignment.galgas", 116)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_variableKindIR var_temporaryResult ;
    {
    routine_getNewTempVariable (ioArgument_ioTemporaries, var_temporaryResult, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 117)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_letInstructionWithAssignmentIR::constructor_new (var_targetType, var_temporaryResult, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 118)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assignmentInstructionIR::constructor_new (var_targetVariableKind, object->mAttribute_mFieldList, var_targetType, var_temporaryResult  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
  }else if (kBoolFalse == test_9) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assignmentInstructionIR::constructor_new (var_targetVariableKind, object->mAttribute_mFieldList, var_targetType, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)) ;
  }
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
  result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 153)) ;
  cEnumerator_lstringlist enumerator_5784 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_5784.hasCurrentObject ()) {
    result_outCode.dotAssign_operation (GALGAS_string (".").add_operation (function_mangledNameForProperty (enumerator_5784.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 155))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 155)) ;
    enumerator_5784.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 157)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 157))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 157)) ;
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
//                      Overriding category method '@assignmentInstructionIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioCode,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionIR * object = (const cPtr_assignmentInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)) ;
  cEnumerator_lstringlist enumerator_6198 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_6198.hasCurrentObject ()) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string (".").add_operation (function_mangledNameForProperty (enumerator_6198.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 165))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 165)) ;
    enumerator_6198.gotoNextObject () ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (" = ").add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 167)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 167))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 167)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assignmentInstructionIR.mSlotID,
                                           categoryMethod_assignmentInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionIR_llvmInstructionCode (defineCategoryMethod_assignmentInstructionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 173)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 174)) ;
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
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)) COMMA_SOURCE_FILE ("instruction-assert.galgas", 47)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 48))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 48)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 51)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_expressionValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 55)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, var_expressionType, var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 52)) ;
  const enumGalgasBool test_1 = var_expressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 67)).reader_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 67)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 67)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is not boolean")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 68)) ;
  }
  const enumGalgasBool test_2 = categoryReader_isStatic (var_expressionValueName, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 71)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 72)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mAttribute_mAssertInstructionLocation, var_instructionGenerationList, var_expressionValueName  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)) ;
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
  result_outCode = categoryReader_instructionListCode (object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 97)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("if (!").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  raise_exception (20").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).reader_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 100)).reader_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 100)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).reader_string (SOURCE_FILE ("instruction-assert.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 101))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 102)) ;
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
//                        Overriding category method '@assertInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioCode,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (!").add_operation (categoryReader_mangledName (object->mAttribute_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  raise_exception (20").add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).reader_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 111)).reader_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (object->mAttribute_mAssertInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).reader_string (SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                           categoryMethod_assertInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineCategoryMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 119)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mExpressionValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 120)) ;
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
  const cPtr_throwInstructionAST * object = (const cPtr_throwInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionAST) ;
  const enumGalgasBool test_0 = constinArgument_inModeSet.reader_hasKey (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)) COMMA_SOURCE_FILE ("instruction-throw.galgas", 45)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("operations that can generate exceptions are not allowed in $").add_operation (function_exceptionModeName (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 46))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 46)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-throw.galgas", 49)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
  GALGAS_variableKindIR var_result ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mCodeExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, constinArgument_inContext.mAttribute_mExceptionCodeType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_unusedInstructionListIR, var_expressionType, var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 50)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)).objectCompare (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 65)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression type is ").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)).add_operation (GALGAS_string (", required type is "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)).add_operation (constinArgument_inContext.mAttribute_mExceptionCodeType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 67))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 66)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR.reader_length (SOURCE_FILE ("instruction-throw.galgas", 70)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = categoryReader_isStatic (var_result, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 70)).operator_not (SOURCE_FILE ("instruction-throw.galgas", 70)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mThrowLocation, GALGAS_string ("throw expression cannot be statically computed")  COMMA_SOURCE_FILE ("instruction-throw.galgas", 71)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_noExceptionGeneration.reader_value ()).operator_not (SOURCE_FILE ("instruction-throw.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_throwInstructionIR::constructor_new (object->mAttribute_mThrowLocation, var_result  COMMA_SOURCE_FILE ("instruction-throw.galgas", 75))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 75)) ;
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
  result_outCode = GALGAS_string ("raise_exception (").add_operation (categoryReader_mangledName (object->mAttribute_mCode, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 94)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).reader_lastPathComponent (SOURCE_FILE ("instruction-throw.galgas", 95)).reader_utf_38_Representation (SOURCE_FILE ("instruction-throw.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 95)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)).reader_string (SOURCE_FILE ("instruction-throw.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 96)) ;
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
//                        Overriding category method '@throwInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_throwInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioCode,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_throwInstructionIR * object = (const cPtr_throwInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_throwInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("raise_exception (").add_operation (categoryReader_mangledName (object->mAttribute_mCode, inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 102)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 102)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_file (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 103)).reader_lastPathComponent (SOURCE_FILE ("instruction-throw.galgas", 103)).reader_utf_38_Representation (SOURCE_FILE ("instruction-throw.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 103)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 103)).add_operation (object->mAttribute_mThrowInstructionLocation.reader_line (inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 104)).reader_string (SOURCE_FILE ("instruction-throw.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 104)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-throw.galgas", 104))  COMMA_SOURCE_FILE ("instruction-throw.galgas", 102)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_throwInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_throwInstructionIR.mSlotID,
                                           categoryMethod_throwInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_throwInstructionIR_llvmInstructionCode (defineCategoryMethod_throwInstructionIR_llvmInstructionCode, NULL) ;

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
  const cPtr_operatorAssignInstructionAST * object = (const cPtr_operatorAssignInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  {
  GALGAS_bool joker_2921_6 ; // Joker input parameter
  GALGAS_string joker_2921_5 ; // Joker input parameter
  GALGAS_variableKindIR joker_2921_4 ; // Joker input parameter
  GALGAS_bool joker_2921_3 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_2921_2 ; // Joker input parameter
  GALGAS_bool joker_2921_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_neutralAccess (object->mAttribute_mTargetVarName, var_targetType, joker_2921_6, joker_2921_5, joker_2921_4, joker_2921_3, joker_2921_2, joker_2921_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 68)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightExpressionType ;
  GALGAS_variableKindIR var_sourceValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mSourceExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, var_targetType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_rightExpressionType, var_sourceValueName, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)).objectCompare (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("source expression type is '").add_operation (var_rightExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (GALGAS_string ("', and is not compatible with target type '"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)).add_operation (var_targetType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 91))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 90)) ;
  }
  GALGAS_bool var_accessIsAllowed ;
  GALGAS_string var_targetVar ;
  GALGAS_variableKindIR var_targetVariableKind ;
  GALGAS_bool var_isCopiable ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3822 ; // Joker input parameter
  GALGAS_registerBitSliceAccessMap joker_3928_2 ; // Joker input parameter
  GALGAS_bool joker_3928_1 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (object->mAttribute_mTargetVarName, joker_3822, var_accessIsAllowed, var_targetVar, var_targetVariableKind, var_isCopiable, joker_3928_2, joker_3928_1, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 103)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 104)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_4618 ; // Joker input parameter
  categoryMethod_checkWith (var_operatorMap, var_targetType, var_rightExpressionType, object->mAttribute_mTargetVarName.mAttribute_location, joker_4618, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 120)) ;
  const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-operator-assign.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mTargetVarName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (object->mAttribute_mTargetVarName.reader_string (SOURCE_FILE ("instruction-operator-assign.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 127)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_operatorAssignInstructionIR::constructor_new (var_targetVariableKind, var_targetType, object->mAttribute_mOperator, var_sourceValueName  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 130)) ;
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
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 154)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 156)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      result_outCode = categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 158)) ;
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
//                    Overriding category method '@operatorAssignInstructionIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_operatorAssignInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_operatorAssignInstructionIR * object = (const cPtr_operatorAssignInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_operatorAssignInstructionIR) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_operatorAssignKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseOrAssign:
    {
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167)).add_operation (GALGAS_string (" |= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 167)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseAndAssign:
    {
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 169)).add_operation (GALGAS_string (" &= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 169)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 169)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 169))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 169)) ;
    }
    break ;
  case GALGAS_operatorAssignKind::kEnum_bitWiseXorAssign:
    {
      ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (object->mAttribute_mTargetVariable, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)).add_operation (GALGAS_string (" ^= "), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)).add_operation (categoryReader_mangledName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171))  COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 171)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_operatorAssignInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_operatorAssignInstructionIR.mSlotID,
                                           categoryMethod_operatorAssignInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_operatorAssignInstructionIR_llvmInstructionCode (defineCategoryMethod_operatorAssignInstructionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTargetVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 178)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mSourceValue, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-operator-assign.galgas", 179)) ;
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
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 121)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_testExpressionType, var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 118)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 133)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134))  COMMA_SOURCE_FILE ("instruction-if.galgas", 134)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testResult, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mTestExpressionEndLocation, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 141)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mThenInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfThenInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_thenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 155)) ;
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mElseInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOfElseInstructionList, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_elseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 156)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult, var_thenInstructionGenerationList, var_elseInstructionGenerationList  COMMA_SOURCE_FILE ("instruction-if.galgas", 170))  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)) ;
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
  result_outCode = GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 190)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 190)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mThenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 191))  COMMA_SOURCE_FILE ("instruction-if.galgas", 191)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionGenerationList.reader_length (SOURCE_FILE ("instruction-if.galgas", 192)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
    result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mElseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194))  COMMA_SOURCE_FILE ("instruction-if.galgas", 194)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
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
//                          Overriding category method '@ifInstructionIR llvmInstructionCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                GALGAS_string & ioArgument_ioCode,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 202))  COMMA_SOURCE_FILE ("instruction-if.galgas", 202)) ;
  ioArgument_ioCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mThenInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 203))  COMMA_SOURCE_FILE ("instruction-if.galgas", 203)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionGenerationList.reader_length (SOURCE_FILE ("instruction-if.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
    ioArgument_ioCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mElseInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206))  COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                           categoryMethod_ifInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineCategoryMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestVariable, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
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
  cEnumerator_procEffectiveParameterListAST enumerator_4042 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4042.hasCurrentObject ()) {
    switch (enumerator_4042.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        var_procMangledName.dotAssign_operation (GALGAS_string ("\?!")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 103)) ;
      }
      break ;
    }
    var_procMangledName.dotAssign_operation (enumerator_4042.current_mSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
    enumerator_4042.gotoNextObject () ;
  }
  GALGAS_modeMap var_procedureModeMap ;
  GALGAS_procedureSignature var_procSignature ;
  GALGAS_bool joker_4435 ; // Joker input parameter
  GALGAS_bool joker_4511 ; // Joker input parameter
  constinArgument_inContext.mAttribute_mProcedureMap.method_searchKey (GALGAS_lstring::constructor_new (var_procMangledName, object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 109)), joker_4435, var_procedureModeMap, var_procSignature, joker_4511, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  {
  ioArgument_ioTemporaries.mAttribute_mSubprogramInvocationGraph.modifier_addEdge (constinArgument_inRoutineNameForInvocationGraph, GALGAS_lstring::constructor_new (GALGAS_string ("proc ").add_operation (var_procMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)), object->mAttribute_mProcRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 116)) ;
  }
  GALGAS_procEffectiveParameterList var_parameterList = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 121)) ;
  GALGAS_procCallEffectiveParameterListIR var_procCallEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
  cEnumerator_procedureSignature enumerator_4887 (var_procSignature, kEnumeration_up) ;
  cEnumerator_procEffectiveParameterListAST enumerator_4918 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_4887.hasCurrentObject () && enumerator_4918.hasCurrentObject ()) {
    switch (enumerator_4918.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input * extractPtr_5737 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_input *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_5737->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_isCopiable ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_registerBitSliceAccessMap joker_5193 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableAccess, var_parameterAccess, var_isCopiable, joker_5193, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
        }
        const enumGalgasBool test_0 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 136)).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_location location_1 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_1, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 137)) ;
        }
        const enumGalgasBool test_2 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("this variable cannot be used as input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 140)) ;
        }
        const enumGalgasBool test_4 = var_isCopiable.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 142)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the '").add_operation (extractedValue_name.reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)).add_operation (GALGAS_string ("' variable is not copiable"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 145)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("instruction-proc-call.galgas", 146)), enumerator_4918.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output * extractPtr_6682 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_output *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_6682->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_6682->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_expressionType ;
        GALGAS_variableKindIR var_expressionResult ;
        callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, enumerator_4887.current_mType (HERE), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioInstructionGenerationList, var_expressionType, var_expressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
        {
        routine_checkAssignmentCompatibility (var_expressionType, enumerator_4887.current_mType (HERE), extractedValue_endOfExp, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), enumerator_4887.current_mType (HERE)  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("instruction-proc-call.galgas", 168)), enumerator_4918.current_mSelector (HERE), enumerator_4887.current_mType (HERE), var_expressionResult  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput * extractPtr_7356 = (const cEnumAssociatedValues_procEffectiveParameterPassingModeAST_outputInput *) (enumerator_4918.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7356->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type ;
        GALGAS_bool var_accessIsAllowed ;
        GALGAS_string var_variableAccess ;
        GALGAS_variableKindIR var_parameterAccess ;
        GALGAS_bool var_canBeUsedAsInputParameter ;
        {
        GALGAS_bool joker_6904_2 ; // Joker input parameter
        GALGAS_registerBitSliceAccessMap joker_6904_1 ; // Joker input parameter
        ioArgument_ioVariableMap.modifier_searchForReadWriteAccess (extractedValue_name, var_type, var_accessIsAllowed, var_variableAccess, var_parameterAccess, joker_6904_2, joker_6904_1, var_canBeUsedAsInputParameter, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 170)) ;
        }
        const enumGalgasBool test_6 = var_canBeUsedAsInputParameter.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 179)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_location location_7 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("this variable cannot be used as output/input parameter")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 180)) ;
        }
        const enumGalgasBool test_8 = var_accessIsAllowed.operator_not (SOURCE_FILE ("instruction-proc-call.galgas", 182)).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_location location_9 (extractedValue_name.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("routine has no access right on the this variable")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 183)) ;
        }
        var_parameterList.addAssign_operation (enumerator_4918.current_mEffectiveParameterKind (HERE), enumerator_4918.current_mSelector (HERE), var_type  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 185)) ;
        var_procCallEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-proc-call.galgas", 186)), enumerator_4918.current_mSelector (HERE), var_type, var_parameterAccess  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 186)) ;
      }
      break ;
    }
    enumerator_4887.gotoNextObject () ;
    enumerator_4918.gotoNextObject () ;
  }
  {
  routine_checkMode (constinArgument_inModeSet, var_procedureModeMap.reader_keySet (SOURCE_FILE ("instruction-proc-call.galgas", 192)), object->mAttribute_mProcRoutineName.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 190)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)).objectCompare (var_parameterList.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 195)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mProcRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("this proc requires ").add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 196)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (var_procSignature.reader_length (SOURCE_FILE ("instruction-proc-call.galgas", 197)).reader_string (SOURCE_FILE ("instruction-proc-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 197))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 196)) ;
  }else if (kBoolFalse == test_10) {
    cEnumerator_procedureSignature enumerator_7775 (var_procSignature, kEnumeration_up) ;
    cEnumerator_procEffectiveParameterList enumerator_7804 (var_parameterList, kEnumeration_up) ;
    while (enumerator_7775.hasCurrentObject () && enumerator_7804.hasCurrentObject ()) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_7775.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)).objectCompare (enumerator_7804.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 200)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_7804.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the actual parameter type is '").add_operation (enumerator_7804.current_mParameterType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)).add_operation (enumerator_7775.current_mType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 202))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 201)) ;
      }
      GALGAS_string var_requiredPassingMode = categoryReader_requiredActualPassingModeForSelector (enumerator_7775.current_mFormalArgumentPassingMode (HERE), enumerator_7775.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 204)) ;
      GALGAS_string var_testedPassingMode = categoryReader_passingModeForActualSelector (enumerator_7804.current_mEffectiveParameterPassingMode (HERE), enumerator_7804.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 205)) ;
      const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode.objectCompare (var_testedPassingMode)).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (enumerator_7804.current_mSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_15, GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 207)) ;
      }
      enumerator_7775.gotoNextObject () ;
      enumerator_7804.gotoNextObject () ;
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_procCallInstructionIR::constructor_new (object->mAttribute_mProcRoutineName.mAttribute_string, var_procCallEffectiveParameterListIR  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 212)) ;
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
  result_outCode = function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 247)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9948 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_9948.hasCurrentObject ()) {
    switch (enumerator_9948.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9948.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 251)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        result_outCode.dotAssign_operation (categoryReader_mangledName (enumerator_9948.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 253)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        result_outCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_9948.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 255)) ;
      }
      break ;
    }
    if (enumerator_9948.hasNextObject ()) {
      result_outCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 258)) ;
    }
    enumerator_9948.gotoNextObject () ;
  }
  result_outCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 260)) ;
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
//                       Overriding category method '@procCallInstructionIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_procCallInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionIR * object = (const cPtr_procCallInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (function_mangledNameForProcedure (object->mAttribute_mProcName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 266)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_10553 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_10553.hasCurrentObject ()) {
    switch (enumerator_10553.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_10553.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 270)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 270))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 270)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioCode.dotAssign_operation (categoryReader_mangledName (enumerator_10553.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 272))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 272)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioCode.dotAssign_operation (GALGAS_string ("&(").add_operation (categoryReader_mangledName (enumerator_10553.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 274)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 274))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 274)) ;
      }
      break ;
    }
    if (enumerator_10553.hasNextObject ()) {
      ioArgument_ioCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 277)) ;
    }
    enumerator_10553.gotoNextObject () ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string (") ;\n")  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 279)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_procCallInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_procCallInstructionIR.mSlotID,
                                           categoryMethod_procCallInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionIR_llvmInstructionCode (defineCategoryMethod_procCallInstructionIR_llvmInstructionCode, NULL) ;

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
  ioArgument_ioAccessibleEntities.mAttribute_mProcedureSet.addAssign_operation (object->mAttribute_mProcName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 285)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_11173 (object->mAttribute_mParameters, kEnumeration_up) ;
  while (enumerator_11173.hasCurrentObject ()) {
    categoryMethod_enterAccessibleEntities (enumerator_11173.current_mParameter (HERE), ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 287)) ;
    enumerator_11173.gotoNextObject () ;
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
  GALGAS_instructionListIR var_testInstructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 73)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_testExpressionType ;
  GALGAS_variableKindIR var_testValueName ;
  callCategoryMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inRoutineNameForInvocationGraph, constinArgument_inReceiverType, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 77)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_testInstructionGenerationList, var_testExpressionType, var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 74)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_testExpressionType.reader_kind (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 89)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 89)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (var_testExpressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 90))  COMMA_SOURCE_FILE ("instruction-while.galgas", 90)) ;
  }
  const enumGalgasBool test_1 = categoryReader_isStatic (var_testValueName, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 93)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
  }
  categoryMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inRoutineNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inReceiverType, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowExceptions, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, var_instructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 98)) ;
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)), var_testInstructionGenerationList, var_testValueName, var_instructionGenerationList  COMMA_SOURCE_FILE ("instruction-while.galgas", 112))  COMMA_SOURCE_FILE ("instruction-while.galgas", 112)) ;
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
  result_outCode = GALGAS_string ("LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 134)) ;
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mTestInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 135))  COMMA_SOURCE_FILE ("instruction-while.galgas", 135)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136))  COMMA_SOURCE_FILE ("instruction-while.galgas", 136)) ;
  {
  result_outCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 137)) ;
  }
  result_outCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 138))  COMMA_SOURCE_FILE ("instruction-while.galgas", 138)) ;
  {
  result_outCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 139)) ;
  }
  result_outCode.dotAssign_operation (GALGAS_string ("    goto LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 140))  COMMA_SOURCE_FILE ("instruction-while.galgas", 140)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 141)) ;
  result_outCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 142)) ;
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
//                        Overriding category method '@whileInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioCode,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148))  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mTestInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149))  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  if (").add_operation (categoryReader_mangledName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150))  COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  {
  ioArgument_ioCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  }
  ioArgument_ioCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152))  COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  {
  ioArgument_ioCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  }
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("    goto LABEL_").add_operation (object->mAttribute_mLabelIndex.reader_string (SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154))  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                           categoryMethod_whileInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineCategoryMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 162)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mTestExpression, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)) ;
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
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
//                   Overriding category method '@foreverInstructionGeneration llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreverInstructionGeneration_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_string & ioArgument_ioCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreverInstructionGeneration * object = (const cPtr_foreverInstructionGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreverInstructionGeneration) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("while (1) {\n")  COMMA_SOURCE_FILE ("instruction-forever.galgas", 89)) ;
  ioArgument_ioCode.dotAssign_operation (categoryReader_instructionListCode (object->mAttribute_mInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 90))  COMMA_SOURCE_FILE ("instruction-forever.galgas", 90)) ;
  ioArgument_ioCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("instruction-forever.galgas", 91)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionGeneration_llvmInstructionCode (void) {
  enterCategoryMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                           categoryMethod_foreverInstructionGeneration_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionGeneration_llvmInstructionCode (defineCategoryMethod_foreverInstructionGeneration_llvmInstructionCode, NULL) ;

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
  categoryMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, inCompiler COMMA_SOURCE_FILE ("instruction-forever.galgas", 97)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities (void) {
  enterCategoryMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_foreverInstructionGeneration.mSlotID,
                                               categoryMethod_foreverInstructionGeneration_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreverInstructionGeneration_enterAccessibleEntities (defineCategoryMethod_foreverInstructionGeneration_enterAccessibleEntities, NULL) ;

