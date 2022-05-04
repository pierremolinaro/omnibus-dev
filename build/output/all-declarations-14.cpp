#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inConstantName,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_primaryInExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_primaryInExpressionAST temp_2 = object ;
      ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_2.readProperty_mReceiverName () COMMA_SOURCE_FILE ("expression-primary.galgas", 106)) ;
      }
    }
  }
  const GALGAS_primaryInExpressionAST temp_3 = object ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_4294 (temp_3.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_4294.hasCurrentObject ()) {
    switch (enumerator_4294.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_4535 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_4294.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_4442_indexExpression = extractPtr_4535->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_4442_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 113)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_5074 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_4294.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_4592_arguments = extractPtr_5074->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_4634 (extractedValue_4592_arguments, kENUMERATION_UP) ;
        while (enumerator_4634.hasCurrentObject ()) {
          switch (enumerator_4634.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4864 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4634.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4762_typeName = extractPtr_4864->mAssociatedValue1 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsNotEqual, extractedValue_4762_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_4762_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 120)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4977 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4634.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_4896_expression = extractPtr_4977->mAssociatedValue0 ;
              callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_4896_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 122)) ;
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
          enumerator_4634.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_4294.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_primaryInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  const GALGAS_primaryInExpressionAST temp_0 = object ;
  cEnumerator_primaryInExpressionAccessListAST enumerator_5587 (temp_0.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_5587.hasCurrentObject ()) {
    switch (enumerator_5587.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_5817 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_5587.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_5665_low = extractPtr_5817->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_5679_high = extractPtr_5817->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsSupOrEqual, extractedValue_5679_high.readProperty_bigint ().objectCompare (extractedValue_5665_low.readProperty_bigint ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_noteUINTType (ioArgument_ioGraph, extractedValue_5679_high.readProperty_bigint ().substract_operation (extractedValue_5665_low.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)), extractedValue_5665_low.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 140)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_5971 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_5587.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_5894_indexExpression = extractPtr_5971->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_5894_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 144)) ;
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_6494 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_5587.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_6028_arguments = extractPtr_6494->mAssociatedValue1 ;
        cEnumerator_effectiveArgumentListAST enumerator_6070 (extractedValue_6028_arguments, kENUMERATION_UP) ;
        while (enumerator_6070.hasCurrentObject ()) {
          switch (enumerator_6070.current_mEffectiveParameterKind (HERE).enumValue ()) {
          case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
            {
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6300 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_6070.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_6198_typeName = extractPtr_6300->mAssociatedValue1 ;
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsNotEqual, extractedValue_6198_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_2) {
                  {
                  ioArgument_ioGraph.setter_noteNode (extractedValue_6198_typeName COMMA_SOURCE_FILE ("expression-primary.galgas", 151)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
            {
              const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_6397 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_6070.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
              const GALGAS_expressionAST extractedValue_6332_expression = extractPtr_6397->mAssociatedValue0 ;
              callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_6332_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 153)) ;
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
          enumerator_6070.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_5587.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                                             extensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_primaryInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@primaryInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_primaryInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                      const GALGAS_omnibusType constinArgument_inSelfType,
                                                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                      const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                      const GALGAS_mode constinArgument_inMode,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      GALGAS_objectIR & outArgument_outResult,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_primaryInExpressionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 181)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_primaryInExpressionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 182)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_primaryInExpressionAST temp_5 = object ;
        callExtensionMethod_analyzePrimaryExpressionNoSelf ((const cPtr_primaryInExpressionAST *) temp_5.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 184)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 198)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_primaryInExpressionAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' is not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 199)) ;
        outArgument_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_primaryInExpressionAST temp_9 = object ;
      callExtensionMethod_analyzePrimaryExpressionWithSelf ((const cPtr_primaryInExpressionAST *) temp_9.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 201)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_primaryInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_primaryInExpressionAST.mSlotID,
                                          extensionMethod_primaryInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_primaryInExpressionAST_analyzeExpression (defineExtensionMethod_primaryInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'procAnalyzeAccesListInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_procAnalyzeAccesListInExpression (const GALGAS_omnibusType constinArgument_inSelfType,
                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                               const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               const GALGAS_primaryInExpressionAccessListAST constinArgument_inAccessList,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_primaryInExpressionAccessListAST enumerator_14035 (constinArgument_inAccessList, kENUMERATION_UP) ;
  while (enumerator_14035.hasCurrentObject ()) {
    switch (enumerator_14035.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_integerSlice:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice * extractPtr_14332 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_integerSlice *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lbigint extractedValue_14109_low = extractPtr_14332->mAssociatedValue0 ;
        const GALGAS_lbigint extractedValue_14123_high = extractPtr_14332->mAssociatedValue1 ;
        {
        routine_handleSliceInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_14109_low, extractedValue_14123_high, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_14631 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_14373_propertyName = extractPtr_14631->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInExpression (constinArgument_inContext, ioArgument_ioResult, extractedValue_14373_propertyName, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 367)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_15239 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_14684_indexExpression = extractPtr_15239->mAssociatedValue0 ;
        const GALGAS_location extractedValue_14705_endOfIndex = extractPtr_15239->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_14726_checkIndexExpression = extractPtr_15239->mAssociatedValue2 ;
        {
        routine_handleArrayAccessInExpression (ioArgument_ioResult, extractedValue_14684_indexExpression, extractedValue_14705_endOfIndex, extractedValue_14726_checkIndexExpression, constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 377)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_15919 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_14035.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15278_methodName = extractPtr_15919->mAssociatedValue0 ;
        const GALGAS_effectiveArgumentListAST extractedValue_15314_arguments = extractPtr_15919->mAssociatedValue1 ;
        const GALGAS_location extractedValue_15338_errorLocation = extractPtr_15919->mAssociatedValue2 ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-primary.galgas", 394)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_15338_errorLocation, GALGAS_string ("a method cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 395)) ;
            ioArgument_ioResult.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_0) {
          {
          routine_handleFunctionCallInExpression (extractedValue_15278_methodName, ioArgument_ioResult, constinArgument_inSelfType, constinArgument_inContext, constinArgument_inMode, constinArgument_inRoutineAttributes, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_15314_arguments, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 397)) ;
          }
        }
      }
      break ;
    }
    enumerator_14035.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleSliceInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleSliceInExpression (const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_objectIR & ioArgument_ioResult,
                                      const GALGAS_lbigint constinArgument_inLow,
                                      const GALGAS_lbigint constinArgument_inHigh,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inLow.readProperty_bigint ().objectCompare (constinArgument_inHigh.readProperty_bigint ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GALGAS_string ("low bound should be lower or equal to high bound"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 506)) ;
      ioArgument_ioResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("expression-primary.galgas", 507)) ;
      }
      test_2 = test_3.operator_not (SOURCE_FILE ("expression-primary.galgas", 507)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inLow.readProperty_location (), GALGAS_string ("Invalid, receiver is not an integer"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 508)) ;
        ioArgument_ioResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      {
      extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, ioArgument_ioResult, constinArgument_inLow.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
      }
      GALGAS_lstring var_resultIntegerName_19565 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (constinArgument_inHigh.readProperty_bigint ().substract_operation (constinArgument_inLow.readProperty_bigint (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)).getter_string (SOURCE_FILE ("expression-primary.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 513)), constinArgument_inLow.readProperty_location ()  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
      GALGAS_omnibusType var_sliceType_19719 ;
      constinArgument_inContext.readProperty_mTypeMap ().method_searchKey (var_resultIntegerName_19565, var_sliceType_19719, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 514)) ;
      {
      extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_19719, ioArgument_ioResult, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInExpression (const GALGAS_semanticContext constinArgument_inContext,
                                               GALGAS_objectIR & ioArgument_ioResult,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_type_20264 = extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 530)) ;
  GALGAS_propertyGetterMap var_propertyGetterMap_20404 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_type_20264, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
  GALGAS_propertyGetterKind var_accessKind_20528 ;
  GALGAS_propertyVisibility joker_20491 ; // Joker input parameter
  var_propertyGetterMap_20404.method_searchKey (constinArgument_inPropertyName, joker_20491, var_accessKind_20528, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 533)) ;
  switch (var_accessKind_20528.enumValue ()) {
  case GALGAS_propertyGetterKind::kNotBuilt:
    break ;
  case GALGAS_propertyGetterKind::kEnum_constantProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_constantProperty * extractPtr_20614 = (const cEnumAssociatedValues_propertyGetterKind_constantProperty *) (var_accessKind_20528.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_20590_value = extractPtr_20614->mAssociatedValue0 ;
      ioArgument_ioResult = extractedValue_20590_value ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_21015 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_accessKind_20528.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_20663_propertyType = extractPtr_21015->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_20683_propertyIndex = extractPtr_21015->mAssociatedValue1 ;
      GALGAS_string var_property_5F_llvmName_20744 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_20744, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), extensionGetter_llvmName (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 541)), var_property_5F_llvmName_20744, extractedValue_20683_propertyIndex, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 539)) ;
      }
      ioArgument_ioResult = GALGAS_objectIR::constructor_reference (extractedValue_20663_propertyType, var_property_5F_llvmName_20744  COMMA_SOURCE_FILE ("expression-primary.galgas", 546)) ;
    }
    break ;
  case GALGAS_propertyGetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_21503 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_accessKind_20528.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_entry extractedValue_21058_propertyTypeProxy = extractPtr_21503->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_21073_modeDictionary = extractPtr_21503->mAssociatedValue1 ;
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 548)) ;
      }
      GALGAS_string var_routineLLVMName_21205 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_21073_modeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      GALGAS_objectIR var_resultValueIR_21468 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, var_routineLLVMName_21205, extractedValue_21058_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 554)), var_resultValueIR_21468, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      }
      ioArgument_ioResult = var_resultValueIR_21468 ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInExpression (GALGAS_objectIR & ioArgument_ioResult,
                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                            const GALGAS_location constinArgument_inEndOfIndex,
                                            const GALGAS_bool constinArgument_inCheckIndexExpression,
                                            const GALGAS_omnibusType constinArgument_inSelfType,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  switch (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 582)), fixItArray0  COMMA_SOURCE_FILE ("expression-primary.galgas", 582)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string (dynamic array) and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 584)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_23480 = (const cEnumAssociatedValues_subscript_staticSubscript *) (extensionGetter_type (ioArgument_ioResult, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 580)).readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_22729_elementType = extractPtr_23480->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_22747_arraySize = extractPtr_23480->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_23234 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_22747_arraySize, extractedValue_22729_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_23234, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
      }
      GALGAS_objectIR var_result_23452 ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioResult, extractedValue_22729_elementType, var_indexIR_23234, var_result_23452, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }
      ioArgument_ioResult = var_result_23452 ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleFunctionCallInExpression'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleFunctionCallInExpression (const GALGAS_lstring constinArgument_inMethodName,
                                             GALGAS_objectIR & ioArgument_ioObjectIR,
                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType var_receiverType_24203 = extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 631)) ;
  GALGAS_lstring var_methodMangledName_24296 = extensionGetter_mangledName (constinArgument_inArguments, var_receiverType_24203.readProperty_omnibusTypeDescriptionName (), constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 633)) ;
  GALGAS_bool var_implementedPublic_24546 ;
  GALGAS_routineTypedSignature var_formalSignature_24571 ;
  GALGAS_unifiedTypeMap_2D_entry var_formalReturnTypeProxy_24602 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_24665 ;
  GALGAS_bool var_implementedIsExported_24703 ;
  GALGAS_mode var_implementedMode_24735 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_24296, var_implementedPublic_24546, var_formalSignature_24571, var_formalReturnTypeProxy_24602, var_implementedModeDictionary_24665, var_implementedIsExported_24703, var_implementedMode_24735, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 636)) ;
  GALGAS_string var_functionLLVMName_24779 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_24665, constinArgument_inMode, constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 646)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_formalReturnTypeProxy_24602.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 648)).readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("expression-primary.galgas", 648)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inMethodName.readProperty_location (), GALGAS_string ("not a function (returns no value)"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 649)) ;
      ioArgument_ioObjectIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 652)) ;
    }
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_25306 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 654)) ;
    var_effectiveParameterListIR_25306.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 655)), ioArgument_ioObjectIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 655)) ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_24571, constinArgument_inArguments, constinArgument_inMethodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_25306, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 657)) ;
    }
    GALGAS_objectIR var_callReturnedResult_26076 ;
    {
    routine_getNewTempValue (var_formalReturnTypeProxy_24602.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 673)), ioArgument_ioTemporaries, var_callReturnedResult_26076, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 673)) ;
    }
    GALGAS_lstring var_routineMangledName_26125 = function_routineMangledNameFromCall (extensionGetter_type (ioArgument_ioObjectIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)).readProperty_llvmBaseTypeName (), constinArgument_inMethodName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (var_callReturnedResult_26076, var_routineMangledName_26125, var_functionLLVMName_24779, var_effectiveParameterListIR_25306  COMMA_SOURCE_FILE ("expression-primary.galgas", 676))  COMMA_SOURCE_FILE ("expression-primary.galgas", 676)) ;
    ioArgument_ioObjectIR = var_callReturnedResult_26076 ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  {
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = object ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mStandaloneFunctionName () COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 37)) ;
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_1 = object ;
  cEnumerator_effectiveArgumentListAST enumerator_2130 (temp_1.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_2130.hasCurrentObject ()) {
    switch (enumerator_2130.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_2342 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_2130.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2252_typeName = extractPtr_2342->mAssociatedValue1 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, extractedValue_2252_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_2252_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 43)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_2451 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_2130.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_2370_expression = extractPtr_2451->mAssociatedValue0 ;
        callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) extractedValue_2370_expression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 45)) ;
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
    enumerator_2130.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_0 = object ;
  cEnumerator_effectiveArgumentListAST enumerator_3063 (temp_0.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_3063.hasCurrentObject ()) {
    switch (enumerator_3063.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3275 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3063.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3185_typeName = extractPtr_3275->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, extractedValue_3185_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_3185_typeName COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 64)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3368 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3063.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_3303_expression = extractPtr_3368->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_3303_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 66)) ;
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
    enumerator_3063.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                                             extensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_standaloneFunctionInExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standaloneFunctionInExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                 const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inMode,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_objectIR & outArgument_outFunctionCallReturnedValue,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneFunctionInExpressionAST * object = (const cPtr_standaloneFunctionInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneFunctionInExpressionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inRoutineAttributes.getter_guard (SOURCE_FILE ("expression-standalone-function-call.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_standaloneFunctionInExpressionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mStandaloneFunctionName ().readProperty_location (), GALGAS_string ("a routine cannot be called in guard"), fixItArray2  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 92)) ;
    }
  }
  const GALGAS_standaloneFunctionInExpressionAST temp_3 = object ;
  const GALGAS_standaloneFunctionInExpressionAST temp_4 = object ;
  GALGAS_lstring var_routineLLVMName_4699 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), temp_3.readProperty_mStandaloneFunctionName (), temp_4.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 95)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_5 = object ;
  const GALGAS_standaloneFunctionInExpressionAST temp_6 = object ;
  GALGAS_lstring var_signature_4832 = extensionGetter_routineSignature (temp_5.readProperty_mArguments (), temp_6.readProperty_mStandaloneFunctionName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 97)) ;
  const GALGAS_standaloneFunctionInExpressionAST temp_7 = object ;
  const GALGAS_standaloneFunctionInExpressionAST temp_8 = object ;
  GALGAS_lstring var_requiredFunctionMangledName_4970 = GALGAS_lstring::constructor_new (temp_7.readProperty_mStandaloneFunctionName ().readProperty_string ().add_operation (var_signature_4832.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)), temp_8.readProperty_mStandaloneFunctionName ().readProperty_location ()  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 99)) ;
  GALGAS_bool var_implementedPublic_5205 ;
  GALGAS_routineTypedSignature var_formalSignature_5230 ;
  GALGAS_unifiedTypeMap_2D_entry var_formalReturnTypeProxy_5261 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_5324 ;
  GALGAS_bool var_isExported_5351 ;
  GALGAS_mode var_implementedMode_5383 ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_requiredFunctionMangledName_4970, var_implementedPublic_5205, var_formalSignature_5230, var_formalReturnTypeProxy_5261, var_implementedModeDictionary_5324, var_isExported_5351, var_implementedMode_5383, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 101)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_formalReturnTypeProxy_5261.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-standalone-function-call.galgas", 111)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (var_requiredFunctionMangledName_4970.readProperty_location (), GALGAS_string ("this function does not return any value"), fixItArray10  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 112)) ;
      outArgument_outFunctionCallReturnedValue.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_functionLLVMName_5634 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_5324, constinArgument_inMode, var_requiredFunctionMangledName_4970, inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 115)) ;
    GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_5840 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-standalone-function-call.galgas", 117)) ;
    {
    const GALGAS_standaloneFunctionInExpressionAST temp_11 = object ;
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_5230, temp_11.readProperty_mArguments (), var_requiredFunctionMangledName_4970.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_5840, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 118)) ;
    }
    {
    routine_getNewTempValue (var_formalReturnTypeProxy_5261.getter_type (inCompiler COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)), ioArgument_ioTemporaries, outArgument_outFunctionCallReturnedValue, inCompiler  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 134)) ;
    }
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outFunctionCallReturnedValue, var_routineLLVMName_4699, var_functionLLVMName_5634, var_effectiveParameterListIR_5840  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136))  COMMA_SOURCE_FILE ("expression-standalone-function-call.galgas", 136)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_standaloneFunctionInExpressionAST.mSlotID,
                                          extensionMethod_standaloneFunctionInExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standaloneFunctionInExpressionAST_analyzeExpression (defineExtensionMethod_standaloneFunctionInExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inConstantName,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  {
  const GALGAS_constructorCallAST temp_0 = object ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 49)) ;
  }
  const GALGAS_constructorCallAST temp_1 = object ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2252 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_2252.hasCurrentObject ()) {
    callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) enumerator_2252.current_mExpression (HERE).ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 52)) ;
    enumerator_2252.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorCallAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_constructorCallAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  {
  const GALGAS_constructorCallAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 61)) ;
  }
  const GALGAS_constructorCallAST temp_1 = object ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_2907 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_2907.hasCurrentObject ()) {
    callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) enumerator_2907.current_mExpression (HERE).ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 63)) ;
    enumerator_2907.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                                             extensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_constructorCallAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@constructorCallAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_constructorCallAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                  const GALGAS_omnibusType constinArgument_inSelfType,
                                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                  const GALGAS_omnibusType /* constinArgument_inOptionalTargetType */,
                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                  const GALGAS_mode constinArgument_inMode,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                  GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_objectIR & outArgument_outResult,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorCallAST * object = (const cPtr_constructorCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorCallAST) ;
  GALGAS_string var_constructorKey_4022 = GALGAS_string ("(") ;
  const GALGAS_constructorCallAST temp_0 = object ;
  cEnumerator_functionCallEffectiveParameterListAST enumerator_4046 (temp_0.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_4046.hasCurrentObject ()) {
    var_constructorKey_4022.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_4046.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 87)) ;
    enumerator_4046.gotoNextObject () ;
  }
  var_constructorKey_4022.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 89)) ;
  const GALGAS_constructorCallAST temp_1 = object ;
  GALGAS_omnibusType var_resultType_4207 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_1.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)).getter_type (inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 91)) ;
  const GALGAS_constructorCallAST temp_2 = object ;
  GALGAS_lstring var_typeName_4301 = GALGAS_lstring::constructor_new (var_resultType_4207.readProperty_omnibusTypeDescriptionName (), temp_2.readProperty_mErrorLocation ()  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 92)) ;
  GALGAS_constructorMap var_constructorMap_4451 ;
  constinArgument_inContext.readProperty_mTypeConstructorMap ().method_searchKey (var_typeName_4301, var_constructorMap_4451, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 93)) ;
  GALGAS_constructorSignature var_constructorSignature_4602 ;
  GALGAS_constructorValue var_initValue_4617 ;
  const GALGAS_constructorCallAST temp_3 = object ;
  var_constructorMap_4451.method_searchKey (GALGAS_lstring::constructor_new (var_constructorKey_4022, temp_3.readProperty_mErrorLocation ()  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)), var_constructorSignature_4602, var_initValue_4617, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 95)) ;
  switch (var_initValue_4617.enumValue ()) {
  case GALGAS_constructorValue::kNotBuilt:
    break ;
  case GALGAS_constructorValue::kEnum_arrayValue:
    {
      const cEnumAssociatedValues_constructorValue_arrayValue * extractPtr_7846 = (const cEnumAssociatedValues_constructorValue_arrayValue *) (var_initValue_4617.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4692_elementType = extractPtr_7846->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_4697_size = extractPtr_7846->mAssociatedValue1 ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_constructorKey_4022.objectCompare (GALGAS_string ("(!repeated)"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_constructorCallAST temp_5 = object ;
          GALGAS_expressionAST var_expression_4765 = temp_5.readProperty_mParameterList ().getter_mExpressionAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 100)) ;
          GALGAS_objectIR var_expressionResult_5255 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) var_expression_4765.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4692_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_5255, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 101)) ;
          const GALGAS_constructorCallAST temp_6 = object ;
          GALGAS_objectIR var_result_5280 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_5255, extractedValue_4692_elementType, temp_6.readProperty_mParameterList ().getter_mSelectorAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 118)).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 114)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = extensionGetter_isStatic (var_result_5280, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 121)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_uint var_idx_5593 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 122)) ;
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedStaticValue (var_resultType_4207, extractedValue_4697_size, var_result_5280, var_idx_5593  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 123)) ;
              GALGAS_operandIRList var_operandIRList_5804 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 124)) ;
              cEnumerator_range enumerator_5837 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_4697_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 125))), kENUMERATION_UP) ;
              while (enumerator_5837.hasCurrentObject ()) {
                var_operandIRList_5804.addAssign_operation (var_result_5280  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 126)) ;
                enumerator_5837.gotoNextObject () ;
              }
              ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4207, var_operandIRList_5804  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 128)) ;
            }
          }
          if (kBoolFalse == test_7) {
            outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayRepeatedDynamicValue (var_resultType_4207, extractedValue_4697_size, var_result_5280  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 130)) ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        GALGAS_string var_individualConstructor_6135 = GALGAS_string ("(") ;
        cEnumerator_range enumerator_6167 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), extractedValue_4697_size.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 134))), kENUMERATION_UP) ;
        while (enumerator_6167.hasCurrentObject ()) {
          var_individualConstructor_6135.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 135)) ;
          enumerator_6167.gotoNextObject () ;
        }
        var_individualConstructor_6135.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 137)) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, var_constructorKey_4022.objectCompare (var_individualConstructor_6135)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_operandIRList var_operandIRList_6347 = GALGAS_operandIRList::constructor_emptyList (SOURCE_FILE ("expression-constructor-call.galgas", 139)) ;
            GALGAS_bool var_resultIsStatic_6379 = GALGAS_bool (true) ;
            const GALGAS_constructorCallAST temp_9 = object ;
            cEnumerator_functionCallEffectiveParameterListAST enumerator_6421 (temp_9.readProperty_mParameterList (), kENUMERATION_UP) ;
            while (enumerator_6421.hasCurrentObject ()) {
              GALGAS_objectIR var_expressionResult_6941 ;
              callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_6421.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extractedValue_4692_elementType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6941, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 142)) ;
              GALGAS_objectIR var_result_6974 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_6941, extractedValue_4692_elementType, enumerator_6421.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 155)) ;
              var_operandIRList_6347.addAssign_operation (var_result_6974  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 162)) ;
              GALGAS_bool test_10 = var_resultIsStatic_6379 ;
              if (kBoolTrue == test_10.boolEnum ()) {
                test_10 = extensionGetter_isStatic (var_result_6974, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 163)) ;
              }
              var_resultIsStatic_6379 = test_10 ;
              enumerator_6421.gotoNextObject () ;
            }
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = var_resultIsStatic_6379.boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_uint var_idx_7390 = ioArgument_ioStaticEntityMap.readProperty_mGlobalStructuredConstantList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 166)) ;
                outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayStaticValues (var_resultType_4207, var_operandIRList_6347, var_idx_7390  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 167)) ;
                ioArgument_ioStaticEntityMap.mProperty_mGlobalStructuredConstantList.addAssign_operation (var_resultType_4207, var_operandIRList_6347  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 168)) ;
              }
            }
            if (kBoolFalse == test_11) {
              outArgument_outResult = GALGAS_objectIR::constructor_llvmArrayDynamicValues (var_resultType_4207, var_operandIRList_6347  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 170)) ;
            }
          }
        }
        if (kBoolFalse == test_8) {
          const GALGAS_constructorCallAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mErrorLocation (), GALGAS_string ("invalid constructor"), fixItArray13  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 173)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_null:
    {
      outArgument_outResult = GALGAS_objectIR::constructor_null (var_resultType_4207  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 177)) ;
    }
    break ;
  case GALGAS_constructorValue::kEnum_simple:
    {
      const cEnumAssociatedValues_constructorValue_simple * extractPtr_8182 = (const cEnumAssociatedValues_constructorValue_simple *) (var_initValue_4617.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_7923_value = extractPtr_8182->mAssociatedValue0 ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_constructorCallAST temp_15 = object ;
        test_14 = GALGAS_bool (kIsNotEqual, temp_15.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 179)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_constructorCallAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mErrorLocation (), var_resultType_4207.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" constructor should have no parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)), fixItArray17  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 180)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_14) {
        outArgument_outResult = GALGAS_objectIR::constructor_literalInteger (var_resultType_4207, extractedValue_7923_value  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 182)) ;
      }
    }
    break ;
  case GALGAS_constructorValue::kEnum_structure:
    {
      const cEnumAssociatedValues_constructorValue_structure * extractPtr_9952 = (const cEnumAssociatedValues_constructorValue_structure *) (var_initValue_4617.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_8218_sortedOperandList = extractPtr_9952->mAssociatedValue0 ;
      GALGAS_sortedOperandIRList var_sortedOperandIRList_8249 = extractedValue_8218_sortedOperandList ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GALGAS_constructorCallAST temp_19 = object ;
        test_18 = GALGAS_bool (kIsNotEqual, temp_19.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)).objectCompare (var_constructorSignature_4602.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 186)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_constructorCallAST temp_20 = object ;
          GALGAS_string temp_21 ;
          const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_constructorSignature_4602.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 188)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_22) {
            temp_21 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_22) {
            temp_21 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_constructorCallAST temp_23 = object ;
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mErrorLocation (), GALGAS_string ("this constructor call should name ").add_operation (var_constructorSignature_4602.getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 187)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)).add_operation (GALGAS_string (" instead of "), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 188)).add_operation (temp_23.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression-constructor-call.galgas", 189)).getter_string (SOURCE_FILE ("expression-constructor-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 189)), fixItArray24  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 187)) ;
          outArgument_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_18) {
        const GALGAS_constructorCallAST temp_25 = object ;
        cEnumerator_constructorSignature enumerator_8672 (var_constructorSignature_4602, kENUMERATION_UP) ;
        cEnumerator_functionCallEffectiveParameterListAST enumerator_8741 (temp_25.readProperty_mParameterList (), kENUMERATION_UP) ;
        while (enumerator_8672.hasCurrentObject () && enumerator_8741.hasCurrentObject ()) {
          enumGalgasBool test_26 = kBoolTrue ;
          if (kBoolTrue == test_26) {
            test_26 = GALGAS_bool (kIsNotEqual, enumerator_8741.current_mSelector (HERE).readProperty_string ().objectCompare (enumerator_8672.current_mSelector (HERE))).boolEnum () ;
            if (kBoolTrue == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (enumerator_8741.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '!").add_operation (enumerator_8672.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)).add_operation (GALGAS_string (":'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)), fixItArray27  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 194)) ;
            }
          }
          GALGAS_objectIR var_expressionResult_9416 ;
          callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) enumerator_8741.current_mExpression (HERE).ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_8672.current_mType (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_9416, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 196)) ;
          GALGAS_objectIR var_result_9445 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_9416, enumerator_8672.current_mType (HERE), enumerator_8741.current_mSelector (HERE).readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 209)) ;
          {
          extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_result_9445, inCompiler COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 216)) ;
          }
          var_sortedOperandIRList_8249.addAssign_operation (var_result_9445, enumerator_8672.current_mFieldIndex (HERE)  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 217)) ;
          enumerator_8672.gotoNextObject () ;
          enumerator_8741.gotoNextObject () ;
        }
        outArgument_outResult = GALGAS_objectIR::constructor_llvmStructureValue (var_resultType_4207, var_sortedOperandIRList_8249  COMMA_SOURCE_FILE ("expression-constructor-call.galgas", 219)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_constructorCallAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_constructorCallAST.mSlotID,
                                          extensionMethod_constructorCallAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_constructorCallAST_analyzeExpression (defineExtensionMethod_constructorCallAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                                  extensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compileTimeInfixOperatorAST_locationForErrorSignaling (defineExtensionGetter_compileTimeInfixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = object ;
  GALGAS_lstring var_nodeName_5710 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)), temp_3.readProperty_mInfixOperatorLocation ()  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 183)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_5710, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 184)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5710, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 185)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5710, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 186)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_5710, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 187)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)), var_nodeName_5710 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 188)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                               extensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_compileTimeInfixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compileTimeInfixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_2 = object ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 194)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                                           extensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compileTimeInfixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeInfixOperatorAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_compileTimeInfixOperatorAST * object = (const cPtr_compileTimeInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftTypeProxy_7519 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_7519 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 212)) ;
  }
  GALGAS_omnibusType var_leftType_7535 = var_leftTypeProxy_7519.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 213)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_1 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_leftType_7535.ptr (), temp_1.readProperty_mLeftTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 214)) ;
  GALGAS_unifiedTypeMap_2D_entry var_rightTypeProxy_7720 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mRightTypeName (), var_rightTypeProxy_7720 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 215)) ;
  }
  GALGAS_omnibusType var_rightType_7737 = var_rightTypeProxy_7720.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 216)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_3 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_rightType_7737.ptr (), temp_3.readProperty_mRightTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 217)) ;
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeProxy_7927 ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_4.readProperty_mResultTypeName (), var_resultTypeProxy_7927 COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 218)) ;
  }
  GALGAS_omnibusType var_resultType_7945 = var_resultTypeProxy_7927.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 219)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_5 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_resultType_7945.ptr (), temp_5.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 220)) ;
  GALGAS_ctCheckMap var_ctCheckMap_8106 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-compile-time.galgas", 222)) ;
  {
  const GALGAS_compileTimeInfixOperatorAST temp_6 = object ;
  var_ctCheckMap_8106.setter_insertKey (temp_6.readProperty_mLeftOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 223)) ;
  }
  {
  const GALGAS_compileTimeInfixOperatorAST temp_7 = object ;
  var_ctCheckMap_8106.setter_insertKey (temp_7.readProperty_mRightOperandName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 224)) ;
  }
  const GALGAS_compileTimeInfixOperatorAST temp_8 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_8.readProperty_mExpression ().ptr (), var_ctCheckMap_8106, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 225)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_9 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_10 = object ;
  GALGAS_lstring var_key_8317 = function_infixOperatorMapKey (var_leftType_7535, extensionGetter_omnibusInfixOperator (temp_9.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)), temp_10.readProperty_mInfixOperatorLocation (), var_rightType_7737, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 227)) ;
  const GALGAS_compileTimeInfixOperatorAST temp_11 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_12 = object ;
  const GALGAS_compileTimeInfixOperatorAST temp_13 = object ;
  GALGAS_compileTimeInfixOperatorUsage var_definition_8429 = GALGAS_compileTimeInfixOperatorUsage::constructor_new (temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mExpression ()  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 228)) ;
  {
  ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8317, var_resultType_7945, var_definition_8429, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 233)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_compileTimeInfixOperatorAST temp_15 = object ;
    GALGAS_bool test_16 = GALGAS_bool (kIsEqual, temp_15.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    if (kBoolTrue != test_16.boolEnum ()) {
      const GALGAS_compileTimeInfixOperatorAST temp_17 = object ;
      test_16 = GALGAS_bool (kIsEqual, temp_17.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 235)))) ;
    }
    test_14 = test_16.boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_compileTimeInfixOperatorAST temp_18 = object ;
      GALGAS_lstring var_equal_5F_key_8747 = function_infixOperatorMapKey (var_leftType_7535, GALGAS_omnibusInfixOperator::constructor_equal (SOURCE_FILE ("infix-operator-compile-time.galgas", 236)), temp_18.readProperty_mInfixOperatorLocation (), var_rightType_7737, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 236)) ;
      const GALGAS_compileTimeInfixOperatorAST temp_19 = object ;
      GALGAS_lstring var_lessThan_5F_key_8850 = function_infixOperatorMapKey (var_leftType_7535, GALGAS_omnibusInfixOperator::constructor_lessThan (SOURCE_FILE ("infix-operator-compile-time.galgas", 237)), temp_19.readProperty_mInfixOperatorLocation (), var_rightType_7737, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 237)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_equal_5F_key_8747.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).operator_and (ioArgument_ioContext.readProperty_mInfixOperatorMap ().getter_hasKey (var_lessThan_5F_key_8850.readProperty_string () COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)) COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_20) {
          GALGAS_omnibusInfixOperatorUsage var_equalOperatorUsage_9127 ;
          GALGAS_omnibusType joker_9102 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_equal_5F_key_8747, joker_9102, var_equalOperatorUsage_9127, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 239)) ;
          GALGAS_omnibusInfixOperatorUsage var_lessThanOperatorUsage_9215 ;
          GALGAS_omnibusType joker_9187 ; // Joker input parameter
          ioArgument_ioContext.readProperty_mInfixOperatorMap ().method_searchKey (var_lessThan_5F_key_8850, joker_9187, var_lessThanOperatorUsage_9215, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 240)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_compileTimeInfixOperatorUsage var_eou_9231 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_equalOperatorUsage_9127.ptr ())) ;
            if (NULL == var_eou_9231.ptr ()) {
              test_21 = kBoolFalse ;
            }
            if (kBoolTrue == test_21) {
              GALGAS_compileTimeInfixOperatorUsage var_ltou_9303 (dynamic_cast <const cPtr_compileTimeInfixOperatorUsage *> (var_lessThanOperatorUsage_9215.ptr ())) ;
              if (NULL == var_ltou_9303.ptr ()) {
                test_21 = kBoolFalse ;
              }
              if (kBoolTrue == test_21) {
                GALGAS_compileTimeInfixInfEqualOperatorUsage var_infEqual_5F_definition_9396 = GALGAS_compileTimeInfixInfEqualOperatorUsage::constructor_new (var_eou_9231, var_ltou_9303  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 243)) ;
                const GALGAS_compileTimeInfixOperatorAST temp_22 = object ;
                GALGAS_lstring var_infEqual_5F_key_9477 = function_infixOperatorMapKey (var_leftType_7535, GALGAS_omnibusInfixOperator::constructor_infEqual (SOURCE_FILE ("infix-operator-compile-time.galgas", 244)), temp_22.readProperty_mInfixOperatorLocation (), var_rightType_7737, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 244)) ;
                {
                ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_infEqual_5F_key_9477, var_resultType_7945, var_infEqual_5F_definition_9396, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 245)) ;
                }
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_compileTimeInfixOperatorAST temp_24 = object ;
    test_23 = GALGAS_bool (kIsEqual, temp_24.readProperty_mInfixOperator ().objectCompare (GALGAS_compileTimeInfixOperatorEnumeration::constructor_addOp (SOURCE_FILE ("infix-operator-compile-time.galgas", 250)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_compileTimeInfixOperatorAST temp_25 = object ;
      GALGAS_lstring var_addOpNoOVF_5F_key_9775 = function_infixOperatorMapKey (var_leftType_7535, GALGAS_omnibusInfixOperator::constructor_addOpNoOvf (SOURCE_FILE ("infix-operator-compile-time.galgas", 251)), temp_25.readProperty_mInfixOperatorLocation (), var_rightType_7737, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 251)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_addOpNoOVF_5F_key_9775, var_resultType_7945, var_definition_8429, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 252)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compileTimeInfixOperatorAST.mSlotID,
                                       extensionMethod_compileTimeInfixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixOperatorAST_enterInContext (defineExtensionMethod_compileTimeInfixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeInfixOperatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
                                                                        const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                        const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                        const GALGAS_objectIR constinArgument_inRightOperand,
                                                                        const GALGAS_omnibusType constinArgument_inResultType,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                        GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                        GALGAS_objectIR & outArgument_outResultValue,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeInfixOperatorUsage * object = (const cPtr_compileTimeInfixOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixOperatorUsage) ;
  GALGAS_bigint var_result_11660 ;
  const GALGAS_compileTimeInfixOperatorUsage temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_0.ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_11660, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 293)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_11660  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 294)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeInfixOperatorUsage.mSlotID,
                                     extensionMethod_compileTimeInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixOperatorUsage_generateCode (defineExtensionMethod_compileTimeInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimeInfixInfEqualOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
                                                                                const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                                const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                                const GALGAS_objectIR constinArgument_inRightOperand,
                                                                                const GALGAS_omnibusType constinArgument_inResultType,
                                                                                GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                                GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                                GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                GALGAS_objectIR & outArgument_outResultValue,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimeInfixInfEqualOperatorUsage * object = (const cPtr_compileTimeInfixInfEqualOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimeInfixInfEqualOperatorUsage) ;
  GALGAS_bigint var_result_12652 ;
  const GALGAS_compileTimeInfixInfEqualOperatorUsage temp_0 = object ;
  callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_0.readProperty_mEqualOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12652, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 316)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_result_12652.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 317)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_compileTimeInfixInfEqualOperatorUsage temp_2 = object ;
      callExtensionMethod_eval ((const cPtr_compileTimeInfixOperatorUsage *) temp_2.readProperty_mLessThanOperatorUsage ().ptr (), constinArgument_inLeftOperand, constinArgument_inRightOperand, var_result_12652, inCompiler COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 318)) ;
    }
  }
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_12652  COMMA_SOURCE_FILE ("infix-operator-compile-time.galgas", 320)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimeInfixInfEqualOperatorUsage.mSlotID,
                                     extensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimeInfixInfEqualOperatorUsage_generateCode (defineExtensionMethod_compileTimeInfixInfEqualOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmInfixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mInfixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmInfixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                                  extensionGetter_llvmInfixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmInfixOperatorAST_locationForErrorSignaling (defineExtensionGetter_llvmInfixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendInfixOperatorDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendInfixOperatorDeclaration (const GALGAS_omnibusInfixOperator constinArgument_inInfixOperator,
                                             const GALGAS_string constinArgument_inLLVMOperation,
                                             const GALGAS_string constinArgument_inTypeName,
                                             const GALGAS_string constinArgument_inResultOmnibusTypeName,
                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_1755 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 36)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_1824 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 37)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 38)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 39)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 40)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 41)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 42)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 43)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 44)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  temp_0.plusAssign_operation (var_instructionElements_1824, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  var_llvmInstructionList_1755.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 45)) ;
  GALGAS_abstractDeclarationAST var_declaration_2368 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 48)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 49)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 50)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 51)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 52)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 53)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 54)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 55)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 56)), var_llvmInstructionList_1755  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 46)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2368.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 59)) ;
  var_llvmInstructionList_1755 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 61)) ;
  var_instructionElements_1824 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 62)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 63)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 64)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 65)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 66)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 67)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 68)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 69)) ;
  GALGAS_llvmGenerationInstructionElementList temp_1 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  temp_1.plusAssign_operation (var_instructionElements_1824, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  var_llvmInstructionList_1755.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_1  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 70)) ;
  var_declaration_2368 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 73)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 74)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 75)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 76)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 77)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 78)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 78)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 79)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 80)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 81)), var_llvmInstructionList_1755  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 71)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2368.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 84)) ;
  var_llvmInstructionList_1755 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 86)) ;
  var_instructionElements_1824 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 87)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 88)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = ").add_operation (constinArgument_inLLVMOperation, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 89)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 90)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 91)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 92)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", ")  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 93)) ;
  var_instructionElements_1824.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 94)) ;
  GALGAS_llvmGenerationInstructionElementList temp_2 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  temp_2.plusAssign_operation (var_instructionElements_1824, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  var_llvmInstructionList_1755.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_2  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 95)) ;
  var_declaration_2368 = GALGAS_llvmInfixOperatorAST::constructor_new (constinArgument_inInfixOperator, GALGAS_location::constructor_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 98)), GALGAS_string ("LEFT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 99)), function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 100)).getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 100)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 101)), GALGAS_string ("RIGHT").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 102)), constinArgument_inTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 103)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 104)), constinArgument_inResultOmnibusTypeName.getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 105)), GALGAS_genericFormalParameterList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 106)), var_llvmInstructionList_1755  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 96)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2368.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 109)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  const GALGAS_llvmInfixOperatorAST temp_1 = object ;
  const GALGAS_llvmInfixOperatorAST temp_2 = object ;
  const GALGAS_llvmInfixOperatorAST temp_3 = object ;
  GALGAS_lstring var_nodeName_6567 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_1.readProperty_mLeftTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)), temp_3.readProperty_mInfixOperatorLocation ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 161)) ;
  {
  const GALGAS_llvmInfixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6567, temp_4, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 162)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6567, temp_5.readProperty_mLeftTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 163)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_6 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6567, temp_6.readProperty_mRightTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 164)) ;
  }
  {
  const GALGAS_llvmInfixOperatorAST temp_7 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6567, temp_7.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 165)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                               extensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInfixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_llvmInfixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmInfixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  const GALGAS_llvmInfixOperatorAST temp_1 = object ;
  const GALGAS_llvmInfixOperatorAST temp_2 = object ;
  result_outRepresentation = temp_0.readProperty_mLeftTypeName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (extensionGetter_string (temp_1.readProperty_mInfixOperator (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)).add_operation (temp_2.readProperty_mRightTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 171)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                                           extensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmInfixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmInfixOperatorAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_llvmInfixOperatorAST * object = (const cPtr_llvmInfixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftTypeProxy_8289 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mLeftTypeName (), var_leftTypeProxy_8289 COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 189)) ;
  }
  GALGAS_omnibusType var_leftType_8305 = var_leftTypeProxy_8289.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 190)) ;
  GALGAS_unifiedTypeMap_2D_entry var_rightTypeProxy_8425 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_1.readProperty_mRightTypeName (), var_rightTypeProxy_8425 COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 191)) ;
  }
  GALGAS_omnibusType var_rightType_8442 = var_rightTypeProxy_8425.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 192)) ;
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeProxy_8565 ;
  {
  const GALGAS_llvmInfixOperatorAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8565 COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 193)) ;
  }
  GALGAS_omnibusType var_resultType_8583 = var_resultTypeProxy_8565.getter_type (inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 194)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8305.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8442.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 195)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_llvmInfixOperatorAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mInfixOperatorLocation (), GALGAS_string ("one of the two argument types should not be a compile time type"), fixItArray5  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 196)) ;
    }
  }
  const GALGAS_llvmInfixOperatorAST temp_6 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_resultType_8583.ptr (), temp_6.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 198)) ;
  const GALGAS_llvmInfixOperatorAST temp_7 = object ;
  const GALGAS_llvmInfixOperatorAST temp_8 = object ;
  GALGAS_lstring var_key_8908 = function_infixOperatorMapKey (var_leftType_8305, temp_7.readProperty_mInfixOperator (), temp_8.readProperty_mInfixOperatorLocation (), var_rightType_8442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 200)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8305.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_and (callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8442.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 202)) COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_llvmInfixOperatorAST temp_10 = object ;
      const GALGAS_llvmInfixOperatorAST temp_11 = object ;
      const GALGAS_llvmInfixOperatorAST temp_12 = object ;
      const GALGAS_llvmInfixOperatorAST temp_13 = object ;
      GALGAS_llvmInfixOperatorUsage var_definition_9124 = GALGAS_llvmInfixOperatorUsage::constructor_new (function_infixOperatorFunctionName (var_leftType_8305, temp_10.readProperty_mInfixOperator (), var_rightType_8442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 204)), temp_11.readProperty_mLeftOperandName (), temp_12.readProperty_mRightOperandName (), temp_13.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 203)) ;
      {
      ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8908, var_resultType_8583, var_definition_9124, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 209)) ;
      }
      GALGAS_assignmentGenerationVarMap var_varMap_9445 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 210)) ;
      {
      const GALGAS_llvmInfixOperatorAST temp_14 = object ;
      const GALGAS_llvmInfixOperatorAST temp_15 = object ;
      var_varMap_9445.setter_insertKey (temp_14.readProperty_mLeftOperandName (), GALGAS_string ("%").add_operation (temp_15.readProperty_mLeftOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 211)) ;
      }
      {
      const GALGAS_llvmInfixOperatorAST temp_16 = object ;
      const GALGAS_llvmInfixOperatorAST temp_17 = object ;
      var_varMap_9445.setter_insertKey (temp_16.readProperty_mRightOperandName (), GALGAS_string ("%").add_operation (temp_17.readProperty_mRightOperandName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 212)) ;
      }
      GALGAS_assignmentGenerationVarMap var_typeMap_9650 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 213)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_leftType_8305.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 214)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 214)).boolEnum () ;
        if (kBoolTrue == test_18) {
          {
          const GALGAS_llvmInfixOperatorAST temp_19 = object ;
          var_typeMap_9650.setter_insertKey (temp_19.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_leftType_8305.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 215)) ;
          }
        }
      }
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_rightType_8442.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 217)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 217)).boolEnum () ;
        if (kBoolTrue == test_20) {
          {
          const GALGAS_llvmInfixOperatorAST temp_21 = object ;
          var_typeMap_9650.setter_insertKey (temp_21.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_rightType_8442.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 218)) ;
          }
        }
      }
      {
      var_typeMap_9650.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 220)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8583.ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 220)) ;
      }
      GALGAS_llvmGenerationInstructionList var_instructionList_10044 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 221)) ;
      var_instructionList_10044.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 222))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 222)) ;
      const GALGAS_llvmInfixOperatorAST temp_22 = object ;
      var_instructionList_10044.plusAssign_operation(temp_22.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 223)) ;
      {
      extensionSetter_appendReturn (var_instructionList_10044, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 224)) ;
      }
      GALGAS_stringlist var_generatedInstructions_10283 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 225)) ;
      GALGAS_allocaList var_allocaList_10319 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 226)) ;
      GALGAS_uint var_temporaryIndex_10353 = GALGAS_uint ((uint32_t) 0U) ;
      extensionMethod_generateIRCode (var_instructionList_10044, var_varMap_9445, var_typeMap_9650, var_generatedInstructions_10283, var_temporaryIndex_10353, var_allocaList_10319, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 228)) ;
      const GALGAS_llvmInfixOperatorAST temp_23 = object ;
      const GALGAS_llvmInfixOperatorAST temp_24 = object ;
      const GALGAS_llvmInfixOperatorAST temp_25 = object ;
      const GALGAS_llvmInfixOperatorAST temp_26 = object ;
      GALGAS_infixOperatorRoutineIR var_routine_10481 = GALGAS_infixOperatorRoutineIR::constructor_new (GALGAS_lstring::constructor_new (function_infixOperatorFunctionName (var_leftType_8305, temp_23.readProperty_mInfixOperator (), var_rightType_8442, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), temp_24.readProperty_mInfixOperatorLocation ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 230)), GALGAS_bool (true), GALGAS_bool (false), var_leftType_8305, temp_25.readProperty_mLeftOperandName ().readProperty_string (), var_rightType_8442, temp_26.readProperty_mRightOperandName ().readProperty_string (), var_resultType_8583, var_generatedInstructions_10283, var_allocaList_10319  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 229)) ;
      ioArgument_ioRoutineListIR.addAssign_operation (var_routine_10481  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 241)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_llvmInfixOperatorAST temp_27 = object ;
    const GALGAS_llvmInfixOperatorAST temp_28 = object ;
    const GALGAS_llvmInfixOperatorAST temp_29 = object ;
    GALGAS_llvmInlineInfixOperatorUsage var_definition_10952 = GALGAS_llvmInlineInfixOperatorUsage::constructor_new (temp_27.readProperty_mLeftOperandName (), temp_28.readProperty_mRightOperandName (), temp_29.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 243)) ;
    {
    ioArgument_ioContext.mProperty_mInfixOperatorMap.setter_insertKey (var_key_8908, var_resultType_8583, var_definition_10952, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 248)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInfixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmInfixOperatorAST.mSlotID,
                                       extensionMethod_llvmInfixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInfixOperatorAST_enterInContext (defineExtensionMethod_llvmInfixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmInfixOperatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
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
  const cPtr_llvmInfixOperatorUsage * object = (const cPtr_llvmInfixOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInfixOperatorUsage) ;
  GALGAS_objectIR var_leftOperand_12204 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_12204, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 277)) ;
  }
  GALGAS_objectIR var_rightOperand_12340 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_12340, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 282)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 287)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_argumentList_12612 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 288)) ;
  var_argumentList_12612.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("infix-operator-llvm.galgas", 289)), var_leftOperand_12204  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 289)) ;
  var_argumentList_12612.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("infix-operator-llvm.galgas", 290)), var_rightOperand_12340  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 290)) ;
  const GALGAS_llvmInfixOperatorUsage temp_0 = object ;
  const GALGAS_llvmInfixOperatorUsage temp_1 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outResultValue, GALGAS_lstring::constructor_new (temp_0.readProperty_mInfixMangledFunctionName (), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 293)), temp_1.readProperty_mInfixMangledFunctionName (), var_argumentList_12612  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291))  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 291)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmInfixOperatorUsage.mSlotID,
                                     extensionMethod_llvmInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInfixOperatorUsage_generateCode (defineExtensionMethod_llvmInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmInlineInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmInlineInfixOperatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
                                                                       const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                       const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                       const GALGAS_objectIR constinArgument_inRightOperand,
                                                                       const GALGAS_omnibusType constinArgument_inResultType,
                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & outArgument_outResultValue,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmInlineInfixOperatorUsage * object = (const cPtr_llvmInlineInfixOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_llvmInlineInfixOperatorUsage) ;
  GALGAS_objectIR var_leftOperand_13763 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_13763, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 321)) ;
  }
  GALGAS_objectIR var_rightOperand_13899 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_13899, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 326)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 331)) ;
  }
  GALGAS_assignmentGenerationVarMap var_varMap_14159 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 332)) ;
  {
  const GALGAS_llvmInlineInfixOperatorUsage temp_0 = object ;
  var_varMap_14159.setter_insertKey (temp_0.readProperty_mLeftOperandName (), extensionGetter_llvmName (var_leftOperand_13763, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 333)) ;
  }
  {
  const GALGAS_llvmInlineInfixOperatorUsage temp_1 = object ;
  var_varMap_14159.setter_insertKey (temp_1.readProperty_mRightOperandName (), extensionGetter_llvmName (var_rightOperand_13899, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 334)) ;
  }
  {
  var_varMap_14159.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("infix-operator-llvm.galgas", 335)), extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 335)) ;
  }
  GALGAS_assignmentGenerationVarMap var_typeMap_14418 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("infix-operator-llvm.galgas", 336)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13763, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 337)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_llvmInlineInfixOperatorUsage temp_3 = object ;
      var_typeMap_14418.setter_insertKey (temp_3.readProperty_mLeftOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_13763, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 338)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13899, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 340)).operator_not (SOURCE_FILE ("infix-operator-llvm.galgas", 340)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_llvmInlineInfixOperatorUsage temp_5 = object ;
      var_typeMap_14418.setter_insertKey (temp_5.readProperty_mRightOperandName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_rightOperand_13899, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 341)) ;
      }
    }
  }
  GALGAS_stringlist var_generatedInstructions_14752 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("infix-operator-llvm.galgas", 343)) ;
  const GALGAS_llvmInlineInfixOperatorUsage temp_6 = object ;
  extensionMethod_generateIRCode (temp_6.readProperty_mInstructionList (), var_varMap_14159, var_typeMap_14418, var_generatedInstructions_14752, ioArgument_ioTemporaries.mProperty_mTemporaryIndex, ioArgument_ioAllocaList, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 344)) ;
  cEnumerator_stringlist enumerator_14897 (var_generatedInstructions_14752, kENUMERATION_UP) ;
  while (enumerator_14897.hasCurrentObject ()) {
    {
    extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, enumerator_14897.current_mValue (HERE), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("infix-operator-llvm.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 346)) ;
    }
    enumerator_14897.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmInlineInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmInlineInfixOperatorUsage.mSlotID,
                                     extensionMethod_llvmInlineInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmInlineInfixOperatorUsage_generateCode (defineExtensionMethod_llvmInlineInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@infixOperatorRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_infixOperatorRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_infixOperatorRoutineIR * object = (const cPtr_infixOperatorRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_infixOperatorRoutineIR) ;
  const GALGAS_infixOperatorRoutineIR temp_0 = object ;
  const GALGAS_infixOperatorRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 371)) ;
  const GALGAS_infixOperatorRoutineIR temp_2 = object ;
  const GALGAS_infixOperatorRoutineIR temp_3 = object ;
  const GALGAS_infixOperatorRoutineIR temp_4 = object ;
  const GALGAS_infixOperatorRoutineIR temp_5 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mTargetType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (temp_3.readProperty_mTargetVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_4.readProperty_mSourceType ().ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (temp_5.readProperty_mSourceVarName (), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 372)) ;
  const GALGAS_infixOperatorRoutineIR temp_6 = object ;
  extensionMethod_generateAllocaList (temp_6.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 374)) ;
  const GALGAS_infixOperatorRoutineIR temp_7 = object ;
  cEnumerator_stringlist enumerator_16294 (temp_7.readProperty_mGeneratedInstructions (), kENUMERATION_UP) ;
  while (enumerator_16294.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_16294.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 376)) ;
    enumerator_16294.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("infix-operator-llvm.galgas", 378)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_infixOperatorRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_infixOperatorRoutineIR.mSlotID,
                                           extensionMethod_infixOperatorRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_infixOperatorRoutineIR_llvmCodeGeneration (defineExtensionMethod_infixOperatorRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inlineInfixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inlineInfixOperatorUsage_generateCode (const cPtr_omnibusInfixOperatorUsage * inObject,
                                                                   const GALGAS_objectIR constinArgument_inLeftOperand,
                                                                   const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                   const GALGAS_objectIR constinArgument_inRightOperand,
                                                                   const GALGAS_omnibusType constinArgument_inResultType,
                                                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                   GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                   GALGAS_objectIR & outArgument_outResultValue,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inlineInfixOperatorUsage * object = (const cPtr_inlineInfixOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_inlineInfixOperatorUsage) ;
  GALGAS_objectIR var_leftOperand_2897 = constinArgument_inLeftOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_leftOperand_2897, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 76)) ;
  }
  GALGAS_objectIR var_rightOperand_3020 = constinArgument_inRightOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_rightOperand_3020, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 78)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("infix-operator-map.galgas", 79)) ;
  }
  const GALGAS_inlineInfixOperatorUsage temp_0 = object ;
  GALGAS_string var_s_3200 = extensionGetter_llvmName (outArgument_outResultValue, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (temp_0.readProperty_mLLVMOperation (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) extensionGetter_type (var_leftOperand_2897, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).ptr (), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 80)).add_operation (extensionGetter_llvmName (var_leftOperand_2897, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)).add_operation (extensionGetter_llvmName (var_rightOperand_3020, inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 81)) ;
  {
  extensionSetter_appendInstructionAsFreeString (ioArgument_ioInstructionGenerationList, var_s_3200, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("infix-operator-map.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("infix-operator-map.galgas", 82)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inlineInfixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_inlineInfixOperatorUsage.mSlotID,
                                     extensionMethod_inlineInfixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inlineInfixOperatorUsage_generateCode (defineExtensionMethod_inlineInfixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                                    const GALGAS_lstring constinArgument_inConstantName,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 68)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 69)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_omnibusInfixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 77)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 78)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_omnibusInfixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@omnibusInfixOperatorExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                                 const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                 const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                 const GALGAS_mode constinArgument_inMode,
                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                 GALGAS_objectIR & outArgument_outResult,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_omnibusInfixOperatorExpressionAST * object = (const cPtr_omnibusInfixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_omnibusInfixOperatorExpressionAST) ;
  GALGAS_objectIR var_leftOperand_5519 ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_leftOperand_5519, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 118)) ;
  GALGAS_objectIR var_rightOperand_5980 ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, extensionGetter_type (var_leftOperand_5519, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 135)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_rightOperand_5980, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 132)) ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_2 = object ;
  const GALGAS_omnibusInfixOperatorExpressionAST temp_3 = object ;
  extensionMethod_generateInfixOperatorCode (constinArgument_inContext.readProperty_mInfixOperatorMap (), var_leftOperand_5519, temp_2.readProperty_mInfixOperator (), temp_3.readProperty_mOperatorLocation (), var_rightOperand_5980, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-infix-operators.galgas", 146)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_omnibusInfixOperatorExpressionAST.mSlotID,
                                          extensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_omnibusInfixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_omnibusInfixOperatorExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                                  extensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compiletimePrefixOperatorAST_locationForErrorSignaling (defineExtensionGetter_compiletimePrefixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_2 = object ;
  GALGAS_lstring var_nodeName_3768 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)), temp_2.readProperty_mPrefixOperatorLocation ()  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 100)) ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_3768, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 101)) ;
  }
  {
  const GALGAS_compiletimePrefixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3768, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 102)) ;
  }
  {
  const GALGAS_compiletimePrefixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_3768, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 103)) ;
  }
  {
  ioArgument_ioGraph.setter_addEdge (function_compileTimeDeclarationBarrier (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)), var_nodeName_3768 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 104)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                               extensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_compiletimePrefixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@compiletimePrefixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = object ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 110)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                                           extensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_compiletimePrefixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compiletimePrefixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compiletimePrefixOperatorAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_compiletimePrefixOperatorAST * object = (const cPtr_compiletimePrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_compiletimePrefixOperatorAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverTypeProxy_5501 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_5501 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 128)) ;
  }
  GALGAS_omnibusType var_receiverType_5521 = var_receiverTypeProxy_5501.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 129)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_1 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_receiverType_5521.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 130)) ;
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeProxy_5720 ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_5720 COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 131)) ;
  }
  GALGAS_omnibusType var_resultType_5738 = var_resultTypeProxy_5720.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 132)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_3 = object ;
  callExtensionMethod_checkIsCompileTimeType ((const cPtr_omnibusType *) var_resultType_5738.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 133)) ;
  GALGAS_ctCheckMap var_ctCheckMap_5899 = GALGAS_ctCheckMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-compile-time.galgas", 135)) ;
  {
  const GALGAS_compiletimePrefixOperatorAST temp_4 = object ;
  var_ctCheckMap_5899.setter_insertKey (temp_4.readProperty_mReceiverName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 136)) ;
  }
  const GALGAS_compiletimePrefixOperatorAST temp_5 = object ;
  callExtensionMethod_checkCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_5.readProperty_mExpression ().ptr (), var_ctCheckMap_5899, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 137)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_6 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_7 = object ;
  GALGAS_lstring var_key_6056 = function_prefixOperatorMapKey (var_receiverType_5521, extensionGetter_prefixOperator (temp_6.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)), temp_7.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 139)) ;
  const GALGAS_compiletimePrefixOperatorAST temp_8 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_9 = object ;
  const GALGAS_compiletimePrefixOperatorAST temp_10 = object ;
  GALGAS_compileTimePrefixOperatorUsage var_definition_6164 = GALGAS_compileTimePrefixOperatorUsage::constructor_new (temp_8.readProperty_mPrefixOperatorLocation (), temp_9.readProperty_mReceiverName (), temp_10.readProperty_mExpression ()  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 140)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_6056, var_receiverType_5521, var_resultType_5738, var_definition_6164, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 145)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_compiletimePrefixOperatorAST temp_12 = object ;
    test_11 = GALGAS_bool (kIsEqual, temp_12.readProperty_mPrefixOperator ().objectCompare (GALGAS_compileTimePrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-compile-time.galgas", 147)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_compiletimePrefixOperatorAST temp_13 = object ;
      GALGAS_lstring var_minusNoOvf_5F_key_6473 = function_prefixOperatorMapKey (var_receiverType_5521, GALGAS_prefixOperator::constructor_minusNoOvf (SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)), temp_13.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 148)) ;
      {
      ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_minusNoOvf_5F_key_6473, var_receiverType_5521, var_resultType_5738, var_definition_6164, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 149)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compiletimePrefixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_compiletimePrefixOperatorAST.mSlotID,
                                       extensionMethod_compiletimePrefixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compiletimePrefixOperatorAST_enterInContext (defineExtensionMethod_compiletimePrefixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@compileTimePrefixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_compileTimePrefixOperatorUsage_generateCode (const cPtr_prefixOperatorUsage * inObject,
                                                                         const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                         const GALGAS_location /* constinArgument_inOperatorLocation */,
                                                                         const GALGAS_omnibusType constinArgument_inResultType,
                                                                         const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                         const GALGAS_bool /* constinArgument_inSafeMode */,
                                                                         GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                         GALGAS_objectIR & outArgument_outResultValue,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_compileTimePrefixOperatorUsage * object = (const cPtr_compileTimePrefixOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_compileTimePrefixOperatorUsage) ;
  GALGAS_bigint var_receiverValue_7734 ;
  GALGAS_omnibusType joker_7706_1 ; // Joker input parameter
  constinArgument_inReceiverOperand.method_literalInteger (joker_7706_1, var_receiverValue_7734, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 175)) ;
  GALGAS_ctMap var_varMap_7755 = GALGAS_ctMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-compile-time.galgas", 176)) ;
  {
  const GALGAS_compileTimePrefixOperatorUsage temp_0 = object ;
  var_varMap_7755.setter_insertKey (temp_0.readProperty_mReceiverOperandName (), var_receiverValue_7734, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 177)) ;
  }
  GALGAS_bigint var_result_7910 ;
  const GALGAS_compileTimePrefixOperatorUsage temp_1 = object ;
  callExtensionMethod_computeCompileTimeExpression ((const cPtr_ctExpressionAST *) temp_1.readProperty_mExpression ().ptr (), var_varMap_7755, var_result_7910, inCompiler COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 178)) ;
  outArgument_outResultValue = GALGAS_objectIR::constructor_literalInteger (constinArgument_inResultType, var_result_7910  COMMA_SOURCE_FILE ("prefix-operator-compile-time.galgas", 179)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_compileTimePrefixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_compileTimePrefixOperatorUsage.mSlotID,
                                     extensionMethod_compileTimePrefixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_compileTimePrefixOperatorUsage_generateCode (defineExtensionMethod_compileTimePrefixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST locationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_location extensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outLocation ; // Returned variable
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  result_outLocation = temp_0.readProperty_mPrefixOperatorLocation () ;
//---
  return result_outLocation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling (void) {
  enterExtensionGetter_locationForErrorSignaling (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                                  extensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmPrefixOperatorAST_locationForErrorSignaling (defineExtensionGetter_llvmPrefixOperatorAST_locationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_minus'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_minus (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_2291 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 58)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_2360 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 59)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 60)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = sub ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 61)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 62)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" 0, ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 63)) ;
  var_instructionElements_2360.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 64)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  temp_0.plusAssign_operation (var_instructionElements_2360, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  var_llvmInstructionList_2291.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 65)) ;
  GALGAS_abstractDeclarationAST var_declaration_2776 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOp (SOURCE_FILE ("prefix-operator-llvm.galgas", 67)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 68)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 69)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 70)), var_llvmInstructionList_2291, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 72))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 66)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2776.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 74)) ;
  var_declaration_2776 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_minusOpNoOvf (SOURCE_FILE ("prefix-operator-llvm.galgas", 76)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 77)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 78)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 79)), var_llvmInstructionList_2291, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 81))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 75)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_2776.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 83)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'appendPrefixOperatorDeclaration_bitWiseComplement'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_appendPrefixOperatorDeclaration_5F_bitWiseComplement (const GALGAS_string constinArgument_inOmnibusReceiverTypeName,
                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioPrecedenceGraph,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_llvmGenerationInstructionList var_llvmInstructionList_3653 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 93)) ;
  GALGAS_llvmGenerationInstructionElementList var_instructionElements_3722 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 94)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 95)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" = xor ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 96)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_type (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 97)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (" ")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 98)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_symbol (GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 99)) ;
  var_instructionElements_3722.addAssign_operation (GALGAS_llvmGenerationInstructionElement::constructor_string (GALGAS_string (", -1")  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 100)) ;
  GALGAS_llvmGenerationInstructionElementList temp_0 = GALGAS_llvmGenerationInstructionElementList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  temp_0.plusAssign_operation (var_instructionElements_3722, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  var_llvmInstructionList_3653.addAssign_operation (GALGAS_llvmGenerationInstruction::constructor_new (temp_0  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 101)) ;
  GALGAS_abstractDeclarationAST var_declaration_4187 = GALGAS_llvmPrefixOperatorAST::constructor_new (GALGAS_llvmPrefixOperatorEnumeration::constructor_bitWiseComplement (SOURCE_FILE ("prefix-operator-llvm.galgas", 103)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 104)), GALGAS_string ("SELF").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 105)), constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 106)), var_llvmInstructionList_3653, constinArgument_inOmnibusReceiverTypeName.getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 108))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 102)) ;
  callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) var_declaration_4187.ptr (), ioArgument_ioPrecedenceGraph, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 110)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_2 = object ;
  GALGAS_lstring var_nodeName_6530 = GALGAS_lstring::constructor_new (extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)), temp_2.readProperty_mPrefixOperatorLocation ()  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 174)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_3 = object ;
  ioArgument_ioGraph.setter_addNode (var_nodeName_6530, temp_3, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 175)) ;
  }
  {
  const GALGAS_llvmPrefixOperatorAST temp_4 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6530, temp_4.readProperty_mReceiverTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 176)) ;
  }
  {
  const GALGAS_llvmPrefixOperatorAST temp_5 = object ;
  ioArgument_ioGraph.setter_addEdge (var_nodeName_6530, temp_5.readProperty_mResultTypeName () COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 177)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (void) {
  enterExtensionMethod_enterInPrecedenceGraph (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                               extensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph (defineExtensionMethod_llvmPrefixOperatorAST_enterInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@llvmPrefixOperatorAST keyRepresentationForErrorSignaling'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (const cPtr_abstractDeclarationAST * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outRepresentation ; // Returned variable
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = object ;
  result_outRepresentation = extensionGetter_string (temp_0.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)).add_operation (temp_1.readProperty_mReceiverTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 183)) ;
//---
  return result_outRepresentation ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (void) {
  enterExtensionGetter_keyRepresentationForErrorSignaling (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                                           extensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling (defineExtensionGetter_llvmPrefixOperatorAST_keyRepresentationForErrorSignaling, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorAST enterInContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmPrefixOperatorAST_enterInContext (const cPtr_abstractDeclarationAST * inObject,
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
  const cPtr_llvmPrefixOperatorAST * object = (const cPtr_llvmPrefixOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverTypeProxy_8170 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_0.readProperty_mReceiverTypeName (), var_receiverTypeProxy_8170 COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 201)) ;
  }
  GALGAS_omnibusType var_receiverType_8190 = var_receiverTypeProxy_8170.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 202)) ;
  const GALGAS_llvmPrefixOperatorAST temp_1 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_receiverType_8190.ptr (), temp_1.readProperty_mReceiverTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 203)) ;
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeProxy_8392 ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioContext.mProperty_mTypeMap, temp_2.readProperty_mResultTypeName (), var_resultTypeProxy_8392 COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 204)) ;
  }
  GALGAS_omnibusType var_resultType_8410 = var_resultTypeProxy_8392.getter_type (inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 205)) ;
  const GALGAS_llvmPrefixOperatorAST temp_3 = object ;
  callExtensionMethod_checkIsNotCompileTimeType ((const cPtr_omnibusType *) var_resultType_8410.ptr (), temp_3.readProperty_mResultTypeName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 206)) ;
  const GALGAS_llvmPrefixOperatorAST temp_4 = object ;
  GALGAS_string var_prefixMangledFunctionName_8572 = function_prefixOperatorFunctionName (var_receiverType_8190, extensionGetter_prefixOperator (temp_4.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 208)) ;
  const GALGAS_llvmPrefixOperatorAST temp_5 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_6 = object ;
  GALGAS_lstring var_key_8649 = function_prefixOperatorMapKey (var_receiverType_8190, extensionGetter_prefixOperator (temp_5.readProperty_mPrefixOperator (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)), temp_6.readProperty_mPrefixOperatorLocation (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 209)) ;
  const GALGAS_llvmPrefixOperatorAST temp_7 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_8 = object ;
  GALGAS_llvmPrefixOperatorUsage var_definition_8757 = GALGAS_llvmPrefixOperatorUsage::constructor_new (var_prefixMangledFunctionName_8572, temp_7.readProperty_mReceiverName (), temp_8.readProperty_mInstructionList ()  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 210)) ;
  {
  ioArgument_ioContext.mProperty_mPrefixOperatorMap.setter_insertKey (var_key_8649, var_receiverType_8190, var_resultType_8410, var_definition_8757, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 215)) ;
  }
  GALGAS_assignmentGenerationVarMap var_varMap_9029 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-llvm.galgas", 217)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_9 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_10 = object ;
  var_varMap_9029.setter_insertKey (temp_9.readProperty_mReceiverName (), GALGAS_string ("%").add_operation (temp_10.readProperty_mReceiverName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 218)) ;
  }
  GALGAS_assignmentGenerationVarMap var_typeMap_9145 = GALGAS_assignmentGenerationVarMap::constructor_emptyMap (SOURCE_FILE ("prefix-operator-llvm.galgas", 219)) ;
  {
  const GALGAS_llvmPrefixOperatorAST temp_11 = object ;
  var_typeMap_9145.setter_insertKey (temp_11.readProperty_mReceiverName (), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_receiverType_8190.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 220)) ;
  }
  {
  var_typeMap_9145.setter_insertKey (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) var_resultType_8410.ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 221)) ;
  }
  GALGAS_llvmGenerationInstructionList var_instructionList_9347 = GALGAS_llvmGenerationInstructionList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 222)) ;
  var_instructionList_9347.addAssign_operation (GALGAS_llvmVarInstruction::constructor_new (GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 223))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 223)) ;
  const GALGAS_llvmPrefixOperatorAST temp_12 = object ;
  var_instructionList_9347.plusAssign_operation(temp_12.readProperty_mInstructionList (), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 224)) ;
  {
  extensionSetter_appendReturn (var_instructionList_9347, GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), GALGAS_string ("result").getter_nowhere (SOURCE_FILE ("prefix-operator-llvm.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 225)) ;
  }
  GALGAS_stringlist var_generatedInstructions_9578 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 226)) ;
  GALGAS_allocaList var_allocaList_9612 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 227)) ;
  GALGAS_uint var_temporaryIndex_9644 = GALGAS_uint ((uint32_t) 0U) ;
  extensionMethod_generateIRCode (var_instructionList_9347, var_varMap_9029, var_typeMap_9145, var_generatedInstructions_9578, var_temporaryIndex_9644, var_allocaList_9612, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 229)) ;
  const GALGAS_llvmPrefixOperatorAST temp_13 = object ;
  const GALGAS_llvmPrefixOperatorAST temp_14 = object ;
  GALGAS_prefixOperatorRoutineIR var_routine_9768 = GALGAS_prefixOperatorRoutineIR::constructor_new (GALGAS_lstring::constructor_new (var_prefixMangledFunctionName_8572, temp_13.readProperty_mPrefixOperatorLocation ()  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 231)), GALGAS_bool (true), GALGAS_bool (false), var_receiverType_8190, temp_14.readProperty_mReceiverName ().readProperty_string (), var_resultType_8410, var_generatedInstructions_9578, var_allocaList_9612  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 230)) ;
  ioArgument_ioRoutineListIR.addAssign_operation (var_routine_9768  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 240)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmPrefixOperatorAST_enterInContext (void) {
  enterExtensionMethod_enterInContext (kTypeDescriptor_GALGAS_llvmPrefixOperatorAST.mSlotID,
                                       extensionMethod_llvmPrefixOperatorAST_enterInContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmPrefixOperatorAST_enterInContext (defineExtensionMethod_llvmPrefixOperatorAST_enterInContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@llvmPrefixOperatorUsage generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_llvmPrefixOperatorUsage_generateCode (const cPtr_prefixOperatorUsage * inObject,
                                                                  const GALGAS_objectIR constinArgument_inReceiverOperand,
                                                                  const GALGAS_location constinArgument_inOperatorLocation,
                                                                  const GALGAS_omnibusType constinArgument_inResultType,
                                                                  const GALGAS_bool /* constinArgument_inDoNotGeneratePanicCode */,
                                                                  const GALGAS_bool /* constinArgument_inSafeMode */,
                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                  GALGAS_objectIR & outArgument_outResultValue,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_llvmPrefixOperatorUsage * object = (const cPtr_llvmPrefixOperatorUsage *) inObject ;
  macroValidSharedObject (object, cPtr_llvmPrefixOperatorUsage) ;
  GALGAS_objectIR var_receiverOperand_11097 = constinArgument_inReceiverOperand ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_receiverOperand_11097, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 267)) ;
  }
  {
  routine_getNewTempValue (constinArgument_inResultType, ioArgument_ioTemporaries, outArgument_outResultValue, inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 272)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_argumentList_11375 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("prefix-operator-llvm.galgas", 273)) ;
  var_argumentList_11375.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("prefix-operator-llvm.galgas", 274)), var_receiverOperand_11097  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 274)) ;
  const GALGAS_llvmPrefixOperatorUsage temp_0 = object ;
  const GALGAS_llvmPrefixOperatorUsage temp_1 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (outArgument_outResultValue, GALGAS_lstring::constructor_new (temp_0.readProperty_mPrefixMangledFunctionName (), constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 277)), temp_1.readProperty_mPrefixMangledFunctionName (), var_argumentList_11375  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275))  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 275)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_llvmPrefixOperatorUsage_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_llvmPrefixOperatorUsage.mSlotID,
                                     extensionMethod_llvmPrefixOperatorUsage_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_llvmPrefixOperatorUsage_generateCode (defineExtensionMethod_llvmPrefixOperatorUsage_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorRoutineIR llvmCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration (const cPtr_abstractRoutineIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorRoutineIR * object = (const cPtr_prefixOperatorRoutineIR *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorRoutineIR) ;
  const GALGAS_prefixOperatorRoutineIR temp_0 = object ;
  const GALGAS_prefixOperatorRoutineIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("define internal ").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mResultType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (GALGAS_string (" @"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)).add_operation (temp_1.readProperty_mRoutineMangledName ().readProperty_string ().getter_assemblerRepresentation (SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 302)) ;
  const GALGAS_prefixOperatorRoutineIR temp_2 = object ;
  const GALGAS_prefixOperatorRoutineIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_2.readProperty_mReceiverType ().ptr (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (temp_3.readProperty_mReceiverVarName (), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)).add_operation (GALGAS_string (") nounwind {\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 303)) ;
  const GALGAS_prefixOperatorRoutineIR temp_4 = object ;
  extensionMethod_generateAllocaList (temp_4.readProperty_mAllocaList (), ioArgument_ioLLVMcode, inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 304)) ;
  const GALGAS_prefixOperatorRoutineIR temp_5 = object ;
  cEnumerator_stringlist enumerator_12773 (temp_5.readProperty_mGeneratedInstructions (), kENUMERATION_UP) ;
  while (enumerator_12773.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_12773.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 306)) ;
    enumerator_12773.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("prefix-operator-llvm.galgas", 308)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration (void) {
  enterExtensionMethod_llvmCodeGeneration (kTypeDescriptor_GALGAS_prefixOperatorRoutineIR.mSlotID,
                                           extensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorRoutineIR_llvmCodeGeneration (defineExtensionMethod_prefixOperatorRoutineIR_llvmCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST addDependenceEdgeForStaticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (const cPtr_expressionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inConstantName,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_addDependenceEdgeForStaticExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 28)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (void) {
  enterExtensionMethod_addDependenceEdgeForStaticExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression (defineExtensionMethod_prefixOperatorExpressionAST_addDependenceEdgeForStaticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST noteExpressionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (const cPtr_expressionAST * inObject,
                                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteExpressionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                                             extensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph (defineExtensionMethod_prefixOperatorExpressionAST_noteExpressionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefixOperatorExpressionAST analyzeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_prefixOperatorExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
                                                                           const GALGAS_omnibusType constinArgument_inSelfType,
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_omnibusType constinArgument_inOptionalTargetType,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           GALGAS_objectIR & outArgument_outResult,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefixOperatorExpressionAST * object = (const cPtr_prefixOperatorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_prefixOperatorExpressionAST) ;
  GALGAS_objectIR var_expressionResult_3314 ;
  const GALGAS_prefixOperatorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inOptionalTargetType, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3314, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 57)) ;
  GALGAS_bool var_currentlyInSafeMode_3363 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 71)) ;
  GALGAS_bool var_noPanicGeneration_3411 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()) ;
  const GALGAS_prefixOperatorExpressionAST temp_1 = object ;
  const GALGAS_prefixOperatorExpressionAST temp_2 = object ;
  extensionMethod_generatePrefixOperatorCode (constinArgument_inContext.readProperty_mPrefixOperatorMap (), var_expressionResult_3314, temp_1.readProperty_mOp (), temp_2.readProperty_mOperatorLocation (), var_currentlyInSafeMode_3363, var_noPanicGeneration_3411, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("expression-prefix-operators.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression (void) {
  enterExtensionMethod_analyzeExpression (kTypeDescriptor_GALGAS_prefixOperatorExpressionAST.mSlotID,
                                          extensionMethod_prefixOperatorExpressionAST_analyzeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_prefixOperatorExpressionAST_analyzeExpression (defineExtensionMethod_prefixOperatorExpressionAST_analyzeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  const GALGAS_checkInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 41)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                              extensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_checkInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@checkInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_checkInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3028 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 60)) ;
  GALGAS_objectIR var_expressionResult_3434 ;
  const GALGAS_checkInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3028, var_expressionResult_3434, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 61)) ;
  GALGAS_implicitBooleanConversionResult var_booleanOperand_3670 ;
  const GALGAS_checkInstructionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_3434, temp_1.readProperty_mCheckMessage ().readProperty_location (), ioArgument_ioTemporaries, var_instructionGenerationList_3028, ioArgument_ioAllocaList, var_booleanOperand_3670, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 74)) ;
  switch (var_booleanOperand_3670.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_3964 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanOperand_3670.unsafePointer ()) ;
      const GALGAS_bool extractedValue_3735_boolValue = extractPtr_3964->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = extractedValue_3735_boolValue.operator_not (SOURCE_FILE ("directive-check.galgas", 85)).boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_checkInstructionAST temp_4 = object ;
            test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mCheckMessage ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_checkInstructionAST temp_5 = object ;
              const GALGAS_checkInstructionAST temp_6 = object ;
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_5.readProperty_mCheckMessage ().readProperty_location (), GALGAS_string ("check failure: ").add_operation (temp_6.readProperty_mCheckMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 87)), fixItArray7  COMMA_SOURCE_FILE ("directive-check.galgas", 87)) ;
            }
          }
          if (kBoolFalse == test_3) {
            const GALGAS_checkInstructionAST temp_8 = object ;
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (temp_8.readProperty_mCheckMessage ().readProperty_location (), GALGAS_string ("check failure"), fixItArray9  COMMA_SOURCE_FILE ("directive-check.galgas", 89)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      const GALGAS_checkInstructionAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("expression is not static: use assert instruction"), fixItArray11  COMMA_SOURCE_FILE ("directive-check.galgas", 93)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_checkInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_checkInstructionAST.mSlotID,
                                                    extensionMethod_checkInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_checkInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_checkInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  const GALGAS_assertInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                              extensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assertInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                              const GALGAS_omnibusType constinArgument_inSelfType,
                                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_mode constinArgument_inMode,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionAST * object = (const cPtr_assertInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assert.galgas", 54)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_assertInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)), fixItArray2  COMMA_SOURCE_FILE ("instruction-assert.galgas", 55)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_3029 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 58)) ;
  GALGAS_objectIR var_expressionValue_3433 ;
  const GALGAS_assertInstructionAST temp_3 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 62)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3029, var_expressionValue_3433, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 59)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_type (var_expressionValue_3433, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 73)).readProperty_kind ().getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 73)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 73)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_assertInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("expression is not boolean"), fixItArray6  COMMA_SOURCE_FILE ("instruction-assert.galgas", 74)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = extensionGetter_isStatic (var_expressionValue_3433, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_assertInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("expression is static: use check directive"), fixItArray9  COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 81)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_assertInstructionAST temp_11 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (temp_11.readProperty_mInstructionLocation (), var_instructionGenerationList_3029, var_expressionValue_3433  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_assertInstructionAST.mSlotID,
                                                    extensionMethod_assertInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_assertInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  const GALGAS_assertInstructionIR temp_0 = object ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 107)) ;
  GALGAS_string var_labelAssertOk_4972 = GALGAS_string ("assert.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 108)) ;
  GALGAS_string var_labelAssertEr_5039 = GALGAS_string ("assert.not.ok.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-assert.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 109)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 110)) ;
  const GALGAS_assertInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mExpressionValue (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertOk_4972, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (var_labelAssertEr_5039, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 111)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertEr_5039.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 112)) ;
  const GALGAS_assertInstructionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_2.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  const GALGAS_assertInstructionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (temp_3.readProperty_mAssertInstructionLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (function_panicCodeForAssertViolation (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelAssertOk_4972.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                            extensionMethod_assertInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionIR_llvmInstructionCode (defineExtensionMethod_assertInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assertInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assertInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assertInstructionIR * object = (const cPtr_assertInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_assertInstructionIR) ;
  const GALGAS_assertInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 126)) ;
  const GALGAS_assertInstructionIR temp_1 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_1.readProperty_mAssertInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assertInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_assertInstructionIR.mSlotID,
                                                extensionMethod_assertInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assertInstructionIR_enterAccessibleEntities (defineExtensionMethod_assertInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  const GALGAS_assignmentInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 40)) ;
  const GALGAS_assignmentInstructionAST temp_1 = object ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (temp_1.readProperty_mTargetAST (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 41)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                              extensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_assignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                  const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                                                  const GALGAS_mode constinArgument_inMode,
                                                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                  GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                  GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_omnibusType var_targetType_3150 ;
  const GALGAS_assignmentInstructionAST temp_0 = object ;
  extensionMethod_searchValuedObjectType (ioArgument_ioUniversalMap, constinArgument_inContext, constinArgument_inSelfType, temp_0.readProperty_mTargetAST (), var_targetType_3150, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 59)) ;
  GALGAS_objectIR var_sourceOperandPossibleReference_3604 ;
  const GALGAS_assignmentInstructionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3150, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_3604, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_instructionListListIR var_pendingStoreComputedPropertyInstructionGenerationList_3711 = GALGAS_instructionListListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 75)) ;
  GALGAS_LValueRepresentation var_lvalueIR_4186 ;
  const GALGAS_assignmentInstructionAST temp_2 = object ;
  extensionMethod_analyzeLValueInAssignment (temp_2.readProperty_mTargetAST (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_pendingStoreComputedPropertyInstructionGenerationList_3711, var_lvalueIR_4186, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 76)) ;
  {
  const GALGAS_assignmentInstructionAST temp_3 = object ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, var_lvalueIR_4186.readProperty_type (), var_lvalueIR_4186.readProperty_llvmName (), var_sourceOperandPossibleReference_3604, temp_3.readProperty_mInstructionLocation (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
  }
  cEnumerator_instructionListListIR enumerator_4574 (var_pendingStoreComputedPropertyInstructionGenerationList_3711, kENUMERATION_DOWN) ;
  while (enumerator_4574.hasCurrentObject ()) {
    ioArgument_ioInstructionGenerationList.plusAssign_operation(enumerator_4574.current_mInstructionList (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 102)) ;
    enumerator_4574.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                    extensionMethod_assignmentInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_assignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValueInAssignment (const GALGAS_omnibusType constinArgument_inSelfType,
                                                  const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_mode constinArgument_inMode,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                  GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                  GALGAS_allocaList & ioArgument_ioAllocaList,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                                  const GALGAS_lstring constinArgument_inVariableName,
                                                  const GALGAS_string constinArgument_inLLVMName,
                                                  const GALGAS_omnibusType constinArgument_inVariableType,
                                                  const GALGAS_LValueOperandAST constinArgument_inOperand,
                                                  GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_8637 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8676 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
      {
      GALGAS_objectIR joker_8800 ; // Joker input parameter
      extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8800, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 198)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_9479 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8833_name = extractPtr_9479->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_8863_nextOperand = extractPtr_9479->mAssociatedValue1 ;
      {
      GALGAS_objectIR joker_8943 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_8943, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      }
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, var_currentType_8637, var_currentLLVMName_8676, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_8833_name, extractedValue_8863_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_10229 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_9515_indexExpression = extractPtr_10229->mAssociatedValue0 ;
      const GALGAS_location extractedValue_9526_endOfIndex = extractPtr_10229->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_9547_checkIndexExpression = extractPtr_10229->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_9559_nextOperand = extractPtr_10229->mAssociatedValue3 ;
      {
      GALGAS_objectIR joker_9639 ; // Joker input parameter
      extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9639, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
      }
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, var_currentType_8637, var_currentLLVMName_8676, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_9515_indexExpression, extractedValue_9526_endOfIndex, extractedValue_9547_checkIndexExpression, extractedValue_9559_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 219)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_8637, var_currentLLVMName_8676  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 238)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccessInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccessInAssignment (const GALGAS_omnibusType constinArgument_inSelfType,
                                               GALGAS_omnibusType & ioArgument_ioCurrentType,
                                               GALGAS_string & ioArgument_ioCurrentLLVMName,
                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap var_propertySetterMap_11271 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
  GALGAS_propertySetterKind var_propertyAccess_11568 ;
  GALGAS_propertyVisibility joker_11527 ; // Joker input parameter
  var_propertySetterMap_11271.method_searchKey (constinArgument_inPropertyName, joker_11527, var_propertyAccess_11568, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
  switch (var_propertyAccess_11568.enumValue ()) {
  case GALGAS_propertySetterKind::kNotBuilt:
    break ;
  case GALGAS_propertySetterKind::kEnum_computedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_computedProperty * extractPtr_13607 = (const cEnumAssociatedValues_propertySetterKind_computedProperty *) (var_propertyAccess_11568.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_entry extractedValue_11661_computedPropertyType = extractPtr_13607->mAssociatedValue0 ;
      const GALGAS_routineLLVMNameDict extractedValue_11682_getterModeDictionary = extractPtr_13607->mAssociatedValue1 ;
      const GALGAS_routineLLVMNameDict extractedValue_11703_setterModeDictionary = extractPtr_13607->mAssociatedValue2 ;
      GALGAS_string var_getterRoutineLLVMName_11762 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11682_getterModeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
      GALGAS_objectIR var_resultValueIR_12100 ;
      {
      extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::constructor_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)), var_getterRoutineLLVMName_11762, extractedValue_11661_computedPropertyType.getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)), var_resultValueIR_12100, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)) ;
      }
      {
      extensionSetter_referenceFromPossibleValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioAllocaList, var_resultValueIR_12100, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      }
      GALGAS_string var_setterRoutineLLVMName_12322 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_11703_setterModeDictionary, constinArgument_inMode, constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 278)) ;
      GALGAS_instructionListIR var_pendingStoreComputedPropertyInstructionGenerationList_12488 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 279)) ;
      GALGAS_objectIR var_tempValueIR_12513 = var_resultValueIR_12100 ;
      {
      extensionSetter_appendLoadWhenReference (var_pendingStoreComputedPropertyInstructionGenerationList_12488, ioArgument_ioTemporaries, var_tempValueIR_12513, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
      }
      {
      extensionSetter_appendStoreComputedPropertyValue (var_pendingStoreComputedPropertyInstructionGenerationList_12488, GALGAS_objectIR::constructor_reference (ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)), var_setterRoutineLLVMName_12322, var_tempValueIR_12513, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 282)) ;
      }
      ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList.addAssign_operation (var_pendingStoreComputedPropertyInstructionGenerationList_12488  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      ioArgument_ioCurrentType = extensionGetter_type (var_resultValueIR_12100, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 289)) ;
      ioArgument_ioCurrentLLVMName = extensionGetter_llvmName (var_resultValueIR_12100, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 290)) ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 291)) ;
      }
    }
    break ;
  case GALGAS_propertySetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_14508 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (var_propertyAccess_11568.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_13656_propertyType = extractPtr_14508->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_13668_index = extractPtr_14508->mAssociatedValue1 ;
      GALGAS_string var_newLLVMvariable_13728 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_13728, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 307)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_13728, extractedValue_13668_index, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13656_propertyType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_13728 ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 317)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccessInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccessInAssignment (const GALGAS_omnibusType constinArgument_inSelfType,
                                            GALGAS_omnibusType & ioArgument_ioCurrentType,
                                            GALGAS_string & ioArgument_ioCurrentLLVMName,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                            const GALGAS_location constinArgument_inEndOfIndex,
                                            const GALGAS_bool constinArgument_inCheckIndexExpression,
                                            const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)), fixItArray0  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 357)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 360)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_17197 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioCurrentType.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_15848_elementType = extractPtr_17197->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_15866_arraySize = extractPtr_17197->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_16352 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_15866_arraySize, extractedValue_15848_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_16352, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 364)) ;
      }
      GALGAS_string var_newLLVMvariable_16415 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16415, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 381)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_15848_elementType, var_newLLVMvariable_16415, var_indexIR_16352, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 382)) ;
      }
      ioArgument_ioCurrentType = extractedValue_15848_elementType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_16415 ;
      {
      routine_handleNextOperandInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 391)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValueInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValueInAssignment (const GALGAS_omnibusType constinArgument_inSelfType,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                            const GALGAS_LValueOperandAST constinArgument_inOperand,
                                            GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_18036 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_18071 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 426)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_18714 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_18161_name = extractPtr_18714->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_18184_next = extractPtr_18714->mAssociatedValue1 ;
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, var_currentType_18036, var_currentLLVMName_18071, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18161_name, extractedValue_18184_next, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 430)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_19385 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_18750_indexExpression = extractPtr_19385->mAssociatedValue0 ;
      const GALGAS_location extractedValue_18761_endOfIndex = extractPtr_19385->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_18782_checkIndexExpression = extractPtr_19385->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_18794_nextOperand = extractPtr_19385->mAssociatedValue3 ;
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, var_currentType_18036, var_currentLLVMName_18071, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_18750_indexExpression, extractedValue_18761_endOfIndex, extractedValue_18782_checkIndexExpression, extractedValue_18794_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 447)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_18036, var_currentLLVMName_18071  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 466)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperandInAssignment'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleNextOperandInAssignment (const GALGAS_omnibusType constinArgument_inSelfType,
                                            GALGAS_omnibusType & ioArgument_ioCurrentType,
                                            GALGAS_string & ioArgument_ioCurrentLLVMName,
                                            const GALGAS_LValueOperandAST constinArgument_inOperand,
                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                            const GALGAS_semanticContext constinArgument_inContext,
                                            const GALGAS_mode constinArgument_inMode,
                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                            GALGAS_instructionListListIR & ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_20909 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_20352_name = extractPtr_20909->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_20375_next = extractPtr_20909->mAssociatedValue1 ;
      {
      routine_handlePropertyAccessInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20352_name, extractedValue_20375_next, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 489)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_21584 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_20945_indexExpression = extractPtr_21584->mAssociatedValue0 ;
      const GALGAS_location extractedValue_20956_endOfIndex = extractPtr_21584->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_20977_checkIndexExpression = extractPtr_21584->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_20989_nextOperand = extractPtr_21584->mAssociatedValue3 ;
      {
      routine_handleArrayAccessInAssignment (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, ioArgument_ioPendingStoreComputedPropertyInstructionGenerationListList, extractedValue_20945_indexExpression, extractedValue_20956_endOfIndex, extractedValue_20977_checkIndexExpression, extractedValue_20989_nextOperand, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 506)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterAssignmentInstructionAST * object = (const cPtr_controlRegisterAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterAssignmentInstructionAST) ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_0 = object ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 59)) ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 60)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_controlRegisterAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@controlRegisterAssignmentInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                                 const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                                 const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                                 const GALGAS_semanticContext constinArgument_inContext,
                                                                                                 const GALGAS_mode constinArgument_inMode,
                                                                                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                                 GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                                 GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_controlRegisterAssignmentInstructionAST * object = (const cPtr_controlRegisterAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_controlRegisterAssignmentInstructionAST) ;
  GALGAS_omnibusType var_registerType_4350 ;
  GALGAS_string var_llvmRegAddressName_4442 ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_0 = object ;
  GALGAS_uint joker_4373 ; // Joker input parameter
  GALGAS_sliceMap joker_4389 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_0.readProperty_mControlRegisterLValue (), GALGAS_bool (true), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_registerType_4350, joker_4373, joker_4389, var_llvmRegAddressName_4442, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 79)) ;
  GALGAS_objectIR var_sourceIR_4891 ;
  const GALGAS_controlRegisterAssignmentInstructionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_registerType_4350, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 96)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 110)) ;
  }
  GALGAS_omnibusType var_t_5085 = extensionGetter_type (var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 115)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_t_5085.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).operator_not (SOURCE_FILE ("instruction-assignment-control-register.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_controlRegisterAssignmentInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mControlRegisterLValue ().readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("source expression is not copyable"), fixItArray4  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_controlRegisterAssignmentInstructionAST temp_5 = object ;
    switch (temp_5.readProperty_mAssignmentKind ().enumValue ()) {
    case GALGAS_controlRegisterAssignmentOperatorKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignment:
      {
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4350, var_llvmRegAddressName_4442, var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 121)) ;
        }
      }
      break ;
    case GALGAS_controlRegisterAssignmentOperatorKind::kEnum_assignmentWithOperator:
      {
        const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator * extractPtr_6937 = (const cEnumAssociatedValues_controlRegisterAssignmentOperatorKind_assignmentWithOperator *) (temp_5.readProperty_mAssignmentKind ().unsafePointer ()) ;
        const GALGAS_omnibusInfixOperator extractedValue_5451_infixOperator = extractPtr_6937->mAssociatedValue0 ;
        const GALGAS_location extractedValue_5468_operatorLocation = extractPtr_6937->mAssociatedValue1 ;
        GALGAS_objectIR var_registerValueIR_5568 ;
        {
        routine_getNewTempValue (var_registerType_4350, ioArgument_ioTemporaries, var_registerValueIR_5568, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 124)) ;
        }
        {
        extensionSetter_appendLoadIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerValueIR_5568, var_llvmRegAddressName_4442, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 125)) ;
        }
        GALGAS_lstring var_key_5720 = function_infixOperatorMapKey (var_registerType_4350, extractedValue_5451_infixOperator, extractedValue_5468_operatorLocation, extensionGetter_type (var_sourceIR_4891, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 127)) ;
        GALGAS_omnibusType var_resultType_5874 ;
        GALGAS_omnibusInfixOperatorUsage var_operatorUsage_5893 ;
        constinArgument_inContext.readProperty_mInfixOperatorMap ().method_searchKey (var_key_5720, var_resultType_5874, var_operatorUsage_5893, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 128)) ;
        GALGAS_objectIR var_operationResult_6139 ;
        callExtensionMethod_generateCode ((const cPtr_omnibusInfixOperatorUsage *) var_operatorUsage_5893.ptr (), var_registerValueIR_5568, extractedValue_5468_operatorLocation, var_sourceIR_4891, var_resultType_5874, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_operationResult_6139, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 129)) ;
        {
        extensionSetter_appendStoreIndirectVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerType_4350, var_llvmRegAddressName_4442, var_operationResult_6139, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-control-register.galgas", 158)) ;
        }
      }
      break ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_controlRegisterAssignmentInstructionAST.mSlotID,
                                                    extensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_controlRegisterAssignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  {
  const GALGAS_sliceAssignmentInstructionAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 84)) ;
  }
  const GALGAS_sliceAssignmentInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 85)) ;
  const GALGAS_sliceAssignmentInstructionAST temp_2 = object ;
  cEnumerator_sliceAssignmentListAST enumerator_3377 (temp_2.readProperty_mSliceAssignmentList (), kENUMERATION_UP) ;
  while (enumerator_3377.hasCurrentObject ()) {
    switch (enumerator_3377.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_3613 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_3377.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_3547_target = extractPtr_3613->mAssociatedValue0 ;
        extensionMethod_noteInstructionTypesInPrecedenceGraph (extractedValue_3547_target, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 92)) ;
      }
      break ;
    }
    enumerator_3377.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                              extensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_sliceAssignmentInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sliceAssignmentInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                       const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                       const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                                                       const GALGAS_mode constinArgument_inMode,
                                                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                       GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                       GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sliceAssignmentInstructionAST * object = (const cPtr_sliceAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_sliceAssignmentInstructionAST) ;
  const GALGAS_sliceAssignmentInstructionAST temp_0 = object ;
  GALGAS_omnibusType var_resultType_4544 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 113)) ;
  GALGAS_uint var_bitCount_4688 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_resultType_4544.readProperty_kind ().getter_isInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_sliceAssignmentInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray3  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 117)) ;
      var_bitCount_4688.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_bool var_unsigned_4877 ;
    GALGAS_bigint joker_4852_2 ; // Joker input parameter
    GALGAS_bigint joker_4852_1 ; // Joker input parameter
    var_resultType_4544.readProperty_kind ().method_integer (joker_4852_2, joker_4852_1, var_unsigned_4877, var_bitCount_4688, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 119)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unsigned_4877.operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 120)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_sliceAssignmentInstructionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("this type should be an unsigned integer type"), fixItArray6  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 121)) ;
        var_bitCount_4688.drop () ; // Release error dropped variable
      }
    }
  }
  GALGAS_objectIR var_sourceOperand_5453 ;
  const GALGAS_sliceAssignmentInstructionAST temp_7 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_7.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_resultType_4544, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperand_5453, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 125)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperand_5453, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 139)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_sourceOperand_5453.getter_isLiteralInteger (SOURCE_FILE ("instruction-slice-assignment.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bigint var_value_5762 ;
      GALGAS_omnibusType joker_5735_1 ; // Joker input parameter
      var_sourceOperand_5453.method_literalInteger (joker_5735_1, var_value_5762, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 142)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsSupOrEqual, var_value_5762.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)).left_shift_operation (var_bitCount_4688, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 143)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_sliceAssignmentInstructionAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSourceExpressionLocation (), GALGAS_string ("static value too large"), fixItArray11  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 144)) ;
          var_sourceOperand_5453.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_9) {
        var_sourceOperand_5453 = GALGAS_objectIR::constructor_literalInteger (var_resultType_4544, var_value_5762  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 146)) ;
      }
    }
  }
  GALGAS_uint var_rightShiftAmount_6023 = var_bitCount_4688 ;
  GALGAS_bigint var_accumulatedFieldStaticValues_6077 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 151)) ;
  const GALGAS_sliceAssignmentInstructionAST temp_12 = object ;
  cEnumerator_sliceAssignmentListAST enumerator_6113 (temp_12.readProperty_mSliceAssignmentList (), kENUMERATION_UP) ;
  while (enumerator_6113.hasCurrentObject ()) {
    GALGAS_objectIR var_sourceOperandForSlicing_6178 = var_sourceOperand_5453 ;
    GALGAS_lstring var_sliceTypeName_6249 ;
    GALGAS_uint var_sliceWidth_6274 ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsEqual, enumerator_6113.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_6113.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("anonymous selector not allowed here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 158)) ;
        var_sliceWidth_6274.drop () ; // Release error dropped variable
        var_sliceTypeName_6249.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_13) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsEqual, enumerator_6113.current_mSliceWidth (HERE).readProperty_string ().objectCompare (GALGAS_string ("b"))).boolEnum () ;
        if (kBoolTrue == test_15) {
          var_sliceWidth_6274 = GALGAS_uint ((uint32_t) 1U) ;
          const GALGAS_sliceAssignmentInstructionAST temp_16 = object ;
          var_sliceTypeName_6249 = GALGAS_lstring::constructor_new (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 161)), temp_16.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 161)) ;
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = enumerator_6113.current_mSliceWidth (HERE).readProperty_string ().getter_isDecimalUnsignedNumber (SOURCE_FILE ("instruction-slice-assignment.galgas", 162)).operator_not (SOURCE_FILE ("instruction-slice-assignment.galgas", 162)).boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6113.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the selector should be an unsigned integer value"), fixItArray18  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 163)) ;
            var_sliceWidth_6274.drop () ; // Release error dropped variable
            var_sliceTypeName_6249.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_17) {
          var_sliceWidth_6274 = enumerator_6113.current_mSliceWidth (HERE).readProperty_string ().getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 165)) ;
          const GALGAS_sliceAssignmentInstructionAST temp_19 = object ;
          var_sliceTypeName_6249 = GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_sliceWidth_6274.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 166)), temp_19.readProperty_mTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 166)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (kIsEqual, var_sliceWidth_6274.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (enumerator_6113.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("the bit slice width should be > 0"), fixItArray21  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 168)) ;
            }
          }
        }
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (kIsSupOrEqual, var_rightShiftAmount_6023.objectCompare (var_sliceWidth_6274)).boolEnum () ;
      if (kBoolTrue == test_22) {
        var_rightShiftAmount_6023 = var_rightShiftAmount_6023.substract_operation (var_sliceWidth_6274, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 172)) ;
      }
    }
    if (kBoolFalse == test_22) {
      GALGAS_uint var_specifiedBitCount_7102 = var_bitCount_4688.add_operation (var_sliceWidth_6274, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)).substract_operation (var_rightShiftAmount_6023, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 174)) ;
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_6113.current_mSliceWidth (HERE).readProperty_location (), GALGAS_string ("bit slice overflow: ").add_operation (var_specifiedBitCount_7102.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)).add_operation (GALGAS_string (" bits, should be "), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)).add_operation (var_bitCount_4688.getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)), fixItArray23  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 175)) ;
      var_rightShiftAmount_6023 = GALGAS_uint ((uint32_t) 0U) ;
    }
    GALGAS_omnibusType var_sliceType_7302 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), var_sliceTypeName_6249, inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 178)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 178)) ;
    {
    extensionSetter_appendLogicalShiftRight (ioArgument_ioInstructionGenerationList, var_sourceOperandForSlicing_6178, var_rightShiftAmount_6023, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 180)) ;
    }
    {
    extensionSetter_appendTrunc (ioArgument_ioInstructionGenerationList, var_sliceType_7302, var_sourceOperandForSlicing_6178, ioArgument_ioTemporaries, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 181)) ;
    }
    switch (enumerator_6113.current_mSliceKind (HERE).enumValue ()) {
    case GALGAS_sliceTargetAST::kNotBuilt:
      break ;
    case GALGAS_sliceTargetAST::kEnum_discarded:
      {
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_varDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_varDeclaration * extractPtr_8607 = (const cEnumAssociatedValues_sliceTargetAST_varDeclaration *) (enumerator_6113.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7737_varName = extractPtr_8607->mAssociatedValue0 ;
        GALGAS_lstring var_omnibusLocalVariableName_7807 = GALGAS_lstring::constructor_new (extractedValue_7737_varName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)), extractedValue_7737_varName.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 187)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 188)) ;
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_7737_varName, var_sliceType_7302, var_omnibusLocalVariableName_7807, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-slice-assignment.galgas", 189)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 189)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7807.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 191)), var_sliceType_7302, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 191)) ;
        GALGAS_LValueRepresentation var_targetRef_8206 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7302, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_7807.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 195))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 193)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_7737_varName.readProperty_location (), var_sourceOperandForSlicing_6178, var_targetRef_8206, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 198)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_letDeclaration:
      {
        const cEnumAssociatedValues_sliceTargetAST_letDeclaration * extractPtr_9495 = (const cEnumAssociatedValues_sliceTargetAST_letDeclaration *) (enumerator_6113.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_8640_letName = extractPtr_9495->mAssociatedValue0 ;
        GALGAS_lstring var_omnibusLocalVariableName_8710 = GALGAS_lstring::constructor_new (extractedValue_8640_letName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-slice-assignment.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)), extractedValue_8640_letName.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 207)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 208)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_8640_letName, GALGAS_bool (false), var_sliceType_7302, var_omnibusLocalVariableName_8710, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 209)) ;
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8710.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 211)), var_sliceType_7302, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 211)) ;
        GALGAS_LValueRepresentation var_targetRef_9092 = GALGAS_LValueRepresentation::constructor_new (var_sliceType_7302, function_llvmNameForLocalVariable (var_omnibusLocalVariableName_8710.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 215))  COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 213)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_8640_letName.readProperty_location (), var_sourceOperandForSlicing_6178, var_targetRef_9092, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 218)) ;
        }
      }
      break ;
    case GALGAS_sliceTargetAST::kEnum_lValue:
      {
        const cEnumAssociatedValues_sliceTargetAST_lValue * extractPtr_10253 = (const cEnumAssociatedValues_sliceTargetAST_lValue *) (enumerator_6113.current_mSliceKind (HERE).unsafePointer ()) ;
        const GALGAS_LValueAST extractedValue_9530_target = extractPtr_10253->mAssociatedValue0 ;
        GALGAS_LValueRepresentation var_lvalueIR_9961 ;
        extensionMethod_analyzeLValue (extractedValue_9530_target, constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lvalueIR_9961, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 226)) ;
        {
        extensionSetter_appendCopyFromReferences (ioArgument_ioInstructionGenerationList, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioTemporaries, extractedValue_9530_target.readProperty_mIdentifier ().readProperty_location (), var_sourceOperandForSlicing_6178, var_lvalueIR_9961, inCompiler COMMA_SOURCE_FILE ("instruction-slice-assignment.galgas", 240)) ;
        }
      }
      break ;
    }
    enumerator_6113.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_sliceAssignmentInstructionAST.mSlotID,
                                                    extensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_sliceAssignmentInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionAST * object = (const cPtr_bitbandInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionAST) ;
  const GALGAS_bitbandInstructionAST temp_0 = object ;
  extensionMethod_noteExpressionTypesInPrecedenceGraph (temp_0.readProperty_mControlRegisterLValue (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 51)) ;
  {
  ioArgument_ioGraph.setter_noteNode (GALGAS_string ("u1").getter_nowhere (SOURCE_FILE ("instruction-bit-banding.galgas", 52)) COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 52)) ;
  }
  const GALGAS_bitbandInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_mBitExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 53)) ;
  const GALGAS_bitbandInstructionAST temp_2 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_2.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 54)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                              extensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_bitbandInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitbandInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                               const GALGAS_omnibusType constinArgument_inSelfType,
                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                               const GALGAS_mode constinArgument_inMode,
                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionAST * object = (const cPtr_bitbandInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionAST) ;
  GALGAS_omnibusType var_requiredSourceExpressionType_3806 ;
  const GALGAS_bitbandInstructionAST temp_0 = object ;
  constinArgument_inContext.readProperty_mTypeMap ().method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("u1"), temp_0.readProperty_mSourceExpressionLocation ()  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 75)), var_requiredSourceExpressionType_3806, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 74)) ;
  GALGAS_objectIR var_sourceExpressionOperand_4269 ;
  const GALGAS_bitbandInstructionAST temp_1 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredSourceExpressionType_3806, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceExpressionOperand_4269, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 79)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceExpressionOperand_4269, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 93)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (kIsEqual, extensionGetter_type (var_sourceExpressionOperand_4269, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 98)))) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = var_sourceExpressionOperand_4269.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 98)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_bigint var_value_4735 ;
      GALGAS_omnibusType joker_4708_1 ; // Joker input parameter
      var_sourceExpressionOperand_4269.method_literalInteger (joker_4708_1, var_value_4735, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 99)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_value_4735.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsStrictSup, var_value_4735.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 100)))) ;
        }
        test_4 = test_5.boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_bitbandInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSourceExpressionLocation (), GALGAS_string ("static value should be 0 or 1"), fixItArray7  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 101)) ;
        }
      }
      if (kBoolFalse == test_4) {
        var_sourceExpressionOperand_4269 = GALGAS_objectIR::constructor_literalInteger (var_requiredSourceExpressionType_3806, var_value_4735  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 103)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_sourceExpressionOperand_4269, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 105)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredSourceExpressionType_3806.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_bitbandInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mSourceExpressionLocation (), GALGAS_string ("bit expression type should be $").add_operation (var_requiredSourceExpressionType_3806.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)), fixItArray10  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 106)) ;
      }
    }
  }
  GALGAS_uint var_registerBitCount_5735 ;
  GALGAS_string var_llvmRegisterAddressName_5808 ;
  const GALGAS_bitbandInstructionAST temp_11 = object ;
  GALGAS_omnibusType joker_5691 ; // Joker input parameter
  GALGAS_sliceMap joker_5750 ; // Joker input parameter
  extensionMethod_controlRegisterLValueSemanticAnalysis (temp_11.readProperty_mControlRegisterLValue (), GALGAS_bool (false), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, joker_5691, var_registerBitCount_5735, joker_5750, var_llvmRegisterAddressName_5808, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 109)) ;
  GALGAS_omnibusType var_requiredBitExpressionType_6051 ;
  const GALGAS_bitbandInstructionAST temp_12 = object ;
  constinArgument_inContext.readProperty_mTypeMap ().method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("u").add_operation (var_registerBitCount_5735.substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_significantBitCount (SOURCE_FILE ("instruction-bit-banding.galgas", 129)).getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), temp_12.readProperty_mBitExpressionLocation ()  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 129)), var_requiredBitExpressionType_6051, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 128)) ;
  GALGAS_objectIR var_bitExpressionOperand_6502 ;
  const GALGAS_bitbandInstructionAST temp_13 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_13.readProperty_mBitExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_requiredBitExpressionType_6051, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_bitExpressionOperand_6502, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 133)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_bitExpressionOperand_6502, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 147)) ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = GALGAS_bool (kIsEqual, extensionGetter_type (var_bitExpressionOperand_6502, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)).readProperty_omnibusTypeDescriptionName ().objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 152)))) ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = var_bitExpressionOperand_6502.getter_isLiteralInteger (SOURCE_FILE ("instruction-bit-banding.galgas", 152)) ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_bigint var_value_6950 ;
      GALGAS_omnibusType joker_6923_1 ; // Joker input parameter
      var_bitExpressionOperand_6502.method_literalInteger (joker_6923_1, var_value_6950, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 153)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        GALGAS_bool test_17 = GALGAS_bool (kIsStrictInf, var_value_6950.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        if (kBoolTrue != test_17.boolEnum ()) {
          test_17 = GALGAS_bool (kIsSupOrEqual, var_value_6950.objectCompare (var_registerBitCount_5735.getter_bigint (SOURCE_FILE ("instruction-bit-banding.galgas", 154)))) ;
        }
        test_16 = test_17.boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_bitbandInstructionAST temp_18 = object ;
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mBitExpressionLocation (), GALGAS_string ("static value should be >= 0 and <").add_operation (var_registerBitCount_5735.getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)), fixItArray19  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 155)) ;
        }
      }
      if (kBoolFalse == test_16) {
        var_bitExpressionOperand_6502 = GALGAS_objectIR::constructor_literalInteger (var_requiredBitExpressionType_6051, var_value_6950  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 157)) ;
      }
    }
  }
  if (kBoolFalse == test_14) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, extensionGetter_type (var_bitExpressionOperand_6502, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 159)).readProperty_omnibusTypeDescriptionName ().objectCompare (var_requiredBitExpressionType_6051.readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_bitbandInstructionAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mBitExpressionLocation (), GALGAS_string ("bit expression type should be $").add_operation (var_requiredBitExpressionType_6051.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)), fixItArray22  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 160)) ;
      }
    }
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_bitbandInstructionIR::constructor_new (var_llvmRegisterAddressName_5808, var_bitExpressionOperand_6502, var_sourceExpressionOperand_4269, constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBaseAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterRelocationAddress ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterOffsetMultiplier ().readProperty_bigint (), constinArgument_inContext.readProperty_mTargetParameters ().readProperty_mBitbandRegisterBitMultiplier ().readProperty_bigint ()  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163))  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 163)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitbandInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_bitbandInstructionAST.mSlotID,
                                                    extensionMethod_bitbandInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitbandInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_bitbandInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bitbandInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bitbandInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bitbandInstructionIR * object = (const cPtr_bitbandInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_bitbandInstructionIR) ;
  GALGAS_string var_idx_9621 = ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 205)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 206)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Bit band\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 207)) ;
  const GALGAS_bitbandInstructionIR temp_0 = object ;
  const GALGAS_bitbandInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string (" = sub i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_0.readProperty_mRegisterAddressLLVMname (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (temp_1.readProperty_mBitbandRegisterBaseAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 208)) ;
  const GALGAS_bitbandInstructionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %byte.offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (".mul = mul i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (temp_2.readProperty_mBitbandRegisterOffsetMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 209)) ;
  const GALGAS_bitbandInstructionIR temp_3 = object ;
  const GALGAS_bitbandInstructionIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (".mul = mul i32 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mBitExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (temp_4.readProperty_mBitbandRegisterBitMultiplier ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 210)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %offset.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (" = add i32 %byte.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul, %bit.offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)).add_operation (GALGAS_string (".mul\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 211)) ;
  const GALGAS_bitbandInstructionIR temp_5 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %bit.word.addr.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (" = add i32 %offset."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (temp_5.readProperty_mBitbandRegisterRelocationAddress ().getter_string (SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %ptr.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" = inttoptr i32 %bit.word.addr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)).add_operation (GALGAS_string (" to i32*\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 213)) ;
  const GALGAS_bitbandInstructionIR temp_6 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %value.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" = zext i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (extensionGetter_llvmName (temp_6.readProperty_mSourceExpressionOperand (), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 214)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i32 %value.").add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string (", i32* %ptr."), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (var_idx_9621, inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-bit-banding.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_bitbandInstructionIR.mSlotID,
                                            extensionMethod_bitbandInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bitbandInstructionIR_llvmInstructionCode (defineExtensionMethod_bitbandInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_varInstructionWithAssignmentAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_varInstructionWithAssignmentAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 97)) ;
      }
    }
  }
  const GALGAS_varInstructionWithAssignmentAST temp_3 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionAST * object = (const cPtr_varDeclarationInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionAST) ;
  {
  const GALGAS_varDeclarationInstructionAST temp_0 = object ;
  ioArgument_ioGraph.setter_noteNode (temp_0.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-var.galgas", 105)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_varDeclarationInstructionAST.mSlotID,
                                                              extensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_varDeclarationInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                         const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                                         const GALGAS_mode constinArgument_inMode,
                                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionWithAssignmentAST * object = (const cPtr_varInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionWithAssignmentAST) ;
  const GALGAS_varInstructionWithAssignmentAST temp_0 = object ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_varInstructionWithAssignmentAST temp_3 = object ;
    temp_1 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 125)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 125)) ;
  }
  GALGAS_omnibusType var_targetType_5077 = temp_1 ;
  GALGAS_objectIR var_sourcePossibleReference_5684 ;
  const GALGAS_varInstructionWithAssignmentAST temp_4 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_5077, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5684, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 128)) ;
  const GALGAS_varInstructionWithAssignmentAST temp_5 = object ;
  GALGAS_objectIR var_result_5701 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_sourcePossibleReference_5684, var_targetType_5077, temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 141)) ;
  const GALGAS_varInstructionWithAssignmentAST temp_6 = object ;
  const GALGAS_varInstructionWithAssignmentAST temp_7 = object ;
  GALGAS_lstring var_omnibusLocalVariableName_5979 = GALGAS_lstring::constructor_new (temp_6.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 149)), temp_7.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-var.galgas", 149)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  {
  const GALGAS_varInstructionWithAssignmentAST temp_8 = object ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_8.readProperty_mVarName (), extensionGetter_type (var_result_5701, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)), var_omnibusLocalVariableName_5979, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 151)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5979.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), extensionGetter_type (var_result_5701, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  {
  const GALGAS_varInstructionWithAssignmentAST temp_9 = object ;
  extensionSetter_appendAssignmentIR (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, constinArgument_inContext.readProperty_mAssignmentOperatorMap (), ioArgument_ioAllocaList, extensionGetter_type (var_result_5701, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), function_llvmNameForLocalVariable (var_omnibusLocalVariableName_5979.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 160)), var_sourcePossibleReference_5684, temp_9.readProperty_mVarName ().readProperty_location (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 155)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varInstructionWithAssignmentAST.mSlotID,
                                                    extensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis (defineExtensionMethod_varInstructionWithAssignmentAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@varDeclarationInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                      const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                                      const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                                      const GALGAS_semanticContext constinArgument_inContext,
                                                                                      const GALGAS_mode /* constinArgument_inMode */,
                                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                      GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                      GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varDeclarationInstructionAST * object = (const cPtr_varDeclarationInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varDeclarationInstructionAST) ;
  const GALGAS_varDeclarationInstructionAST temp_0 = object ;
  GALGAS_omnibusType var_targetType_7349 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 180)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = callExtensionGetter_isCompileTimeType ((const cPtr_omnibusType *) var_targetType_7349.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 182)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varDeclarationInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("$").add_operation (var_targetType_7349.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 183)), fixItArray3  COMMA_SOURCE_FILE ("instruction-var.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_targetType_7349.ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 184)).operator_not (SOURCE_FILE ("instruction-var.galgas", 184)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varDeclarationInstructionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("$").add_operation (var_targetType_7349.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 185)), fixItArray6  COMMA_SOURCE_FILE ("instruction-var.galgas", 185)) ;
      }
    }
  }
  const GALGAS_varDeclarationInstructionAST temp_7 = object ;
  const GALGAS_varDeclarationInstructionAST temp_8 = object ;
  GALGAS_lstring var_omnibusName_7797 = GALGAS_lstring::constructor_new (temp_7.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-var.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 188)), temp_8.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-var.galgas", 188)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 189)) ;
  {
  const GALGAS_varDeclarationInstructionAST temp_9 = object ;
  extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, temp_9.readProperty_mVarName (), var_targetType_7349, var_omnibusName_7797, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 190)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_7797.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 192)), var_targetType_7349, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-var.galgas", 192)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_varDeclarationInstructionAST.mSlotID,
                                                    extensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_varDeclarationInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_varDeclarationInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_letInstructionWithAssignmentAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_letInstructionWithAssignmentAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mOptionalTypeName () COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
      }
    }
  }
  const GALGAS_letInstructionWithAssignmentAST temp_3 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                              extensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_letInstructionWithAssignmentAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@letInstructionWithAssignmentAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                         const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                                                         const GALGAS_mode constinArgument_inMode,
                                                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_letInstructionWithAssignmentAST * object = (const cPtr_letInstructionWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_letInstructionWithAssignmentAST) ;
  const GALGAS_letInstructionWithAssignmentAST temp_0 = object ;
  GALGAS_omnibusType temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_0.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 69)) ;
  }else if (kBoolFalse == test_2) {
    const GALGAS_letInstructionWithAssignmentAST temp_3 = object ;
    temp_1 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_3.readProperty_mOptionalTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 70)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 70)) ;
  }
  GALGAS_omnibusType var_targetType_3262 = temp_1 ;
  GALGAS_objectIR var_expressionResult_3858 ;
  const GALGAS_letInstructionWithAssignmentAST temp_4 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_targetType_3262, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_3858, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_3858, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 86)) ;
  }
  const GALGAS_letInstructionWithAssignmentAST temp_5 = object ;
  GALGAS_objectIR var_result_4009 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_3858, var_targetType_3262, temp_5.readProperty_mConstantName ().readProperty_location (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 91)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) extensionGetter_type (var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 100)).operator_not (SOURCE_FILE ("instruction-let.galgas", 100)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_letInstructionWithAssignmentAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mConstantName ().readProperty_location (), extensionGetter_omnibusTypeDescriptionName (var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 101)), fixItArray8  COMMA_SOURCE_FILE ("instruction-let.galgas", 101)) ;
      var_result_4009.drop () ; // Release error dropped variable
    }
  }
  const GALGAS_letInstructionWithAssignmentAST temp_9 = object ;
  const GALGAS_letInstructionWithAssignmentAST temp_10 = object ;
  GALGAS_lstring var_omnibusName_4449 = GALGAS_lstring::constructor_new (temp_9.readProperty_mConstantName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-let.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)), temp_10.readProperty_mConstantName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 105)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4449.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), extensionGetter_type (var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 107)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-let.galgas", 107)) ;
      {
      extensionSetter_appendStoreTemporaryReference (ioArgument_ioInstructionGenerationList, extensionGetter_type (var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), function_llvmNameForLocalVariable (var_omnibusName_4449.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 110)), var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 108)) ;
      }
    }
  }
  {
  const GALGAS_letInstructionWithAssignmentAST temp_12 = object ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_12.readProperty_mConstantName (), GALGAS_bool (false), extensionGetter_type (var_result_4009, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)), var_omnibusName_4449, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_letInstructionWithAssignmentAST.mSlotID,
                                                    extensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis (defineExtensionMethod_letInstructionWithAssignmentAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enter_NOP_function'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enter_5F_NOP_5F_function (GALGAS_declarationListAST & ioArgument_ioDeclarationListAST,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist temp_0 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  temp_0.addAssign_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)).getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 14))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 14)) ;
  GALGAS_lstringlist var_attributeList_905 = temp_0 ;
  GALGAS_instructionListAST temp_1 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  temp_1.addAssign_operation (GALGAS_instructionNOP::constructor_new (GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 15)) ;
  GALGAS_instructionListAST var_instructionList_970 = temp_1 ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_mode::constructor_anySafeMode (SOURCE_FILE ("instruction-nop.galgas", 18)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 20)), GALGAS_string ("nop").getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 21)), var_attributeList_905, GALGAS_routineFormalArgumentListAST::constructor_emptyList (SOURCE_FILE ("instruction-nop.galgas", 23)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-nop.galgas", 24)), var_instructionList_970, GALGAS_location::constructor_nowhere (SOURCE_FILE ("instruction-nop.galgas", 26))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17))  COMMA_SOURCE_FILE ("instruction-nop.galgas", 17)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * /* inObject */,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioGraph */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_instructionNOP.mSlotID,
                                                              extensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_instructionNOP_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@instructionNOP instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_instructionNOP_instructionSemanticAnalysis (const cPtr_instructionAST * /* inObject */,
                                                                        const GALGAS_omnibusType /* constinArgument_inSelfType */,
                                                                        const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                        const GALGAS_semanticContext /* constinArgument_inContext */,
                                                                        const GALGAS_mode /* constinArgument_inMode */,
                                                                        GALGAS_semanticTemporariesStruct & /* ioArgument_ioTemporaries */,
                                                                        GALGAS_staticEntityMap & /* ioArgument_ioStaticEntityMap */,
                                                                        GALGAS_universalValuedObjectMap & /* ioArgument_ioUniversalMap */,
                                                                        GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                                        GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_appendNOP (ioArgument_ioInstructionGenerationList, inCompiler COMMA_SOURCE_FILE ("instruction-nop.galgas", 52)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_instructionNOP_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_instructionNOP.mSlotID,
                                                    extensionMethod_instructionNOP_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_instructionNOP_instructionSemanticAnalysis (defineExtensionMethod_instructionNOP_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  const GALGAS_panicInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mCodeExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 33)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                              extensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_panicInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes /* constinArgument_inRoutineAttributes */,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionAST * object = (const cPtr_panicInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-panic.galgas", 52)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_panicInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("operations that can generate panic are not allowed in ").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)), fixItArray2  COMMA_SOURCE_FILE ("instruction-panic.galgas", 53)) ;
    }
  }
  GALGAS_instructionListIR var_unusedInstructionListIR_3048 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 56)) ;
  GALGAS_objectIR var_result_3444 ;
  const GALGAS_panicInstructionAST temp_3 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_3.readProperty_mCodeExpression ().ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-panic.galgas", 59)), constinArgument_inContext.readProperty_mPanicCodeType (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3048, var_result_3444, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 57)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3048.getter_length (SOURCE_FILE ("instruction-panic.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue != test_5.boolEnum ()) {
      test_5 = var_result_3444.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 73)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 73)) ;
    }
    GALGAS_bool test_6 = test_5 ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_omnibusTypeDescriptionName (var_result_3444, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)).objectCompare (function_ctIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 74)))) ;
    }
    test_4 = test_6.boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_panicInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("throw expression should be a literal integer"), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 75)) ;
    }
  }
  if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_3808 ;
    GALGAS_bigint var_max_3821 ;
    GALGAS_bool joker_3823_2 ; // Joker input parameter
    GALGAS_uint joker_3823_1 ; // Joker input parameter
    constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_kind ().method_integer (var_min_3808, var_max_3821, joker_3823_2, joker_3823_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
    GALGAS_bigint var_throwValue_3879 ;
    GALGAS_omnibusType joker_3855_1 ; // Joker input parameter
    var_result_3444.method_literalInteger (joker_3855_1, var_throwValue_3879, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 78)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      GALGAS_bool test_10 = GALGAS_bool (kIsStrictInf, var_throwValue_3879.objectCompare (var_min_3808)) ;
      if (kBoolTrue != test_10.boolEnum ()) {
        test_10 = GALGAS_bool (kIsStrictSup, var_throwValue_3879.objectCompare (var_max_3821)) ;
      }
      test_9 = test_10.boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_panicInstructionAST temp_11 = object ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.readProperty_mPanicCodeType ().readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 81)), fixItArray12  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
      }
    }
    if (kBoolFalse == test_9) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 82)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_panicInstructionAST temp_14 = object ;
          ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (temp_14.readProperty_mInstructionLocation (), var_throwValue_3879  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_panicInstructionAST.mSlotID,
                                                    extensionMethod_panicInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_panicInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  const GALGAS_panicInstructionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 107)) ;
  const GALGAS_panicInstructionIR temp_1 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (temp_1.readProperty_mThrowLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 108)) ;
  const GALGAS_panicInstructionIR temp_2 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (temp_2.readProperty_mPanicCode ().getter_string (SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 109)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                            extensionMethod_panicInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionIR_llvmInstructionCode (defineExtensionMethod_panicInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@panicInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_panicInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_panicInstructionIR * object = (const cPtr_panicInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_panicInstructionIR) ;
  const GALGAS_panicInstructionIR temp_0 = object ;
  ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_0.readProperty_mThrowLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 118))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 118)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_panicInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_panicInstructionIR.mSlotID,
                                                extensionMethod_panicInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_panicInstructionIR_enterAccessibleEntities (defineExtensionMethod_panicInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mThenInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 90)) ;
  const GALGAS_ifInstructionAST temp_2 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_2.readProperty_mTestExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                              extensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_ifInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                          const GALGAS_omnibusType constinArgument_inSelfType,
                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                          const GALGAS_mode constinArgument_inMode,
                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_objectIR var_testResult_5118 ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mTestExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResult_5118, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResult_5118, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 123)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_5496 ;
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testResult_5118, temp_1.readProperty_mTestExpressionEndLocation (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, ioArgument_ioAllocaList, var_booleanResult_5496, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 128)) ;
  switch (var_booleanResult_5496.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ifInstructionAST temp_3 = object ;
        test_2 = temp_3.readProperty_mStaticIfExpression ().operator_not (SOURCE_FILE ("instruction-if.galgas", 139)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_ifInstructionAST temp_4 = object ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (temp_4.readProperty_mTestExpressionEndLocation (), GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 140)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_ifInstructionAST temp_7 = object ;
        test_6 = temp_7.readProperty_mStaticIfExpression ().boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_ifInstructionAST temp_8 = object ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mTestExpressionEndLocation (), GALGAS_string ("'if' expression is not static"), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 144)) ;
        }
      }
    }
    break ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6025 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 149)) ;
  const GALGAS_ifInstructionAST temp_10 = object ;
  const GALGAS_ifInstructionAST temp_11 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_10.readProperty_mThenInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_11.readProperty_mEndOfThenInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6025, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6528 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 163)) ;
  const GALGAS_ifInstructionAST temp_12 = object ;
  const GALGAS_ifInstructionAST temp_13 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_12.readProperty_mElseInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_13.readProperty_mEndOfElseInstructionList (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6528, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 164)) ;
  {
  const GALGAS_ifInstructionAST temp_14 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_14.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 176)) ;
  }
  const GALGAS_ifInstructionAST temp_15 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (extensionGetter_llvmName (var_booleanResult_5496, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 179)), temp_15.readProperty_mTestExpressionEndLocation (), var_thenInstructionGenerationList_6025, var_elseInstructionGenerationList_6528  COMMA_SOURCE_FILE ("instruction-if.galgas", 178))  COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                    extensionMethod_ifInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_ifInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  GALGAS_string var_labelTrue_8148 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 205)) ;
  GALGAS_string var_labelFalse_8215 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelEnd_8281 = GALGAS_string ("if.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  const GALGAS_ifInstructionIR temp_0 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_0.readProperty_mLLVMTestName (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_8148, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_8215, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8148.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  const GALGAS_ifInstructionIR temp_1 = object ;
  extensionMethod_instructionListLLVMCode (temp_1.readProperty_mThenInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8281, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8215.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  const GALGAS_ifInstructionIR temp_2 = object ;
  extensionMethod_instructionListLLVMCode (temp_2.readProperty_mElseInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8281, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8281.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                            extensionMethod_ifInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionIR_llvmInstructionCode (defineExtensionMethod_ifInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionIR * object = (const cPtr_ifInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionIR) ;
  const GALGAS_ifInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mThenInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  const GALGAS_ifInstructionIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mElseInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ifInstructionIR.mSlotID,
                                                extensionMethod_ifInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionIR_enterAccessibleEntities (defineExtensionMethod_ifInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  const GALGAS_syncInstructionAST temp_0 = object ;
  cEnumerator_syncInstructionBranchListAST enumerator_5557 (temp_0.readProperty_mBranchList (), kENUMERATION_UP) ;
  while (enumerator_5557.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_5557.current_mInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 148)) ;
    enumerator_5557.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                              extensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_syncInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                            const GALGAS_omnibusType constinArgument_inSelfType,
                                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                                            const GALGAS_mode constinArgument_inMode,
                                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionAST * object = (const cPtr_syncInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionAST) ;
  GALGAS_guardedCommandIRList var_guardedCommandIRList_6611 = GALGAS_guardedCommandIRList::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 168)) ;
  const GALGAS_syncInstructionAST temp_0 = object ;
  cEnumerator_syncInstructionBranchListAST enumerator_6642 (temp_0.readProperty_mBranchList (), kENUMERATION_UP) ;
  while (enumerator_6642.hasCurrentObject ()) {
    switch (enumerator_6642.current_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandAST::kNotBuilt:
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolean * extractPtr_8062 = (const cEnumAssociatedValues_guardedCommandAST_boolean *) (enumerator_6642.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_6721_isContinue = extractPtr_8062->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_6732_expression = extractPtr_8062->mAssociatedValue1 ;
        const GALGAS_location extractedValue_6748_endOfExpression = extractPtr_8062->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_6811 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 172)) ;
        GALGAS_objectIR var_expressionResult_7273 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_6732_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes.operator_or (GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 175)) COMMA_SOURCE_FILE ("instruction-event.galgas", 175)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 176)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_6811, var_expressionResult_7273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 173)) ;
        {
        extensionSetter_appendLoadWhenReference (var_guardInstructionGenerationList_6811, ioArgument_ioTemporaries, var_expressionResult_7273, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 186)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_7666 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_7273, extractedValue_6748_endOfExpression, ioArgument_ioTemporaries, var_guardInstructionGenerationList_6811, ioArgument_ioAllocaList, var_booleanResult_7666, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 187)) ;
        switch (var_booleanResult_7666.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticWarning (extractedValue_6748_endOfExpression, GALGAS_string ("guarded expression is a compile time value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 197)) ;
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        var_guardedCommandIRList_6611.addAssign_operation (GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_6721_isContinue, var_guardInstructionGenerationList_6811, extensionGetter_llvmName (var_booleanResult_7666, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 203))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200))  COMMA_SOURCE_FILE ("instruction-event.galgas", 200)) ;
      }
      break ;
    case GALGAS_guardedCommandAST::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandAST_boolAndSync * extractPtr_13833 = (const cEnumAssociatedValues_guardedCommandAST_boolAndSync *) (enumerator_6642.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_8095_isContinue = extractPtr_13833->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_8099_exp = extractPtr_13833->mAssociatedValue1 ;
        const GALGAS_bool extractedValue_8123_warnsOnStaticExpression = extractPtr_13833->mAssociatedValue2 ;
        const GALGAS_location extractedValue_8132_endOfExp = extractPtr_13833->mAssociatedValue3 ;
        const GALGAS_lbool extractedValue_8141_usesSelf = extractPtr_13833->mAssociatedValue4 ;
        const GALGAS_lstringlist extractedValue_8150_nameList = extractPtr_13833->mAssociatedValue5 ;
        const GALGAS_effectiveArgumentListAST extractedValue_8164_parameterList = extractPtr_13833->mAssociatedValue6 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_8229 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 206)) ;
        GALGAS_objectIR var_expressionResult_8701 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_8099_exp.ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_guard (SOURCE_FILE ("instruction-event.galgas", 210)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 211)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_8229, var_expressionResult_8701, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 208)) ;
        {
        extensionSetter_appendLoadWhenReference (var_boolExpInstructionGenerationList_8229, ioArgument_ioTemporaries, var_expressionResult_8701, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 221)) ;
        }
        GALGAS_implicitBooleanConversionResult var_booleanResult_9091 ;
        extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_expressionResult_8701, extractedValue_8132_endOfExp, ioArgument_ioTemporaries, var_boolExpInstructionGenerationList_8229, ioArgument_ioAllocaList, var_booleanResult_9091, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 222)) ;
        switch (var_booleanResult_9091.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = extractedValue_8123_warnsOnStaticExpression.boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticWarning (extractedValue_8132_endOfExp, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-event.galgas", 233)) ;
              }
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
          }
          break ;
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_9831 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 248)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_9910 ;
        GALGAS_lstring var_guardMangledName_9946 ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = extractedValue_8141_usesSelf.readProperty_bool ().boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = constinArgument_inSelfType.readProperty_kind ().getter_isVoid (SOURCE_FILE ("instruction-event.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (extractedValue_8141_usesSelf.readProperty_location (), GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-event.galgas", 253)) ;
                var_guardEffectiveParameterListIR_9910.drop () ; // Release error dropped variable
                var_guardMangledName_9946.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_lstringlist var_propertyList_10194 = extractedValue_8150_nameList ;
              GALGAS_lstring var_guardName_10254 ;
              {
              var_propertyList_10194.setter_popLast (var_guardName_10254, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 256)) ;
              }
              GALGAS_objectIR var_currentObject_10293 = GALGAS_objectIR::constructor_reference (constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 257))  COMMA_SOURCE_FILE ("instruction-event.galgas", 257)) ;
              cEnumerator_lstringlist enumerator_10382 (var_propertyList_10194, kENUMERATION_UP) ;
              while (enumerator_10382.hasCurrentObject ()) {
                {
                routine_handlePropertyAccessInExpression (constinArgument_inContext, var_currentObject_10293, enumerator_10382.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 259)) ;
                }
                enumerator_10382.gotoNextObject () ;
              }
              {
              routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObject_10293, var_guardName_10254, extractedValue_8164_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910, var_guardMangledName_9946, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 269)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, extractedValue_8150_nameList.getter_length (SOURCE_FILE ("instruction-event.galgas", 286)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_8150_nameList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 287)).readProperty_location (), GALGAS_string ("Standalone guard are not handled"), fixItArray8  COMMA_SOURCE_FILE ("instruction-event.galgas", 287)) ;
              var_guardMangledName_9946.drop () ; // Release error dropped variable
              var_guardEffectiveParameterListIR_9910.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_7) {
            GALGAS_lstringlist var_propertyList_11662 = extractedValue_8150_nameList ;
            GALGAS_lstring var_globalReceiverName_11730 ;
            {
            var_propertyList_11662.setter_popFirst (var_globalReceiverName_11730, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 292)) ;
            }
            GALGAS_lstring var_guardName_11778 ;
            {
            var_propertyList_11662.setter_popLast (var_guardName_11778, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 293)) ;
            }
            GALGAS_objectIR var_currentObjectIR_11948 ;
            extensionMethod_searchValuedObject (ioArgument_ioUniversalMap, var_globalReceiverName_11730, constinArgument_inMode, ioArgument_ioTemporaries.readProperty_mInitializedDriverSet (), var_currentObjectIR_11948, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 294)) ;
            cEnumerator_lstringlist enumerator_11984 (var_propertyList_11662, kENUMERATION_UP) ;
            while (enumerator_11984.hasCurrentObject ()) {
              {
              routine_handlePropertyAccessInExpression (constinArgument_inContext, var_currentObjectIR_11948, enumerator_11984.current_mValue (HERE), constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 301)) ;
              }
              enumerator_11984.gotoNextObject () ;
            }
            {
            routine_analyzeGuardCall (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_currentObjectIR_11948, var_guardName_11778, extractedValue_8164_parameterList, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910, var_guardMangledName_9946, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 311)) ;
            }
          }
        }
        switch (var_booleanResult_9091.enumValue ()) {
        case GALGAS_implicitBooleanConversionResult::kNotBuilt:
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_13382 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_booleanResult_9091.unsafePointer ()) ;
            const GALGAS_bool extractedValue_12973_boolValue = extractPtr_13382->mAssociatedValue0 ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extractedValue_12973_boolValue.boolEnum () ;
              if (kBoolTrue == test_9) {
                var_guardedCommandIRList_6611.addAssign_operation (GALGAS_guardedCommandIR::constructor_sync (extractedValue_8095_isContinue, var_guardMangledName_9946.readProperty_string (), var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910  COMMA_SOURCE_FILE ("instruction-event.galgas", 331))  COMMA_SOURCE_FILE ("instruction-event.galgas", 331)) ;
              }
            }
            if (kBoolFalse == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_guardMangledName_9946.readProperty_location (), GALGAS_string ("false guard not handled yet"), fixItArray10  COMMA_SOURCE_FILE ("instruction-event.galgas", 338)) ;
            }
          }
          break ;
        case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
          {
            const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable * extractPtr_13823 = (const cEnumAssociatedValues_implicitBooleanConversionResult_llvmVariable *) (var_booleanResult_9091.unsafePointer ()) ;
            const GALGAS_string extractedValue_13416_llvmName = extractPtr_13823->mAssociatedValue0 ;
            var_guardedCommandIRList_6611.addAssign_operation (GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_8095_isContinue, var_boolExpInstructionGenerationList_8229, extractedValue_13416_llvmName, var_guardMangledName_9946.readProperty_string (), var_guardInstructionGenerationList_9831, var_guardEffectiveParameterListIR_9910  COMMA_SOURCE_FILE ("instruction-event.galgas", 341))  COMMA_SOURCE_FILE ("instruction-event.galgas", 341)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_6642.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 377)) ;
  }
  GALGAS_syncInstructionBranchListIR var_syncInstructionBranchListIR_14988 = GALGAS_syncInstructionBranchListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 378)) ;
  const GALGAS_syncInstructionAST temp_11 = object ;
  cEnumerator_syncInstructionBranchListAST enumerator_15030 (temp_11.readProperty_mBranchList (), kENUMERATION_UP) ;
  cEnumerator_guardedCommandIRList enumerator_15070 (var_guardedCommandIRList_6611, kENUMERATION_UP) ;
  while (enumerator_15030.hasCurrentObject () && enumerator_15070.hasCurrentObject ()) {
    GALGAS_instructionListIR var_branchInstructionGenerationList_15157 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 380)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_15030.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_15030.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_15157, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 381)) ;
    var_syncInstructionBranchListIR_14988.addAssign_operation (enumerator_15070.current_mGuardedCommand (HERE), var_branchInstructionGenerationList_15157  COMMA_SOURCE_FILE ("instruction-event.galgas", 393)) ;
    enumerator_15030.gotoNextObject () ;
    enumerator_15070.gotoNextObject () ;
  }
  {
  const GALGAS_syncInstructionAST temp_12 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_12.readProperty_mEndOf_5F_on_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 395)) ;
  }
  const GALGAS_syncInstructionAST temp_13 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (temp_13.readProperty_mInstructionLocation (), var_syncInstructionBranchListIR_14988  COMMA_SOURCE_FILE ("instruction-event.galgas", 397))  COMMA_SOURCE_FILE ("instruction-event.galgas", 397)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_syncInstructionAST.mSlotID,
                                                    extensionMethod_syncInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_syncInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeGuardCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeGuardCall (const GALGAS_omnibusType constinArgument_inSelfType,
                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                               const GALGAS_objectIR constinArgument_inReceiver,
                               const GALGAS_lstring constinArgument_inGuardName,
                               const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                               const GALGAS_semanticContext constinArgument_inContext,
                               const GALGAS_mode constinArgument_inRequiredMode,
                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                               GALGAS_allocaList & ioArgument_ioAllocaList,
                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                               GALGAS_procCallEffectiveParameterListIR & outArgument_outEffectiveParameterListIR,
                               GALGAS_lstring & outArgument_outGuardMangledName,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEffectiveParameterListIR.drop () ; // Release 'out' argument
  outArgument_outGuardMangledName.drop () ; // Release 'out' argument
  GALGAS_lstring var_guardMangledName_16769 = extensionGetter_mangledName (constinArgument_inEffectiveParameterList, extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)).readProperty_omnibusTypeDescriptionName (), constinArgument_inGuardName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 418)) ;
  GALGAS_bool var_isPublic_17013 ;
  GALGAS_routineTypedSignature var_formalSignature_17057 ;
  GALGAS_lstring var_guardRoutineUserLLVMName_17087 ;
  GALGAS_lstring joker_17089 ; // Joker input parameter
  constinArgument_inContext.readProperty_mGuardMap ().method_searchKey (var_guardMangledName_16769, var_isPublic_17013, var_formalSignature_17057, var_guardRoutineUserLLVMName_17087, joker_17089, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 420)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isPublic_17013.operator_not (SOURCE_FILE ("instruction-event.galgas", 422)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.readProperty_location (), GALGAS_string ("this guard is not public"), fixItArray1  COMMA_SOURCE_FILE ("instruction-event.galgas", 423)) ;
      outArgument_outGuardMangledName.drop () ; // Release error dropped variable
      outArgument_outEffectiveParameterListIR.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGuardMangledName = var_guardRoutineUserLLVMName_17087 ;
    GALGAS_procCallEffectiveParameterListIR temp_2 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-event.galgas", 427)) ;
    temp_2.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-event.galgas", 427)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("instruction-event.galgas", 427)) ;
    outArgument_outEffectiveParameterListIR = temp_2 ;
    {
    routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_17057, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.readProperty_location (), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 428)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  ioArgument_ioGenerationAdds.setter_setMUsesGuards (GALGAS_bool (true) COMMA_SOURCE_FILE ("instruction-event.galgas", 495)) ;
  GALGAS_string var_startLabel_20288 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("instruction-event.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 496)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_20288, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 499)) ;
  GALGAS_string var_startLabelName_20452 = var_startLabel_20288.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 500)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_20452.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 501)) ;
  GALGAS_string var_exitLabelName_20536 = var_startLabel_20288.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 502)) ;
  GALGAS_string var_selectLabelName_20581 = var_startLabel_20288.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 503)) ;
  GALGAS_string var_errorLabelName_20627 = var_startLabel_20288.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 504)) ;
  GALGAS_string var_currentStartBranchLabel_20681 = var_startLabelName_20452 ;
  const GALGAS_syncInstructionIR temp_0 = object ;
  cEnumerator_syncInstructionBranchListIR enumerator_20746 (temp_0.readProperty_mOnInstructionBranchListIR (), kENUMERATION_UP) ;
  GALGAS_uint index_20704 ((uint32_t) 0) ;
  while (enumerator_20746.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_20781 = GALGAS_string ("%").add_operation (var_startLabel_20288, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 507)) ;
    GALGAS_bool var_isWhileGuardedCommand_20855 ;
    switch (enumerator_20746.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_21693 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_20746.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_bool extractedValue_20926_isExitCommand = extractPtr_21693->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_20952_instructionGenerationList = extractPtr_21693->mAssociatedValue1 ;
        const GALGAS_string extractedValue_20974_boolGuardBoolLLVMName = extractPtr_21693->mAssociatedValue2 ;
        var_isWhileGuardedCommand_20855 = extractedValue_20926_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_20952_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 512)) ;
        GALGAS_string var_acceptedLabelName_21160 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 513)) ;
        GALGAS_string var_rejectedLabelName_21223 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_20974_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_acceptedLabelName_21160, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (var_rejectedLabelName_21223, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 515)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21160.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 516)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @accept.guard ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 517)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_21223, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 518)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 518)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21223.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 519)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20781, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (extractedValue_20974_boolGuardBoolLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 520)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_23468 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_20746.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_bool extractedValue_21729_isExitCommand = extractPtr_23468->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_21748_expInstructionList = extractPtr_23468->mAssociatedValue1 ;
        const GALGAS_string extractedValue_21766_boolGuardLLVMName = extractPtr_23468->mAssociatedValue2 ;
        const GALGAS_string extractedValue_21783_guardMangledName = extractPtr_23468->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_21804_guardInstructionList = extractPtr_23468->mAssociatedValue4 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_21827_effectiveParameterList = extractPtr_23468->mAssociatedValue5 ;
        var_isWhileGuardedCommand_20855 = extractedValue_21729_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_21748_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 523)) ;
        GALGAS_string var_testOkLabelName_22004 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 524)) ;
        GALGAS_string var_testExitLabelName_22075 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 525)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extractedValue_21766_boolGuardLLVMName, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testOkLabelName_22004, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (var_testExitLabelName_22075, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 526)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_22004.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 527)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_21804_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 528)) ;
        GALGAS_string var_guardAcceptationLabelName_22427 = var_startLabel_20288.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 529)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_22427, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)).add_operation (extractedValue_21783_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 530)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 531)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_22669 (extractedValue_21827_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_22669.hasCurrentObject ()) {
          switch (enumerator_22669.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22669.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)).add_operation (extensionGetter_llvmName (enumerator_22669.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 535)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22669.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)).add_operation (extensionGetter_llvmName (enumerator_22669.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 537)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22669.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)).add_operation (extensionGetter_llvmName (enumerator_22669.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 539)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 539)) ;
            }
            break ;
          }
          if (enumerator_22669.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 542)) ;
          }
          enumerator_22669.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 544)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_22075, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 545)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_22075.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 546)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20781, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 547)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_22427, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (var_testOkLabelName_22004, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 548)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_20681, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 549)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_24372 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_20746.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_bool extractedValue_23497_isExitCommand = extractPtr_24372->mAssociatedValue0 ;
        const GALGAS_string extractedValue_23514_guardMangledName = extractPtr_24372->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_23535_guardInstructionList = extractPtr_24372->mAssociatedValue2 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_23558_effectiveParameterList = extractPtr_24372->mAssociatedValue3 ;
        var_isWhileGuardedCommand_20855 = extractedValue_23497_isExitCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_23535_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 552)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_20781, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)).add_operation (extractedValue_23514_guardMangledName.getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 553)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 554)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_23896 (extractedValue_23558_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_23896.hasCurrentObject ()) {
          switch (enumerator_23896.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23896.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)).add_operation (extensionGetter_llvmName (enumerator_23896.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 558)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23896.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)).add_operation (extensionGetter_llvmName (enumerator_23896.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 560)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23896.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)).add_operation (extensionGetter_llvmName (enumerator_23896.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 562)) ;
            }
            break ;
          }
          if (enumerator_23896.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 565)) ;
          }
          enumerator_23896.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 567)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_24406 = var_startLabel_20288.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 569)) ;
    GALGAS_string var_rejectedLabelName_24466 = var_startLabel_20288.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)).add_operation (index_20704.getter_string (SOURCE_FILE ("instruction-event.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 570)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_20781, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_acceptedLabelName_24406, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (var_rejectedLabelName_24466, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 571)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 571)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_24406.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 572)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 572)) ;
    extensionMethod_instructionListLLVMCode (enumerator_20746.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 573)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = var_isWhileGuardedCommand_20855.boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = var_startLabelName_20452 ;
    }else if (kBoolFalse == test_2) {
      temp_1 = var_exitLabelName_20536 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 574)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 574)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_24466.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 575)) ;
    var_currentStartBranchLabel_20681 = var_rejectedLabelName_24466 ;
    enumerator_20746.gotoNextObject () ;
    index_20704.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 506)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_20581, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 578)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_20581, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_startLabelName_20452, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (var_errorLabelName_20627, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 579)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 579)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_20627.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 580)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 580)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_20536, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_syncInstructionIR temp_4 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).getter_assemblerRepresentation (SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 584)) ;
    const GALGAS_syncInstructionIR temp_5 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (temp_5.readProperty_mSelectInstructionLocation ().getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).getter_string (SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 585)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 585)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).getter_string (SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 586)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 587)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_20536.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 589)), inCompiler  COMMA_SOURCE_FILE ("instruction-event.galgas", 589)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                            extensionMethod_syncInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionIR_llvmInstructionCode (defineExtensionMethod_syncInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syncInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_syncInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                       GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syncInstructionIR * object = (const cPtr_syncInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_syncInstructionIR) ;
  const GALGAS_syncInstructionIR temp_0 = object ;
  GALGAS_uint var_branchCount_26212 = temp_0.readProperty_mOnInstructionBranchListIR ().getter_length (SOURCE_FILE ("instruction-event.galgas", 598)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_26212)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_26212 ;
    }
  }
  const GALGAS_syncInstructionIR temp_2 = object ;
  cEnumerator_syncInstructionBranchListIR enumerator_26407 (temp_2.readProperty_mOnInstructionBranchListIR (), kENUMERATION_UP) ;
  while (enumerator_26407.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_26407.current (HERE).readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 603)) ;
    switch (enumerator_26407.current (HERE).readProperty_mGuardedCommand ().enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_26726 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_26407.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_26611_instructionGenerationList = extractPtr_26726->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_26611_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 606)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_sync:
      {
        const cEnumAssociatedValues_guardedCommandIR_sync * extractPtr_26958 = (const cEnumAssociatedValues_guardedCommandIR_sync *) (enumerator_26407.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_string extractedValue_26760_guardMangledName = extractPtr_26958->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_26791_guardInstructionGenerationList = extractPtr_26958->mAssociatedValue2 ;
        extensionMethod_enterAccessibleEntities (extractedValue_26791_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 608)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_26760_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 609)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_27335 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_26407.current (HERE).readProperty_mGuardedCommand ().unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_27008_instructionGenerationList = extractPtr_27335->mAssociatedValue1 ;
        const GALGAS_string extractedValue_27027_guardMangledName = extractPtr_27335->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_27058_guardInstructionGenerationList = extractPtr_27335->mAssociatedValue4 ;
        extensionMethod_enterAccessibleEntities (extractedValue_27008_instructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 611)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_27058_guardInstructionGenerationList, ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 612)) ;
        ioArgument_ioInvokedRoutineSet.addAssign_operation (extractedValue_27027_guardMangledName  COMMA_SOURCE_FILE ("instruction-event.galgas", 613)) ;
      }
      break ;
    }
    enumerator_26407.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("instruction-event.galgas", 616)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_syncInstructionIR temp_4 = object ;
      ioArgument_ioInvokedRoutineSet.addAssign_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mSelectInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-event.galgas", 617))  COMMA_SOURCE_FILE ("instruction-event.galgas", 617)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_syncInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_syncInstructionIR.mSlotID,
                                                extensionMethod_syncInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syncInstructionIR_enterAccessibleEntities (defineExtensionMethod_syncInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  const GALGAS_whileInstructionAST temp_0 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 48)) ;
  const GALGAS_whileInstructionAST temp_1 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_1.readProperty_m_5F_while_5F_Expression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                              extensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_whileInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                             const GALGAS_omnibusType constinArgument_inSelfType,
                                                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                             const GALGAS_semanticContext constinArgument_inContext,
                                                                             const GALGAS_mode constinArgument_inMode,
                                                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_3411 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 68)) ;
  GALGAS_objectIR var_testValue_3816 ;
  const GALGAS_whileInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_m_5F_while_5F_Expression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 72)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3411, var_testValue_3816, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 69)) ;
  {
  extensionSetter_appendLoadWhenReference (var_testInstructionGenerationList_3411, ioArgument_ioTemporaries, var_testValue_3816, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 82)) ;
  }
  GALGAS_implicitBooleanConversionResult var_booleanResult_4192 ;
  const GALGAS_whileInstructionAST temp_1 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_testValue_3816, temp_1.readProperty_mEndOf_5F_test_5F_expression (), ioArgument_ioTemporaries, var_testInstructionGenerationList_3411, ioArgument_ioAllocaList, var_booleanResult_4192, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  switch (var_booleanResult_4192.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const GALGAS_whileInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type should not be a compile time expression"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 97)) ;
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4787 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  const GALGAS_whileInstructionAST temp_4 = object ;
  const GALGAS_whileInstructionAST temp_5 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_4.readProperty_mWhileInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_5.readProperty_mEndOf_5F_while_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4787, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)) ;
  {
  const GALGAS_whileInstructionAST temp_6 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_6.readProperty_mEndOf_5F_while_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 122)) ;
  }
  const GALGAS_whileInstructionAST temp_7 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (temp_7.readProperty_mEndOf_5F_test_5F_expression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 125)), var_testInstructionGenerationList_3411, extensionGetter_llvmName (var_booleanResult_4192, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 127)), var_instructionGenerationList_4787  COMMA_SOURCE_FILE ("instruction-while.galgas", 124))  COMMA_SOURCE_FILE ("instruction-while.galgas", 124)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_whileInstructionAST.mSlotID,
                                                    extensionMethod_whileInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_whileInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                    GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  const GALGAS_whileInstructionIR temp_0 = object ;
  GALGAS_string var_labelTest_6456 = GALGAS_string ("while.").add_operation (temp_0.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  const GALGAS_whileInstructionIR temp_1 = object ;
  GALGAS_string var_labelLoop_6512 = GALGAS_string ("while.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  const GALGAS_whileInstructionIR temp_2 = object ;
  GALGAS_string var_labelEnd_6567 = GALGAS_string ("while.").add_operation (temp_2.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6456, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6456.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  const GALGAS_whileInstructionIR temp_3 = object ;
  extensionMethod_instructionListLLVMCode (temp_3.readProperty_mTestInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
  const GALGAS_whileInstructionIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_4.readProperty_m_5F_while_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelLoop_6512, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (var_labelEnd_6567, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 156)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6512.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  const GALGAS_whileInstructionIR temp_5 = object ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mInstructionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6456, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6567.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                            extensionMethod_whileInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionIR_llvmInstructionCode (defineExtensionMethod_whileInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@whileInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_whileInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                        GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionIR * object = (const cPtr_whileInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionIR) ;
  const GALGAS_whileInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mTestInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  const GALGAS_whileInstructionIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mInstructionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_whileInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_whileInstructionIR.mSlotID,
                                                extensionMethod_whileInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_whileInstructionIR_enterAccessibleEntities (defineExtensionMethod_whileInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                     GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  const GALGAS_forInstructionAST temp_0 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_0.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                              extensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                           const GALGAS_omnibusType constinArgument_inSelfType,
                                                                           const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                           const GALGAS_semanticContext constinArgument_inContext,
                                                                           const GALGAS_mode constinArgument_inMode,
                                                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                           GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                           GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4133 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, temp_0.readProperty_mIteratedObject (), var_iteratedObjectPointer_4133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 92)) ;
  }
  GALGAS_omnibusType var_iteratedType_4168 = extensionGetter_type (var_iteratedObjectPointer_4133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  GALGAS_omnibusType var_iteratedElementType_4269 ;
  switch (var_iteratedType_4168.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      const GALGAS_forInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mIteratedObject ().readProperty_location (), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
      var_iteratedElementType_4269.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      var_iteratedElementType_4269 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), GALGAS_string ("u8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 101)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_4614 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4168.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_4571_elementType = extractPtr_4614->mAssociatedValue0 ;
      var_iteratedElementType_4269 = extractedValue_4571_elementType ;
    }
    break ;
  }
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  GALGAS_lstring var_omnibusName_4643 = GALGAS_lstring::constructor_new (temp_3.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)), temp_4.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 106)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_omnibusName_4643.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)), var_iteratedElementType_4269, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 110)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_5.readProperty_mVarName (), GALGAS_bool (false), var_iteratedElementType_4269, var_omnibusName_4643, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 111)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_5151 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 113)) ;
  GALGAS_objectIR var_whileExpressionResult_5571 ;
  const GALGAS_forInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_6.readProperty_mWhileExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 117)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_5151, var_whileExpressionResult_5571, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 114)) ;
  GALGAS_implicitBooleanConversionResult var_whileExpressionBooleanResult_5877 ;
  const GALGAS_forInstructionAST temp_7 = object ;
  extensionMethod_generateConvertToBooleanCode (constinArgument_inContext.readProperty_mImplicitConversionToBooleanMap (), var_whileExpressionResult_5571, temp_7.readProperty_mEndOf_5F_whileExpression (), ioArgument_ioTemporaries, var_whileExpression_5F_GenerationList_5151, ioArgument_ioAllocaList, var_whileExpressionBooleanResult_5877, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 128)) ;
  switch (var_whileExpressionBooleanResult_5877.enumValue ()) {
  case GALGAS_implicitBooleanConversionResult::kNotBuilt:
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_compileTime:
    {
      const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime * extractPtr_6063 = (const cEnumAssociatedValues_implicitBooleanConversionResult_compileTime *) (var_whileExpressionBooleanResult_5877.unsafePointer ()) ;
      const GALGAS_bool extractedValue_5950_boolValue = extractPtr_6063->mAssociatedValue0 ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = extractedValue_5950_boolValue.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 138)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_forInstructionAST temp_9 = object ;
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mEndOf_5F_whileExpression (), GALGAS_string ("test expression is always false"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
        }
      }
    }
    break ;
  case GALGAS_implicitBooleanConversionResult::kEnum_llvmVariable:
    {
    }
    break ;
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_6699 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  const GALGAS_forInstructionAST temp_11 = object ;
  const GALGAS_forInstructionAST temp_12 = object ;
  extensionMethod_analyzeBranchInstructionList (temp_11.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_12.readProperty_mEndOf_5F_for_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_6699, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_13.readProperty_mEndOf_5F_for_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 166)) ;
  }
  switch (var_iteratedType_4168.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      const GALGAS_forInstructionAST temp_14 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnLiteralStringIR::constructor_new (var_omnibusName_4643.readProperty_string (), temp_14.readProperty_mIteratedObject ().readProperty_location (), var_iteratedObjectPointer_4133, var_iteratedType_4168, var_whileExpression_5F_GenerationList_5151, var_whileExpressionResult_5571, var_doInstructionList_5F_GenerationList_6699  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_8273 = (const cEnumAssociatedValues_subscript_staticSubscript *) (var_iteratedType_4168.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_7631_elementType = extractPtr_8273->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_7636_size = extractPtr_8273->mAssociatedValue1 ;
      GALGAS_stringset var_invokedFunctionSet_7738 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 182)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_forInstructionAST temp_16 = object ;
        test_15 = ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().getter_hasKey (temp_16.readProperty_mIteratedObject ().readProperty_string () COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_forInstructionAST temp_17 = object ;
          ioArgument_ioTemporaries.readProperty_mStaticArrayMapForTemporaries ().method_searchKey (temp_17.readProperty_mIteratedObject (), var_invokedFunctionSet_7738, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
        }
      }
      const GALGAS_forInstructionAST temp_18 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_omnibusName_4643.readProperty_string (), temp_18.readProperty_mIteratedObject (), var_iteratedObjectPointer_4133, var_whileExpression_5F_GenerationList_5151, extensionGetter_llvmName (var_whileExpressionBooleanResult_5877, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)), var_doInstructionList_5F_GenerationList_6699, extractedValue_7631_elementType, extractedValue_7636_size.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 194)), var_invokedFunctionSet_7738  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                    extensionMethod_forInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_forInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnArrayIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                         GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  const GALGAS_forInstructionOnArrayIR temp_0 = object ;
  GALGAS_string var_elementTypeLLVMName_10510 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mElementType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 253)) ;
  const GALGAS_forInstructionOnArrayIR temp_1 = object ;
  GALGAS_string var_listTypeLLVMName_10568 = GALGAS_string ("[").add_operation (temp_1.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (var_elementTypeLLVMName_10510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 254)) ;
  const GALGAS_forInstructionOnArrayIR temp_2 = object ;
  GALGAS_string var_locationIndex_10648 = temp_2.readProperty_mIteratedObjectName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 255)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 255)) ;
  GALGAS_string var_startLabel_10729 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 257)) ;
  GALGAS_string var_testLabel_10782 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 258)) ;
  GALGAS_string var_whileLabel_10835 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 259)) ;
  GALGAS_string var_nextLabel_10888 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 260)) ;
  GALGAS_string var_loopVar_10938 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 261)) ;
  GALGAS_string var_loopLabel_10984 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 262)) ;
  GALGAS_string var_endLabel_11035 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 263)) ;
  GALGAS_string var_indexVar_11088 = GALGAS_string ("for.index.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 265)) ;
  GALGAS_string var_ptrVar_11133 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 266)) ;
  GALGAS_string var_currentValue_11182 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_10648, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_10729, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 270)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_10729.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 273)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)).add_operation (var_listTypeLLVMName_10568, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 275)) ;
  const GALGAS_forInstructionOnArrayIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_10568, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10782, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 279)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10782.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_elementTypeLLVMName_10510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_startLabel_10729, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)).add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (var_nextLabel_10888, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  const GALGAS_forInstructionOnArrayIR temp_4 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (temp_4.readProperty_mArraySize ().getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_startLabel_10729, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)).add_operation (var_indexVar_11088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (var_nextLabel_10888, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_10938, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (var_indexVar_11088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_10938, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_whileLabel_10835, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (var_endLabel_11035, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_10835.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  const GALGAS_forInstructionOnArrayIR temp_5 = object ;
  extensionMethod_instructionListLLVMCode (temp_5.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  const GALGAS_forInstructionOnArrayIR temp_6 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (temp_6.readProperty_mWhileExpressionBooleanResult_5F_llvmName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_loopLabel_10984, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (var_endLabel_11035, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10984.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_11182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (var_elementTypeLLVMName_10510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10510.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 303)) ;
  const GALGAS_forInstructionOnArrayIR temp_7 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_10510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_currentValue_11182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (var_elementTypeLLVMName_10510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)).add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mEnumeratedValueName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  const GALGAS_forInstructionOnArrayIR temp_8 = object ;
  extensionMethod_instructionListLLVMCode (temp_8.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_10888, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_10888.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_elementTypeLLVMName_10510, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_10510.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (var_ptrVar_11133, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 313)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_11088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (var_indexVar_11088, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10782, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_11035.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                            extensionMethod_forInstructionOnArrayIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnArrayIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnArrayIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                             GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnArrayIR * object = (const cPtr_forInstructionOnArrayIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnArrayIR) ;
  const GALGAS_forInstructionOnArrayIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  const GALGAS_forInstructionOnArrayIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 329)) ;
  const GALGAS_forInstructionOnArrayIR temp_2 = object ;
  ioArgument_ioInvokedRoutineSet.plusAssign_operation(temp_2.readProperty_mInvokedFunctionSet (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnArrayIR.mSlotID,
                                                extensionMethod_forInstructionOnArrayIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnArrayIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnArrayIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnLiteralStringIR * object = (const cPtr_forInstructionOnLiteralStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnLiteralStringIR) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_0 = object ;
  GALGAS_string var_startLabel_15078 = GALGAS_string ("for.label.start.").add_operation (temp_0.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_1 = object ;
  GALGAS_string var_testLabel_15148 = GALGAS_string ("for.label.test.").add_operation (temp_1.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_2 = object ;
  GALGAS_string var_loopLabel_15217 = GALGAS_string ("for.label.loop.").add_operation (temp_2.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 356)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_3 = object ;
  GALGAS_string var_whileLabel_15287 = GALGAS_string ("for.label.while.").add_operation (temp_3.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 357)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_4 = object ;
  GALGAS_string var_nextLabel_15357 = GALGAS_string ("for.label.next.").add_operation (temp_4.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_5 = object ;
  GALGAS_string var_endLabel_15425 = GALGAS_string ("for.label.end.").add_operation (temp_5.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 359)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_6 = object ;
  GALGAS_string var_ptrVar_15491 = GALGAS_string ("for.ptr.").add_operation (temp_6.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 360)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_7 = object ;
  GALGAS_string var_currentVar_15557 = GALGAS_string ("for.current.").add_operation (temp_7.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 361)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_8 = object ;
  GALGAS_string var_stringLLVMTypeName_15632 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_8.readProperty_mLiteralStringType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 362)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_15078, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 364)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15078.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 366)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_9 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (".start = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (var_stringLLVMTypeName_15632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mStringElementIteratedObject (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15148, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_15148.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 371)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_stringLLVMTypeName_15632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (" [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 372)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15078.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (var_nextLabel_15357, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 373)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15557, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" = load i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_stringLLVMTypeName_15632, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 374)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_15557, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (var_currentVar_15557, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 375)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_15557, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_endLabel_15425, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (var_whileLabel_15287, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 376)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_15287.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_10 = object ;
  extensionMethod_instructionListLLVMCode (temp_10.readProperty_mWhileInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_11 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_11.readProperty_mWhileExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_loopLabel_15217, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (var_endLabel_15425, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_15217.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 385)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_15557, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_12 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * ").add_operation (function_llvmNameForLocalVariable (temp_12.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 388)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_13 = object ;
  extensionMethod_instructionListLLVMCode (temp_13.readProperty_mDoInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_15357, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_15357.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_15491, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_15148, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_15425.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR.mSlotID,
                                            extensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnLiteralStringIR_llvmInstructionCode (defineExtensionMethod_forInstructionOnLiteralStringIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionOnLiteralStringIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionOnLiteralStringIR * object = (const cPtr_forInstructionOnLiteralStringIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionOnLiteralStringIR) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mWhileInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  const GALGAS_forInstructionOnLiteralStringIR temp_1 = object ;
  extensionMethod_enterAccessibleEntities (temp_1.readProperty_mDoInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 409)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionOnLiteralStringIR.mSlotID,
                                                extensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities (defineExtensionMethod_forInstructionOnLiteralStringIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                    GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_forLowerUpperBoundInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_forLowerUpperBoundInstructionAST temp_2 = object ;
      ioArgument_ioGraph.setter_noteNode (temp_2.readProperty_mTypeName () COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
      }
    }
  }
  const GALGAS_forLowerUpperBoundInstructionAST temp_3 = object ;
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (temp_3.readProperty_mDoInstructionList (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_4 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_4.readProperty_mLowerBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_5 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_5.readProperty_mUpperBoundExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                              extensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_forLowerUpperBoundInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                          const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                                                          const GALGAS_mode constinArgument_inMode,
                                                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  const GALGAS_forLowerUpperBoundInstructionAST temp_0 = object ;
  GALGAS_omnibusType var_type_4166 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)).getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
  switch (var_type_4166.readProperty_kind ().enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
  case GALGAS_typeKind::kEnum_void:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticArrayType:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dynamicArrayType:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 100)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 102)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeBool:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_llvmType:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_13 = object ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 106)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_generic:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray16  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 108)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_compileTimeInteger:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_17 = object ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 110)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_19 = object ;
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray20  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 112)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_syncTool:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_21 = object ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray22  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      const GALGAS_forLowerUpperBoundInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("an integer type is required here"), fixItArray24  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 116)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8442 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4166.readProperty_kind ().unsafePointer ()) ;
      const GALGAS_bigint extractedValue_5356_min = extractPtr_8442->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_5375_max = extractPtr_8442->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_5390_unsigned = extractPtr_8442->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_5412_bitCount = extractPtr_8442->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5877 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_25 = object ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_25.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4166, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5877, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 119)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResult_5877, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 132)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResult_6442 ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_26 = object ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_26.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_type_4166, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6442, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 136)) ;
      {
      extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResult_6442, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 149)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_27 = object ;
      GALGAS_objectIR var_lowerBound_6621 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_lowerBoundExpressionResult_5877, var_type_4166, temp_27.readProperty_mEndOf_5F_lowerBoundExpression_5F_instruction (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_28 = object ;
      GALGAS_objectIR var_upperBound_6890 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_upperBoundExpressionResult_6442, var_type_4166, temp_28.readProperty_mEndOf_5F_upperBoundExpression_5F_instruction (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      extensionSetter_openOverrideForRepeatBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_29 = object ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_30 = object ;
      GALGAS_lstring var_enumeratedVarName_7260 = GALGAS_lstring::constructor_new (temp_29.readProperty_mVarName ().readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.readProperty_mTemporaryIndex ().getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), temp_30.readProperty_mVarName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (var_enumeratedVarName_7260.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), var_type_4166, GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        const GALGAS_forLowerUpperBoundInstructionAST temp_32 = object ;
        test_31 = GALGAS_bool (kIsNotEqual, temp_32.readProperty_mVarName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_31) {
          {
          const GALGAS_forLowerUpperBoundInstructionAST temp_33 = object ;
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, temp_33.readProperty_mVarName (), GALGAS_bool (false), var_type_4166, var_enumeratedVarName_7260, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
          }
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7692 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 178)) ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_34 = object ;
      const GALGAS_forLowerUpperBoundInstructionAST temp_35 = object ;
      extensionMethod_analyzeBranchInstructionList (temp_34.readProperty_mDoInstructionList (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_35.readProperty_mEndOf_5F_do_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7692, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      {
      const GALGAS_forLowerUpperBoundInstructionAST temp_36 = object ;
      extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_36.readProperty_mEndOf_5F_do_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 191)) ;
      }
      const GALGAS_forLowerUpperBoundInstructionAST temp_37 = object ;
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarName_7260.readProperty_string (), var_type_4166, extractedValue_5390_unsigned, temp_37.readProperty_mEndOf_5F_do_5F_instruction (), var_lowerBound_6621, var_upperBound_6890, var_instructionGenerationList_7692  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionAST.mSlotID,
                                                    extensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_forLowerUpperBoundInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                 GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_0 = object ;
  GALGAS_string var_llvmType_9590 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mType ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 229)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_1 = object ;
  GALGAS_string var_llvmVarName_9636 = function_llvmNameForLocalVariable (temp_1.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_2 = object ;
  GALGAS_string var_testLabel_9696 = GALGAS_string ("for.").add_operation (temp_2.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_3 = object ;
  GALGAS_string var_loopLabel_9764 = GALGAS_string ("for.").add_operation (temp_3.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_4 = object ;
  GALGAS_string var_endLabel_9831 = GALGAS_string ("for.").add_operation (temp_4.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_5 = object ;
  GALGAS_string var_testResult_9900 = GALGAS_string ("%for.").add_operation (temp_5.readProperty_mLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_6 = object ;
  GALGAS_string var_loadedVarName_9980 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_6.readProperty_mVarName ().add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_7 = object ;
  GALGAS_string var_currentVarName_10062 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_7.readProperty_mVarName ().add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_8 = object ;
  GALGAS_string var_nextVarName_10142 = GALGAS_string::makeEmptyString ().add_operation (function_llvmNameForLocalVariable (temp_8.readProperty_mVarName ().add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_9 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (extensionGetter_llvmName (temp_9.readProperty_mLowerExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmVarName_9636, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9696, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9696.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9980, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (var_llvmVarName_9636, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9900, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_10 = object ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mUnsigned ().boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_11, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_13 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (var_loadedVarName_9980, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (extensionGetter_llvmName (temp_13.readProperty_mUpperExpressionResult (), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9900, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_loopLabel_9764, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (var_endLabel_9831, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9764.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_14 = object ;
  extensionMethod_instructionListLLVMCode (temp_14.readProperty_mInstructionList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_10062, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (var_llvmVarName_9636, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 251)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10142, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_currentVarName_10062, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_nextVarName_10142, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmType_9590, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (var_llvmVarName_9636, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9696, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 254)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9831.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                            extensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode (defineExtensionMethod_forLowerUpperBoundInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forLowerUpperBoundInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                                     GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionIR * object = (const cPtr_forLowerUpperBoundInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionIR) ;
  const GALGAS_forLowerUpperBoundInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mInstructionList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forLowerUpperBoundInstructionIR.mSlotID,
                                                extensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities (defineExtensionMethod_forLowerUpperBoundInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                               GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  const GALGAS_procedureCallInstructionAST temp_0 = object ;
  cEnumerator_accessInAssignmentListAST enumerator_4137 (temp_0.readProperty_mAccessList (), kENUMERATION_UP) ;
  while (enumerator_4137.hasCurrentObject ()) {
    switch (enumerator_4137.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_4333 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_4137.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_4256_indexExpression = extractPtr_4333->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_4256_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 92)) ;
      }
      break ;
    }
    enumerator_4137.gotoNextObject () ;
  }
  const GALGAS_procedureCallInstructionAST temp_1 = object ;
  cEnumerator_effectiveArgumentListAST enumerator_4380 (temp_1.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_4380.hasCurrentObject ()) {
    switch (enumerator_4380.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4592 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4380.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4502_typeName = extractPtr_4592->mAssociatedValue1 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, extractedValue_4502_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_4502_typeName COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 100)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4685 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4380.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_4620_expression = extractPtr_4685->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_4620_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 102)) ;
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
    enumerator_4380.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                              extensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_procedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = object ;
  cEnumerator_effectiveArgumentListAST enumerator_5060 (temp_0.readProperty_mArguments (), kENUMERATION_UP) ;
  while (enumerator_5060.hasCurrentObject ()) {
    switch (enumerator_5060.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5272 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5060.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5182_typeName = extractPtr_5272->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, extractedValue_5182_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            ioArgument_ioGraph.setter_noteNode (extractedValue_5182_typeName COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 119)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_5365 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5060.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_5300_expression = extractPtr_5365->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_5300_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 121)) ;
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
    enumerator_5060.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                              extensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_standAloneProcedureCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@standAloneProcedureCallInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                               const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                               const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                               const GALGAS_semanticContext constinArgument_inContext,
                                                                                               const GALGAS_mode constinArgument_inMode,
                                                                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                               GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                               GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_0 = object ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_1 = object ;
  GALGAS_lstring var_calledRoutineSignature_7238 = extensionGetter_routineSignature (temp_0.readProperty_mArguments (), temp_1.readProperty_mSandAloneRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 167)) ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_2 = object ;
  GALGAS_string var_requiredFunctionMangledName_7373 = temp_2.readProperty_mSandAloneRoutineName ().readProperty_string ().add_operation (var_calledRoutineSignature_7238.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  GALGAS_bool var_implementedPublic_7622 ;
  GALGAS_routineTypedSignature var_formalSignature_7647 ;
  GALGAS_unifiedTypeMap_2D_entry var_formalReturnTypeProxy_7678 ;
  GALGAS_routineLLVMNameDict var_implementedModeDictionary_7741 ;
  GALGAS_bool var_implementedIsExported_7779 ;
  GALGAS_mode var_implementedMode_7811 ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_3 = object ;
  constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (GALGAS_lstring::constructor_new (var_requiredFunctionMangledName_7373, temp_3.readProperty_mSandAloneRoutineName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 172)), var_implementedPublic_7622, var_formalSignature_7647, var_formalReturnTypeProxy_7678, var_implementedModeDictionary_7741, var_implementedIsExported_7779, var_implementedMode_7811, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_formalReturnTypeProxy_7678.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 181)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_standAloneProcedureCallInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mSandAloneRoutineName ().readProperty_location (), GALGAS_string ("this function returns a value, cannot be used as a procedure"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 182)) ;
    }
  }
  const GALGAS_standAloneProcedureCallInstructionAST temp_7 = object ;
  GALGAS_string var_functionLLVMName_8043 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_7741, constinArgument_inMode, temp_7.readProperty_mSandAloneRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 185)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_8244 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 187)) ;
  {
  const GALGAS_standAloneProcedureCallInstructionAST temp_8 = object ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_9 = object ;
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_7647, temp_8.readProperty_mArguments (), temp_9.readProperty_mSandAloneRoutineName ().readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_8244, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 188)) ;
  }
  const GALGAS_standAloneProcedureCallInstructionAST temp_10 = object ;
  const GALGAS_standAloneProcedureCallInstructionAST temp_11 = object ;
  GALGAS_lstring var_routineMangledName_8799 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), temp_10.readProperty_mSandAloneRoutineName (), temp_11.readProperty_mArguments (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 205)) ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 212)), var_routineMangledName_8799, var_functionLLVMName_8043, var_effectiveParameterListIR_8244  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 211)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_standAloneProcedureCallInstructionAST.mSlotID,
                                                    extensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_standAloneProcedureCallInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procedureCallInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                                     const GALGAS_omnibusType constinArgument_inSelfType,
                                                                                     const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                                     const GALGAS_semanticContext constinArgument_inContext,
                                                                                     const GALGAS_mode constinArgument_inMode,
                                                                                     GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                                     GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                                     GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                                     GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                                     GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_bool var_receiverIsSelf_9902 = GALGAS_bool (false) ;
  GALGAS_omnibusType var_currentType_9941 ;
  GALGAS_string var_currentLLVMAddressVar_9977 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_procedureCallInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_receiverIsSelf_9902 = GALGAS_bool (true) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.readProperty_kind ().objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 239)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_procedureCallInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("self is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 240)) ;
          var_currentType_9941.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9977.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        var_currentType_9941 = constinArgument_inSelfType ;
        var_currentLLVMAddressVar_9977 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_10388 ;
    const GALGAS_procedureCallInstructionAST temp_5 = object ;
    extensionMethod_searchEntity (ioArgument_ioUniversalMap, temp_5.readProperty_mIdentifier (), var_entity_10388, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 246)) ;
    switch (var_entity_10388.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_task:
      {
        const cEnumAssociatedValues_valuedObject_task * extractPtr_10544 = (const cEnumAssociatedValues_valuedObject_task *) (var_entity_10388.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_10440_type = extractPtr_10544->mAssociatedValue0 ;
        var_currentType_9941 = extractedValue_10440_type ;
        const GALGAS_procedureCallInstructionAST temp_6 = object ;
        var_currentLLVMAddressVar_9977 = function_llvmNameForGlobalVariable (temp_6.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 250)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_driver:
      {
        const cEnumAssociatedValues_valuedObject_driver * extractPtr_10848 = (const cEnumAssociatedValues_valuedObject_driver *) (var_entity_10388.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_10579_type = extractPtr_10848->mAssociatedValue0 ;
        const GALGAS_bool extractedValue_10590_instancied = extractPtr_10848->mAssociatedValue1 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = extractedValue_10590_instancied.boolEnum () ;
          if (kBoolTrue == test_7) {
            var_currentType_9941 = extractedValue_10579_type ;
            const GALGAS_procedureCallInstructionAST temp_8 = object ;
            var_currentLLVMAddressVar_9977 = function_llvmNameForGlobalVariable (temp_8.readProperty_mIdentifier ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
          }
        }
        if (kBoolFalse == test_7) {
          const GALGAS_procedureCallInstructionAST temp_9 = object ;
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("the driver should be instancied"), fixItArray10  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 256)) ;
          var_currentType_9941.drop () ; // Release error dropped variable
          var_currentLLVMAddressVar_9977.drop () ; // Release error dropped variable
        }
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        const GALGAS_procedureCallInstructionAST temp_11 = object ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mIdentifier ().readProperty_location (), GALGAS_string ("a global constant cannot be used in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 259)) ;
        var_currentType_9941.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9977.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_11176 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_10388.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_11055_type = extractPtr_11176->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_11076_omnibusName = extractPtr_11176->mAssociatedValue1 ;
        var_currentType_9941 = extractedValue_11055_type ;
        var_currentLLVMAddressVar_9977 = function_llvmNameForLocalVariable (extractedValue_11076_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 264)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_11337 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_10388.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_11218_type = extractPtr_11337->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_11239_omnibusName = extractPtr_11337->mAssociatedValue1 ;
        var_currentType_9941 = extractedValue_11218_type ;
        var_currentLLVMAddressVar_9977 = function_llvmNameForLocalVariable (extractedValue_11239_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalSyncInstance:
      {
        const cEnumAssociatedValues_valuedObject_globalSyncInstance * extractPtr_11508 = (const cEnumAssociatedValues_valuedObject_globalSyncInstance *) (var_entity_10388.unsafePointer ()) ;
        const GALGAS_omnibusType extractedValue_11384_type = extractPtr_11508->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_11405_omnibusName = extractPtr_11508->mAssociatedValue1 ;
        var_currentType_9941 = extractedValue_11384_type ;
        var_currentLLVMAddressVar_9977 = function_llvmNameForGlobalSyncInstance (extractedValue_11405_omnibusName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 270)) ;
      }
      break ;
    }
  }
  GALGAS_propertyGetterMap var_currentObjectPropertyMap_11590 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9941, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 274)) ;
  const GALGAS_procedureCallInstructionAST temp_13 = object ;
  GALGAS_accessInAssignmentListAST var_accessList_11724 = temp_13.readProperty_mAccessList () ;
  GALGAS_accessInAssignmentAST var_lastAccess_11783 ;
  {
  var_accessList_11724.setter_popLast (var_lastAccess_11783, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 277)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_11823 (var_accessList_11724, kENUMERATION_UP) ;
  while (enumerator_11823.hasCurrentObject ()) {
    switch (enumerator_11823.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_13618 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_11823.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11900_propertyName = extractPtr_13618->mAssociatedValue0 ;
        GALGAS_propertyVisibility var_visibility_11991 ;
        GALGAS_propertyGetterKind var_propertyAccess_12039 ;
        var_currentObjectPropertyMap_11590.method_searchKey (extractedValue_11900_propertyName, var_visibility_11991, var_propertyAccess_12039, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 282)) ;
        switch (var_visibility_11991.enumValue ()) {
        case GALGAS_propertyVisibility::kNotBuilt:
          break ;
        case GALGAS_propertyVisibility::kEnum_isPublic:
          {
          }
          break ;
        case GALGAS_propertyVisibility::kEnum_isPrivate:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = var_receiverIsSelf_9902.operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 290)).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_11900_propertyName.readProperty_location (), GALGAS_string ("inaccessible property, is private"), fixItArray15  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 291)) ;
              }
            }
          }
          break ;
        }
        var_receiverIsSelf_9902 = GALGAS_bool (false) ;
        switch (var_propertyAccess_12039.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_11900_propertyName.readProperty_location (), GALGAS_string ("a context property cannot be used in this context"), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 297)) ;
            var_currentType_9941.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9977.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_12988 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_12039.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_12522_propertyType = extractPtr_12988->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_12542_propertyIndex = extractPtr_12988->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_12607 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_12607, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 301)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9941, var_currentLLVMAddressVar_9977, var_llvmPropertyName_12607, extractedValue_12542_propertyIndex, extractedValue_11900_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
            }
            var_currentType_9941 = extractedValue_12522_propertyType ;
            var_currentLLVMAddressVar_9977 = var_llvmPropertyName_12607 ;
            var_currentObjectPropertyMap_11590 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9941, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_computedProperty * extractPtr_13608 = (const cEnumAssociatedValues_propertyGetterKind_computedProperty *) (var_propertyAccess_12039.unsafePointer ()) ;
            const GALGAS_unifiedTypeMap_2D_entry extractedValue_13035_propertyTypeProxy = extractPtr_13608->mAssociatedValue0 ;
            const GALGAS_routineLLVMNameDict extractedValue_13050_modeDictionary = extractPtr_13608->mAssociatedValue1 ;
            GALGAS_string var_routineLLVMName_13081 = function_checkModeAndReturnsRoutineLLVMName (extractedValue_13050_modeDictionary, constinArgument_inMode, extractedValue_11900_propertyName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 313)) ;
            GALGAS_objectIR var_resultValueIR_13420 ;
            {
            extensionSetter_appendGetComputedPropertyValue (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, GALGAS_objectIR::constructor_reference (var_currentType_9941, var_currentLLVMAddressVar_9977  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)), var_routineLLVMName_13081, extractedValue_13035_propertyTypeProxy.getter_type (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 318)), var_resultValueIR_13420, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 314)) ;
            }
            var_currentType_9941 = extensionGetter_type (var_resultValueIR_13420, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 321)) ;
            var_currentLLVMAddressVar_9977 = extensionGetter_llvmName (var_resultValueIR_13420, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
            var_currentObjectPropertyMap_11590 = extensionGetter_propertyGetterMap (constinArgument_inContext, var_currentType_9941, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13748 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_11823.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_location extractedValue_13663_endOfIndex = extractPtr_13748->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (extractedValue_13663_endOfIndex, GALGAS_string ("not handled yet"), fixItArray17  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 326)) ;
        var_currentType_9941.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9977.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_11823.gotoNextObject () ;
  }
  switch (var_lastAccess_11783.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_13907 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_11783.unsafePointer ()) ;
      const GALGAS_location extractedValue_13849_endOfIndex = extractPtr_13907->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (extractedValue_13849_endOfIndex, GALGAS_string ("a property is required here"), fixItArray18  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 332)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_15625 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_11783.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_13944_methodName = extractPtr_15625->mAssociatedValue0 ;
      const GALGAS_procedureCallInstructionAST temp_19 = object ;
      GALGAS_lstring var_methodMangledName_13973 = extensionGetter_mangledName (temp_19.readProperty_mArguments (), var_currentType_9941.readProperty_omnibusTypeDescriptionName (), extractedValue_13944_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 334)) ;
      GALGAS_bool var_implementedPublic_14187 ;
      GALGAS_routineTypedSignature var_formalSignature_14214 ;
      GALGAS_unifiedTypeMap_2D_entry var_formalReturnTypeProxy_14247 ;
      GALGAS_routineLLVMNameDict var_implementedModeDictionary_14312 ;
      GALGAS_bool var_implementedIsExported_14352 ;
      GALGAS_mode var_implementedMode_14386 ;
      constinArgument_inContext.readProperty_mRoutineMap ().method_searchKey (var_methodMangledName_13973, var_implementedPublic_14187, var_formalSignature_14214, var_formalReturnTypeProxy_14247, var_implementedModeDictionary_14312, var_implementedIsExported_14352, var_implementedMode_14386, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 335)) ;
      GALGAS_string var_functionLLVMName_14436 = function_checkModeAndReturnsRoutineLLVMName (var_implementedModeDictionary_14312, constinArgument_inMode, extractedValue_13944_methodName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 345)) ;
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsNotEqual, var_formalReturnTypeProxy_14247.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 347)))).boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_13944_methodName.readProperty_location (), GALGAS_string ("cannot be called in instruction, returns a value"), fixItArray21  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348)) ;
        }
      }
      GALGAS_procCallEffectiveParameterListIR temp_22 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 353)) ;
      temp_22.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 352)), GALGAS_objectIR::constructor_reference (var_currentType_9941, var_currentLLVMAddressVar_9977  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 353))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 353)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14802 = temp_22 ;
      {
      const GALGAS_procedureCallInstructionAST temp_23 = object ;
      routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_formalSignature_14214, temp_23.readProperty_mArguments (), extractedValue_13944_methodName.readProperty_location (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14802, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 356)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_standaloneRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 373)), var_methodMangledName_13973, var_functionLLVMName_14436, var_effectiveParameterListIR_14802  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 372))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 372)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_procedureCallInstructionAST.mSlotID,
                                                    extensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procedureCallInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_procedureCallInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST noteInstructionTypesInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 68)) ;
  const GALGAS_switchInstructionAST temp_1 = object ;
  cEnumerator_switchCaseListAST enumerator_2957 (temp_1.readProperty_mSwitchCaseList (), kENUMERATION_UP) ;
  while (enumerator_2957.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2957.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 70)) ;
    enumerator_2957.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                              extensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_switchInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST instructionSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_instructionSemanticAnalysis (const cPtr_instructionAST * inObject,
                                                                              const GALGAS_omnibusType constinArgument_inSelfType,
                                                                              const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                                              const GALGAS_semanticContext constinArgument_inContext,
                                                                              const GALGAS_mode constinArgument_inMode,
                                                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                              GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                                              GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4024 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 90)) ;
  GALGAS_objectIR var_switchValueIR_4419 ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inSelfType, GALGAS_routineAttributes::constructor_none (SOURCE_FILE ("instruction-switch.galgas", 93)), function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4024, var_switchValueIR_4419, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 91)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIR_4419, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 104)) ;
  }
  const GALGAS_switchInstructionAST temp_1 = object ;
  GALGAS_lstring var_switchTypeName_4572 = GALGAS_lstring::constructor_new (extensionGetter_type (var_switchValueIR_4419, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)).readProperty_omnibusTypeDescriptionName (), temp_1.readProperty_mEndOf_5F_test_5F_expression ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
  GALGAS_constantMap var_enumConstantMap_4744 ;
  constinArgument_inContext.readProperty_mTypeConstantMap ().method_searchKey (var_switchTypeName_4572, var_enumConstantMap_4744, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_type (var_switchValueIR_4419, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 112)).readProperty_kind ().getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 112)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 112)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_switchInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type is '").add_operation (extensionGetter_omnibusTypeDescriptionName (var_switchValueIR_4419, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)), fixItArray4  COMMA_SOURCE_FILE ("instruction-switch.galgas", 113)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = extensionGetter_isStatic (var_switchValueIR_4419, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_switchInstructionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("test expression type should not be static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioUniversalMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5252 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 121)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5298 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 122)) ;
  const GALGAS_switchInstructionAST temp_8 = object ;
  cEnumerator_switchCaseListAST enumerator_5342 (temp_8.readProperty_mSwitchCaseList (), kENUMERATION_UP) ;
  while (enumerator_5342.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5412 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 124)) ;
    cEnumerator_lstringlist enumerator_5434 (enumerator_5342.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5434.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5524 ;
      GALGAS_lstring joker_5526_1 ; // Joker input parameter
      var_enumConstantMap_4744.method_searchKey (enumerator_5434.current_mValue (HERE), var_constantIdx_5524, joker_5526_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
      var_caseIdentifierIndexList_5412.addAssign_operation (var_constantIdx_5524.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_usedEnumerationValues_5252.getter_hasKey (enumerator_5434.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          fixItArray10.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_5434.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated enumeration constant"), fixItArray10  COMMA_SOURCE_FILE ("instruction-switch.galgas", 129)) ;
        }
      }
      var_usedEnumerationValues_5252.addAssign_operation (enumerator_5434.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      enumerator_5434.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5815 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 133)) ;
    const GALGAS_switchInstructionAST temp_11 = object ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5342.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineAttributes, temp_11.readProperty_mEndOf_5F_switch_5F_instruction (), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5815, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_switchCaseListIR_5298.addAssign_operation (var_caseIdentifierIndexList_5412, var_instructionGenerationList_5815  COMMA_SOURCE_FILE ("instruction-switch.galgas", 146)) ;
    enumerator_5342.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_12 = object ;
  extensionSetter_closeOverride (ioArgument_ioUniversalMap, temp_12.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  }
  cEnumerator_constantMap enumerator_6469 (var_enumConstantMap_4744, kENUMERATION_UP) ;
  while (enumerator_6469.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_usedEnumerationValues_5252.getter_hasKey (enumerator_6469.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 151)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_switchInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mEndOf_5F_test_5F_expression (), GALGAS_string ("missing '").add_operation (enumerator_6469.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
      }
    }
    enumerator_6469.gotoNextObject () ;
  }
  const GALGAS_switchInstructionAST temp_16 = object ;
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (temp_16.readProperty_mEndOf_5F_test_5F_expression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)), var_switchExpressionGenerationList_4024, var_switchValueIR_4419, var_switchCaseListIR_5298  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_instructionSemanticAnalysis (void) {
  enterExtensionMethod_instructionSemanticAnalysis (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                    extensionMethod_switchInstructionAST_instructionSemanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_instructionSemanticAnalysis (defineExtensionMethod_switchInstructionAST_instructionSemanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR llvmInstructionCode'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                     GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  const GALGAS_switchInstructionIR temp_0 = object ;
  extensionMethod_instructionListLLVMCode (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)) ;
  const GALGAS_switchInstructionIR temp_1 = object ;
  GALGAS_string var_labelOtherwise_8242 = GALGAS_string ("switch.").add_operation (temp_1.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)) ;
  const GALGAS_switchInstructionIR temp_2 = object ;
  const GALGAS_switchInstructionIR temp_3 = object ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (temp_2.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 193)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  const GALGAS_switchInstructionIR temp_4 = object ;
  cEnumerator_switchCaseListIR enumerator_8483 (temp_4.readProperty_mCaseGenerationList (), kENUMERATION_UP) ;
  GALGAS_uint index_8458 ((uint32_t) 0) ;
  while (enumerator_8483.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8549 (enumerator_8483.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8549.hasCurrentObject ()) {
      const GALGAS_switchInstructionIR temp_5 = object ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (temp_5.readProperty_mSwitchExpression (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (enumerator_8549.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
      const GALGAS_switchInstructionIR temp_6 = object ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (temp_6.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (index_8458.getter_string (SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
      enumerator_8549.gotoNextObject () ;
    }
    enumerator_8483.gotoNextObject () ;
    index_8458.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 195)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  const GALGAS_switchInstructionIR temp_7 = object ;
  cEnumerator_switchCaseListIR enumerator_8844 (temp_7.readProperty_mCaseGenerationList (), kENUMERATION_UP) ;
  GALGAS_uint index_8825 ((uint32_t) 0) ;
  while (enumerator_8844.hasCurrentObject ()) {
    const GALGAS_switchInstructionIR temp_8 = object ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (temp_8.readProperty_mLabelIndex ().getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (index_8825.getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8844.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8242, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
    enumerator_8844.gotoNextObject () ;
    index_8825.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8242.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                            extensionMethod_switchInstructionIR_llvmInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionIR_llvmInstructionCode (defineExtensionMethod_switchInstructionIR_llvmInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionIR enterAccessibleEntities'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInvokedRoutineSet,
                                                                         GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionIR * object = (const cPtr_switchInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionIR) ;
  const GALGAS_switchInstructionIR temp_0 = object ;
  extensionMethod_enterAccessibleEntities (temp_0.readProperty_mSwitchExpressionGenerationList (), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
  const GALGAS_switchInstructionIR temp_1 = object ;
  cEnumerator_switchCaseListIR enumerator_9595 (temp_1.readProperty_mCaseGenerationList (), kENUMERATION_UP) ;
  while (enumerator_9595.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9595.current_mCaseInstructionList (HERE), ioArgument_ioInvokedRoutineSet, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
    enumerator_9595.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_switchInstructionIR.mSlotID,
                                                extensionMethod_switchInstructionIR_enterAccessibleEntities) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionIR_enterAccessibleEntities (defineExtensionMethod_switchInstructionIR_enterAccessibleEntities, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArraySubscriptNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArraySubscriptNew (const GALGAS_omnibusType constinArgument_inSelfType,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      const GALGAS_expressionAST constinArgument_inIndexExpression,
                                      const GALGAS_location constinArgument_inErrorLocation,
                                      const GALGAS_bool constinArgument_inCheckIndexExpression,
                                      const GALGAS_bigint constinArgument_inArraySize,
                                      const GALGAS_omnibusType constinArgument_inElementType,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      GALGAS_objectIR & outArgument_outIndexIR,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIndexIR.drop () ; // Release 'out' argument
  GALGAS_objectIR var_indexResult_1213 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 24)), constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 34)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_indexResult_1213.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 38)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bigint var_indexValue_1445 ;
      GALGAS_omnibusType joker_1413_1 ; // Joker input parameter
      var_indexResult_1213.method_literalInteger (joker_1413_1, var_indexValue_1445, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_bool test_2 = GALGAS_bool (kIsStrictInf, var_indexValue_1445.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)))) ;
        if (kBoolTrue != test_2.boolEnum ()) {
          test_2 = GALGAS_bool (kIsSupOrEqual, var_indexValue_1445.objectCompare (constinArgument_inArraySize)) ;
        }
        test_1 = test_2.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)) ;
          outArgument_outIndexIR.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_1) {
        outArgument_outIndexIR = GALGAS_objectIR::constructor_literalInteger (constinArgument_inElementType, var_indexValue_1445  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 43)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_type (var_indexResult_1213, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).readProperty_kind ().getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 45)).boolEnum () ;
      if (kBoolTrue == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = constinArgument_inCheckIndexExpression ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (gOption_omnibus_5F_options_noPanicGeneration.readProperty_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_bool var_generatePanicInstruction_2009 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1213, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2009, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)) ;
            }
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              GALGAS_bool test_8 = var_generatePanicInstruction_2009 ;
              if (kBoolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_isSafe (constinArgument_inMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 53)) ;
              }
              test_7 = test_8.boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic and routine is not safe"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)) ;
              }
            }
          }
        }
        outArgument_outIndexIR = var_indexResult_1213 ;
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray10  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 59)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeVariableInLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeVariableInLValue (const GALGAS_omnibusType constinArgument_inSelfType,
                                      const GALGAS_bool constinArgument_inIsReadAccess,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      const GALGAS_lstring constinArgument_inVariableName,
                                      const GALGAS_string constinArgument_inLLVMName,
                                      const GALGAS_omnibusType constinArgument_inVariableType,
                                      const GALGAS_LValueOperandAST constinArgument_inOperand,
                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_8895 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_8934 = constinArgument_inLLVMName ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          GALGAS_objectIR joker_9086 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9086, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 220)) ;
          }
        }
      }
      if (kBoolFalse == test_0) {
        {
        GALGAS_objectIR joker_9172 ; // Joker input parameter
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9172, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 222)) ;
        }
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_9867 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9213_name = extractPtr_9867->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_9243_nextOperand = extractPtr_9867->mAssociatedValue1 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          GALGAS_objectIR joker_9347 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9347, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 226)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        {
        GALGAS_objectIR joker_9437 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_9437, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 228)) ;
        }
      }
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, var_currentType_8895, var_currentLLVMName_8934, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9213_name, extractedValue_9243_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 230)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_10625 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_9903_indexExpression = extractPtr_10625->mAssociatedValue0 ;
      const GALGAS_location extractedValue_9914_endOfIndex = extractPtr_10625->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_9935_checkIndexExpression = extractPtr_10625->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_9947_nextOperand = extractPtr_10625->mAssociatedValue3 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inIsReadAccess.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_objectIR joker_10051 ; // Joker input parameter
          extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10051, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 247)) ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        {
        GALGAS_objectIR joker_10141 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_10141, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
        }
      }
      {
      routine_handleArrayAccess (constinArgument_inSelfType, var_currentType_8895, var_currentLLVMName_8934, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_9903_indexExpression, extractedValue_9914_endOfIndex, extractedValue_9935_checkIndexExpression, extractedValue_9947_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 251)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_8895, var_currentLLVMName_8934  COMMA_SOURCE_FILE ("lvalue.galgas", 269)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handlePropertyAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handlePropertyAccess (const GALGAS_omnibusType constinArgument_inSelfType,
                                   GALGAS_omnibusType & ioArgument_ioCurrentType,
                                   GALGAS_string & ioArgument_ioCurrentLLVMName,
                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                   const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_mode constinArgument_inMode,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   const GALGAS_lstring constinArgument_inPropertyName,
                                   const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap var_propertySetterMap_11535 = extensionGetter_propertySetterMap (constinArgument_inContext, ioArgument_ioCurrentType, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
  GALGAS_propertySetterKind var_propertyAccess_11672 ;
  GALGAS_propertyVisibility joker_11631 ; // Joker input parameter
  var_propertySetterMap_11535.method_searchKey (constinArgument_inPropertyName, joker_11631, var_propertyAccess_11672, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)) ;
  switch (var_propertyAccess_11672.enumValue ()) {
  case GALGAS_propertySetterKind::kNotBuilt:
    break ;
  case GALGAS_propertySetterKind::kEnum_computedProperty:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.readProperty_location (), GALGAS_string ("a computed property cannot be used here"), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_propertySetterKind::kEnum_storedProperty:
    {
      const cEnumAssociatedValues_propertySetterKind_storedProperty * extractPtr_12619 = (const cEnumAssociatedValues_propertySetterKind_storedProperty *) (var_propertyAccess_11672.unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_11881_propertyType = extractPtr_12619->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_11893_index = extractPtr_12619->mAssociatedValue1 ;
      GALGAS_string var_newLLVMvariable_11953 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_11953, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
      }
      {
      extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, var_newLLVMvariable_11953, extractedValue_11893_index, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 297)) ;
      }
      ioArgument_ioCurrentType = extractedValue_11881_propertyType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_11953 ;
      {
      routine_handleNextOperand (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 306)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleArrayAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleArrayAccess (const GALGAS_omnibusType constinArgument_inSelfType,
                                GALGAS_omnibusType & ioArgument_ioCurrentType,
                                GALGAS_string & ioArgument_ioCurrentLLVMName,
                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                const GALGAS_semanticContext constinArgument_inContext,
                                const GALGAS_mode constinArgument_inMode,
                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                const GALGAS_expressionAST constinArgument_inIndexExpression,
                                const GALGAS_location constinArgument_inEndOfIndex,
                                const GALGAS_bool constinArgument_inCheckIndexExpression,
                                const GALGAS_LValueOperandAST constinArgument_inNextOperand,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioCurrentType.readProperty_subscript ().enumValue ()) {
  case GALGAS_subscript::kNotBuilt:
    break ;
  case GALGAS_subscript::kEnum_noSubscript:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is ").add_operation (ioArgument_ioCurrentType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)).add_operation (GALGAS_string (" and does not accept subscripting"), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)), fixItArray0  COMMA_SOURCE_FILE ("lvalue.galgas", 344)) ;
    }
    break ;
  case GALGAS_subscript::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfIndex, GALGAS_string ("the receiver type is literal string and does not accept subscripting"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
      ioArgument_ioCurrentType.drop () ; // Release error dropped variable
      ioArgument_ioCurrentLLVMName.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_subscript::kEnum_staticSubscript:
    {
      const cEnumAssociatedValues_subscript_staticSubscript * extractPtr_15062 = (const cEnumAssociatedValues_subscript_staticSubscript *) (ioArgument_ioCurrentType.readProperty_subscript ().unsafePointer ()) ;
      const GALGAS_omnibusType extractedValue_13827_elementType = extractPtr_15062->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_13845_arraySize = extractPtr_15062->mAssociatedValue1 ;
      GALGAS_objectIR var_indexIR_14331 ;
      {
      routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, constinArgument_inCheckIndexExpression, extractedValue_13845_arraySize, extractedValue_13827_elementType, ioArgument_ioInstructionGenerationList, var_indexIR_14331, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 351)) ;
      }
      GALGAS_string var_newLLVMvariable_14394 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14394, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
      }
      {
      extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, extractedValue_13827_elementType, var_newLLVMvariable_14394, var_indexIR_14331, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 369)) ;
      }
      ioArgument_ioCurrentType = extractedValue_13827_elementType ;
      ioArgument_ioCurrentLLVMName = var_newLLVMvariable_14394 ;
      {
      routine_handleNextOperand (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inNextOperand, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 378)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSelfLValue'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSelfLValue (const GALGAS_omnibusType constinArgument_inSelfType,
                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                const GALGAS_semanticContext constinArgument_inContext,
                                const GALGAS_mode constinArgument_inMode,
                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                const GALGAS_LValueOperandAST constinArgument_inOperand,
                                GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_omnibusType var_currentType_15769 = constinArgument_inSelfType ;
  GALGAS_string var_currentLLVMName_15804 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 411)) ;
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_16333 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_15894_name = extractPtr_16333->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_15917_next = extractPtr_16333->mAssociatedValue1 ;
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, var_currentType_15769, var_currentLLVMName_15804, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_15894_name, extractedValue_15917_next, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_16890 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_16369_indexExpression = extractPtr_16890->mAssociatedValue0 ;
      const GALGAS_location extractedValue_16380_endOfIndex = extractPtr_16890->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_16401_checkIndexExpression = extractPtr_16890->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_16413_nextOperand = extractPtr_16890->mAssociatedValue3 ;
      {
      routine_handleArrayAccess (constinArgument_inSelfType, var_currentType_15769, var_currentLLVMName_15804, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_16369_indexExpression, extractedValue_16380_endOfIndex, extractedValue_16401_checkIndexExpression, extractedValue_16413_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 431)) ;
      }
    }
    break ;
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_new (var_currentType_15769, var_currentLLVMName_15804  COMMA_SOURCE_FILE ("lvalue.galgas", 449)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'handleNextOperand'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_handleNextOperand (const GALGAS_omnibusType constinArgument_inSelfType,
                                GALGAS_omnibusType & ioArgument_ioCurrentType,
                                GALGAS_string & ioArgument_ioCurrentLLVMName,
                                const GALGAS_LValueOperandAST constinArgument_inOperand,
                                const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                const GALGAS_semanticContext constinArgument_inContext,
                                const GALGAS_mode constinArgument_inMode,
                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inOperand.enumValue ()) {
  case GALGAS_LValueOperandAST::kNotBuilt:
    break ;
  case GALGAS_LValueOperandAST::kEnum_noOperand:
    {
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_property:
    {
      const cEnumAssociatedValues_LValueOperandAST_property * extractPtr_18168 = (const cEnumAssociatedValues_LValueOperandAST_property *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_17725_name = extractPtr_18168->mAssociatedValue0 ;
      const GALGAS_LValueOperandAST extractedValue_17748_next = extractPtr_18168->mAssociatedValue1 ;
      {
      routine_handlePropertyAccess (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_17725_name, extractedValue_17748_next, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 471)) ;
      }
    }
    break ;
  case GALGAS_LValueOperandAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_LValueOperandAST_arrayAccess * extractPtr_18729 = (const cEnumAssociatedValues_LValueOperandAST_arrayAccess *) (constinArgument_inOperand.unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_18204_indexExpression = extractPtr_18729->mAssociatedValue0 ;
      const GALGAS_location extractedValue_18215_endOfIndex = extractPtr_18729->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_18236_checkIndexExpression = extractPtr_18729->mAssociatedValue2 ;
      const GALGAS_LValueOperandAST extractedValue_18248_nextOperand = extractPtr_18729->mAssociatedValue3 ;
      {
      routine_handleArrayAccess (constinArgument_inSelfType, ioArgument_ioCurrentType, ioArgument_ioCurrentLLVMName, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, extractedValue_18204_indexExpression, extractedValue_18215_endOfIndex, extractedValue_18236_checkIndexExpression, extractedValue_18248_nextOperand, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 487)) ;
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeEffectiveParameters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeEffectiveParameters (const GALGAS_omnibusType constinArgument_inSelfType,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_semanticContext constinArgument_inContext,
                                         const GALGAS_mode constinArgument_inRequiredMode,
                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                         GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                         GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_5228 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 129)) ;
  cEnumerator_routineTypedSignature enumerator_5264 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_5342 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5264.hasCurrentObject () && enumerator_5342.hasCurrentObject ()) {
    switch (enumerator_5342.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_6160 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_5342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_5459_constant = extractPtr_6160->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_5477_typeName = extractPtr_6160->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_5491_name = extractPtr_6160->mAssociatedValue2 ;
        GALGAS_omnibusType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_5477_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_5264.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 134)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inContext.readProperty_mTypeMap (), extractedValue_5477_typeName, inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 136)) ;
        }
        GALGAS_omnibusType var_type_5509 = temp_0 ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extractedValue_5459_constant.boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_5491_name, GALGAS_bool (false), var_type_5509, extractedValue_5491_name, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 139)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_5491_name, var_type_5509, extractedValue_5491_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 141)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_5491_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)), var_type_5509, GALGAS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
        var_parameterList_5228.addAssign_operation (enumerator_5342.current_mEffectiveParameterKind (HERE), enumerator_5342.current_mSelector (HERE), var_type_5509  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 146)), GALGAS_objectIR::constructor_reference (var_type_5509, function_llvmNameForLocalVariable (extractedValue_5491_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_6893 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_5342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_6190_name = extractPtr_6893->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_6270 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_6190_name, var_objectIR_6270, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        }
        var_parameterList_5228.addAssign_operation (enumerator_5342.current_mEffectiveParameterKind (HERE), enumerator_5342.current_mSelector (HERE), extensionGetter_type (var_objectIR_6270, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 159))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 159)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 161)), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_6270, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 163)), extensionGetter_llvmName (var_objectIR_6270, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 164)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 164)).readProperty_string ()  COMMA_SOURCE_FILE ("effective-parameters.galgas", 162))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 160)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7960 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_5342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_6936_expression = extractPtr_7960->mAssociatedValue0 ;
        const GALGAS_location extractedValue_6955_endOfExp = extractPtr_7960->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_7419 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_6936_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, enumerator_5264.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_7419, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 167)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_7419, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 180)) ;
        }
        GALGAS_objectIR var_result_7566 = function_checkAssignmentCompatibility (constinArgument_inContext.readProperty_mAssignmentOperatorMap (), var_expressionResult_7419, enumerator_5264.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187)), extractedValue_6955_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        var_parameterList_5228.addAssign_operation (enumerator_5342.current_mEffectiveParameterKind (HERE), enumerator_5342.current_mSelector (HERE), enumerator_5264.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 191))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 192)), var_result_7566  COMMA_SOURCE_FILE ("effective-parameters.galgas", 192)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_8360 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_5342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7996_name = extractPtr_8360->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_8080 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_7996_name, var_objectIR_8080, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
        }
        var_parameterList_5228.addAssign_operation (enumerator_5342.current_mEffectiveParameterKind (HERE), enumerator_5342.current_mSelector (HERE), extensionGetter_type (var_objectIR_8080, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 195))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 195)) ;
        GALGAS_objectIR var_argumentIR_8198 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_8080, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)), extensionGetter_llvmName (var_objectIR_8080, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 198))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 200)), var_argumentIR_8198  COMMA_SOURCE_FILE ("effective-parameters.galgas", 200)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_9614 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_5342.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_8408_name = extractPtr_9614->mAssociatedValue0 ;
        GALGAS_propertyGetterMap var_propertyGetterMap_8537 = extensionGetter_propertyGetterMap (constinArgument_inContext, constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 203)) ;
        GALGAS_propertyGetterKind var_propertyAccess_8757 ;
        GALGAS_propertyVisibility joker_8716 ; // Joker input parameter
        var_propertyGetterMap_8537.method_searchKey (extractedValue_8408_name, joker_8716, var_propertyAccess_8757, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 205)) ;
        switch (var_propertyAccess_8757.enumValue ()) {
        case GALGAS_propertyGetterKind::kNotBuilt:
          break ;
        case GALGAS_propertyGetterKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used as output / input parameter"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_storedProperty:
          {
            const cEnumAssociatedValues_propertyGetterKind_storedProperty * extractPtr_9472 = (const cEnumAssociatedValues_propertyGetterKind_storedProperty *) (var_propertyAccess_8757.unsafePointer ()) ;
            const GALGAS_omnibusType extractedValue_8970_propertyType = extractPtr_9472->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_8990_propertyIndex = extractPtr_9472->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_9056 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_9056, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 210)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 213)), var_property_5F_llvmName_9056, extractedValue_8990_propertyIndex, extractedValue_8408_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 211)) ;
            }
            var_parameterList_5228.addAssign_operation (enumerator_5342.current_mEffectiveParameterKind (HERE), enumerator_5342.current_mSelector (HERE), extractedValue_8970_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 219)), GALGAS_objectIR::constructor_reference (extractedValue_8970_propertyType, var_property_5F_llvmName_9056  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)) ;
          }
          break ;
        case GALGAS_propertyGetterKind::kEnum_computedProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a computed property cannot be used as output / input parameter"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_5264.gotoNextObject () ;
    enumerator_5342.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 226)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 226)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 227)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 228)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 228)), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
    }
  }
  if (kBoolFalse == test_5) {
    cEnumerator_routineTypedSignature enumerator_9990 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_10091 (var_parameterList_5228, kENUMERATION_UP) ;
    while (enumerator_9990.hasCurrentObject () && enumerator_10091.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, enumerator_9990.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 231)).readProperty_omnibusTypeDescriptionName ().objectCompare (enumerator_10091.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_10091.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_10091.current_mParameterType (HERE).readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)).add_operation (enumerator_9990.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 233)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 232)) ;
        }
      }
      GALGAS_string var_requiredPassingMode_10473 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9990.current_mFormalArgumentPassingMode (HERE), enumerator_9990.current_mSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 235)) ;
      GALGAS_string var_testedPassingMode_10594 = extensionGetter_passingModeForActualSelector (enumerator_10091.current_mEffectiveParameterPassingMode (HERE), enumerator_10091.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 236)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_10473.objectCompare (var_testedPassingMode_10594)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_10091.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_10473, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 238)) ;
        }
      }
      enumerator_9990.gotoNextObject () ;
      enumerator_10091.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'llvmAttributeFunction'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_llvmAttributeFunction (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (" nounwind minsize optsize ") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_llvmAttributeFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmAttributeFunction ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_llvmAttributeFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmAttributeFunction) {
    gOnceFunctionResult_llvmAttributeFunction = onceFunction_llvmAttributeFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmAttributeFunction = true ;
  }
  return gOnceFunctionResult_llvmAttributeFunction ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_llvmAttributeFunction (void) {
  gOnceFunctionResult_llvmAttributeFunction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_llvmAttributeFunction (NULL,
                                                                   releaseOnceFunctionResult_llvmAttributeFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_llvmAttributeFunction [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_llvmAttributeFunction (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_llvmAttributeFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_llvmAttributeFunction ("llvmAttributeFunction",
                                                                       functionWithGenericHeader_llvmAttributeFunction,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_llvmAttributeFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'staticAttribute'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_staticAttribute (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticAttribute = false ;
static GALGAS_string gOnceFunctionResult_staticAttribute ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_staticAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticAttribute) {
    gOnceFunctionResult_staticAttribute = onceFunction_staticAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticAttribute = true ;
  }
  return gOnceFunctionResult_staticAttribute ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticAttribute (void) {
  gOnceFunctionResult_staticAttribute.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_staticAttribute (NULL,
                                                             releaseOnceFunctionResult_staticAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_staticAttribute [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_staticAttribute (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_staticAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticAttribute ("staticAttribute",
                                                                 functionWithGenericHeader_staticAttribute,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_staticAttribute) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compileTimeDeclarationBarrier'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring onceFunction_compileTimeDeclarationBarrier (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_string ("\xC2""\xAB""compile time\xC2""\xBB""").getter_nowhere (SOURCE_FILE ("generated-code-prefixes.galgas", 16)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = false ;
static GALGAS_lstring gOnceFunctionResult_compileTimeDeclarationBarrier ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_compileTimeDeclarationBarrier (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compileTimeDeclarationBarrier) {
    gOnceFunctionResult_compileTimeDeclarationBarrier = onceFunction_compileTimeDeclarationBarrier (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compileTimeDeclarationBarrier = true ;
  }
  return gOnceFunctionResult_compileTimeDeclarationBarrier ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compileTimeDeclarationBarrier (void) {
  gOnceFunctionResult_compileTimeDeclarationBarrier.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_compileTimeDeclarationBarrier (NULL,
                                                                           releaseOnceFunctionResult_compileTimeDeclarationBarrier) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compileTimeDeclarationBarrier [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compileTimeDeclarationBarrier (C_Compiler * inCompiler,
                                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  return function_compileTimeDeclarationBarrier (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compileTimeDeclarationBarrier ("compileTimeDeclarationBarrier",
                                                                               functionWithGenericHeader_compileTimeDeclarationBarrier,
                                                                               & kTypeDescriptor_GALGAS_lstring,
                                                                               0,
                                                                               functionArgs_compileTimeDeclarationBarrier) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'registerGroupNameFromOmnibusName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_registerGroupNameFromOmnibusName (const GALGAS_lstring & constinArgument_inName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("registers ").add_operation (constinArgument_inName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inName.readProperty_location ()  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_registerGroupNameFromOmnibusName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_registerGroupNameFromOmnibusName (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_registerGroupNameFromOmnibusName (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromOmnibusName ("registerGroupNameFromOmnibusName",
                                                                                  functionWithGenericHeader_registerGroupNameFromOmnibusName,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_registerGroupNameFromOmnibusName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'literalStringName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_literalStringName (const GALGAS_uint & constinArgument_inIndex,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalStringName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalStringName ("literalStringName",
                                                                   functionWithGenericHeader_literalStringName,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   1,
                                                                   functionArgs_literalStringName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'literalCharacterArrayName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_literalCharacterArrayName (const GALGAS_uint & constinArgument_inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 38)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_literalCharacterArrayName [2] = {
  & kTypeDescriptor_GALGAS_uint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_literalCharacterArrayName ("literalCharacterArrayName",
                                                                           functionWithGenericHeader_literalCharacterArrayName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_literalCharacterArrayName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorMapKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_infixOperatorMapKey (const GALGAS_omnibusType & constinArgument_inLeftType,
                                             const GALGAS_omnibusInfixOperator & constinArgument_inInfixOperator,
                                             const GALGAS_location & constinArgument_inOperatorLocation,
                                             const GALGAS_omnibusType & constinArgument_inRightType,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2098 = constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)).add_operation (extensionGetter_string (constinArgument_inInfixOperator, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  var_s_2098.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2098, constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_infixOperatorMapKey [5] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_location,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_infixOperatorMapKey (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusInfixOperator operand1 = GALGAS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  const GALGAS_omnibusType operand3 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_infixOperatorMapKey (operand0,
                                       operand1,
                                       operand2,
                                       operand3,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorMapKey ("infixOperatorMapKey",
                                                                     functionWithGenericHeader_infixOperatorMapKey,
                                                                     & kTypeDescriptor_GALGAS_lstring,
                                                                     4,
                                                                     functionArgs_infixOperatorMapKey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'infixOperatorFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_infixOperatorFunctionName (const GALGAS_omnibusType & constinArgument_inLeftType,
                                                  const GALGAS_omnibusInfixOperator & constinArgument_inOperator,
                                                  const GALGAS_omnibusType & constinArgument_inRightType,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("operator.").add_operation (constinArgument_inLeftType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_omnibusInfixOperator::kNotBuilt:
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_equal:
    {
      result_result.plusAssign_operation(GALGAS_string ("equal"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_lessThan:
    {
      result_result.plusAssign_operation(GALGAS_string ("lessThan"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 65)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_infEqual:
    {
      result_result.plusAssign_operation(GALGAS_string ("infEqual"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 66)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseAndOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("bitWiseAnd"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 67)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseOrOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("bitWiseOr"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 68)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_bitWiseXorOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("xor"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 69)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_addOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("add"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_addOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("addOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_subOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("sub"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 72)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_subOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("subOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 73)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_mulOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("mul"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 74)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_mulOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("mulOpNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 75)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_divOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("div"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 76)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_divOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("divNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 77)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_modOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("modulo"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 78)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_modOpNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("moduloNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 79)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_leftShiftOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("leftShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 80)) ;
    }
    break ;
  case GALGAS_omnibusInfixOperator::kEnum_rightShiftOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("rightShift"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 81)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GALGAS_string (".").add_operation (constinArgument_inRightType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_infixOperatorFunctionName [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_omnibusInfixOperator,
  & kTypeDescriptor_GALGAS_omnibusType,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_infixOperatorFunctionName (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_omnibusInfixOperator operand1 = GALGAS_omnibusInfixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                           inCompiler
                                                                                           COMMA_THERE) ;
  const GALGAS_omnibusType operand2 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_infixOperatorFunctionName (operand0,
                                             operand1,
                                             operand2,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_infixOperatorFunctionName ("infixOperatorFunctionName",
                                                                           functionWithGenericHeader_infixOperatorFunctionName,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           3,
                                                                           functionArgs_infixOperatorFunctionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorMapKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring function_prefixOperatorMapKey (const GALGAS_omnibusType & constinArgument_inReceiverType,
                                              const GALGAS_prefixOperator & constinArgument_inOperator,
                                              const GALGAS_location & constinArgument_inOperatorLocation,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_3919 ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      var_s_3919 = GALGAS_string ("-%") ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusOp:
    {
      var_s_3919 = GALGAS_string ("-") ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOp:
    {
      var_s_3919 = GALGAS_string ("not") ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_bitWiseComplement:
    {
      var_s_3919 = GALGAS_string ("~") ;
    }
    break ;
  }
  var_s_3919.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 101)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_3919, constinArgument_inOperatorLocation  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 102)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_prefixOperatorMapKey [4] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_prefixOperatorMapKey (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_prefixOperator operand1 = GALGAS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_prefixOperatorMapKey (operand0,
                                        operand1,
                                        operand2,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorMapKey ("prefixOperatorMapKey",
                                                                      functionWithGenericHeader_prefixOperatorMapKey,
                                                                      & kTypeDescriptor_GALGAS_lstring,
                                                                      3,
                                                                      functionArgs_prefixOperatorMapKey) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'prefixOperatorFunctionName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_prefixOperatorFunctionName (const GALGAS_omnibusType & constinArgument_inReceiverType,
                                                   const GALGAS_prefixOperator & constinArgument_inOperator,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("operator.") ;
  switch (constinArgument_inOperator.enumValue ()) {
  case GALGAS_prefixOperator::kNotBuilt:
    break ;
  case GALGAS_prefixOperator::kEnum_minusNoOvf:
    {
      result_result.plusAssign_operation(GALGAS_string ("minusNoOvf"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 113)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_minusOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("minus"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 114)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_notOp:
    {
      result_result.plusAssign_operation(GALGAS_string ("not"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
    }
    break ;
  case GALGAS_prefixOperator::kEnum_bitWiseComplement:
    {
      result_result.plusAssign_operation(GALGAS_string ("complement"), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 116)) ;
    }
    break ;
  }
  result_result.plusAssign_operation(GALGAS_string (".").add_operation (constinArgument_inReceiverType.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 118)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_prefixOperatorFunctionName [3] = {
  & kTypeDescriptor_GALGAS_omnibusType,
  & kTypeDescriptor_GALGAS_prefixOperator,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_prefixOperatorFunctionName (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_omnibusType operand0 = GALGAS_omnibusType::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  const GALGAS_prefixOperator operand1 = GALGAS_prefixOperator::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                               inCompiler
                                                                               COMMA_THERE) ;
  return function_prefixOperatorFunctionName (operand0,
                                              operand1,
                                              inCompiler
                                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_prefixOperatorFunctionName ("prefixOperatorFunctionName",
                                                                            functionWithGenericHeader_prefixOperatorFunctionName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            2,
                                                                            functionArgs_prefixOperatorFunctionName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'staticStringTypeName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_staticStringTypeName (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("literalString") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_staticStringTypeName = false ;
static GALGAS_string gOnceFunctionResult_staticStringTypeName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_staticStringTypeName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_staticStringTypeName) {
    gOnceFunctionResult_staticStringTypeName = onceFunction_staticStringTypeName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_staticStringTypeName = true ;
  }
  return gOnceFunctionResult_staticStringTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_staticStringTypeName (void) {
  gOnceFunctionResult_staticStringTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_staticStringTypeName (NULL,
                                                                  releaseOnceFunctionResult_staticStringTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_staticStringTypeName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_staticStringTypeName (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_staticStringTypeName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_staticStringTypeName ("staticStringTypeName",
                                                                      functionWithGenericHeader_staticStringTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      0,
                                                                      functionArgs_staticStringTypeName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'functionResultVariableName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_functionResultVariableName (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("result") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_functionResultVariableName = false ;
static GALGAS_string gOnceFunctionResult_functionResultVariableName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_functionResultVariableName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_functionResultVariableName) {
    gOnceFunctionResult_functionResultVariableName = onceFunction_functionResultVariableName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_functionResultVariableName = true ;
  }
  return gOnceFunctionResult_functionResultVariableName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_functionResultVariableName (void) {
  gOnceFunctionResult_functionResultVariableName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_functionResultVariableName (NULL,
                                                                        releaseOnceFunctionResult_functionResultVariableName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_functionResultVariableName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_functionResultVariableName (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_functionResultVariableName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_functionResultVariableName ("functionResultVariableName",
                                                                            functionWithGenericHeader_functionResultVariableName,
                                                                            & kTypeDescriptor_GALGAS_string,
                                                                            0,
                                                                            functionArgs_functionResultVariableName) ;

