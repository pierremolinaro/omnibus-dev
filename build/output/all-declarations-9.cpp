#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


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
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & outArgument_outResult,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typedConstantCallAST * object = (const cPtr_typedConstantCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_typedConstantCallAST) ;
  GALGAS_PLMType var_inferredResultType_5492 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_inferredResultType_5492 = constinArgument_inOptionalTargetType ;
  }else if (kBoolFalse == test_0) {
    var_inferredResultType_5492 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 123)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 123)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_inferredResultType_5492.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-typed-constant.galgas", 125)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("expression-typed-constant.galgas", 126)), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 126)) ;
    outArgument_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    GALGAS_constantMap var_classConstantMap_5828 = extensionGetter_classConstantMap (var_inferredResultType_5492, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 128)) ;
    GALGAS_bigint var_value_5937 ;
    GALGAS_lstring var_classTypeName_5956 ;
    var_classConstantMap_5828.method_searchKey (object->mProperty_mConstructorName, var_value_5937, var_classTypeName_5956, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 129)) ;
    GALGAS_PLMType var_resultType_5976 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_classTypeName_5956, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 130)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_5976, var_value_5937  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 131)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("expression-typed-constant.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_objectIR var_newTemporaryReference_6412 ;
    {
    routine_getNewTempVariable (extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 137)), ioArgument_ioTemporaries, var_newTemporaryReference_6412, inCompiler  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 137)) ;
    }
    ioArgument_ioAllocaList.addAssign_operation (extensionGetter_llvmName (var_newTemporaryReference_6412, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)), extensionGetter_llvmTypeName (var_newTemporaryReference_6412, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139))  COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 139)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_newTemporaryReference_6412, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 142)), extensionGetter_llvmName (var_newTemporaryReference_6412, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 143)), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-typed-constant.galgas", 141)) ;
    }
    outArgument_outResult = var_newTemporaryReference_6412 ;
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
                                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & outArgument_outResult,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_objectIR var_ifExpressionResultPossibleReference_5192 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_ifExpressionResultPossibleReference_5192, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 101)) ;
  GALGAS_objectIR var_ifExpressionResult_5343 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_ifExpressionResultPossibleReference_5192, var_ifExpressionResult_5343, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 115)) ;
  }
  const enumGalgasBool test_0 = extensionGetter_type (var_ifExpressionResult_5343, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 121)).getter_isBoolean (SOURCE_FILE ("expression-if.galgas", 121)).operator_not (SOURCE_FILE ("expression-if.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIfExpressionEndLocation, GALGAS_string ("'if' expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-if.galgas", 122)) ;
  }
  GALGAS_objectIR var_thenExpressionPossibleReferenceResult_6043 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_thenExpressionPossibleReferenceResult_6043, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 125)) ;
  GALGAS_objectIR var_thenExpressionTempResult_6201 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_thenExpressionPossibleReferenceResult_6043, var_thenExpressionTempResult_6201, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 139)) ;
  }
  GALGAS_objectIR var_thenExpressionResult_6234 = function_checkAssignmentCompatibility (var_thenExpressionTempResult_6201, constinArgument_inOptionalTargetType, object->mProperty_mThenExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 144)) ;
  GALGAS_objectIR var_elseExpressionPossibleReferenceResult_6949 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_elseExpressionPossibleReferenceResult_6949, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 151)) ;
  GALGAS_objectIR var_elseExpressionTempResult_7107 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_elseExpressionPossibleReferenceResult_6949, var_elseExpressionTempResult_7107, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 165)) ;
  }
  GALGAS_objectIR var_elseExpressionResult_7140 = function_checkAssignmentCompatibility (var_elseExpressionTempResult_7107, extensionGetter_type (var_thenExpressionResult_6234, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 172)), object->mProperty_mElseExpressionEndLocation, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 170)) ;
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_ifExpressionResult_5343, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 177)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bigint var_value_7506 ;
    GALGAS_PLMType joker_7487_1 ; // Joker input parameter
    var_ifExpressionResult_5343.method_literalInteger (joker_7487_1, var_value_7506, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 178)) ;
    GALGAS_objectIR temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_7506.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 179)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = var_thenExpressionResult_6234 ;
    }else if (kBoolFalse == test_4) {
      temp_3 = var_elseExpressionResult_7140 ;
    }
    outArgument_outResult = temp_3 ;
  }else if (kBoolFalse == test_2) {
    {
    routine_getNewTempVariable (extensionGetter_type (var_elseExpressionResult_7140, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 181)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 181)) ;
    }
    {
    extensionSetter_appendSelectOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_ifExpressionResult_5343, var_thenExpressionResult_6234, var_elseExpressionResult_7140, inCompiler COMMA_SOURCE_FILE ("expression-if.galgas", 182)) ;
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
                                                                          const GALGAS_bool constinArgument_inGuard,
                                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                          const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          GALGAS_objectIR & outArgument_outResult,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorExpressionAST * object = (const cPtr_infixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperandPossibleReference_4638 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperandPossibleReference_4638, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 98)) ;
  GALGAS_objectIR var_leftOperand_4774 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_4638, var_leftOperand_4774, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 112)) ;
  }
  GALGAS_objectIR var_rightExpressionResult_5298 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_4774, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 122)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightExpressionResult_5298, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 118)) ;
  GALGAS_objectIR var_rightOperand_5428 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightExpressionResult_5298, var_rightOperand_5428, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 132)) ;
  }
  GALGAS_infixOperatorMap var_operatorMap_5490 = function_getInfixOperatorMap (object->mProperty_mOp, constinArgument_inContext, constinArgument_inCurrentMode, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 138)) ;
  GALGAS_PLMType var_resultType_5797 ;
  GALGAS_infixOperatorDescription var_binaryOperator_5850 ;
  extensionMethod_checkBinaryOperationWith (var_operatorMap_5490, extensionGetter_type (var_leftOperand_4774, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 141)), extensionGetter_type (var_rightOperand_5428, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 142)), object->mProperty_mOperatorLocation, var_resultType_5797, var_binaryOperator_5850, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 140)) ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_5850.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_leftOperand_4774, object->mProperty_mOperatorLocation, var_rightOperand_5428, var_resultType_5797, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 148)) ;
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
      result_outOperatorMap = constinArgument_inContext.getter_mEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_nonEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mNonEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictInf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictInfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_infEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mInfEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_strictSup:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mStrictSupOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_supEqual:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSupEqualOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_andOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_orOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_xorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_booleanXorOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mBooleanXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOp:
    {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 190)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)), fixItArray1  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 191)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_2) {
        result_outOperatorMap = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_addOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOp:
    {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 201)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)), fixItArray4  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 202)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        result_outOperatorMap = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_subOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOp:
    {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 212)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)), fixItArray7  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 213)) ;
      }
      const enumGalgasBool test_8 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_8) {
        result_outOperatorMap = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_mulOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOp:
    {
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 223)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)), fixItArray10  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 224)) ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_11) {
        result_outOperatorMap = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_divOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOp:
    {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-infix-operators.galgas", 234)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (constinArgument_inOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)), fixItArray13  COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 235)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_14) {
        result_outOperatorMap = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
    }
    break ;
  case GALGAS_infixOperator::kEnum_modOpNoOvf:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_leftShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mLeftShiftOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_infixOperator::kEnum_rightShiftOp:
    {
      result_outOperatorMap = constinArgument_inContext.getter_mRightShiftOperatorMap (HERE) ;
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
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 19)) ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 20)) ;
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
//   Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 28)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 29)) ;
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
//            Overriding extension method '@booleanShortCircuitAndOperatorExpressionAST analyzeExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_booleanShortCircuitAndOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_booleanShortCircuitAndOperatorExpressionAST * object = (const cPtr_booleanShortCircuitAndOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_booleanShortCircuitAndOperatorExpressionAST) ;
  GALGAS_instructionListIR var_leftInstructionGenerationList_2997 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 51)) ;
  GALGAS_objectIR var_leftOperandPossibleReference_3484 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_leftInstructionGenerationList_2997, var_leftOperandPossibleReference_3484, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 52)) ;
  GALGAS_objectIR var_leftOperand_3620 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperandPossibleReference_3484, var_leftOperand_3620, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 66)) ;
  }
  GALGAS_instructionListIR var_rightInstructionGenerationList_3708 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 72)) ;
  GALGAS_objectIR var_rightOperandPossibleReference_4196 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_leftOperand_3620, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 77)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_rightInstructionGenerationList_3708, var_rightOperandPossibleReference_4196, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 73)) ;
  GALGAS_objectIR var_rightOperand_4334 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperandPossibleReference_4196, var_rightOperand_4334, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 87)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_leftOperand_3620, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 93)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 93)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 94)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_rightOperand_4334, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 97)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 97)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand should be boolean"), fixItArray3  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 98)) ;
  }
  GALGAS_bool test_4 = var_leftOperandPossibleReference_3484.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 101)) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = var_rightOperandPossibleReference_4196.getter_isLiteralInteger (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 101)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_bigint var_leftStaticValue_4872 ;
    GALGAS_PLMType joker_4836 ; // Joker input parameter
    var_leftOperandPossibleReference_3484.method_literalInteger (joker_4836, var_leftStaticValue_4872, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 102)) ;
    GALGAS_bigint var_rightStaticValue_4967 ;
    GALGAS_PLMType joker_4930 ; // Joker input parameter
    var_rightOperandPossibleReference_4196.method_literalInteger (joker_4930, var_rightStaticValue_4967, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 103)) ;
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (extensionGetter_type (var_leftOperand_3620, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)), var_leftStaticValue_4872.operator_and (var_rightStaticValue_4967 COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104))  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 104)) ;
  }else if (kBoolFalse == test_5) {
    {
    routine_getNewTempVariable (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)), ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 107)) ;
    }
    {
    extensionSetter_appendShortCircuitAndOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_leftOperand_3620, var_leftInstructionGenerationList_2997, var_rightOperand_4334, var_rightInstructionGenerationList_3708, object->mProperty_mOperatorLocation, inCompiler COMMA_SOURCE_FILE ("expression-boolean-short-circuit-and-operator.galgas", 109)) ;
    }
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
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_bool constinArgument_inGuard,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResultPossibleReference_3406 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_3406, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 58)) ;
  GALGAS_objectIR var_expressionResult_3552 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_3406, var_expressionResult_3552, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 72)) ;
  }
  GALGAS_prefixOperatorMap var_prefixOperatorMap_3648 ;
  GALGAS_llvmBinaryOperation var_binaryOperator_3686 ;
  GALGAS_objectIR var_leftOperand_3710 ;
  switch (object->mProperty_mOp.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_unsignedComplement:
    {
      var_prefixOperatorMap_3648 = constinArgument_inContext.getter_mUnsignedComplementOperatorMap (HERE) ;
      var_binaryOperator_3686 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 84)) ;
      switch (extensionGetter_type (var_expressionResult_3552, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)).enumValue ()) {
      case GALGAS_PLMType::kNotBuilt:
        break ;
      case GALGAS_PLMType::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray0  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 87)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray1  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 89)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_boolean:
      case GALGAS_PLMType::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray2  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 91)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 93)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 95)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray5  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 97)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray6  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 99)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 101)) ;
          var_leftOperand_3710.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_PLMType::kEnum_staticInteger:
        {
          const enumGalgasBool test_8 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 103)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_bigint var_minTarget_4737 ;
            GALGAS_bigint var_maxTarget_4756 ;
            GALGAS_bool joker_4758_3 ; // Joker input parameter
            GALGAS_uint joker_4758_2 ; // Joker input parameter
            GALGAS_string joker_4758_1 ; // Joker input parameter
            constinArgument_inOptionalTargetType.method_integer (var_minTarget_4737, var_maxTarget_4756, joker_4758_3, joker_4758_2, joker_4758_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 104)) ;
            const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_minTarget_4737.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 105)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray10  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 106)) ;
              var_leftOperand_3710.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_9) {
              var_leftOperand_3710 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 108)), var_maxTarget_4756  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 108)) ;
            }
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray11  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 111)) ;
            var_leftOperand_3710.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_PLMType::kEnum_integer:
        {
          const cEnumAssociatedValues_PLMType_integer * extractPtr_5288 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_3552, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 85)).unsafePointer ()) ;
          const GALGAS_uint extractedValue_bitCount = extractPtr_5288->mAssociatedValue3 ;
          var_leftOperand_3710 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 114)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114)).left_shift_operation (extractedValue_bitCount COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 114)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOperator:
    {
      var_prefixOperatorMap_3648 = constinArgument_inContext.getter_mNotOperatorMap (HERE) ;
      var_binaryOperator_3686 = GALGAS_llvmBinaryOperation::constructor_xor (SOURCE_FILE ("expression-prefix-operators.galgas", 118)) ;
      var_leftOperand_3710 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 119)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 119))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 119)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_prefixOperatorMap_3648 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      var_binaryOperator_3686 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 122)) ;
      var_leftOperand_3710 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 123)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 123)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minus:
    {
      var_prefixOperatorMap_3648 = constinArgument_inContext.getter_mUnaryMinusOperatorMap (HERE) ;
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("expression-prefix-operators.galgas", 126)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 128)), fixItArray13  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 127)) ;
      }
      const enumGalgasBool test_14 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_binaryOperator_3686 = GALGAS_llvmBinaryOperation::constructor_subNoOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 131)) ;
        var_leftOperand_3710 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 132)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 132)) ;
      }else if (kBoolFalse == test_14) {
        var_binaryOperator_3686 = GALGAS_llvmBinaryOperation::constructor_ssubOVF (SOURCE_FILE ("expression-prefix-operators.galgas", 134)) ;
        var_leftOperand_3710 = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 135)), GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135))  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 135)) ;
      }
    }
    break ;
  }
  var_prefixOperatorMap_3648.method_searchKey (GALGAS_lstring::constructor_new (extensionGetter_key (var_expressionResult_3552, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 139)) ;
  GALGAS_PLMType var_resultType_6285 = extensionGetter_type (var_expressionResult_3552, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 140)) ;
  const enumGalgasBool test_15 = var_expressionResult_3552.getter_isLiteralInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 142)).boolEnum () ;
  if (kBoolTrue == test_15) {
    GALGAS_bigint var_value_6428 ;
    GALGAS_PLMType joker_6401_1 ; // Joker input parameter
    var_expressionResult_3552.method_literalInteger (joker_6401_1, var_value_6428, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 143)) ;
    GALGAS_bigint var_result_6448 ;
    switch (object->mProperty_mOp.enumValue ()) {
    case GALGAS_prefixOperator::kNotBuilt:
      break ;
    case GALGAS_prefixOperator::kEnum_minusNoOvf:
      {
        var_result_6448 = var_value_6428.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 147)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_unsignedComplement:
      {
        const enumGalgasBool test_16 = constinArgument_inOptionalTargetType.getter_isInteger (SOURCE_FILE ("expression-prefix-operators.galgas", 149)).boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_bigint var_minTarget_6643 ;
          GALGAS_bigint var_maxTarget_6662 ;
          GALGAS_bool joker_6664_3 ; // Joker input parameter
          GALGAS_uint joker_6664_2 ; // Joker input parameter
          GALGAS_string joker_6664_1 ; // Joker input parameter
          constinArgument_inOptionalTargetType.method_integer (var_minTarget_6643, var_maxTarget_6662, joker_6664_3, joker_6664_2, joker_6664_1, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 150)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictInf, var_minTarget_6643.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 151)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the ~ operator cannot be applied to an inferred signed integer type"), fixItArray18  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 152)) ;
            var_result_6448.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_17) {
            var_result_6448 = var_value_6428.operator_xor (var_maxTarget_6662 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 154)) ;
          }
        }else if (kBoolFalse == test_16) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for the ~ operator, the inferred type should be an unsigned integer"), fixItArray19  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 157)) ;
          var_result_6448.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_prefixOperator::kEnum_minus:
      {
        var_result_6448 = var_value_6428.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 160)) ;
      }
      break ;
    case GALGAS_prefixOperator::kEnum_notOperator:
      {
        var_result_6448 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 162)).operator_xor (var_value_6428 COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 162)) ;
      }
      break ;
    }
    outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_6285, var_result_6448  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 164)) ;
  }else if (kBoolFalse == test_15) {
    {
    routine_getNewTempVariable (var_resultType_6285, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 167)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, outArgument_outResult, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 171)), object->mProperty_mOperatorLocation, var_leftOperand_3710, var_binaryOperator_3686, var_expressionResult_3552, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 169)) ;
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
                                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                             GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntegerInExpressionAST * object = (const cPtr_literalIntegerInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntegerInExpressionAST) ;
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-literal-integer.galgas", 63)), object->mProperty_mLiteralInteger.getter_bigint (HERE)  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
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
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, function_llvmRegularTypeMangledNameFromName (GALGAS_lstring::constructor_new (function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), constinArgument_inConstantName.getter_location (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) COMMA_SOURCE_FILE ("expression-literal-string.galgas", 34)) ;
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
                                                                            const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                            const GALGAS_bool /* constinArgument_inGuard */,
                                                                            const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                            const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                            const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                            GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                            GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                                            GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                            GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                            GALGAS_objectIR & outArgument_outResult,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringInExpressionAST * object = (const cPtr_literalStringInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringInExpressionAST) ;
  GALGAS_uint var_staticStringIndex_3696 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGlobalLiteralStringMap, object->mProperty_mLiteralString.getter_string (HERE), var_staticStringIndex_3696, inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 63)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalString (object->mProperty_mLiteralString.getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("expression-literal-string.galgas", 64)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)), var_staticStringIndex_3696  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 64)) ;
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
                                                                             const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                                             const GALGAS_bool /* constinArgument_inGuard */,
                                                                             const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                             const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                                             GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaryIndex */,
                                                                             GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
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
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("expression-true-false.galgas", 70)), temp_0  COMMA_SOURCE_FILE ("expression-true-false.galgas", 70)) ;
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
  cEnumerator_registerIntegerFieldListAST enumerator_2870 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_2870.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2870.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 62)) ;
    enumerator_2870.gotoNextObject () ;
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
                                                                             const GALGAS_PLMType constinArgument_inSelfType,
                                                                             const GALGAS_bool constinArgument_inGuard,
                                                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                             const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inCurrentMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             GALGAS_objectIR & outArgument_outResult,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_registerConstantExpressionAST * object = (const cPtr_registerConstantExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_registerConstantExpressionAST) ;
  GALGAS_PLMType var_registerType_4082 ;
  GALGAS_sliceMap var_registerBitSliceMap_4142 ;
  GALGAS_controlRegisterFieldMap var_registerFieldMap_4193 ;
  GALGAS_bigint var_registerAddress_4233 ;
  GALGAS_uint var_registerBitCount_4266 ;
  GALGAS_uint var_powerOfTwoForArraySize_4305 ;
  GALGAS_uint var_elementArraySize_4338 ;
  GALGAS_bool joker_4088 ; // Joker input parameter
  GALGAS_bool joker_4095 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_4239 ; // Joker input parameter
  constinArgument_inContext.getter_mControlRegisterMap (HERE).method_searchKey (object->mProperty_mRegisterName, var_registerType_4082, joker_4088, joker_4095, var_registerBitSliceMap_4142, var_registerFieldMap_4193, var_registerAddress_4233, joker_4239, var_registerBitCount_4266, var_powerOfTwoForArraySize_4305, var_elementArraySize_4338, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 85)) ;
  GALGAS_bigint var_accumulatedFieldStaticValues_4453 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 99)) ;
  GALGAS_operandList var_operandList_4485 = GALGAS_operandList::constructor_emptyList (SOURCE_FILE ("expression-cst-registre.galgas", 100)) ;
  cEnumerator_registerIntegerFieldListAST enumerator_4554 (object->mProperty_mFieldValues, kENUMERATION_UP) ;
  while (enumerator_4554.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4554.current_mFieldName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4554.current_mFieldName (HERE).getter_location (SOURCE_FILE ("expression-cst-registre.galgas", 103)), GALGAS_string ("anonymous selector not allowed here"), fixItArray1  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 103)) ;
      var_operandList_4485.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_0) {
      GALGAS_uint var_fieldBitIndex_4763 ;
      GALGAS_uint var_fieldBitCount_4796 ;
      var_registerFieldMap_4193.method_searchKey (enumerator_4554.current_mFieldName (HERE), var_fieldBitIndex_4763, var_fieldBitCount_4796, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 105)) ;
      GALGAS_objectIR var_expressionResultPossibleReference_5349 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_4554.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-cst-registre.galgas", 115)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_5349, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 111)) ;
      GALGAS_objectIR var_expressionResult_5515 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_5349, var_expressionResult_5515, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 125)) ;
      }
      switch (extensionGetter_type (var_expressionResult_5515, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 131)).enumValue ()) {
      case GALGAS_PLMType::kNotBuilt:
        break ;
      case GALGAS_PLMType::kEnum_arrayType:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray2  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 133)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_opaque:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray3  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 135)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_enumeration:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray4  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 137)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_structure:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 139)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_boolean:
      case GALGAS_PLMType::kEnum_void:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 141)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 143)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_pointer:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 145)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_function:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 147)) ;
        }
        break ;
      case GALGAS_PLMType::kEnum_staticInteger:
        {
          GALGAS_bigint var_value_6604 ;
          GALGAS_PLMType joker_6577_1 ; // Joker input parameter
          var_expressionResult_5515.method_literalInteger (joker_6577_1, var_value_6604, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 149)) ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_value_6604.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 150)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("this integer expression should be positive"), fixItArray11  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 151)) ;
          }else if (kBoolFalse == test_10) {
            const enumGalgasBool test_12 = GALGAS_bool (kIsStrictInf, var_value_6604.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 152)).left_shift_operation (var_fieldBitCount_4796 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 152)))).boolEnum () ;
            if (kBoolTrue == test_12) {
              var_accumulatedFieldStaticValues_4453 = var_accumulatedFieldStaticValues_4453.operator_or (var_value_6604.left_shift_operation (var_fieldBitIndex_4763 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 153)) ;
            }else if (kBoolFalse == test_12) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("expression too large (should be < ").add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)).left_shift_operation (var_fieldBitCount_4796 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)).getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)), fixItArray13  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 155)) ;
            }
          }
        }
        break ;
      case GALGAS_PLMType::kEnum_integer:
        {
          const cEnumAssociatedValues_PLMType_integer * extractPtr_8874 = (const cEnumAssociatedValues_PLMType_integer *) (extensionGetter_type (var_expressionResult_5515, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 131)).unsafePointer ()) ;
          const GALGAS_bigint extractedValue_min = extractPtr_8874->mAssociatedValue0 ;
          const GALGAS_bigint extractedValue_max = extractPtr_8874->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_unsigned = extractPtr_8874->mAssociatedValue2 ;
          const GALGAS_uint extractedValue_expressionBitCount = extractPtr_8874->mAssociatedValue3 ;
          const enumGalgasBool test_14 = extractedValue_unsigned.operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 158)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("an unsigned integer expression is required here"), fixItArray15  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 159)) ;
          }else if (kBoolFalse == test_14) {
            GALGAS_bool test_16 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_4796)) ;
            if (kBoolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 161)).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 161)) ;
            }
            const enumGalgasBool test_17 = test_16.boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (enumerator_4554.current_mExpressionLocation (HERE), GALGAS_string ("operations that can generate panic are not allowed here: the expression should be an $uint").add_operation (var_fieldBitCount_4796.getter_string (SOURCE_FILE ("expression-cst-registre.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 163)), fixItArray18  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 162)) ;
            }
            GALGAS_bool test_19 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_fieldBitCount_4796)) ;
            if (kBoolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
            }
            GALGAS_bool test_20 = test_19 ;
            if (kBoolTrue == test_20.boolEnum ()) {
              test_20 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("expression-cst-registre.galgas", 166)) ;
            }
            const enumGalgasBool test_21 = test_20.boolEnum () ;
            if (kBoolTrue == test_21) {
              {
              extensionSetter_appendUpperBoundCheck (ioArgument_ioInstructionGenerationList, var_expressionResult_5515, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)).left_shift_operation (var_fieldBitCount_4796 COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 169)), function_panicCodeForRegisterFieldOvf (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 170)), enumerator_4554.current_mExpressionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 167)) ;
              }
            }
            GALGAS_objectIR var_partialResult_8003 = var_expressionResult_5515 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictInf, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4266)).boolEnum () ;
            if (kBoolTrue == test_22) {
              GALGAS_objectIR var_extendedResult_8160 ;
              {
              routine_getNewTempVariable (var_registerType_4082, ioArgument_ioTemporaries, var_extendedResult_8160, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 177)) ;
              }
              {
              extensionSetter_appendExtend (ioArgument_ioInstructionGenerationList, var_extendedResult_8160, var_partialResult_8003, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 178)) ;
              }
              var_partialResult_8003 = var_extendedResult_8160 ;
            }else if (kBoolFalse == test_22) {
              const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, extractedValue_expressionBitCount.objectCompare (var_registerBitCount_4266)).boolEnum () ;
              if (kBoolTrue == test_23) {
                GALGAS_objectIR var_truncatedResult_8434 ;
                {
                routine_getNewTempVariable (var_registerType_4082, ioArgument_ioTemporaries, var_truncatedResult_8434, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 181)) ;
                }
                {
                extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_truncatedResult_8434, var_partialResult_8003, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 182)) ;
                }
                var_partialResult_8003 = var_truncatedResult_8434 ;
              }
            }
            GALGAS_objectIR var_shiftedResult_8692 ;
            {
            routine_getNewTempVariable (var_registerType_4082, ioArgument_ioTemporaries, var_shiftedResult_8692, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 186)) ;
            }
            {
            extensionSetter_appendShiftLeft (ioArgument_ioInstructionGenerationList, var_shiftedResult_8692, var_partialResult_8003, var_fieldBitIndex_4763, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 187)) ;
            }
            var_operandList_4485.addAssign_operation (var_shiftedResult_8692  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 189)) ;
          }
        }
        break ;
      }
    }
    enumerator_4554.gotoNextObject () ;
  }
  outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_registerType_4082, var_accumulatedFieldStaticValues_4453  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 195)) ;
  cEnumerator_operandList enumerator_9079 (var_operandList_4485, kENUMERATION_UP) ;
  while (enumerator_9079.hasCurrentObject ()) {
    GALGAS_objectIR var_newResult_9151 ;
    {
    routine_getNewTempVariable (var_registerType_4082, ioArgument_ioTemporaries, var_newResult_9151, inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 197)) ;
    }
    {
    extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_newResult_9151, extensionGetter_type (var_newResult_9151, inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 200)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 201)), outArgument_outResult, GALGAS_llvmBinaryOperation::constructor_ior (SOURCE_FILE ("expression-cst-registre.galgas", 203)), enumerator_9079.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("expression-cst-registre.galgas", 198)) ;
    }
    outArgument_outResult = var_newResult_9151 ;
    enumerator_9079.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mReceiverName COMMA_SOURCE_FILE ("expression-primary.galgas", 83)) ;
    }
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_3468 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3468.hasCurrentObject ()) {
    switch (enumerator_3468.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_3532 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_3468.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_3532->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_3677 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_3468.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3677->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 89)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_4229 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_3468.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_4229->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_3765 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_3765.hasCurrentObject ()) {
          switch (enumerator_3765.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4019 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3765.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4019->mAssociatedValue1 ;
              const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_1) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 96)) COMMA_SOURCE_FILE ("expression-primary.galgas", 96)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4132 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3765.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_4132->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 98)) ;
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
          enumerator_3765.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_3468.gotoNextObject () ;
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
  cEnumerator_primaryInExpressionAccessListAST enumerator_4758 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_4758.hasCurrentObject ()) {
    switch (enumerator_4758.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_4822 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_4758.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_4822->mAssociatedValue0 ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_4951 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4758.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_4951->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 116)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5487 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4758.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_5487->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_5039 (extractedValue_arguments, kENUMERATION_UP) ;
        while (enumerator_5039.hasCurrentObject ()) {
          switch (enumerator_5039.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5293 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5039.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_5293->mAssociatedValue1 ;
              const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_0) {
                {
                ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 123)) COMMA_SOURCE_FILE ("expression-primary.galgas", 123)) ;
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_5390 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5039.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_expression = extractPtr_5390->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 125)) ;
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
          enumerator_5039.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4758.gotoNextObject () ;
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
//                       Overriding extension method '@primaryInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inGuard,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 155)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 155)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      const GALGAS_primaryInExpressionAST temp_3 = object ;
      callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_3.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 157)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 172)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mReceiverName.getter_location (SOURCE_FILE ("expression-primary.galgas", 173)), GALGAS_string ("'self' is not available in this context"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 173)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const GALGAS_primaryInExpressionAST temp_6 = object ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_6.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 175)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'procAnalyzeAccesListInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_procAnalyzeAccesListInExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                               const GALGAS_bool constinArgument_inGuard,
                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                               const GALGAS_PLMType constinArgument_inOptionalTargetType,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inCurrentMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_primaryInExpressionAccessListAST enumerator_13980 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_13980.hasCurrentObject ()) {
    switch (enumerator_13980.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14480 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_13980.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_14480->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (ioArgument_ioResult, extractedValue_propertyName, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 351)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15099 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_13980.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15099->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_15099->mAssociatedValue1 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 364)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_15796 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_13980.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_methodName = extractPtr_15796->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_15796->mAssociatedValue1 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_15796->mAssociatedValue2 ;
        const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 382)) ;
          ioArgument_ioResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 384)) ;
          }
        }
      }
      break ;
    }
    enumerator_13980.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'analyzeRegisterExpression'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRegisterExpression (const GALGAS_PLMType constinArgument_inSelfType,
                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                        const GALGAS_semanticContext constinArgument_inContext,
                                        const GALGAS_mode constinArgument_inCurrentMode,
                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                        const GALGAS_PLMType constinArgument_inRegisterType,
                                        const GALGAS_bigint constinArgument_inRegisterAddress,
                                        const GALGAS_sliceMap constinArgument_inRegisterSliceMap,
                                        const GALGAS_uint constinArgument_inRegisterArraySize,
                                        const GALGAS_uint constinArgument_inRegisterElementSize,
                                        const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                        GALGAS_objectIR & outArgument_outResult,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("expression-primary.galgas", 423)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_getNewTempVariable (constinArgument_inRegisterType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 424)) ;
    }
    {
    extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, constinArgument_inRegisterAddress, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 425)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_primaryInExpressionAccessListAST var_accessList_16995 = constinArgument_inAccessList ;
    const enumGalgasBool test_1 = var_accessList_16995.getter_mAccessAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 428)).getter_isArrayAccess (SOURCE_FILE ("expression-primary.galgas", 428)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_primaryInExpressionAccessAST var_first_17109 ;
      {
      var_accessList_16995.setter_popFirst (var_first_17109, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 429)) ;
      }
      GALGAS_expressionAST var_indexExpression_17177 ;
      GALGAS_location var_endOfIndex_17214 ;
      var_first_17109.method_arrayAccess (var_indexExpression_17177, var_endOfIndex_17214, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 430)) ;
      GALGAS_objectIR var_indexIR_17787 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_indexExpression_17177, var_endOfIndex_17214, constinArgument_inRegisterArraySize.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 443)), constinArgument_inRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_17787, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 431)) ;
      }
      const enumGalgasBool test_2 = var_indexIR_17787.getter_isLiteralInteger (SOURCE_FILE ("expression-primary.galgas", 448)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bigint var_idx_17930 ;
        GALGAS_PLMType joker_17905_1 ; // Joker input parameter
        var_indexIR_17787.method_literalInteger (joker_17905_1, var_idx_17930, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 449)) ;
        GALGAS_bigint var_addr_17948 = constinArgument_inRegisterAddress.add_operation (var_idx_17930.multiply_operation (constinArgument_inRegisterElementSize.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 450)) ;
        {
        routine_getNewTempVariable (constinArgument_inRegisterType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 451)) ;
        }
        {
        extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_addr_17948, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 452)) ;
        }
      }else if (kBoolFalse == test_2) {
        {
        routine_getNewTempVariable (constinArgument_inRegisterType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 454)) ;
        }
        {
        extensionSetter_appendLoadVolatileRegisterWithSubscript (ioArgument_ioInstructionGenerationList, outArgument_outResult, var_indexIR_17787, constinArgument_inRegisterAddress, constinArgument_inRegisterElementSize.getter_bigint (SOURCE_FILE ("expression-primary.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 455)) ;
        }
      }
    }else if (kBoolFalse == test_1) {
      {
      routine_getNewTempVariable (constinArgument_inRegisterType, ioArgument_ioTemporaries, outArgument_outResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 463)) ;
      }
      {
      extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, outArgument_outResult, constinArgument_inRegisterAddress, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 464)) ;
      }
    }
    GALGAS_sliceMap var_currentSliceMap_18664 = constinArgument_inRegisterSliceMap ;
    GALGAS_PLMType var_currentType_18705 = constinArgument_inRegisterType ;
    cEnumerator_primaryInExpressionAccessListAST enumerator_18753 (var_accessList_16995, kENUMERATION_UP) ;
    while (enumerator_18753.hasCurrentObject ()) {
      switch (enumerator_18753.current_mAccess (HERE).enumValue ()) {
      case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
        break ;
      case GALGAS_primaryInExpressionAccessAST::kEnum_property:
        {
          const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_19492 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_18753.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_19492->mAssociatedValue0 ;
          GALGAS_llvmBinaryOperation var_accessOperator_18932 ;
          GALGAS_bigint var_accessRightOperand_18974 ;
          GALGAS_sliceMap var_subMap_19006 ;
          GALGAS_PLMType var_resultType_19041 ;
          var_currentSliceMap_18664.method_searchKey (extractedValue_propertyName, var_accessOperator_18932, var_accessRightOperand_18974, var_subMap_19006, var_resultType_19041, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 472)) ;
          GALGAS_objectIR var_resultIR_19121 ;
          {
          routine_getNewTempVariable (var_resultType_19041, ioArgument_ioTemporaries, var_resultIR_19121, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 479)) ;
          }
          {
          extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultIR_19121, extensionGetter_type (outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 482)), extractedValue_propertyName.getter_location (HERE), outArgument_outResult, var_accessOperator_18932, GALGAS_objectIR::constructor_literalInteger (GALGAS_PLMType::constructor_staticInteger (SOURCE_FILE ("expression-primary.galgas", 486)), var_accessRightOperand_18974  COMMA_SOURCE_FILE ("expression-primary.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 480)) ;
          }
          var_currentSliceMap_18664 = var_subMap_19006 ;
          var_currentType_18705 = var_resultType_19041 ;
          outArgument_outResult = var_resultIR_19121 ;
        }
        break ;
      case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_19632 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_18753.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_19632->mAssociatedValue1 ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("receiver is a control register, subscripting is invalid here"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 492)) ;
        }
        break ;
      case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
        {
          const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_19767 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_18753.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_location extractedValue_errorLocation = extractPtr_19767->mAssociatedValue2 ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("receiver is a control register, cannot be used as a function"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 494)) ;
        }
        break ;
      }
      enumerator_18753.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInExpression'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                               const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                               const GALGAS_semanticContext /* constinArgument_inContext */,
                                               const GALGAS_mode /* constinArgument_inCurrentMode */,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                               GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_type_23268 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 588)) ;
  GALGAS_propertyMap var_propertyMap_23317 = extensionGetter_propertyMap (var_type_23268, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 589)) ;
  GALGAS_propertyAccessKind var_accessKind_23418 ;
  GALGAS_bool joker_23381 ; // Joker input parameter
  var_propertyMap_23317.method_searchKey (constinArgument_inPropertyName, joker_23381, var_accessKind_23418, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 590)) ;
  switch (var_accessKind_23418.enumValue ()) {
  case GALGAS_propertyAccessKind::kNotBuilt:
    break ;
  case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 593)), GALGAS_string ("a method cannot be used in this context"), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 593)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyAccessKind_constantProperty * extractPtr_23614 = (const cEnumAssociatedValues_propertyAccessKind_constantProperty *) (var_accessKind_23418.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_value = extractPtr_23614->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_value ;
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_indexed:
    {
      const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_24025 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_accessKind_23418.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_propertyType = extractPtr_24025->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_24025->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_23734 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_23734, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 597)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 599)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 600)), extractedValue_propertyType, var_property_5F_llvmName_23734, extractedValue_propertyIndex, constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 598)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_23734  COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleArrayAccessInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                            const GALGAS_location constinArgument_inEndOfIndex,
                                            const GALGAS_PLMType constinArgument_inSelfType,
                                            const GALGAS_bool constinArgument_inGuard,
                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                            const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inCurrentMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 629)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 629)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_PLMType var_elementType_25006 ;
    GALGAS_bigint var_arraySize_25034 ;
    GALGAS_lstring joker_24975_2 ; // Joker input parameter
    GALGAS_propertyMap joker_24975_1 ; // Joker input parameter
    GALGAS_constantMap joker_25036_3 ; // Joker input parameter
    GALGAS_PLMTypeFlags joker_25036_2 ; // Joker input parameter
    GALGAS_string joker_25036_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 630)).method_arrayType (joker_24975_2, joker_24975_1, var_elementType_25006, var_arraySize_25034, joker_25036_3, joker_25036_2, joker_25036_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 630)) ;
    {
    routine_handleArraySubscript (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, var_arraySize_25034, var_elementType_25006, ioArgument_ioInstructionGenerationList, ioArgument_ioResult, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
    }
    GALGAS_objectIR var_loadedObjectIR_25621 ;
    {
    routine_getNewTempVariable (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)), ioArgument_ioTemporaries, var_loadedObjectIR_25621, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 648)) ;
    }
    {
    extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, var_loadedObjectIR_25621, extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 654)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'handleFunctionCallInExpression'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpression (const GALGAS_lstring constinArgument_inMethodName,
                                             GALGAS_objectIR & ioArgument_ioObjectIR,
                                             const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType var_receiverType_26577 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 674)) ;
  GALGAS_propertyMap var_propertyMap_26628 = extensionGetter_propertyMap (var_receiverType_26577, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
  GALGAS_lstring var_key_26667 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
  GALGAS_propertyAccessKind var_propertyAccess_26802 ;
  GALGAS_bool joker_26761 ; // Joker input parameter
  var_propertyMap_26628.method_searchKey (var_key_26667, joker_26761, var_propertyAccess_26802, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 677)) ;
  switch (var_propertyAccess_26802.enumValue ()) {
  case GALGAS_propertyAccessKind::kNotBuilt:
    break ;
  case GALGAS_propertyAccessKind::kEnum_constantProperty:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 680)), GALGAS_string ("a constant cannot be used as method"), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 680)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
    {
      const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_28994 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_26802.unsafePointer ()) ;
      const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_28994->mAssociatedValue0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_routineDescriptor.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 683)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-primary.galgas", 683)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 684)), GALGAS_string ("not a function (returns no value)"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 684)) ;
        ioArgument_ioObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_1) {
        GALGAS_calleeKindIR var_calleeKind_27232 = function_checkMode (constinArgument_inMode, extensionGetter_executionMode (extractedValue_routineDescriptor.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 689)), extractedValue_routineDescriptor.getter_mRoutineKind (HERE), constinArgument_inMethodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 687)) ;
        GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_27538 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 694)) ;
        var_effectiveParameterListIR_27538.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 695)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 695)) ;
        {
        routine_analyzeEffectiveParameters (constinArgument_inSelfType, extractedValue_routineDescriptor.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_27538, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 697)) ;
        }
        GALGAS_objectIR var_callReturnedResult_28400 ;
        {
        routine_getNewTempVariable (extractedValue_routineDescriptor.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 713)), ioArgument_ioTemporaries, var_callReturnedResult_28400, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 713)) ;
        }
        GALGAS_lstring var_routineMangledName_28453 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)) ;
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_callReturnedResult_28400, var_routineMangledName_28453, var_routineMangledName_28453, var_calleeKind_27232, var_effectiveParameterListIR_27538  COMMA_SOURCE_FILE ("expression-primary.galgas", 716))  COMMA_SOURCE_FILE ("expression-primary.galgas", 716)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_28453 COMMA_SOURCE_FILE ("expression-primary.galgas", 725)) ;
        }
        ioArgument_ioObjectIR = var_callReturnedResult_28400 ;
      }
    }
    break ;
  case GALGAS_propertyAccessKind::kEnum_indexed:
    {
      const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_31198 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_26802.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_propertyType = extractPtr_31198->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_propertyIndex = extractPtr_31198->mAssociatedValue1 ;
      const enumGalgasBool test_3 = extractedValue_propertyType.getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 730)).operator_not (SOURCE_FILE ("expression-primary.galgas", 730)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 731)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 731)) ;
        ioArgument_ioObjectIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        GALGAS_routineDescriptor var_descriptor_29250 ;
        extractedValue_propertyType.method_function (var_descriptor_29250, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 733)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_descriptor_29250.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 735)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inMethodName.getter_location (SOURCE_FILE ("expression-primary.galgas", 736)), GALGAS_string ("not a function (returns no value)"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 736)) ;
          ioArgument_ioObjectIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_29774 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 746)) ;
          {
          routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_descriptor_29250.getter_mSignature (HERE), constinArgument_inArguments, constinArgument_inMethodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_29774, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 747)) ;
          }
          GALGAS_string var_property_5F_llvmName_30464 ;
          {
          extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_30464, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 763)) ;
          }
          {
          extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 765)), extensionGetter_llvmName (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 766)), extractedValue_propertyType, var_property_5F_llvmName_30464, extractedValue_propertyIndex, constinArgument_inMethodName.getter_string (SOURCE_FILE ("expression-primary.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 764)) ;
          }
          GALGAS_objectIR var_callReturnedResult_30872 ;
          {
          routine_getNewTempVariable (var_descriptor_29250.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 773)), ioArgument_ioTemporaries, var_callReturnedResult_30872, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 773)) ;
          }
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_30464  COMMA_SOURCE_FILE ("expression-primary.galgas", 776)), extractedValue_propertyType, var_callReturnedResult_30872, var_effectiveParameterListIR_29774  COMMA_SOURCE_FILE ("expression-primary.galgas", 775))  COMMA_SOURCE_FILE ("expression-primary.galgas", 775)) ;
          ioArgument_ioObjectIR = var_callReturnedResult_30872 ;
        }
      }
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, object->mProperty_mStandaloneFunctionName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_2054 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2054.hasCurrentObject ()) {
    switch (enumerator_2054.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2284 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2054.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2284->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2393 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2054.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2393->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
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
    enumerator_2054.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_2995 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_2995.hasCurrentObject ()) {
    switch (enumerator_2995.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3225 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2995.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3225->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3318 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2995.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3318->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
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
    enumerator_2995.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                                 const GALGAS_bool constinArgument_inGuard,
                                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                                 const GALGAS_PLMType /* constinArgument_inOptionalTargetType */,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (HERE), GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 93)) ;
  }
  GALGAS_lstring var_routineMangledName_4691 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mStandaloneFunctionName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 96)) ;
  GALGAS_lstring var_signature_4814 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 98)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_5041 ;
  GALGAS_routineDescriptor var_routineDescriptor_5083 ;
  GALGAS_location joker_5089 ; // Joker input parameter
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), object->mProperty_mStandaloneFunctionName, var_signature_4814, var_LLVMInvocationRoutineName_5041, var_routineDescriptor_5083, joker_5089, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 100)) ;
  GALGAS_routineKind var_routineKind_5189 = var_routineDescriptor_5083.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_5239 = extensionGetter_executionMode (var_routineKind_5189, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 109)) ;
  GALGAS_routineTypedSignature var_formalSignature_5291 = var_routineDescriptor_5083.getter_mSignature (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_routineDescriptor_5083.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)).objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("expression-standalone-function-call.galgas", 112)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mStandaloneFunctionName.getter_location (SOURCE_FILE ("expression-standalone-function-call.galgas", 113)), GALGAS_string ("not a function (returns no value)"), fixItArray3  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 113)) ;
    var_routineDescriptor_5083.drop () ; // Release error dropped variable
    outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_2) {
    GALGAS_calleeKindIR var_calleeKind_5592 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_5239, var_routineKind_5189, object->mProperty_mStandaloneFunctionName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 116)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5842 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 123)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature_5291, object->mProperty_mArguments, object->mProperty_mStandaloneFunctionName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5842, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 124)) ;
    }
    {
    routine_getNewTempVariable (var_routineDescriptor_5083.getter_mReturnTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 140)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 140)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), outArgument_outFunctionCallReturnedValue, var_routineMangledName_4691, var_LLVMInvocationRoutineName_5041, var_calleeKind_5592, var_effectiveParameterListIR_5842  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 142))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 142)) ;
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_4691 COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 151)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                          extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_analyzeExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 36)) ;
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
                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_2997 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 57)) ;
  GALGAS_objectIR var_expressionResult_3443 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("directive-check.galgas", 62)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_2997, var_expressionResult_3443, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 58)) ;
  const enumGalgasBool test_0 = extensionGetter_type (var_expressionResult_3443, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 73)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 73)).operator_not (SOURCE_FILE ("directive-check.galgas", 73)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3443, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 77)).operator_not (SOURCE_FILE ("directive-check.galgas", 77)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 78)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3826 ;
    GALGAS_PLMType joker_3803_1 ; // Joker input parameter
    var_expressionResult_3443.method_literalInteger (joker_3803_1, var_value_3826, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 80)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3826.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 81)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
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
//            Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mProperty_mTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                              extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@assignmentInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                              const GALGAS_PLMType constinArgument_inSelfType,
                                                              const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                              const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                              const GALGAS_mode constinArgument_inCurrentMode,
                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                              GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_PLMType var_targetType_3217 ;
  extensionMethod_type (object->mProperty_mTargetAST, constinArgument_inSelfType, ioArgument_ioUniversalMap, var_targetType_3217, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3717 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3217, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3717, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
  GALGAS_LValueRepresentation var_lvalueIR_4195 ;
  extensionMethod_analyzeLValue (object->mProperty_mTargetAST, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_4195, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 78)) ;
  GALGAS_objectIR var_sourceOperand_4340 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_3717, var_sourceOperand_4340, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 92)) ;
  }
  GALGAS_objectIR var_result_4359 = function_checkAssignmentCompatibility (var_sourceOperand_4340, var_targetType_3217, object->mProperty_mTargetAST.getter_mIdentifier (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 100)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 97)) ;
  switch (var_lvalueIR_4195.enumValue ()) {
  case GALGAS_LValueRepresentation::kNotBuilt:
    break ;
  case GALGAS_LValueRepresentation::kEnum_volatileAbsoluteReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference * extractPtr_4700 = (const cEnumAssociatedValues_LValueRepresentation_volatileAbsoluteReference *) (var_lvalueIR_4195.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_4700->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_address = extractPtr_4700->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_address.getter_bigint (SOURCE_FILE ("instruction-assignment.galgas", 105)), var_result_4359, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 105)) ;
      }
    }
    break ;
  case GALGAS_LValueRepresentation::kEnum_volatileIndirectReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference * extractPtr_4864 = (const cEnumAssociatedValues_LValueRepresentation_volatileIndirectReference *) (var_lvalueIR_4195.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_4864->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_4864->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, extractedValue_type, extractedValue_llvmName, var_result_4359, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
      }
    }
    break ;
  case GALGAS_LValueRepresentation::kEnum_universalReference:
    {
      const cEnumAssociatedValues_LValueRepresentation_universalReference * extractPtr_5017 = (const cEnumAssociatedValues_LValueRepresentation_universalReference *) (var_lvalueIR_4195.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5017->mAssociatedValue0 ;
      const GALGAS_string extractedValue_llvmName = extractPtr_5017->mAssociatedValue1 ;
      {
      extensionSetter_appendStoreToUniversalReference (ioArgument_ioInstructionGenerationList, extractedValue_llvmName, extractedValue_type, var_result_4359, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 109)) ;
      }
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                extensionMethod_assignmentInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyze (defineExtensionMethod_assignmentInstructionAST_analyze, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2723 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 68)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2723 COMMA_SOURCE_FILE ("instruction-var.galgas", 69)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 71)) ;
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
  GALGAS_lstring var_typeName_3145 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 77)) ;
  {
  ioArgument_ioGraph.setter_noteNode (var_typeName_3145 COMMA_SOURCE_FILE ("instruction-var.galgas", 78)) ;
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
                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 100)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 100)) ;
  }
  GALGAS_PLMType var_targetType_4310 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_4952 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4310, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4952, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 103)) ;
  GALGAS_objectIR var_expressionResult_5088 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_4952, var_expressionResult_5088, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 117)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4310.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-var.galgas", 123)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4310 = extensionGetter_type (var_expressionResult_5088, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }
  GALGAS_objectIR var_result_5214 = function_checkAssignmentCompatibility (var_expressionResult_5088, var_targetType_4310, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  GALGAS_lstring var_plmName_5461 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 134))  COMMA_SOURCE_FILE ("instruction-var.galgas", 134)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 135)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5598 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5598, object->mProperty_mVarName, extensionGetter_type (var_result_5214, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)), var_plmName_5461, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 136)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_5461.getter_string (SOURCE_FILE ("instruction-var.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5214, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138))  COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_plmName_5461.getter_string (SOURCE_FILE ("instruction-var.galgas", 140)), extensionGetter_type (var_result_5214, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)), var_result_5214, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 139)) ;
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
                                                       const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                       const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                       const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_PLMType var_targetType_6745 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 161)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 161)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_6745, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 163)).operator_not (SOURCE_FILE ("instruction-var.galgas", 163)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 164)), GALGAS_string ("$").add_operation (extensionGetter_key (var_targetType_6745, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 164)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 164)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 164)) ;
  }
  GALGAS_lstring var_plmName_6986 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 167)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 167)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 167))  COMMA_SOURCE_FILE ("instruction-var.galgas", 167)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 168)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7123 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7123, object->mProperty_mVarName, var_targetType_6745, var_plmName_6986, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 169)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 169)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_6986.getter_string (SOURCE_FILE ("instruction-var.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171)), extensionGetter_llvmTypeName (var_targetType_6745, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 171))  COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2148 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mOptionalTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2148 COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
    }
  }
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
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
                                                                     const GALGAS_PLMType constinArgument_inSelfType,
                                                                     const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                     const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                     const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                     const GALGAS_mode constinArgument_inCurrentMode,
                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                     GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  GALGAS_PLMType temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 73)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }
  GALGAS_PLMType var_targetType_3402 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4054 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3402, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4054, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 76)) ;
  GALGAS_objectIR var_expressionResult_4200 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4054, var_expressionResult_4200, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  }
  GALGAS_objectIR var_result_4247 = function_checkAssignmentCompatibility (var_expressionResult_4200, var_targetType_3402, object->mProperty_mConstantName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 96)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)).operator_not (SOURCE_FILE ("instruction-let.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 105)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 105)) ;
    var_result_4247.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_plmName_4618 = GALGAS_lstring::constructor_new (object->mProperty_mConstantName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)), object->mProperty_mConstantName.getter_location (SOURCE_FILE ("instruction-let.galgas", 108))  COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 109)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_4618.getter_string (SOURCE_FILE ("instruction-let.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111))  COMMA_SOURCE_FILE ("instruction-let.galgas", 111)) ;
    {
    extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), function_llvmNameForLocalVariable (var_plmName_4618.getter_string (SOURCE_FILE ("instruction-let.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)), var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)) ;
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5058 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5058, object->mProperty_mConstantName, extensionGetter_type (var_result_4247, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 118)), var_plmName_4618, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
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
//               Overriding extension method '@letInstructionNOP noteInstructionTypesInPrecedenceGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * /* inObject */,
                                                                                     GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                                              extensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionNOP_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@letInstructionNOP analyze'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_letInstructionNOP_analyze (const cPtr_instructionAST * /* inObject */,
                                                       const GALGAS_PLMType /* constinArgument_inSelfType */,
                                                       const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                       const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                       const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                       const GALGAS_semanticContext /* constinArgument_inContext */,
                                                       const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                       GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                       GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & /* ioArgument_ioUniversalMap */,
                                                       GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 49)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_letInstructionNOP_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_letInstructionNOP.mSlotID,
                                extensionMethod_letInstructionNOP_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_letInstructionNOP_analyze (defineExtensionMethod_letInstructionNOP_analyze, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
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
                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                          const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                          const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)), fixItArray1  COMMA_SOURCE_FILE ("instruction-assert.galgas", 57)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_3159 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 60)) ;
  GALGAS_objectIR var_expressionValue_3608 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-assert.galgas", 65)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3159, var_expressionValue_3608, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 61)) ;
  const enumGalgasBool test_2 = extensionGetter_type (var_expressionValue_3608, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 76)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 76)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 76)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3608, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 80)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 81)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_instructionGenerationList_3159, var_expressionValue_3608  COMMA_SOURCE_FILE ("instruction-assert.galgas", 85))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 85)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 113)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 124)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
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
                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                         const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 54)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)), fixItArray1  COMMA_SOURCE_FILE ("instruction-panic.galgas", 55)) ;
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3171 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 58)) ;
  GALGAS_objectIR var_result_3639 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 63)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3171, var_result_3639, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 59)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3171.getter_length (SOURCE_FILE ("instruction-panic.galgas", 75)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3639.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 76)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 76)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3639, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_3981 ;
    GALGAS_bigint var_max_3994 ;
    GALGAS_bool joker_3996_3 ; // Joker input parameter
    GALGAS_uint joker_3996_2 ; // Joker input parameter
    GALGAS_string joker_3996_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)).method_integer (var_min_3981, var_max_3994, joker_3996_3, joker_3996_2, joker_3996_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
    GALGAS_bigint var_throwValue_4052 ;
    GALGAS_PLMType joker_4028_1 ; // Joker input parameter
    var_result_3639.method_literalInteger (joker_4028_1, var_throwValue_4052, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4052.objectCompare (var_min_3981)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4052.objectCompare (var_max_3994)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_throwValue_4052  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
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
  GALGAS_uint var_staticStringIndex_5346 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 110)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 110)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 110)), var_staticStringIndex_5346, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_5346.getter_string (SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
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
                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResultPossibleReference_5160 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-if.galgas", 116)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5160, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
  GALGAS_objectIR var_testResult_5294 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5160, var_testResult_5294, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 126)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testResult_5294, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 132)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 132)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_5294, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 133)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 133)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5294, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)).operator_not (SOURCE_FILE ("instruction-if.galgas", 134)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 135)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5294, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 136)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 137)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
      }
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5816 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5816, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_5980 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 142)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_5980, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6665 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 159)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6665, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7282 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7282, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 175)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5294, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_5980, var_elseInstructionGenerationList_6665  COMMA_SOURCE_FILE ("instruction-if.galgas", 178))  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
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
  GALGAS_string var_labelTrue_8448 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).getter_string (SOURCE_FILE ("instruction-if.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 204)) ;
  GALGAS_string var_labelFalse_8511 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GALGAS_string var_labelEnd_8573 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (var_labelTrue_8448, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (var_labelFalse_8511, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8448.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8573, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8511.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8573, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8573.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 226)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
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
  cEnumerator_syncInstructionBranchListAST enumerator_5135 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_5135.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5135.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 136)) ;
    enumerator_5135.gotoNextObject () ;
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
                                                        const GALGAS_PLMType constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                        const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                        const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                        const GALGAS_semanticContext constinArgument_inContext,
                                                        const GALGAS_mode constinArgument_inCurrentMode,
                                                        GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                        GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                        GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                        GALGAS_allocaList & ioArgument_ioAllocaList,
                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_syncInstructionBranchListIR var_onInstructionBranchListIR_6308 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 157)) ;
  cEnumerator_syncInstructionBranchListAST enumerator_6379 (object->mProperty_mBranchList, kENUMERATION_UP) ;
  while (enumerator_6379.hasCurrentObject ()) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_6404 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6404, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 159)) ;
    }
    GALGAS_guardedCommandIR var_guardedCommandIR_6534 ;
    switch (enumerator_6379.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandAST_synchronization * extractPtr_7702 = (const cEnumAssociatedValues_guardedCommandAST_synchronization *) (enumerator_6379.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_7702->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_7702->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_7702->mAssociatedValue2 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_7702->mAssociatedValue3 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6713 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 165)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_7311 ;
        GALGAS_lstring var_guardMangledName_7367 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6713, var_guardEffectiveParameterListIR_7311, var_guardMangledName_7367, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 166)) ;
        }
        var_guardedCommandIR_6534 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_7367.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_6713, var_guardEffectiveParameterListIR_7311  COMMA_SOURCE_FILE ("instruction-sync.galgas", 182)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_8756 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6379.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_8756->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_8756->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_8756->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_7821 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 190)) ;
        GALGAS_objectIR var_sourceOperand_8323 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 195)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_7821, var_sourceOperand_8323, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 191)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_8323, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 205)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 205)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 206)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_8323, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 207)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 208)) ;
          }
        }
        var_guardedCommandIR_6534 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_7821, var_sourceOperand_8323  COMMA_SOURCE_FILE ("instruction-sync.galgas", 210)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_10868 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6379.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_10868->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_10868->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_10868->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_10868->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_10868->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_10868->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_8935 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 216)) ;
        GALGAS_objectIR var_boolExpressionResult_9446 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-sync.galgas", 221)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8935, var_boolExpressionResult_9446, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 217)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_9446, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 231)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 231)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 232)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_9446, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 233)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 234)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_9764 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 236)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_10362 ;
        GALGAS_lstring var_guardMangledName_10418 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9764, var_guardEffectiveParameterListIR_10362, var_guardMangledName_10418, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 237)) ;
        }
        var_guardedCommandIR_6534 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_8935, var_boolExpressionResult_9446, var_guardMangledName_10418.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_9764, var_guardEffectiveParameterListIR_10362  COMMA_SOURCE_FILE ("instruction-sync.galgas", 253)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_10955 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 264)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6379.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_6379.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_10955, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 265)) ;
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_11587 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_11587, enumerator_6379.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 280)) ;
    }
    var_onInstructionBranchListIR_6308.addAssign_operation (var_guardedCommandIR_6534, var_branchInstructionGenerationList_10955  COMMA_SOURCE_FILE ("instruction-sync.galgas", 283)) ;
    enumerator_6379.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mInstructionLocation, var_onInstructionBranchListIR_6308  COMMA_SOURCE_FILE ("instruction-sync.galgas", 288))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 288)) ;
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

void routine_analyzeGuardCall (const GALGAS_PLMType constinArgument_inSelfType,
                               const GALGAS_lstring constinArgument_inReceiverName,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_12929 ;
    callExtensionMethod_searchValuedObject ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), constinArgument_inReceiverName, var_objectIR_12929, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 310)) ;
    GALGAS_PLMType var_receiverType_12951 = extensionGetter_type (var_objectIR_12929, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 311)) ;
    const enumGalgasBool test_1 = var_receiverType_12951.getter_isStructure (SOURCE_FILE ("instruction-sync.galgas", 312)).operator_not (SOURCE_FILE ("instruction-sync.galgas", 312)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReceiverName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 313)), GALGAS_string ("receiver is not a structure"), fixItArray2  COMMA_SOURCE_FILE ("instruction-sync.galgas", 313)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      GALGAS_guardMapForContext var_guardMap_13195 ;
      GALGAS_lstring joker_13170_4 ; // Joker input parameter
      GALGAS_propertyMap joker_13170_3 ; // Joker input parameter
      GALGAS_propertyList joker_13170_2 ; // Joker input parameter
      GALGAS_PLMTypeFlags joker_13170_1 ; // Joker input parameter
      var_receiverType_12951.method_structure (joker_13170_4, joker_13170_3, joker_13170_2, joker_13170_1, var_guardMap_13195, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 315)) ;
      GALGAS_lstring var_guardMangledName_13223 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 316)) ;
      GALGAS_bool var_isPublic_13355 ;
      GALGAS_routineTypedSignature var_formalSignature_13399 ;
      var_guardMap_13195.method_searchKey (var_guardMangledName_13223, var_isPublic_13355, var_formalSignature_13399, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 317)) ;
      const enumGalgasBool test_3 = var_isPublic_13355.operator_not (SOURCE_FILE ("instruction-sync.galgas", 319)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 320)), GALGAS_string ("this guard is not public"), fixItArray4  COMMA_SOURCE_FILE ("instruction-sync.galgas", 320)) ;
        outArgument_outGuardMangledName.drop () ; // Release error dropped variable
        outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        outArgument_outGuardMangledName = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (var_receiverType_12951, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 323)), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 322)) ;
        {
        ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 328)) ;
        }
        GALGAS_procCallEffectiveParameterListIR temp_5 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 330)) ;
        temp_5.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 330)), var_objectIR_12929  COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)) ;
        outArgument_outEffectiveParameterListIR = temp_5 ;
        {
        routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature_13399, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 331)) ;
        }
      }
    }
  }else if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 349)) ;
    GALGAS_bool var_isPublic_14856 ;
    GALGAS_routineTypedSignature var_formalSignature_14906 ;
    constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_14856, var_formalSignature_14906, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 354)) ;
    const enumGalgasBool test_6 = var_isPublic_14856.operator_not (SOURCE_FILE ("instruction-sync.galgas", 360)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string var_declarationFile_14998 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 361)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 361)) ;
      GALGAS_string var_invocationFile_15107 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)) ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_invocationFile_15107.objectCompare (var_declarationFile_14998)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 364)), GALGAS_string ("this guard is not public"), fixItArray8  COMMA_SOURCE_FILE ("instruction-sync.galgas", 364)) ;
      }
    }
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 368)) ;
    }
    outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 370)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature_14906, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 371)) ;
    }
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
  GALGAS_string var_startLabel_18279 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 436)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_18279, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)) ;
  GALGAS_string var_startLabelName_18443 = var_startLabel_18279.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 439)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_18443.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 440)) ;
  GALGAS_string var_exitLabelName_18527 = var_startLabel_18279.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 441)) ;
  GALGAS_string var_selectLabelName_18572 = var_startLabel_18279.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 442)) ;
  GALGAS_string var_errorLabelName_18618 = var_startLabel_18279.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 443)) ;
  GALGAS_string var_currentStartBranchLabel_18672 = var_startLabelName_18443 ;
  cEnumerator_syncInstructionBranchListIR enumerator_18732 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_18695 ((uint32_t) 0) ;
  while (enumerator_18732.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_18767 = GALGAS_string ("%").add_operation (var_startLabel_18279, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 446)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 446)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 446)) ;
    GALGAS_bool var_isWhileGuardedCommand_18837 ;
    switch (enumerator_18732.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_19771 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_18732.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19771->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_19771->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_19771->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_19771->mAssociatedValue4 ;
        var_isWhileGuardedCommand_18837 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 451)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18767, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 453)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_19322 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_19322.hasCurrentObject ()) {
          switch (enumerator_19322.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19322.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)).add_operation (extensionGetter_llvmName (enumerator_19322.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 457)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19322.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)).add_operation (extensionGetter_llvmName (enumerator_19322.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_19322.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)).add_operation (extensionGetter_llvmName (enumerator_19322.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)) ;
            }
            break ;
          }
          if (enumerator_19322.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)) ;
          }
          enumerator_19322.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20589 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_18732.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20589->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20589->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_20589->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18837 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
        GALGAS_string var_acceptedLabelName_20039 = var_startLabel_18279.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)) ;
        GALGAS_string var_rejectedLabelName_20102 = var_startLabel_18279.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (var_acceptedLabelName_20039, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (var_rejectedLabelName_20102, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_20039.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 474)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_20102, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_20102.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18767, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_22320 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_18732.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_22320->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_22320->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_22320->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_22320->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_22320->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_22320->mAssociatedValue6 ;
        var_isWhileGuardedCommand_18837 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        GALGAS_string var_testOkLabelName_20896 = var_startLabel_18279.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)) ;
        GALGAS_string var_testExitLabelName_20967 = var_startLabel_18279.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (var_testOkLabelName_20896, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (var_testExitLabelName_20967, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_20896.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 485)) ;
        GALGAS_string var_guardAcceptationLabelName_21322 = var_startLabel_18279.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_21322, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21548 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_21548.hasCurrentObject ()) {
          switch (enumerator_21548.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21548.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)).add_operation (extensionGetter_llvmName (enumerator_21548.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 492)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21548.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)).add_operation (extensionGetter_llvmName (enumerator_21548.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21548.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)).add_operation (extensionGetter_llvmName (enumerator_21548.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
            }
            break ;
          }
          if (enumerator_21548.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
          }
          enumerator_21548.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_20967, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_20967.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18767, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_21322, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (var_testOkLabelName_20896, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18672, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_22354 = var_startLabel_18279.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
    GALGAS_string var_rejectedLabelName_22414 = var_startLabel_18279.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (index_18695.getter_string (SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_18767, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (var_acceptedLabelName_22354, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (var_rejectedLabelName_22414, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_22354.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18732.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18837.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_18443 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18527 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_22414.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)) ;
    var_currentStartBranchLabel_18672 = var_rejectedLabelName_22414 ;
    enumerator_18732.gotoNextObject () ;
    index_18695.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 445)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18572, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 517)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18572, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (var_startLabelName_18443, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (var_errorLabelName_18618, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18618.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18527, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_23606 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 524)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 524)), var_staticStringIndex_23606, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_23606.getter_string (SOURCE_FILE ("instruction-sync.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18527.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)) ;
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
  GALGAS_uint var_branchCount_24259 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 541)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_24259)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_24259 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_24444 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_24444.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_24444.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)) ;
    switch (enumerator_24444.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_24998 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_24444.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24998->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24998->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24998->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 549)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_25165 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_24444.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25165->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_25700 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_24444.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25700->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25700->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25700->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25700->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 558)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 561)) ;
        }
      }
      break ;
    }
    enumerator_24444.gotoNextObject () ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
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
                                                         const GALGAS_PLMType constinArgument_inSelfType,
                                                         const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                         const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3479 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 70)) ;
  GALGAS_objectIR var_testValuePossibleReference_3950 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_m_5F_while_5F_Expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-while.galgas", 75)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3479, var_testValuePossibleReference_3950, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_objectIR var_testValue_4082 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_3950, var_testValue_4082, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 85)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_testValue_4082, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 91)).objectCompare (GALGAS_PLMType::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 91)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4082, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 92)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4082, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 94)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4457 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 97)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4482 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4482, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 98)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4457, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 100)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5166 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5166, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 115)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 119)), var_testInstructionGenerationList_3479, var_testValue_4082, var_instructionGenerationList_4457  COMMA_SOURCE_FILE ("instruction-while.galgas", 118))  COMMA_SOURCE_FILE ("instruction-while.galgas", 118)) ;
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
  GALGAS_string var_labelTest_6353 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 144)) ;
  GALGAS_string var_labelLoop_6404 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  GALGAS_string var_labelEnd_6454 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6353, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6353.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_m_5F_while_5F_Expression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (var_labelLoop_6404, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (var_labelEnd_6454, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6404.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6353, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6454.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
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
                                                       const GALGAS_PLMType constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4167 ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4081 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4081, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4167, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  }
  GALGAS_PLMType var_iteratedTypeKind_4206 = extensionGetter_type (var_iteratedObjectPointer_4167, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 96)) ;
  GALGAS_PLMType var_iteratedElementType_4299 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4206.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 99)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_4299 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 100)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 100)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_4206.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 101)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_4528_2 ; // Joker input parameter
      GALGAS_propertyMap joker_4528_1 ; // Joker input parameter
      GALGAS_bigint joker_4565_4 ; // Joker input parameter
      GALGAS_constantMap joker_4565_3 ; // Joker input parameter
      GALGAS_PLMTypeFlags joker_4565_2 ; // Joker input parameter
      GALGAS_string joker_4565_1 ; // Joker input parameter
      var_iteratedTypeKind_4206.method_arrayType (joker_4528_2, joker_4528_1, var_iteratedElementType_4299, joker_4565_4, joker_4565_3, joker_4565_2, joker_4565_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 102)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 104)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 104)) ;
      var_iteratedElementType_4299.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_plmName_4682 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 107))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_plmName_4682.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 109)), extensionGetter_llvmTypeName (var_iteratedElementType_4299, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 109))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 109)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4940 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4940, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4988 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4988, object->mProperty_mVarName, var_iteratedElementType_4299, var_plmName_4682, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 112)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5131 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GALGAS_objectIR var_whileExpressionResult_5596 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-for-in-do.galgas", 119)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5131, var_whileExpressionResult_5596, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 115)) ;
  const enumGalgasBool test_3 = extensionGetter_type (var_whileExpressionResult_5596, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 130)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 130)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 130)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 131)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_5596, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 132)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 132)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 133)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_5596, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6177 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_for_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6177, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6759 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6759, object->mProperty_mEndOf_5F_for_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_4206.objectCompare (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 155)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_plmName_4682.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 157)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4167, var_whileExpression_5F_GenerationList_5131, var_whileExpressionResult_5596, var_doInstructionList_5F_GenerationList_6177  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_4206.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 164)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_PLMType var_elementType_7230 ;
      GALGAS_bigint var_size_7245 ;
      GALGAS_lstring joker_7199_2 ; // Joker input parameter
      GALGAS_propertyMap joker_7199_1 ; // Joker input parameter
      GALGAS_constantMap joker_7247_3 ; // Joker input parameter
      GALGAS_PLMTypeFlags joker_7247_2 ; // Joker input parameter
      GALGAS_string joker_7247_1 ; // Joker input parameter
      var_iteratedTypeKind_4206.method_arrayType (joker_7199_2, joker_7199_1, var_elementType_7230, var_size_7245, joker_7247_3, joker_7247_2, joker_7247_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 165)) ;
      GALGAS_stringset var_invokedFunctionSet_7284 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 168)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMapForTemporaries (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_7284, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_plmName_4682.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 172)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4167, var_whileExpression_5F_GenerationList_5131, var_whileExpressionResult_5596, var_doInstructionList_5F_GenerationList_6177, var_elementType_7230, var_size_7245.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)), var_invokedFunctionSet_7284  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
  }
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
//                     Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnArrayIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  GALGAS_string var_elementTypeLLVMName_9964 = extensionGetter_llvmTypeName (object->mProperty_mElementType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 238)) ;
  GALGAS_string var_listTypeLLVMName_10017 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 239)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 239)).add_operation (var_elementTypeLLVMName_9964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 239)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 239)) ;
  GALGAS_string var_locationIndex_10092 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 240)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 240)) ;
  GALGAS_string var_startLabel_10168 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 242)) ;
  GALGAS_string var_testLabel_10221 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 243)) ;
  GALGAS_string var_whileLabel_10274 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 244)) ;
  GALGAS_string var_nextLabel_10327 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 245)) ;
  GALGAS_string var_loopVar_10377 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 246)) ;
  GALGAS_string var_loopLabel_10423 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 247)) ;
  GALGAS_string var_endLabel_10474 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 248)) ;
  GALGAS_string var_indexVar_10527 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 250)) ;
  GALGAS_string var_ptrVar_10572 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 251)) ;
  GALGAS_string var_currentValue_10621 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10092, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10168, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10168.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)).add_operation (var_listTypeLLVMName_10017, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10017, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10221, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10221.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (var_elementTypeLLVMName_9964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (var_startLabel_10168, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)).add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (var_nextLabel_10327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 269)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10527, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_startLabel_10168, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)).add_operation (var_indexVar_10527, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)).add_operation (var_nextLabel_10327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 272)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10377, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (var_indexVar_10527, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 274)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10377, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (var_whileLabel_10274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (var_endLabel_10474, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10274.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 281)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (var_loopLabel_10423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (var_endLabel_10474, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10423.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_10621, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_elementTypeLLVMName_9964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9964.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_9964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_currentValue_10621, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_elementTypeLLVMName_9964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10327.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_elementTypeLLVMName_9964, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_9964.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_ptrVar_10572, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_10527, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (var_indexVar_10527, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10221, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10474.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                            extensionMethod_forInstructionOnArrayIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 316))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                                extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@forInstructionOnStringIR llvmInstructionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_string & ioArgument_ioLLVMcode,
                                                                          const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                          GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  GALGAS_string var_startLabel_14417 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  GALGAS_string var_testLabel_14482 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 340)) ;
  GALGAS_string var_loopLabel_14546 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  GALGAS_string var_whileLabel_14611 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  GALGAS_string var_nextLabel_14676 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  GALGAS_string var_endLabel_14739 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)) ;
  GALGAS_string var_ptrVar_14800 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 345)) ;
  GALGAS_string var_currentVar_14861 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)) ;
  GALGAS_string var_stringLLVMTypeName_14931 = extensionGetter_llvmTypeName (GALGAS_PLMType::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_14417, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14417.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (var_stringLLVMTypeName_14931, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (var_stringLLVMTypeName_14931, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14482, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 353)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 353)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_14482.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_stringLLVMTypeName_14931, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_14417.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (var_nextLabel_14676, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14861, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_stringLLVMTypeName_14931, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_14861, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (var_currentVar_14861, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_14861, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (var_endLabel_14739, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (var_whileLabel_14611, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_14611.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_loopLabel_14546, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_endLabel_14739, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_14546.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_14861, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_14676, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_14676.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_14800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_14482, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_14739.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                            extensionMethod_forInstructionOnStringIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnStringIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@forInstructionOnStringIR enterAccessibleEntities'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionOnStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnStringIR * object = (const cPtr_forInstructionOnStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnStringIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnStringIR.mSlotID,
                                                extensionMethod_forInstructionOnStringIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionOnStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnStringIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2812 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2812 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 68)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 72)) ;
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
                                                                      const GALGAS_PLMType constinArgument_inSelfType,
                                                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inCurrentMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_PLMType var_type_4213 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
  switch (var_type_4213.enumValue ()) {
  case GALGAS_PLMType::kNotBuilt:
    break ;
  case GALGAS_PLMType::kEnum_boolean:
  case GALGAS_PLMType::kEnum_void:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_PLMType::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)) ;
    }
    break ;
  case GALGAS_PLMType::kEnum_integer:
    {
      const cEnumAssociatedValues_PLMType_integer * extractPtr_8403 = (const cEnumAssociatedValues_PLMType_integer *) (var_type_4213.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8403->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8403->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8403->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8403->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5622 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4213, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5622, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5798 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5622, var_lowerBoundExpressionResult_5798, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 128)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_6315 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4213, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_6315, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 133)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6491 ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_6315, var_upperBoundExpressionResult_6491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 147)) ;
      }
      GALGAS_objectIR var_lowerBound_6548 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5798, var_type_4213, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 153)) ;
      GALGAS_objectIR var_upperBound_6772 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6491, var_type_4213, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 159)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7006 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7006, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)) ;
      }
      GALGAS_lstring var_enumeratedVarName_7097 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7097.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)), extensionGetter_llvmTypeName (var_type_4213, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 170)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7361 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7361, object->mProperty_mVarName, var_type_4213, var_enumeratedVarName_7097, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7506 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7506, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 176)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_8110 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8110, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 190)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_7097.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)), var_type_4213, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6548, var_upperBound_6772, var_instructionGenerationList_7506  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 192))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 192)) ;
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
  GALGAS_string var_llvmType_9467 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
  GALGAS_string var_llvmVarName_9508 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  GALGAS_string var_testLabel_9563 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  GALGAS_string var_loopLabel_9626 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  GALGAS_string var_endLabel_9688 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  GALGAS_string var_testResult_9752 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  GALGAS_string var_loadedVarName_9827 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  GALGAS_string var_currentVarName_9904 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  GALGAS_string var_nextVarName_9979 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (var_llvmVarName_9508, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9563, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9563.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9827, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (var_llvmVarName_9508, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9752, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (var_loadedVarName_9827, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9752, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_loopLabel_9626, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_endLabel_9688, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9626.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9904, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (var_llvmVarName_9508, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9979, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_currentVarName_9904, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_nextVarName_9979, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmVarName_9508, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9563, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9688.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)) ;
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
//          Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  cEnumerator_accessInAssignmentListAST enumerator_3164 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_3164.hasCurrentObject ()) {
    switch (enumerator_3164.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_3338 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_3164.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3338->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 75)) ;
      }
      break ;
    }
    enumerator_3164.gotoNextObject () ;
  }
  cEnumerator_effectiveArgumentListAST enumerator_3439 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3439.hasCurrentObject ()) {
    switch (enumerator_3439.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3669 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3439.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3669->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 84)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 84)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3762 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3439.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3762->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 86)) ;
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
    enumerator_3439.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                              extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_4127 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4127.hasCurrentObject ()) {
    switch (enumerator_4127.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4357 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4127.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4357->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 103)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 103)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4450 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4127.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4450->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 105)) ;
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
    enumerator_4127.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                              extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@standAloneProcedureCallInstructionAST analyze'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standAloneProcedureCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_PLMType constinArgument_inSelfType,
                                                                           const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                           const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                           const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inCurrentMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                           GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_6461 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 153)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_6696 ;
  GALGAS_routineDescriptor var_routineDescriptor_6742 ;
  GALGAS_location var_keyLocation_6780 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_6461, var_LLVMInvocationRoutineName_6696, var_routineDescriptor_6742, var_keyLocation_6780, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 155)) ;
  GALGAS_lstring var_routineMangledName_6848 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 163)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_6848 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_7109 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_6742.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 173)), var_routineDescriptor_6742.getter_mRoutineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_7398 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 178)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_routineDescriptor_6742.getter_mSignature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_7398, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 179)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 198)), var_routineMangledName_6848, var_LLVMInvocationRoutineName_6696, var_routineKindIR_7109, var_effectiveParameterListIR_7398  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                extensionMethod_standAloneProcedureCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_analyze (defineExtensionMethod_standAloneProcedureCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@procedureCallInstructionAST analyze'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procedureCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                                 const GALGAS_PLMType constinArgument_inSelfType,
                                                                 const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                                                 const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                 const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                 const GALGAS_mode constinArgument_inCurrentMode,
                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                 GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                 GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_PLMType var_currentType_9140 ;
  GALGAS_string var_currentLLVMAddressVar_9172 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 226)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 227)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 227)) ;
      var_currentType_9140.drop () ; // Release error dropped variable
      var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentType_9140 = constinArgument_inSelfType ;
      var_currentLLVMAddressVar_9172 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 230)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_possibleValuedObject var_entity_9545 ;
    callExtensionMethod_searchEntity ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mIdentifier, var_entity_9545, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 233)) ;
    switch (var_entity_9545.enumValue ()) {
    case GALGAS_possibleValuedObject::kNotBuilt:
      break ;
    case GALGAS_possibleValuedObject::kEnum_undefined:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 236)), GALGAS_string ("undefined in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 236)) ;
        var_currentType_9140.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_module:
      {
        const cEnumAssociatedValues_possibleValuedObject_module * extractPtr_9806 = (const cEnumAssociatedValues_possibleValuedObject_module *) (var_entity_9545.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_9806->mAssociatedValue0 ;
        var_currentType_9140 = extractedValue_type ;
        var_currentLLVMAddressVar_9172 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 239)) ;
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_register:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 241)), GALGAS_string ("a control register constant cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 241)) ;
        var_currentType_9140.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 245)), GALGAS_string ("a global constant cannot be used in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 245)) ;
        var_currentType_9140.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_possibleValuedObject_localConstant * extractPtr_10291 = (const cEnumAssociatedValues_possibleValuedObject_localConstant *) (var_entity_9545.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10291->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10291->mAssociatedValue1 ;
        var_currentType_9140 = extractedValue_type ;
        var_currentLLVMAddressVar_9172 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 250)) ;
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_globalVariable:
      {
        const cEnumAssociatedValues_possibleValuedObject_globalVariable * extractPtr_10431 = (const cEnumAssociatedValues_possibleValuedObject_globalVariable *) (var_entity_9545.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10431->mAssociatedValue1 ;
        var_currentType_9140 = extractedValue_type ;
        var_currentLLVMAddressVar_9172 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 253)) ;
      }
      break ;
    case GALGAS_possibleValuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_possibleValuedObject_localVariable * extractPtr_10580 = (const cEnumAssociatedValues_possibleValuedObject_localVariable *) (var_entity_9545.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10580->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10580->mAssociatedValue1 ;
        var_currentType_9140 = extractedValue_type ;
        var_currentLLVMAddressVar_9172 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 256)) ;
      }
      break ;
    }
  }
  GALGAS_propertyMap var_propertyMap_10662 = extensionGetter_propertyMap (var_currentType_9140, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 260)) ;
  GALGAS_accessInAssignmentListAST var_accessList_10779 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_10833 ;
  {
  var_accessList_10779.setter_popLast (var_lastAccess_10833, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 263)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_10888 (var_accessList_10779, kENUMERATION_UP) ;
  while (enumerator_10888.hasCurrentObject ()) {
    switch (enumerator_10888.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_11902 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_10888.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_11902->mAssociatedValue0 ;
        GALGAS_bool var_isPublic_11039 ;
        GALGAS_propertyAccessKind var_propertyAccess_11087 ;
        var_propertyMap_10662.method_searchKey (extractedValue_propertyName, var_isPublic_11039, var_propertyAccess_11087, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 268)) ;
        switch (var_propertyAccess_11087.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 275)), GALGAS_string ("a method cannot be used in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 275)) ;
            var_currentType_9140.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 277)), GALGAS_string ("a context property cannot be used in this context"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 277)) ;
            var_currentType_9140.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_11892 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_11087.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_11892->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_11892->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_11565 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_11565, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 281)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9140, var_currentLLVMAddressVar_9172, extractedValue_propertyType, var_llvmPropertyName_11565, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
            }
            var_currentType_9140 = extractedValue_propertyType ;
            var_currentLLVMAddressVar_9172 = var_llvmPropertyName_11565 ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12066 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_10888.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12066->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_12066->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 294)) ;
        var_currentType_9140.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9172.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_10888.gotoNextObject () ;
  }
  switch (var_lastAccess_10833.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12230 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_10833.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_12230->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray9  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 300)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_16923 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_10833.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_16923->mAssociatedValue0 ;
      GALGAS_propertyMap var_propertyMap_12343 ;
      GALGAS_lstring joker_12299_1 ; // Joker input parameter
      GALGAS_propertyList joker_12345_3 ; // Joker input parameter
      GALGAS_PLMTypeFlags joker_12345_2 ; // Joker input parameter
      GALGAS_guardMapForContext joker_12345_1 ; // Joker input parameter
      var_currentType_9140.method_structure (joker_12299_1, var_propertyMap_12343, joker_12345_3, joker_12345_2, joker_12345_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
      GALGAS_lstring var_key_12360 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 303)) ;
      GALGAS_propertyAccessKind var_propertyAccess_12494 ;
      GALGAS_bool joker_12453 ; // Joker input parameter
      var_propertyMap_12343.method_searchKey (var_key_12360, joker_12453, var_propertyAccess_12494, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 304)) ;
      switch (var_propertyAccess_12494.enumValue ()) {
      case GALGAS_propertyAccessKind::kNotBuilt:
        break ;
      case GALGAS_propertyAccessKind::kEnum_constantProperty:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 307)), GALGAS_string ("a constant cannot be used as method"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 307)) ;
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
        {
          const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_14799 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_12494.unsafePointer ()) ;
          const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_14799->mAssociatedValue0 ;
          GALGAS_procCallEffectiveParameterListIR temp_11 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 312)) ;
          temp_11.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 311)), GALGAS_objectIR::constructor_reference (var_currentType_9140, var_currentLLVMAddressVar_9172  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 312)) ;
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_12789 = temp_11 ;
          GALGAS_routineKind var_routineKind_12976 = extractedValue_routineDescriptor.getter_mRoutineKind (HERE) ;
          GALGAS_mode var_calleeMode_13030 = extensionGetter_executionMode (var_routineKind_12976, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 317)) ;
          GALGAS_routineTypedSignature var_formalSignature_13086 = extractedValue_routineDescriptor.getter_mSignature (HERE) ;
          const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, extractedValue_routineDescriptor.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 320)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 321)), GALGAS_string ("not a procedure (returns a value)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 321)) ;
          }else if (kBoolFalse == test_12) {
            GALGAS_calleeKindIR var_calleeKind_13370 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_13030, var_routineKind_12976, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 324)) ;
            {
            routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature_13086, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_12789, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 331)) ;
            }
            GALGAS_lstring var_routineMangledName_14257 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (var_currentType_9140, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 347)), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 347)) ;
            ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 350)), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 351)), var_routineMangledName_14257, var_routineMangledName_14257, var_calleeKind_13370, var_effectiveParameterListIR_12789  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 349))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 349)) ;
            {
            ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_14257 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 358)) ;
            }
          }
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_indexed:
        {
          const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_16915 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_12494.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_propertyType = extractPtr_16915->mAssociatedValue0 ;
          const GALGAS_uint extractedValue_propertyIndex = extractPtr_16915->mAssociatedValue1 ;
          const enumGalgasBool test_14 = extractedValue_propertyType.getter_isFunction (SOURCE_FILE ("instruction-procedure-call.galgas", 361)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 361)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 362)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray15  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 362)) ;
          }else if (kBoolFalse == test_14) {
            GALGAS_routineDescriptor var_descriptor_15050 ;
            extractedValue_propertyType.method_function (var_descriptor_15050, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 364)) ;
            const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, var_descriptor_15050.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 366)))).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 367)), GALGAS_string ("a function returns a value and cannot be called as a procedure"), fixItArray17  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 367)) ;
            }else if (kBoolFalse == test_16) {
              GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_15602 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 377)) ;
              {
              routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_descriptor_15050.getter_mSignature (HERE), object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_15602, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 378)) ;
              }
              GALGAS_string var_property_5F_llvmName_16330 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_16330, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 394)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9140, var_currentLLVMAddressVar_9172, extractedValue_propertyType, var_property_5F_llvmName_16330, extractedValue_propertyIndex, extractedValue_methodName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 395)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_16330  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 405)), extractedValue_propertyType, GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 407)), var_effectiveParameterListIR_15602  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 404))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 404)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procedureCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                extensionMethod_procedureCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procedureCallInstructionAST_analyze (defineExtensionMethod_procedureCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  cEnumerator_switchCaseListAST enumerator_2862 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2862.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2862.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2862.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                              extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@switchInstructionAST analyze'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                          const GALGAS_PLMType constinArgument_inSelfType,
                                                          const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                                          const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4061 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_4536 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("instruction-switch.galgas", 97)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4061, var_switchValueIRPossibleReference_4536, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
  GALGAS_objectIR var_switchValueIR_4676 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4536, var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 107)) ;
  }
  GALGAS_constantMap var_enumConstantMap_4738 ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 114)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap joker_4854_3 ; // Joker input parameter
    GALGAS_uint joker_4854_2 ; // Joker input parameter
    GALGAS_string joker_4854_1 ; // Joker input parameter
    extensionGetter_type (var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)).method_enumeration (var_enumConstantMap_4738, joker_4854_3, joker_4854_2, joker_4854_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 118)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 118)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    var_enumConstantMap_4738.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5176 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5176, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 125)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5239 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 126)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5281 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  cEnumerator_switchCaseListAST enumerator_5345 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5345.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5386 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 129)) ;
    cEnumerator_lstringlist enumerator_5428 (enumerator_5345.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5428.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5498 ;
      GALGAS_lstring joker_5500 ; // Joker input parameter
      var_enumConstantMap_4738.method_searchKey (enumerator_5428.current_mValue (HERE), var_constantIdx_5498, joker_5500, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      var_caseIdentifierIndexList_5386.addAssign_operation (var_constantIdx_5498.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5239.getter_hasKey (enumerator_5428.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 133)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5428.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 134)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
      }
      var_usedEnumerationValues_5239.addAssign_operation (enumerator_5428.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 136))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 136)) ;
      enumerator_5428.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5784 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5345.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5784, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
    var_switchCaseListIR_5281.addAssign_operation (var_caseIdentifierIndexList_5386, var_instructionGenerationList_5784  COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)) ;
    enumerator_5345.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6471 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6471, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
  }
  cEnumerator_constantMap enumerator_6616 (var_enumConstantMap_4738, kENUMERATION_UP) ;
  while (enumerator_6616.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5239.getter_hasKey (enumerator_6616.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 158)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6616.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
    }
    enumerator_6616.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)), var_switchExpressionGenerationList_4061, var_switchValueIR_4676, var_switchCaseListIR_5281  COMMA_SOURCE_FILE ("instruction-switch.galgas", 163))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                extensionMethod_switchInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_analyze (defineExtensionMethod_switchInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@switchInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
  GALGAS_string var_labelOtherwise_8285 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8285, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  cEnumerator_switchCaseListIR enumerator_8535 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8486 ((uint32_t) 0) ;
  while (enumerator_8535.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8598 (enumerator_8535.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8598.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (enumerator_8598.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (index_8486.getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
      enumerator_8598.gotoNextObject () ;
    }
    enumerator_8535.gotoNextObject () ;
    index_8486.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
  cEnumerator_switchCaseListIR enumerator_8881 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8838 ((uint32_t) 0) ;
  while (enumerator_8881.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (index_8838.getter_string (SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8881.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8285, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
    enumerator_8881.gotoNextObject () ;
    index_8838.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8285.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                            extensionMethod_switchInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionIR_llvmInstructionCode (defineExtensionMethod_switchInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@switchInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)) ;
  cEnumerator_switchCaseListIR enumerator_9628 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9628.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9628.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 227)) ;
    enumerator_9628.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                                extensionMethod_switchInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionIR_enterAccessibleEntities (defineExtensionMethod_switchInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'handleArraySubscriptNew'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArraySubscriptNew (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_bool constinArgument_inGuard,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inCurrentMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      const GALGAS_expressionAST constinArgument_inIndexExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_bigint constinArgument_inArraySize,
                                      const GALGAS_PLMType constinArgument_inElementType,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      GALGAS_objectIR & outArgument_outIndexIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GALGAS_objectIR var_indexResultPossibleReference_1314 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 25)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_1314, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  GALGAS_objectIR var_indexResult_1450 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_1314, var_indexResult_1450, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 35)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_1450.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_1583 ;
    GALGAS_PLMType joker_1551_1 ; // Joker input parameter
    var_indexResult_1450.method_literalInteger (joker_1551_1, var_indexValue_1583, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_1583.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 42)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_1583.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outIndexIR = GALGAS_objectIR::constructor_literalInteger (constinArgument_inElementType, var_indexValue_1583  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_1450, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 48)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_2112 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1450, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2112, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 49)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_2112 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 55)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 55)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 56)) ;
        }
      }
      outArgument_outIndexIR = var_indexResult_1450 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 61)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'handleArraySubscript'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArraySubscript (const GALGAS_PLMType constinArgument_inSelfType,
                                   const GALGAS_bool constinArgument_inGuard,
                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                   const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                   const GALGAS_expressionAST constinArgument_inIndexExpression,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   const GALGAS_bigint constinArgument_inArraySize,
                                   const GALGAS_PLMType constinArgument_inElementType,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   GALGAS_objectIR & ioArgument_ioObjectPtr,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_indexResultPossibleReference_3722 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_PLMType::constructor_void (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 89)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3722, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 85)) ;
  GALGAS_objectIR var_indexResult_3858 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3722, var_indexResult_3858, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 99)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3858.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_3991 ;
    GALGAS_PLMType joker_3959_1 ; // Joker input parameter
    var_indexResult_3858.method_literalInteger (joker_3959_1, var_indexValue_3991, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_3991.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_3991.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_llvmName_4213 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      }
      GALGAS_objectIR var_result_4231 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4213  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 110)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4231, ioArgument_ioObjectPtr, var_indexValue_3991.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)) ;
      }
      ioArgument_ioObjectPtr = var_result_4231 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3858, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4743 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3858, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_4743, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 120)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4743 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 127)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_string var_llvmName_4981 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4981, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 130)) ;
      }
      GALGAS_objectIR var_result_4999 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4981  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4999, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_3858, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)) ;
      }
      ioArgument_ioObjectPtr = var_result_4999 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 139)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeControlRegisterInLValue'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeControlRegisterInLValue (const GALGAS_PLMType constinArgument_inSelfType,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inCurrentMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                             GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             const GALGAS_lstring constinArgument_inRegisterName,
                                             const GALGAS_PLMType constinArgument_inRegisterType,
                                             const GALGAS_bool constinArgument_inWritable,
                                             const GALGAS_uint constinArgument_inRegisterAddress,
                                             const GALGAS_uint constinArgument_inArraySize,
                                             const GALGAS_uint constinArgument_inElementSize,
                                             const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                             GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inWritable.operator_not (SOURCE_FILE ("lvalue.galgas", 247)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 248)), GALGAS_string ("the control register is not writable in this context"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 248)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 249)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inArraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (constinArgument_inRegisterType, constinArgument_inRegisterAddress  COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 253)), GALGAS_string ("the control register is an array"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 253)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 255)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_accessInAssignmentAST var_access_10520 ;
        constinArgument_inAccessList.method_first (var_access_10520, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 256)) ;
        switch (var_access_10520.enumValue ()) {
        case GALGAS_accessInAssignmentAST::kNotBuilt:
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_property:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10690 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_access_10520.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_propertyName = extractPtr_10690->mAssociatedValue0 ;
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 259)), GALGAS_string ("writing a slice of a control register is not allowed"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 259)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_11973 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_access_10520.unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11973->mAssociatedValue0 ;
            const GALGAS_location extractedValue_endOfIndex = extractPtr_11973->mAssociatedValue1 ;
            GALGAS_objectIR var_indexIR_11299 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inArraySize.getter_bigint (SOURCE_FILE ("lvalue.galgas", 273)), constinArgument_inRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_11299, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 261)) ;
            }
            const enumGalgasBool test_7 = var_indexIR_11299.getter_isLiteralInteger (SOURCE_FILE ("lvalue.galgas", 278)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bigint var_idx_11440 ;
              GALGAS_PLMType joker_11415_1 ; // Joker input parameter
              var_indexIR_11299.method_literalInteger (joker_11415_1, var_idx_11440, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 279)) ;
              GALGAS_uint var_addr_11458 = constinArgument_inRegisterAddress.add_operation (var_idx_11440.multiply_operation (constinArgument_inElementSize.getter_bigint (SOURCE_FILE ("lvalue.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 280)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 280)) ;
              outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (constinArgument_inRegisterType, var_addr_11458  COMMA_SOURCE_FILE ("lvalue.galgas", 281)) ;
            }else if (kBoolFalse == test_7) {
              GALGAS_string var_llvmName_11669 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_11669, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 283)) ;
              }
              {
              extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, var_llvmName_11669, var_indexIR_11299, constinArgument_inRegisterAddress.getter_bigint (SOURCE_FILE ("lvalue.galgas", 287)), constinArgument_inElementSize, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 284)) ;
              }
              outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileIndirectReference (constinArgument_inRegisterType, var_llvmName_11669  COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
            }
          }
          break ;
        }
      }else if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 294)), GALGAS_string ("only subscripting is allowed in control register assignment"), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
        outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeVariableInLValue'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableInLValue (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inCurrentMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                      GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      const GALGAS_lstring constinArgument_inVariableName,
                                      const GALGAS_string constinArgument_inLLVMName,
                                      const GALGAS_PLMType constinArgument_inVariableType,
                                      const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_PLMType var_currentType_12995 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_13034 = constinArgument_inLLVMName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 318)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_objectIR joker_13157 ; // Joker input parameter
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_13106 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_13106, constinArgument_inVariableName, joker_13157, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 319)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_objectIR joker_13243 ; // Joker input parameter
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_13188 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_13188, constinArgument_inVariableName, joker_13243, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 321)) ;
    }
    cEnumerator_accessInAssignmentListAST enumerator_13278 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_13278.hasCurrentObject ()) {
      switch (enumerator_13278.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_14256 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_13278.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_14256->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_13384 = extensionGetter_propertyMap (var_currentType_12995, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 325)) ;
          GALGAS_propertyAccessKind var_propertyAccess_13500 ;
          GALGAS_bool joker_13459 ; // Joker input parameter
          var_propertyMap_13384.method_searchKey (extractedValue_propertyName, joker_13459, var_propertyAccess_13500, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 326)) ;
          switch (var_propertyAccess_13500.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray1 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 329)), GALGAS_string ("a method cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 329)) ;
              var_currentType_12995.drop () ; // Release error dropped variable
              var_currentLLVMName_13034.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 331)), GALGAS_string ("a constant property cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 331)) ;
              var_currentType_12995.drop () ; // Release error dropped variable
              var_currentLLVMName_13034.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_14244 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_13500.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_14244->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_14244->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_13919 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13919, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 333)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_12995, var_currentLLVMName_13034, extractedValue_propertyType, var_newLLVMvariable_13919, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 334)) ;
              }
              var_currentType_12995 = extractedValue_propertyType ;
              var_currentLLVMName_13034 = var_newLLVMvariable_13919 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_15567 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_13278.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15567->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_15567->mAssociatedValue1 ;
          const enumGalgasBool test_3 = var_currentType_12995.getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 346)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_PLMType var_elementType_14443 ;
            GALGAS_bigint var_arraySize_14471 ;
            GALGAS_lstring joker_14412_2 ; // Joker input parameter
            GALGAS_propertyMap joker_14412_1 ; // Joker input parameter
            GALGAS_constantMap joker_14473_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_14473_2 ; // Joker input parameter
            GALGAS_string joker_14473_1 ; // Joker input parameter
            var_currentType_12995.method_arrayType (joker_14412_2, joker_14412_1, var_elementType_14443, var_arraySize_14471, joker_14473_3, joker_14473_2, joker_14473_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
            GALGAS_objectIR var_indexIR_15082 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_14471, var_elementType_14443, ioArgument_ioInstructionGenerationList, var_indexIR_15082, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 348)) ;
            }
            GALGAS_string var_newLLVMvariable_15155 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_15155, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 365)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_12995, var_currentLLVMName_13034, var_elementType_14443, var_newLLVMvariable_15155, var_indexIR_15082, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 366)) ;
            }
            var_currentType_12995 = var_elementType_14443 ;
            var_currentLLVMName_13034 = var_newLLVMvariable_15155 ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 376)) ;
            var_currentType_12995.drop () ; // Release error dropped variable
            var_currentLLVMName_13034.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_13278.gotoNextObject () ;
    }
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_12995, var_currentLLVMName_13034  COMMA_SOURCE_FILE ("lvalue.galgas", 381)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeSelfAssignmentTarget'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSelfAssignmentTarget (const GALGAS_PLMType constinArgument_inSelfType,
                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          const GALGAS_mode constinArgument_inCurrentMode,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                          GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          const GALGAS_location constinArgument_inSelfLocation,
                                          const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                          GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_isStructure (SOURCE_FILE ("lvalue.galgas", 400)).operator_not (SOURCE_FILE ("lvalue.galgas", 400)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 401)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_PLMType var_currentType_16625 = constinArgument_inSelfType ;
    GALGAS_string var_currentLLVMName_16662 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 404)) ;
    cEnumerator_accessInAssignmentListAST enumerator_16716 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_16716.hasCurrentObject ()) {
      switch (enumerator_16716.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_17694 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_16716.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_17694->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_16822 = extensionGetter_propertyMap (var_currentType_16625, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 408)) ;
          GALGAS_propertyAccessKind var_propertyAccess_16938 ;
          GALGAS_bool joker_16897 ; // Joker input parameter
          var_propertyMap_16822.method_searchKey (extractedValue_propertyName, joker_16897, var_propertyAccess_16938, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 409)) ;
          switch (var_propertyAccess_16938.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 412)), GALGAS_string ("a method cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 412)) ;
              var_currentType_16625.drop () ; // Release error dropped variable
              var_currentLLVMName_16662.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 414)), GALGAS_string ("a constant property cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 414)) ;
              var_currentType_16625.drop () ; // Release error dropped variable
              var_currentLLVMName_16662.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_17682 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_16938.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_17682->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_17682->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_17357 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_17357, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 416)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_16625, var_currentLLVMName_16662, extractedValue_propertyType, var_newLLVMvariable_17357, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 417)) ;
              }
              var_currentType_16625 = extractedValue_propertyType ;
              var_currentLLVMName_16662 = var_newLLVMvariable_17357 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_19005 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_16716.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_19005->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_19005->mAssociatedValue1 ;
          const enumGalgasBool test_4 = var_currentType_16625.getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 429)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_PLMType var_elementType_17881 ;
            GALGAS_bigint var_arraySize_17909 ;
            GALGAS_lstring joker_17850_2 ; // Joker input parameter
            GALGAS_propertyMap joker_17850_1 ; // Joker input parameter
            GALGAS_constantMap joker_17911_3 ; // Joker input parameter
            GALGAS_PLMTypeFlags joker_17911_2 ; // Joker input parameter
            GALGAS_string joker_17911_1 ; // Joker input parameter
            var_currentType_16625.method_arrayType (joker_17850_2, joker_17850_1, var_elementType_17881, var_arraySize_17909, joker_17911_3, joker_17911_2, joker_17911_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 430)) ;
            GALGAS_objectIR var_indexIR_18520 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_17909, var_elementType_17881, ioArgument_ioInstructionGenerationList, var_indexIR_18520, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
            }
            GALGAS_string var_newLLVMvariable_18593 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_18593, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 448)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_16625, var_currentLLVMName_16662, var_elementType_17881, var_newLLVMvariable_18593, var_indexIR_18520, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 449)) ;
            }
            var_currentType_16625 = var_elementType_17881 ;
            var_currentLLVMName_16662 = var_newLLVMvariable_18593 ;
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 459)) ;
            var_currentType_16625.drop () ; // Release error dropped variable
            var_currentLLVMName_16662.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_16716.gotoNextObject () ;
    }
    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_16625, var_currentLLVMName_16662  COMMA_SOURCE_FILE ("lvalue.galgas", 463)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_PLMType constinArgument_inSelfType,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_4571 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 111)) ;
  cEnumerator_routineTypedSignature enumerator_4614 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_4657 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4614.hasCurrentObject () && enumerator_4657.hasCurrentObject ()) {
    switch (enumerator_4657.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5448 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4657.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_5448->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_5448->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_5448->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_4614.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 116)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 118)).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 118)) ;
        }
        GALGAS_PLMType var_type_4795 = temp_0 ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_5009 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5009, extractedValue_name, var_type_4795, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 121)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_5085 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5085, extractedValue_name, var_type_4795, extractedValue_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 123)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 123)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 125)), extensionGetter_llvmTypeName (var_type_4795, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 125))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 125)) ;
        var_parameterList_4571.addAssign_operation (enumerator_4657.current_mEffectiveParameterKind (HERE), enumerator_4657.current_mSelector (HERE), var_type_4795  COMMA_SOURCE_FILE ("effective-parameters.galgas", 126)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 128)), GALGAS_objectIR::constructor_reference (var_type_4795, function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 129))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 129))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 127)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_6181 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_4657.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6181->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_5558 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_5505 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5505, extractedValue_name, var_objectIR_5558, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 131)) ;
        }
        var_parameterList_4571.addAssign_operation (enumerator_4657.current_mEffectiveParameterKind (HERE), enumerator_4657.current_mSelector (HERE), extensionGetter_type (var_objectIR_5558, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 143)), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_5558, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)), extensionGetter_llvmName (var_objectIR_5558, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 146)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 146)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 146))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 142)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7290 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4657.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7290->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_7290->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_6764 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_4614.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 153)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6764, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        GALGAS_objectIR var_expressionValue_6912 ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6764, var_expressionValue_6912, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 163)) ;
        }
        GALGAS_objectIR var_result_6939 = function_checkAssignmentCompatibility (var_expressionValue_6912, enumerator_4614.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 168)) ;
        var_parameterList_4571.addAssign_operation (enumerator_4657.current_mEffectiveParameterKind (HERE), enumerator_4657.current_mSelector (HERE), enumerator_4614.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 174))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 174)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 175)), var_result_6939  COMMA_SOURCE_FILE ("effective-parameters.galgas", 175)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_7944 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_4657.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7944->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_7410 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7353 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7353, extractedValue_name, var_objectIR_7410, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 177)) ;
        }
        var_parameterList_4571.addAssign_operation (enumerator_4657.current_mEffectiveParameterKind (HERE), enumerator_4657.current_mSelector (HERE), extensionGetter_type (var_objectIR_7410, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        GALGAS_objectIR var_argumentIR_7782 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_7410, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 186)), extensionGetter_llvmName (var_objectIR_7410, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 185)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 189)), var_argumentIR_7782  COMMA_SOURCE_FILE ("effective-parameters.galgas", 189)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_10308 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_4657.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_10308->mAssociatedValue0 ;
        switch (constinArgument_inSelfType.enumValue ()) {
        case GALGAS_PLMType::kNotBuilt:
          break ;
        case GALGAS_PLMType::kEnum_void:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 193)), GALGAS_string ("'self' is not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 193)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_opaque:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 195)), GALGAS_string ("a structure type is required here"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_arrayType:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 197)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_boolean:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 199)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 199)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_staticInteger:
          {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 201)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("effective-parameters.galgas", 201)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_literalString:
          {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 203)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 203)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_enumeration:
          {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 205)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("effective-parameters.galgas", 205)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_function:
          {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 207)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 207)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_pointer:
          {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 209)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("effective-parameters.galgas", 209)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_integer:
          {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("effective-parameters.galgas", 211)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("effective-parameters.galgas", 211)) ;
            var_parameterList_4571.drop () ; // Release error dropped variable
            ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_PLMType::kEnum_structure:
          {
            const cEnumAssociatedValues_PLMType_structure * extractPtr_10298 = (const cEnumAssociatedValues_PLMType_structure *) (constinArgument_inSelfType.unsafePointer ()) ;
            const GALGAS_propertyMap extractedValue_propertyMap = extractPtr_10298->mAssociatedValue1 ;
            GALGAS_propertyAccessKind var_propertyAccess_9439 ;
            GALGAS_bool joker_9398 ; // Joker input parameter
            extractedValue_propertyMap.method_searchKey (extractedValue_name, joker_9398, var_propertyAccess_9439, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 213)) ;
            switch (var_propertyAccess_9439.enumValue ()) {
            case GALGAS_propertyAccessKind::kNotBuilt:
              break ;
            case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
              {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a method cannot be used in this context"), fixItArray13  COMMA_SOURCE_FILE ("effective-parameters.galgas", 216)) ;
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_constantProperty:
              {
                TC_Array <C_FixItDescription> fixItArray14 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used here"), fixItArray14  COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)) ;
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_indexed:
              {
                const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_10286 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_9439.unsafePointer ()) ;
                const GALGAS_PLMType extractedValue_propertyType = extractPtr_10286->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_propertyIndex = extractPtr_10286->mAssociatedValue1 ;
                GALGAS_string var_property_5F_llvmName_9826 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_9826, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)) ;
                }
                {
                extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)), extractedValue_propertyType, var_property_5F_llvmName_9826, extractedValue_propertyIndex, extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
                }
                var_parameterList_4571.addAssign_operation (enumerator_4657.current_mEffectiveParameterKind (HERE), enumerator_4657.current_mSelector (HERE), extractedValue_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 229)) ;
                ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 230)), GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_9826  COMMA_SOURCE_FILE ("effective-parameters.galgas", 230))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 230)) ;
              }
              break ;
            }
          }
          break ;
        }
      }
      break ;
    }
    enumerator_4614.gotoNextObject () ;
    enumerator_4657.gotoNextObject () ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 236)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 236)))).boolEnum () ;
  if (kBoolTrue == test_15) {
    TC_Array <C_FixItDescription> fixItArray16 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 237)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 237)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 237)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 238)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 237)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)), fixItArray16  COMMA_SOURCE_FILE ("effective-parameters.galgas", 237)) ;
  }else if (kBoolFalse == test_15) {
    cEnumerator_routineTypedSignature enumerator_10644 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_10673 (var_parameterList_4571, kENUMERATION_UP) ;
    while (enumerator_10644.hasCurrentObject () && enumerator_10673.hasCurrentObject ()) {
      const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_10644.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 241)).objectCompare (extensionGetter_key (enumerator_10673.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 241)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_10673.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 242)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_10673.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 242)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 242)).add_operation (enumerator_10644.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 243)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 243)), fixItArray18  COMMA_SOURCE_FILE ("effective-parameters.galgas", 242)) ;
      }
      GALGAS_string var_requiredPassingMode_10974 = extensionGetter_requiredActualPassingModeForSelector (enumerator_10644.current_mFormalArgumentPassingMode (HERE), enumerator_10644.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 245)) ;
      GALGAS_string var_testedPassingMode_11095 = extensionGetter_passingModeForActualSelector (enumerator_10673.current_mEffectiveParameterPassingMode (HERE), enumerator_10673.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 246)) ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_10974.objectCompare (var_testedPassingMode_11095)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_10673.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 248)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_10974, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 248)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 248)), fixItArray20  COMMA_SOURCE_FILE ("effective-parameters.galgas", 248)) ;
      }
      enumerator_10644.gotoNextObject () ;
      enumerator_10673.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromAST'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_routineMangledNameFromAST (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                   const GALGAS_lstring & constinArgument_inRoutineName,
                                                   const GALGAS_routineFormalArgumentList & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 93)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 93)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 93)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 95)) ;
  cEnumerator_routineFormalArgumentList enumerator_4136 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4136.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4136.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 97)).add_operation (enumerator_4136.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 97)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 97)) ;
    enumerator_4136.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 99)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentList,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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
  const GALGAS_routineFormalArgumentList operand2 = GALGAS_routineFormalArgumentList::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                     inCompiler
                                                                                                     COMMA_THERE) ;
  return function_routineMangledNameFromAST (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromAST ("routineMangledNameFromAST",
                                                                           functionWithGenericHeader_routineMangledNameFromAST,
                                                                           & kTypeDescriptor_GALGAS_lstring,
                                                                           3,
                                                                           functionArgs_routineMangledNameFromAST) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'routineMangledNameFromCall'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_routineMangledNameFromCall (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_lstring & constinArgument_inRoutineName,
                                                    const GALGAS_effectiveArgumentListAST & constinArgument_inEffectiveParameterList,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 111)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 111)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 111)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 113)) ;
  cEnumerator_effectiveArgumentListAST enumerator_4848 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4848.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_4848.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 115)).add_operation (enumerator_4848.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 115)) ;
    enumerator_4848.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 117)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromCall [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_effectiveArgumentListAST,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_routineMangledNameFromCall ("routineMangledNameFromCall",
                                                                            functionWithGenericHeader_routineMangledNameFromCall,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            3,
                                                                            functionArgs_routineMangledNameFromCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'routineSignature'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSignature (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                               const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentList,
                               GALGAS_routineTypedSignature & outArgument_outSignature,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 126)) ;
  cEnumerator_routineFormalArgumentList enumerator_5378 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5378.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5469 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5378.current_mFormalArgumentTypeName (HERE), var_typeProxy_5469 COMMA_SOURCE_FILE ("context-routines.galgas", 128)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5378.current_mFormalArgumentPassingMode (HERE), enumerator_5378.current_mSelector (HERE), var_typeProxy_5469  COMMA_SOURCE_FILE ("context-routines.galgas", 129)) ;
    enumerator_5378.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'initialVariableMap'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_initialVariableMap (const GALGAS_semanticContext constinArgument_inContext,
                                 const GALGAS_mode constinArgument_inRequiredMode,
                                 GALGAS_bool inArgument_inGlobalsAreConstant,
                                 const GALGAS_lstring constinArgument_inReturnTypeName,
                                 GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 14)) ;
  cEnumerator_moduleMap enumerator_1004 (constinArgument_inContext.getter_mModuleMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1004.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1030 = function_moduleMangledNameFromModuleName (enumerator_1004.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 17)) ;
    GALGAS_PLMType var_moduleType_1097 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_1030, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 18)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 18)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1199 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertModule ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1199, enumerator_1004.current_lkey (HERE), var_moduleType_1097, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 19)) ;
    }
    enumerator_1004.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1362 (constinArgument_inContext.getter_mControlRegisterMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1362.hasCurrentObject ()) {
    GALGAS_bool var_registerIsReadable_1392 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1362.current (HERE).getter_mIsAccessibleInUserMode (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 23)) ;
    GALGAS_bool test_0 = var_registerIsReadable_1392 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1362.current (HERE).getter_mIsReadOnly (HERE).operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 24)) ;
    }
    GALGAS_bool test_1 = test_0 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 24)) ;
    }
    GALGAS_bool var_registerIsWritable_1494 = test_1 ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1594 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertRegister ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1594, enumerator_1362.current (HERE).getter_lkey (HERE), var_registerIsReadable_1392, var_registerIsWritable_1494, enumerator_1362.current (HERE).getter_mType (HERE), enumerator_1362.current (HERE).getter_mAddress (HERE), enumerator_1362.current (HERE).getter_mRegisterFieldAccessMap (HERE), enumerator_1362.current (HERE).getter_mArraySize (HERE), enumerator_1362.current (HERE).getter_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 25)) ;
    }
    enumerator_1362.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_2090 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2090.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2116 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2116, enumerator_2090.current_lkey (HERE), enumerator_2090.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 38)) ;
    }
    enumerator_2090.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_2298 (constinArgument_inContext.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2298.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2324 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2324, enumerator_2298.current (HERE).getter_lkey (HERE), enumerator_2298.current (HERE).getter_type (HERE), inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 42)) ;
    }
    GALGAS_bool var_writeAccess_2422 = enumerator_2298.current (HERE).getter_allowedAccessToAll (HERE) ;
    GALGAS_bool var_allowedAccess_2474 = var_writeAccess_2422 ;
    enumerator_2298.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_resultVarName_2635 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 48)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 48)) ;
    GALGAS_PLMType var_resultType_2729 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 49)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 49)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2833 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2833, var_resultVarName_2635, var_resultType_2729, var_resultVarName_2635, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("unified-symbol-map.galgas", 50)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 50)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 60)) ;
  cEnumerator_globalConstantMap enumerator_3300 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_3300.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_3326 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_3326, enumerator_3300.current_lkey (HERE), enumerator_3300.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 63)) ;
    }
    enumerator_3300.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_PLMType constinArgument_inType,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_objectIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("unified-symbol-map.galgas", 74)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_null (SOURCE_FILE ("unified-symbol-map.galgas", 75)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3742 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3742, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 77)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_3742  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 78)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'buildOrderedDeclarationList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildOrderedDeclarationList (const GALGAS_ast constinArgument_inAST,
                                          const GALGAS_string constinArgument_inSourceFile,
                                          const GALGAS_location constinArgument_inEndOfSourceFile,
                                          GALGAS_declarationListAST & outArgument_outDeclarationListAST,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1622 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1674 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_1674.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_1674.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1674.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mBootListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mInitListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mPanicClauseListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGuardListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  cEnumerator_stringlist enumerator_2648 (var_precedenceGraph_1622.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 43)), kENUMERATION_UP) ;
  while (enumerator_2648.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2665 = enumerator_2648.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2665.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 45)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2665.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2665.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2860 = var_split_2665.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
        GALGAS_integerDeclarationAST var_declaration_2935 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2860  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2935.ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2665.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3102 = var_split_2665.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
          GALGAS_integerDeclarationAST var_declaration_3177 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_3102  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_3177.ptr (), var_precedenceGraph_1622, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
        }
      }
    }
    enumerator_2648.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 58)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3489 = var_precedenceGraph_1622.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 59)) ;
    GALGAS_string var_filePath_3535 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_bool joker_3633 ; // Joker input parameter
    var_s_3489.method_writeToFileWhenDifferentContents (var_filePath_3535, joker_3633, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 64)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1622.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3855 (var_precedenceGraph_1622.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)), kENUMERATION_UP) ;
    while (enumerator_3855.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3855.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), enumerator_3855.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
      enumerator_3855.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4069 ;
    GALGAS_lstringlist joker_4002 ; // Joker input parameter
    GALGAS_lstringlist joker_4077 ; // Joker input parameter
    var_precedenceGraph_1622.method_topologicalSort (outArgument_outDeclarationListAST, joker_4002, var_unsortedSemanticDeclarationListAST_4069, joker_4077, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 70)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4069.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4156 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4069.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)) ;
      cEnumerator_declarationListAST enumerator_4371 (var_unsortedSemanticDeclarationListAST_4069, kENUMERATION_UP) ;
      while (enumerator_4371.hasCurrentObject ()) {
        var_s_4156.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4371.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)) ;
        enumerator_4371.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4156, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
      cEnumerator_declarationListAST enumerator_4543 (var_unsortedSemanticDeclarationListAST_4069, kENUMERATION_UP) ;
      while (enumerator_4543.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclarationAST *) enumerator_4543.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4543.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
        enumerator_4543.gotoNextObject () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildSemanticContext'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildSemanticContext (const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 190)) ;
  cEnumerator_initList enumerator_7814 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7814.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_7814.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 193)) ;
    enumerator_7814.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_7959 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7959.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_7959.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 197)) ;
    enumerator_7959.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 200)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 201)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 202)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 203)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 204)) ;
  cEnumerator_declarationListAST enumerator_8636 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_8636.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8636.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 207)) ;
    enumerator_8636.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 215)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 220)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 225)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 230)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 255)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_10633 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_10633.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_10633.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 257)) ;
      enumerator_10633.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'combineTypeNamesForInfixOperator'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_combineTypeNamesForInfixOperator (const GALGAS_string & constinArgument_inLeftTypeName,
                                                          const GALGAS_string & constinArgument_inRightTypeName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)).getter_nowhere (SOURCE_FILE ("context.galgas", 268)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_combineTypeNamesForInfixOperator [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_combineTypeNamesForInfixOperator ("combineTypeNamesForInfixOperator",
                                                                                  functionWithGenericHeader_combineTypeNamesForInfixOperator,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  2,
                                                                                  functionArgs_combineTypeNamesForInfixOperator) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTypeMapHTMLFile (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_9662 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 302)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_9779 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 304)) ;
    cEnumerator_unifiedTypeMap enumerator_9808 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9808.hasCurrentObject ()) {
      var_firstLetterSet_9779.addAssign_operation (enumerator_9808.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 306)).getter_string (SOURCE_FILE ("types.galgas", 306))  COMMA_SOURCE_FILE ("types.galgas", 306)) ;
      enumerator_9808.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_9916 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_9950 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_9986 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_9986.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_9950.objectCompare (enumerator_9986.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 311)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_9950 = enumerator_9986.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 312)) ;
        var_tableOfTypeString_9916.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_9950.getter_uint (SOURCE_FILE ("types.galgas", 313)).getter_string (SOURCE_FILE ("types.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 313)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 313)).add_operation (var_currentFirstLetter_9950.getter_string (SOURCE_FILE ("types.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 313)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 313)) ;
      }
      var_tableOfTypeString_9916.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_9986.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 315)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 315)) ;
      enumerator_9986.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_10379 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 318)), inArgument_inTypeMap, var_firstLetterSet_9779, var_tableOfTypeString_9916 COMMA_SOURCE_FILE ("types.galgas", 317))) ;
    GALGAS_bool joker_10609 ; // Joker input parameter
    var_typeDumpString_10379.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_9662, joker_10609, inCompiler COMMA_SOURCE_FILE ("types.galgas", 323)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_9662, inCompiler COMMA_SOURCE_FILE ("types.galgas", 325)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Filewrapper template 'typeDumpGenerationTemplate dump'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_dump (C_Compiler * inCompiler,
                                                                   const GALGAS_string & in_PROJECT_5F_NAME,
                                                                   const GALGAS_unifiedTypeMap & in_GLOBAL_5F_TYPE_5F_MAP,
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
    "</p>\n"
    "<table class=\"result\">\n"
    "<tr><td class=\"result_title\">Type Name</td><td class=\"result_title\">Description</td><td class=\"result_title\">LLVM Type Name</td></tr>\n" ;
  GALGAS_uint index_1322_ (0) ;
  if (in_GLOBAL_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1322 (in_GLOBAL_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1322.hasCurrentObject ()) {
      result << "<tr class=\"result_line\"><td><a name=\"" ;
      result << enumerator_1322.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">" ;
      result << enumerator_1322.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td><td>" ;
      result << extensionGetter_descriptionForHTMLFile (enumerator_1322.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1322.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td></tr>\n" ;
      index_1322_.increment () ;
      enumerator_1322.gotoNextObject () ;
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
//                                            Function 'linkForHTMLTypeMap'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_linkForHTMLTypeMap (const GALGAS_string & constinArgument_inTypeName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 344)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 344)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 344)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 344)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_linkForHTMLTypeMap [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_linkForHTMLTypeMap (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_linkForHTMLTypeMap (operand0,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_linkForHTMLTypeMap ("linkForHTMLTypeMap",
                                                                    functionWithGenericHeader_linkForHTMLTypeMap,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    1,
                                                                    functionArgs_linkForHTMLTypeMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'checkAssignmentCompatibility'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR function_checkAssignmentCompatibility (const GALGAS_objectIR & constinArgument_inSourceValue,
                                                       const GALGAS_PLMType & constinArgument_inOptionalTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_result ; // Returned variable
  GALGAS_PLMType var_sourceType_876 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 14)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inOptionalTargetAnnotationType.objectCompare (var_sourceType_876)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = constinArgument_inOptionalTargetAnnotationType.getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = var_sourceType_876.getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inOptionalTargetAnnotationType.getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1204 ;
        GALGAS_PLMType joker_1185_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1185_1, var_value_1204, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1268 ;
        GALGAS_bigint var_maxTarget_1287 ;
        GALGAS_bool joker_1289_3 ; // Joker input parameter
        GALGAS_uint joker_1289_2 ; // Joker input parameter
        GALGAS_string joker_1289_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.method_integer (var_minTarget_1268, var_maxTarget_1287, joker_1289_3, joker_1289_2, joker_1289_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1204.objectCompare (var_minTarget_1268)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1287.objectCompare (var_value_1204)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large"), fixItArray6  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 23)) ;
          result_result.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_result = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 25)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (extensionGetter_key (constinArgument_inOptionalTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_key (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_key (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 35)) ;
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkAssignmentCompatibility (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_objectIR operand0 = GALGAS_objectIR::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_PLMType operand1 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_checkAssignmentCompatibility (operand0,
                                                operand1,
                                                operand2,
                                                operand3,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkAssignmentCompatibility ("checkAssignmentCompatibility",
                                                                              functionWithGenericHeader_checkAssignmentCompatibility,
                                                                              & kTypeDescriptor_GALGAS_objectIR,
                                                                              4,
                                                                              functionArgs_checkAssignmentCompatibility) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3821 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3821.hasCurrentObject ()) {
    GALGAS_lstring var_requiredProcedureMangledName_3861 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_3821.current (HERE).getter_mName (HERE), enumerator_3821.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 81)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_requiredProcedureMangledName_3861.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 82)) ;
    enumerator_3821.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_4124 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4124.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_4124.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 86)) ;
    enumerator_4124.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_4302 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 92)) ;
  cEnumerator_declarationListAST enumerator_4362 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4362.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclarationAST *) enumerator_4362.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 94)) ;
    enumerator_4362.gotoNextObject () ;
  }
  extensionMethod_functionSemanticAnalysis (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 101)), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 100)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.getter_mTaskListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 106)) ;
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 112)), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 111)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 118)), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 123)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 128)) ;
  cEnumerator_bootList enumerator_5642 (constinArgument_inAST.getter_mBootListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5642.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5642.current (HERE), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 134)) ;
    enumerator_5642.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5835 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5835.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5835.current (HERE), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 141)) ;
    enumerator_5835.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_6064 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_6064.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_6064.current (HERE), constinArgument_inSemanticContext, var_temporaries_4302, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
    enumerator_6064.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6529 = var_temporaries_4302.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 163)) ;
    GALGAS_string var_filePath_6598 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 164)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 164)) ;
    GALGAS_bool joker_6724 ; // Joker input parameter
    var_s_6529.method_writeToFileWhenDifferentContents (var_filePath_6598, joker_6724, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 168)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6893 = var_temporaries_4302.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 169)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6893.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 170)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_7017 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_7115 (var_undefinedNodeKeyList_6893, kENUMERATION_UP) ;
      while (enumerator_7115.hasCurrentObject ()) {
        var_s_7017.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_7115.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 173)) ;
        enumerator_7115.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7017, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 175)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_7322 ;
      GALGAS_lstringlist var_unsortedLKeyList_7366 ;
      var_temporaries_4302.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_7322, var_unsortedLKeyList_7366 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 177)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_7366.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 181)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_7432 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7512 (var_unsortedLKeyList_7366, kENUMERATION_UP) ;
        while (enumerator_7512.hasCurrentObject ()) {
          var_s_7432.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7512.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 184)) ;
          enumerator_7512.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7432, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 186)) ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentList enumerator_1257 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1257.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_1278 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1257.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1257.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    switch (enumerator_1257.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1507 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1507, enumerator_1257.current_mFormalArgumentName (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 30)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1626 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1626, enumerator_1257.current_mFormalArgumentName (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 32)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1763 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1763, enumerator_1257.current_mFormalArgumentName (HERE), var_typeProxy_1278, enumerator_1257.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 34)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)) ;
        }
      }
      break ;
    }
    enumerator_1257.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                      const GALGAS_mode constinArgument_inRoutineMode,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location /* constinArgument_inEndOfRoutineDeclaration */,
                                      const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                      const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 60)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_key (constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)) ;
  }
  GALGAS_lstring var_routineMangledName_2810 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 59)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_3179 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inRoutineMode, GALGAS_bool (false), constinArgument_inReturnTypeName, var_universalMap_3179, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 65)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_3271 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 73)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_3179, var_formalArguments_3271, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 74)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_2810.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 81)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_2810, var_routineMangledName_2810, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 82)) ;
    }
  }
  GALGAS_allocaList var_allocaList_3714 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 88)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3766 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 89)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_2810, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3179, var_allocaList_3714, var_instructionGenerationList_3766, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 90)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_3179.ptr (), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 105)) ;
  GALGAS_PLMType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_PLMType::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 110)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
  }
  GALGAS_PLMType var_returnType_4510 = temp_3 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_2810, constinArgument_inSelfType, var_routineMangledName_2810, var_formalArguments_3271, var_allocaList_3714, var_instructionGenerationList_3766, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_2810.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 121)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_4510, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 114)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'llvmAttributeFunction'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmAttributeFunction (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (" nounwind ") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (NULL,
                                                                   releaseOnceFunctionResult_llvmAttributeFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'staticAttribute'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GALGAS_string gOnceFunctionResult_staticAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (NULL,
                                                             releaseOnceFunctionResult_staticAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmRegularTypeMangledNameFromName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmRegularTypeMangledNameFromName (const GALGAS_lstring & constinArgument_inName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmRegularTypeMangledNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmRegularTypeMangledNameFromName (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmRegularTypeMangledNameFromName (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmRegularTypeMangledNameFromName ("llvmRegularTypeMangledNameFromName",
                                                                                    functionWithGenericHeader_llvmRegularTypeMangledNameFromName,
                                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                                    1,
                                                                                    functionArgs_llvmRegularTypeMangledNameFromName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'moduleMangledNameFromModuleName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_moduleMangledNameFromModuleName (const GALGAS_lstring & constinArgument_inModuleName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (constinArgument_inModuleName.getter_string (HERE).add_operation (GALGAS_string ("$"), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inModuleName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_moduleMangledNameFromModuleName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_moduleMangledNameFromModuleName (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_moduleMangledNameFromModuleName (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_moduleMangledNameFromModuleName ("moduleMangledNameFromModuleName",
                                                                                 functionWithGenericHeader_moduleMangledNameFromModuleName,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_moduleMangledNameFromModuleName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'userModeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userModeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userModeName = false ;
static GALGAS_string gOnceFunctionResult_userModeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userModeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userModeName) {
    gOnceFunctionResult_userModeName = onceFunction_userModeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userModeName = true ;
  }
  return gOnceFunctionResult_userModeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userModeName (void) {
  gOnceFunctionResult_userModeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userModeName (NULL,
                                                          releaseOnceFunctionResult_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userModeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userModeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_userModeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userModeName ("userModeName",
                                                              functionWithGenericHeader_userModeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_userModeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_initNameForInvocationGraph (const GALGAS_PLMType & constinArgument_inReceiverType,
                                                    const GALGAS_lbigint & constinArgument_inPriority,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_1722 = GALGAS_string ("init") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_PLMType::constructor_void (SOURCE_FILE ("generated-code-prefixes.galgas", 41)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_1722.plusAssign_operation(GALGAS_string (" $").add_operation (extensionGetter_key (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 42)) ;
  }
  var_s_1722.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 44)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_1722, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 45)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_PLMType,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_PLMType operand0 = GALGAS_PLMType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_initNameForInvocationGraph (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initNameForInvocationGraph ("initNameForInvocationGraph",
                                                                            functionWithGenericHeader_initNameForInvocationGraph,
                                                                            & kTypeDescriptor_GALGAS_lstring,
                                                                            2,
                                                                            functionArgs_initNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'panicNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_panicNameForInvocationGraph (const GALGAS_string & constinArgument_inName,
                                                     const GALGAS_lbigint & constinArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2106 = GALGAS_string ("panic ").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)).add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2106, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicNameForInvocationGraph (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_panicNameForInvocationGraph (operand0,
                                               operand1,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicNameForInvocationGraph ("panicNameForInvocationGraph",
                                                                             functionWithGenericHeader_panicNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_panicNameForInvocationGraph) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 60)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringName (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalStringName (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'literalCharacterArrayName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalCharacterArrayName (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_literalCharacterArrayName (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticStringTypeName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("staticString") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'boolTypeName'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_boolTypeName (C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("bool") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_boolTypeName = false ;
static GALGAS_string gOnceFunctionResult_boolTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_boolTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_boolTypeName) {
    gOnceFunctionResult_boolTypeName = onceFunction_boolTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_boolTypeName = true ;
  }
  return gOnceFunctionResult_boolTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_boolTypeName (void) {
  gOnceFunctionResult_boolTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_boolTypeName (NULL,
                                                          releaseOnceFunctionResult_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_boolTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_boolTypeName (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_boolTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_boolTypeName ("boolTypeName",
                                                              functionWithGenericHeader_boolTypeName,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              0,
                                                              functionArgs_boolTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'staticIntegerTypeName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_staticIntegerTypeName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("staticInt") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_staticIntegerTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticIntegerTypeName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_staticIntegerTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticIntegerTypeName) {
    gOnceFunctionResult_staticIntegerTypeName = onceFunction_staticIntegerTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticIntegerTypeName = true ;
  }
  return gOnceFunctionResult_staticIntegerTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_staticIntegerTypeName (void) {
  gOnceFunctionResult_staticIntegerTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_staticIntegerTypeName (NULL,
                                                                   releaseOnceFunctionResult_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticIntegerTypeName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticIntegerTypeName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_staticIntegerTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticIntegerTypeName ("staticIntegerTypeName",
                                                                       functionWithGenericHeader_staticIntegerTypeName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_staticIntegerTypeName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'functionResultVariableName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_functionResultVariableName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("result") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (NULL,
                                                                        releaseOnceFunctionResult_functionResultVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_functionResultVariableName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForFunction'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForFunction (const GALGAS_string & constinArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("func.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 100)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 100)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForFunction [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForFunction (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForFunction (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForFunction ("llvmNameForFunction",
                                                                     functionWithGenericHeader_llvmNameForFunction,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'interruptNameForInvocationGraph'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_interruptNameForInvocationGraph (const GALGAS_lstring & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_4401 = GALGAS_string ("interrupt ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 108)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4401, constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 109)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_interruptNameForInvocationGraph [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_interruptNameForInvocationGraph (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_interruptNameForInvocationGraph (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_interruptNameForInvocationGraph ("interruptNameForInvocationGraph",
                                                                                 functionWithGenericHeader_interruptNameForInvocationGraph,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_interruptNameForInvocationGraph) ;

