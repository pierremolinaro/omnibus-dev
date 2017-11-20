#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


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
                                                                           GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                           GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standAloneProcedureCallInstructionAST * object = (const cPtr_standAloneProcedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_standAloneProcedureCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_6455 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 153)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_6690 ;
  GALGAS_routineDescriptor var_routineDescriptor_6736 ;
  GALGAS_location var_keyLocation_6774 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_6455, var_LLVMInvocationRoutineName_6690, var_routineDescriptor_6736, var_keyLocation_6774, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 155)) ;
  GALGAS_lstring var_routineMangledName_6842 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 163)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_6842 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 169)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_7103 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_6736.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 173)), var_routineDescriptor_6736.getter_mRoutineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 171)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_7392 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 178)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_routineDescriptor_6736.getter_mSignature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_7392, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 179)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 198)), var_routineMangledName_6842, var_LLVMInvocationRoutineName_6690, var_routineKindIR_7103, var_effectiveParameterListIR_7392  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 196)) ;
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
                                                                 GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                                 GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                 GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procedureCallInstructionAST * object = (const cPtr_procedureCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procedureCallInstructionAST) ;
  GALGAS_PLMType var_currentType_9128 ;
  GALGAS_string var_currentLLVMAddressVar_9160 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mIdentifier.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_mKind (SOURCE_FILE ("instruction-procedure-call.galgas", 226)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("instruction-procedure-call.galgas", 226)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 227)), GALGAS_string ("self is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 227)) ;
      var_currentType_9128.drop () ; // Release error dropped variable
      var_currentLLVMAddressVar_9160.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      var_currentType_9128 = constinArgument_inSelfType ;
      var_currentLLVMAddressVar_9160 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 230)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_valuedObject var_entity_9533 ;
    callExtensionMethod_searchEntity ((const cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mIdentifier, var_entity_9533, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 233)) ;
    switch (var_entity_9533.enumValue ()) {
    case GALGAS_valuedObject::kNotBuilt:
      break ;
    case GALGAS_valuedObject::kEnum_module:
      {
        const cEnumAssociatedValues_valuedObject_module * extractPtr_9682 = (const cEnumAssociatedValues_valuedObject_module *) (var_entity_9533.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_9682->mAssociatedValue0 ;
        var_currentType_9128 = extractedValue_type ;
        var_currentLLVMAddressVar_9160 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 237)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_register:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 239)), GALGAS_string ("a control register constant cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 239)) ;
        var_currentType_9128.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9160.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalConstant:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 243)), GALGAS_string ("a global constant cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
        var_currentType_9128.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9160.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_valuedObject::kEnum_localConstant:
      {
        const cEnumAssociatedValues_valuedObject_localConstant * extractPtr_10167 = (const cEnumAssociatedValues_valuedObject_localConstant *) (var_entity_9533.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10167->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10167->mAssociatedValue1 ;
        var_currentType_9128 = extractedValue_type ;
        var_currentLLVMAddressVar_9160 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 248)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_globalVariable:
      {
        const cEnumAssociatedValues_valuedObject_globalVariable * extractPtr_10307 = (const cEnumAssociatedValues_valuedObject_globalVariable *) (var_entity_9533.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10307->mAssociatedValue1 ;
        var_currentType_9128 = extractedValue_type ;
        var_currentLLVMAddressVar_9160 = function_llvmNameForGlobalVariable (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 251)) ;
      }
      break ;
    case GALGAS_valuedObject::kEnum_localVariable:
      {
        const cEnumAssociatedValues_valuedObject_localVariable * extractPtr_10456 = (const cEnumAssociatedValues_valuedObject_localVariable *) (var_entity_9533.unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_type = extractPtr_10456->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_plmName = extractPtr_10456->mAssociatedValue1 ;
        var_currentType_9128 = extractedValue_type ;
        var_currentLLVMAddressVar_9160 = function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
      }
      break ;
    }
  }
  GALGAS_propertyMap var_propertyMap_10538 = var_currentType_9128.getter_mPropertyMap (HERE) ;
  GALGAS_accessInAssignmentListAST var_accessList_10654 = object->mProperty_mAccessList ;
  GALGAS_accessInAssignmentAST var_lastAccess_10708 ;
  {
  var_accessList_10654.setter_popLast (var_lastAccess_10708, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 261)) ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_10763 (var_accessList_10654, kENUMERATION_UP) ;
  while (enumerator_10763.hasCurrentObject ()) {
    switch (enumerator_10763.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_11777 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_10763.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_11777->mAssociatedValue0 ;
        GALGAS_bool var_isPublic_10914 ;
        GALGAS_propertyAccessKind var_propertyAccess_10962 ;
        var_propertyMap_10538.method_searchKey (extractedValue_propertyName, var_isPublic_10914, var_propertyAccess_10962, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 266)) ;
        switch (var_propertyAccess_10962.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 273)), GALGAS_string ("a method cannot be used in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 273)) ;
            var_currentType_9128.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9160.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 275)), GALGAS_string ("a context property cannot be used in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 275)) ;
            var_currentType_9128.drop () ; // Release error dropped variable
            var_currentLLVMAddressVar_9160.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_11767 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_10962.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_11767->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_11767->mAssociatedValue1 ;
            GALGAS_string var_llvmPropertyName_11440 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmPropertyName_11440, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 279)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9128, var_currentLLVMAddressVar_9160, extractedValue_propertyType, var_llvmPropertyName_11440, extractedValue_propertyIndex, extractedValue_propertyName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 280)) ;
            }
            var_currentType_9128 = extractedValue_propertyType ;
            var_currentLLVMAddressVar_9160 = var_llvmPropertyName_11440 ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_11941 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_10763.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11941->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_11941->mAssociatedValue1 ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("not handled yet"), fixItArray7  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 292)) ;
        var_currentType_9128.drop () ; // Release error dropped variable
        var_currentLLVMAddressVar_9160.drop () ; // Release error dropped variable
      }
      break ;
    }
    enumerator_10763.gotoNextObject () ;
  }
  switch (var_lastAccess_10708.enumValue ()) {
  case GALGAS_accessInAssignmentAST::kNotBuilt:
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12105 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_lastAccess_10708.unsafePointer ()) ;
      const GALGAS_location extractedValue_endOfIndex = extractPtr_12105->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("a property access is required here"), fixItArray8  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 298)) ;
    }
    break ;
  case GALGAS_accessInAssignmentAST::kEnum_property:
    {
      const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_16883 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_lastAccess_10708.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_methodName = extractPtr_16883->mAssociatedValue0 ;
      GALGAS_propertyMap var_propertyMap_12178 = var_currentType_9128.getter_mPropertyMap (HERE) ;
      GALGAS_lstring var_key_12304 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 302)) ;
      GALGAS_propertyAccessKind var_propertyAccess_12438 ;
      GALGAS_bool joker_12397 ; // Joker input parameter
      var_propertyMap_12178.method_searchKey (var_key_12304, joker_12397, var_propertyAccess_12438, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 303)) ;
      switch (var_propertyAccess_12438.enumValue ()) {
      case GALGAS_propertyAccessKind::kNotBuilt:
        break ;
      case GALGAS_propertyAccessKind::kEnum_constantProperty:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 306)), GALGAS_string ("a constant cannot be used as method"), fixItArray9  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 306)) ;
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
        {
          const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod * extractPtr_14743 = (const cEnumAssociatedValues_propertyAccessKind_nonVirtualMethod *) (var_propertyAccess_12438.unsafePointer ()) ;
          const GALGAS_routineDescriptor extractedValue_routineDescriptor = extractPtr_14743->mAssociatedValue0 ;
          GALGAS_procCallEffectiveParameterListIR temp_10 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          temp_10.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-procedure-call.galgas", 310)), GALGAS_objectIR::constructor_reference (var_currentType_9128, var_currentLLVMAddressVar_9160  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 311)) ;
          GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_12733 = temp_10 ;
          GALGAS_routineKind var_routineKind_12920 = extractedValue_routineDescriptor.getter_mRoutineKind (HERE) ;
          GALGAS_mode var_calleeMode_12974 = extensionGetter_executionMode (var_routineKind_12920, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 316)) ;
          GALGAS_routineTypedSignature var_formalSignature_13030 = extractedValue_routineDescriptor.getter_mSignature (HERE) ;
          const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, extractedValue_routineDescriptor.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 319)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 320)), GALGAS_string ("not a procedure (returns a value)"), fixItArray12  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 320)) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_calleeKindIR var_calleeKind_13314 = function_checkMode (constinArgument_inCurrentMode, var_calleeMode_12974, var_routineKind_12920, extractedValue_methodName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 323)) ;
            {
            routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_formalSignature_13030, object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_12733, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 330)) ;
            }
            GALGAS_lstring var_routineMangledName_14201 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_key (var_currentType_9128, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 346)), extractedValue_methodName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 346)) ;
            ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_staticRoutineCallIR::constructor_new (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 349)), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 350)), var_routineMangledName_14201, var_routineMangledName_14201, var_calleeKind_13314, var_effectiveParameterListIR_12733  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 348)) ;
            {
            ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_14201 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 357)) ;
            }
          }
        }
        break ;
      case GALGAS_propertyAccessKind::kEnum_indexed:
        {
          const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_16875 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_12438.unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_propertyType = extractPtr_16875->mAssociatedValue0 ;
          const GALGAS_uint extractedValue_propertyIndex = extractPtr_16875->mAssociatedValue1 ;
          const enumGalgasBool test_13 = extractedValue_propertyType.getter_mKind (SOURCE_FILE ("instruction-procedure-call.galgas", 360)).getter_isFunction (SOURCE_FILE ("instruction-procedure-call.galgas", 360)).operator_not (SOURCE_FILE ("instruction-procedure-call.galgas", 360)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 361)), GALGAS_string ("an indexed property cannot be used as method"), fixItArray14  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 361)) ;
          }else if (kBoolFalse == test_13) {
            GALGAS_routineDescriptor var_descriptor_15010 ;
            extractedValue_propertyType.getter_mKind (SOURCE_FILE ("instruction-procedure-call.galgas", 363)).method_function (var_descriptor_15010, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 363)) ;
            const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_descriptor_15010.getter_mReturnTypeProxy (HERE).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 365)))).boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_methodName.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 366)), GALGAS_string ("a function returns a value and cannot be called as a procedure"), fixItArray16  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 366)) ;
            }else if (kBoolFalse == test_15) {
              GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_15562 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 376)) ;
              {
              routine_analyzeEffectiveParameters (constinArgument_inSelfType, var_descriptor_15010.getter_mSignature (HERE), object->mProperty_mArguments, extractedValue_methodName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_15562, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 377)) ;
              }
              GALGAS_string var_property_5F_llvmName_16290 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_16290, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 393)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_9128, var_currentLLVMAddressVar_9160, extractedValue_propertyType, var_property_5F_llvmName_16290, extractedValue_propertyIndex, extractedValue_methodName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 394)) ;
              }
              ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_indirectRoutineCallIR::constructor_new (GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_16290  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 404)), extractedValue_propertyType, GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 406)), var_effectiveParameterListIR_15562  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 403))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 403)) ;
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
                                                          GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4055 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_4536 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 97)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4055, var_switchValueIRPossibleReference_4536, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
  GALGAS_objectIR var_switchValueIR_4676 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4536, var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 107)) ;
  }
  GALGAS_constantMap var_enumConstantMap_4738 ;
  const enumGalgasBool test_0 = extensionGetter_type (var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 114)).getter_mKind (SOURCE_FILE ("instruction-switch.galgas", 114)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 114)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint joker_4870_2 ; // Joker input parameter
    GALGAS_string joker_4870_1 ; // Joker input parameter
    extensionGetter_type (var_switchValueIR_4676, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)).getter_mKind (SOURCE_FILE ("instruction-switch.galgas", 115)).method_enumeration (var_enumConstantMap_4738, joker_4870_2, joker_4870_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
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
  cPtr_universalValuedObjectMapForContext * ptr_5192 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalValuedObjectMapForContext *) ptr_5192, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 125)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5255 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 126)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5297 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  cEnumerator_switchCaseListAST enumerator_5361 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5361.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5402 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 129)) ;
    cEnumerator_lstringlist enumerator_5444 (enumerator_5361.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5444.hasCurrentObject ()) {
      GALGAS_bigint var_constantIdx_5514 ;
      GALGAS_lstring joker_5516 ; // Joker input parameter
      var_enumConstantMap_4738.method_searchKey (enumerator_5444.current_mValue (HERE), var_constantIdx_5514, joker_5516, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
      var_caseIdentifierIndexList_5402.addAssign_operation (var_constantIdx_5514.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5255.getter_hasKey (enumerator_5444.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 133)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5444.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 134)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
      }
      var_usedEnumerationValues_5255.addAssign_operation (enumerator_5444.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 136))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 136)) ;
      enumerator_5444.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5800 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 138)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5361.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_switch_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5800, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
    var_switchCaseListIR_5297.addAssign_operation (var_caseIdentifierIndexList_5402, var_instructionGenerationList_5800  COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)) ;
    enumerator_5361.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalValuedObjectMapForContext * ptr_6487 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalValuedObjectMapForContext *) ptr_6487, object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
  }
  cEnumerator_constantMap enumerator_6632 (var_enumConstantMap_4738, kENUMERATION_UP) ;
  while (enumerator_6632.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5255.getter_hasKey (enumerator_6632.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 158)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6632.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
    }
    enumerator_6632.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)), var_switchExpressionGenerationList_4055, var_switchValueIR_4676, var_switchCaseListIR_5297  COMMA_SOURCE_FILE ("instruction-switch.galgas", 163))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)) ;
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
  GALGAS_string var_labelOtherwise_8301 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8301, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  cEnumerator_switchCaseListIR enumerator_8551 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8502 ((uint32_t) 0) ;
  while (enumerator_8551.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8614 (enumerator_8551.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8614.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (enumerator_8614.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (index_8502.getter_string (SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
      enumerator_8614.gotoNextObject () ;
    }
    enumerator_8551.gotoNextObject () ;
    index_8502.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
  cEnumerator_switchCaseListIR enumerator_8897 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8854 ((uint32_t) 0) ;
  while (enumerator_8897.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (index_8854.getter_string (SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 211)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8897.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8301, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
    enumerator_8897.gotoNextObject () ;
    index_8854.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8301.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)) ;
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
  cEnumerator_switchCaseListIR enumerator_9644 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9644.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9644.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 227)) ;
    enumerator_9644.gotoNextObject () ;
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
                                      GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
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
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 25)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_1314, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
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
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_1450, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).getter_mKind (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 48)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_2120 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1450, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2120, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 49)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_2120 ;
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
                                   GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                   const GALGAS_expressionAST constinArgument_inIndexExpression,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   const GALGAS_bigint constinArgument_inArraySize,
                                   const GALGAS_PLMType constinArgument_inElementType,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   GALGAS_objectIR & ioArgument_ioObjectPtr,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_indexResultPossibleReference_3730 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 89)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3730, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 85)) ;
  GALGAS_objectIR var_indexResult_3866 ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3730, var_indexResult_3866, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 99)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3866.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_3999 ;
    GALGAS_PLMType joker_3967_1 ; // Joker input parameter
    var_indexResult_3866.method_literalInteger (joker_3967_1, var_indexValue_3999, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_3999.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_3999.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_llvmName_4221 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4221, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      }
      GALGAS_objectIR var_result_4239 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4221  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 110)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4239, ioArgument_ioObjectPtr, var_indexValue_3999.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)) ;
      }
      ioArgument_ioObjectPtr = var_result_4239 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3866, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).getter_mKind (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4759 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3866, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_4759, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 120)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4759 ;
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
      GALGAS_string var_llvmName_4997 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4997, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 130)) ;
      }
      GALGAS_objectIR var_result_5015 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4997  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 131)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_5015, ioArgument_ioObjectPtr, extensionGetter_llvmName (var_indexResult_3866, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)) ;
      }
      ioArgument_ioObjectPtr = var_result_5015 ;
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
                                             GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             const GALGAS_lstring constinArgument_inRegisterName,
                                             const GALGAS_PLMType constinArgument_inRegisterType,
                                             const GALGAS_uint constinArgument_inRegisterAddress,
                                             const GALGAS_uint constinArgument_inArraySize,
                                             const GALGAS_uint constinArgument_inElementSize,
                                             const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                             GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 260)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inArraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (constinArgument_inRegisterType, constinArgument_inRegisterAddress  COMMA_SOURCE_FILE ("lvalue.galgas", 262)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 264)), GALGAS_string ("the control register is an array"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 264)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 266)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_accessInAssignmentAST var_access_10818 ;
      constinArgument_inAccessList.method_first (var_access_10818, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 267)) ;
      switch (var_access_10818.enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_10988 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (var_access_10818.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_10988->mAssociatedValue0 ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 270)), GALGAS_string ("writing a slice of a control register is not allowed"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 270)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12271 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (var_access_10818.unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12271->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_12271->mAssociatedValue1 ;
          GALGAS_objectIR var_indexIR_11597 ;
          {
          routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, constinArgument_inArraySize.getter_bigint (SOURCE_FILE ("lvalue.galgas", 284)), constinArgument_inRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_11597, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 272)) ;
          }
          const enumGalgasBool test_5 = var_indexIR_11597.getter_isLiteralInteger (SOURCE_FILE ("lvalue.galgas", 289)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_bigint var_idx_11738 ;
            GALGAS_PLMType joker_11713_1 ; // Joker input parameter
            var_indexIR_11597.method_literalInteger (joker_11713_1, var_idx_11738, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 290)) ;
            GALGAS_uint var_addr_11756 = constinArgument_inRegisterAddress.add_operation (var_idx_11738.multiply_operation (constinArgument_inElementSize.getter_bigint (SOURCE_FILE ("lvalue.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 291)) ;
            outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (constinArgument_inRegisterType, var_addr_11756  COMMA_SOURCE_FILE ("lvalue.galgas", 292)) ;
          }else if (kBoolFalse == test_5) {
            GALGAS_string var_llvmName_11967 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_11967, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 294)) ;
            }
            {
            extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, var_llvmName_11967, var_indexIR_11597, constinArgument_inRegisterAddress.getter_bigint (SOURCE_FILE ("lvalue.galgas", 298)), constinArgument_inElementSize, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 295)) ;
            }
            outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileIndirectReference (constinArgument_inRegisterType, var_llvmName_11967  COMMA_SOURCE_FILE ("lvalue.galgas", 301)) ;
          }
        }
        break ;
      }
    }else if (kBoolFalse == test_3) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inRegisterName.getter_location (SOURCE_FILE ("lvalue.galgas", 305)), GALGAS_string ("only subscripting is allowed in control register assignment"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 305)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
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
                                      GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
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
  GALGAS_PLMType var_currentType_13287 = constinArgument_inVariableType ;
  GALGAS_string var_currentLLVMName_13326 = constinArgument_inLLVMName ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inAccessList.getter_length (SOURCE_FILE ("lvalue.galgas", 329)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_objectIR joker_13449 ; // Joker input parameter
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_13398 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalValuedObjectMapForContext *) ptr_13398, constinArgument_inVariableName, joker_13449, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 330)) ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_objectIR joker_13535 ; // Joker input parameter
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_13480 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalValuedObjectMapForContext *) ptr_13480, constinArgument_inVariableName, joker_13535, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 332)) ;
    }
    cEnumerator_accessInAssignmentListAST enumerator_13570 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_13570.hasCurrentObject ()) {
      switch (enumerator_13570.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_14547 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_13570.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_14547->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_13676 = var_currentType_13287.getter_mPropertyMap (HERE) ;
          GALGAS_propertyAccessKind var_propertyAccess_13791 ;
          GALGAS_bool joker_13750 ; // Joker input parameter
          var_propertyMap_13676.method_searchKey (extractedValue_propertyName, joker_13750, var_propertyAccess_13791, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 337)) ;
          switch (var_propertyAccess_13791.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray1 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 340)), GALGAS_string ("a method cannot be written"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 340)) ;
              var_currentType_13287.drop () ; // Release error dropped variable
              var_currentLLVMName_13326.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 342)), GALGAS_string ("a constant property cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 342)) ;
              var_currentType_13287.drop () ; // Release error dropped variable
              var_currentLLVMName_13326.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_14535 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_13791.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_14535->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_14535->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_14210 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_14210, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 344)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_13287, var_currentLLVMName_13326, extractedValue_propertyType, var_newLLVMvariable_14210, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 345)) ;
              }
              var_currentType_13287 = extractedValue_propertyType ;
              var_currentLLVMName_13326 = var_newLLVMvariable_14210 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_15874 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_13570.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_15874->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_15874->mAssociatedValue1 ;
          const enumGalgasBool test_3 = var_currentType_13287.getter_mKind (SOURCE_FILE ("lvalue.galgas", 357)).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 357)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_PLMType var_elementType_14750 ;
            GALGAS_bigint var_arraySize_14778 ;
            GALGAS_lstring joker_14719_1 ; // Joker input parameter
            GALGAS_constantMap joker_14780_4 ; // Joker input parameter
            GALGAS_PLMTypeAttributes joker_14780_3 ; // Joker input parameter
            GALGAS_string joker_14780_2 ; // Joker input parameter
            GALGAS_constructorMap joker_14780_1 ; // Joker input parameter
            var_currentType_13287.getter_mKind (SOURCE_FILE ("lvalue.galgas", 358)).method_arrayType (joker_14719_1, var_elementType_14750, var_arraySize_14778, joker_14780_4, joker_14780_3, joker_14780_2, joker_14780_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 358)) ;
            GALGAS_objectIR var_indexIR_15389 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_14778, var_elementType_14750, ioArgument_ioInstructionGenerationList, var_indexIR_15389, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 359)) ;
            }
            GALGAS_string var_newLLVMvariable_15462 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_15462, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 376)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_13287, var_currentLLVMName_13326, var_elementType_14750, var_newLLVMvariable_15462, var_indexIR_15389, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 377)) ;
            }
            var_currentType_13287 = var_elementType_14750 ;
            var_currentLLVMName_13326 = var_newLLVMvariable_15462 ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 387)) ;
            var_currentType_13287.drop () ; // Release error dropped variable
            var_currentLLVMName_13326.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_13570.gotoNextObject () ;
    }
  }
  outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_13287, var_currentLLVMName_13326  COMMA_SOURCE_FILE ("lvalue.galgas", 392)) ;
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
                                          GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          const GALGAS_location constinArgument_inSelfLocation,
                                          const GALGAS_accessInAssignmentListAST constinArgument_inAccessList,
                                          GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inSelfType.getter_mKind (SOURCE_FILE ("lvalue.galgas", 411)).getter_isStructure (SOURCE_FILE ("lvalue.galgas", 411)).operator_not (SOURCE_FILE ("lvalue.galgas", 411)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 412)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_PLMType var_currentType_16934 = constinArgument_inSelfType ;
    GALGAS_string var_currentLLVMName_16971 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 415)) ;
    cEnumerator_accessInAssignmentListAST enumerator_17025 (constinArgument_inAccessList, kENUMERATION_UP) ;
    while (enumerator_17025.hasCurrentObject ()) {
      switch (enumerator_17025.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_18002 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_17025.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_18002->mAssociatedValue0 ;
          GALGAS_propertyMap var_propertyMap_17131 = var_currentType_16934.getter_mPropertyMap (HERE) ;
          GALGAS_propertyAccessKind var_propertyAccess_17246 ;
          GALGAS_bool joker_17205 ; // Joker input parameter
          var_propertyMap_17131.method_searchKey (extractedValue_propertyName, joker_17205, var_propertyAccess_17246, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 420)) ;
          switch (var_propertyAccess_17246.enumValue ()) {
          case GALGAS_propertyAccessKind::kNotBuilt:
            break ;
          case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
            {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 423)), GALGAS_string ("a method cannot be written"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 423)) ;
              var_currentType_16934.drop () ; // Release error dropped variable
              var_currentLLVMName_16971.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_constantProperty:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 425)), GALGAS_string ("a constant property cannot be written"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 425)) ;
              var_currentType_16934.drop () ; // Release error dropped variable
              var_currentLLVMName_16971.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_propertyAccessKind::kEnum_indexed:
            {
              const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_17990 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_17246.unsafePointer ()) ;
              const GALGAS_PLMType extractedValue_propertyType = extractPtr_17990->mAssociatedValue0 ;
              const GALGAS_uint extractedValue_index = extractPtr_17990->mAssociatedValue1 ;
              GALGAS_string var_newLLVMvariable_17665 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_17665, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 427)) ;
              }
              {
              extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_16934, var_currentLLVMName_16971, extractedValue_propertyType, var_newLLVMvariable_17665, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 428)) ;
              }
              var_currentType_16934 = extractedValue_propertyType ;
              var_currentLLVMName_16971 = var_newLLVMvariable_17665 ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_19329 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_17025.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_19329->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfIndex = extractPtr_19329->mAssociatedValue1 ;
          const enumGalgasBool test_4 = var_currentType_16934.getter_mKind (SOURCE_FILE ("lvalue.galgas", 440)).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 440)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_PLMType var_elementType_18205 ;
            GALGAS_bigint var_arraySize_18233 ;
            GALGAS_lstring joker_18174_1 ; // Joker input parameter
            GALGAS_constantMap joker_18235_4 ; // Joker input parameter
            GALGAS_PLMTypeAttributes joker_18235_3 ; // Joker input parameter
            GALGAS_string joker_18235_2 ; // Joker input parameter
            GALGAS_constructorMap joker_18235_1 ; // Joker input parameter
            var_currentType_16934.getter_mKind (SOURCE_FILE ("lvalue.galgas", 441)).method_arrayType (joker_18174_1, var_elementType_18205, var_arraySize_18233, joker_18235_4, joker_18235_3, joker_18235_2, joker_18235_1, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 441)) ;
            GALGAS_objectIR var_indexIR_18844 ;
            {
            routine_handleArraySubscriptNew (constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_18233, var_elementType_18205, ioArgument_ioInstructionGenerationList, var_indexIR_18844, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 442)) ;
            }
            GALGAS_string var_newLLVMvariable_18917 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_18917, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 459)) ;
            }
            {
            extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_16934, var_currentLLVMName_16971, var_elementType_18205, var_newLLVMvariable_18917, var_indexIR_18844, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 460)) ;
            }
            var_currentType_16934 = var_elementType_18205 ;
            var_currentLLVMName_16971 = var_newLLVMvariable_18917 ;
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 470)) ;
            var_currentType_16934.drop () ; // Release error dropped variable
            var_currentLLVMName_16971.drop () ; // Release error dropped variable
          }
        }
        break ;
      }
      enumerator_17025.gotoNextObject () ;
    }
    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_16934, var_currentLLVMName_16971  COMMA_SOURCE_FILE ("lvalue.galgas", 474)) ;
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
                                         GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                         GALGAS_procCallEffectiveParameterListIR & ioArgument_ioEffectiveParameterListIR,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList var_parameterList_4565 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 111)) ;
  cEnumerator_routineTypedSignature enumerator_4608 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_4651 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4608.hasCurrentObject () && enumerator_4651.hasCurrentObject ()) {
    switch (enumerator_4651.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5442 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4651.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_5442->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_5442->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_5442->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_4608.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 116)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 118)).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 118)) ;
        }
        GALGAS_PLMType var_type_4789 = temp_0 ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalValuedObjectMapForContext * ptr_5003 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_5003, extractedValue_name, var_type_4789, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 121)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalValuedObjectMapForContext * ptr_5079 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalValuedObjectMapForContext *) ptr_5079, extractedValue_name, var_type_4789, extractedValue_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 123)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 123)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 125)), extensionGetter_llvmTypeName (var_type_4789, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 125))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 125)) ;
        var_parameterList_4565.addAssign_operation (enumerator_4651.current_mEffectiveParameterKind (HERE), enumerator_4651.current_mSelector (HERE), var_type_4789  COMMA_SOURCE_FILE ("effective-parameters.galgas", 126)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 128)), GALGAS_objectIR::constructor_reference (var_type_4789, function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 129))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 129))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 127)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_6175 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_4651.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6175->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_5552 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalValuedObjectMapForContext * ptr_5499 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalValuedObjectMapForContext *) ptr_5499, extractedValue_name, var_objectIR_5552, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 131)) ;
        }
        var_parameterList_4565.addAssign_operation (enumerator_4651.current_mEffectiveParameterKind (HERE), enumerator_4651.current_mSelector (HERE), extensionGetter_type (var_objectIR_5552, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 141))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 141)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 143)), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_5552, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 145)), extensionGetter_llvmName (var_objectIR_5552, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 146)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 146)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 146))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 144))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 142)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7284 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4651.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7284->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_7284->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_6758 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_4608.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 153)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6758, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 149)) ;
        GALGAS_objectIR var_expressionValue_6906 ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6758, var_expressionValue_6906, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 163)) ;
        }
        GALGAS_objectIR var_result_6933 = function_checkAssignmentCompatibility (var_expressionValue_6906, enumerator_4608.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 168)) ;
        var_parameterList_4565.addAssign_operation (enumerator_4651.current_mEffectiveParameterKind (HERE), enumerator_4651.current_mSelector (HERE), enumerator_4608.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 174))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 174)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 175)), var_result_6933  COMMA_SOURCE_FILE ("effective-parameters.galgas", 175)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_7938 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_4651.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_7938->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_7404 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalValuedObjectMapForContext * ptr_7347 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalValuedObjectMapForContext *) ptr_7347, extractedValue_name, var_objectIR_7404, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 177)) ;
        }
        var_parameterList_4565.addAssign_operation (enumerator_4651.current_mEffectiveParameterKind (HERE), enumerator_4651.current_mSelector (HERE), extensionGetter_type (var_objectIR_7404, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        GALGAS_objectIR var_argumentIR_7776 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_7404, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 186)), extensionGetter_llvmName (var_objectIR_7404, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 185)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 189)), var_argumentIR_7776  COMMA_SOURCE_FILE ("effective-parameters.galgas", 189)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_8902 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_4651.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8902->mAssociatedValue0 ;
        GALGAS_propertyAccessKind var_propertyAccess_8079 ;
        GALGAS_bool joker_8038 ; // Joker input parameter
        constinArgument_inSelfType.getter_mPropertyMap (HERE).method_searchKey (extractedValue_name, joker_8038, var_propertyAccess_8079, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
        switch (var_propertyAccess_8079.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a method cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used here"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_8892 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_8079.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_8892->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_8892->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_8452 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8452, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 198)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 201)), extractedValue_propertyType, var_property_5F_llvmName_8452, extractedValue_propertyIndex, extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 199)) ;
            }
            var_parameterList_4565.addAssign_operation (enumerator_4651.current_mEffectiveParameterKind (HERE), enumerator_4651.current_mSelector (HERE), extractedValue_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 207)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 208)), GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_8452  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 208)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_4608.gotoNextObject () ;
    enumerator_4651.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 213)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 213)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 214)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 215)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 215)), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 214)) ;
  }else if (kBoolFalse == test_5) {
    cEnumerator_routineTypedSignature enumerator_9238 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_9267 (var_parameterList_4565, kENUMERATION_UP) ;
    while (enumerator_9238.hasCurrentObject () && enumerator_9267.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_9238.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)).objectCompare (extensionGetter_key (enumerator_9267.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 218)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9267.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 219)), GALGAS_string ("the actual parameter type is '").add_operation (extensionGetter_key (enumerator_9267.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)).add_operation (enumerator_9238.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 219)) ;
      }
      GALGAS_string var_requiredPassingMode_9568 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9238.current_mFormalArgumentPassingMode (HERE), enumerator_9238.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)) ;
      GALGAS_string var_testedPassingMode_9689 = extensionGetter_passingModeForActualSelector (enumerator_9267.current_mEffectiveParameterPassingMode (HERE), enumerator_9267.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 223)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_9568.objectCompare (var_testedPassingMode_9689)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_9267.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 225)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_9568, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)) ;
      }
      enumerator_9238.gotoNextObject () ;
      enumerator_9267.gotoNextObject () ;
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
                                                   const GALGAS_routineFormalArgumentListAST & constinArgument_inFormalArgumentList,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inReceiverTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inRoutineName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 92)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 92)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 92)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 94)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4130 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4130.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4130.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 96)).add_operation (enumerator_4130.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 96)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 96)) ;
    enumerator_4130.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 98)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_routineMangledNameFromAST [4] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineFormalArgumentListAST,
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
  const GALGAS_routineFormalArgumentListAST operand2 = GALGAS_routineFormalArgumentListAST::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 110)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 110)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 110)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 112)) ;
  cEnumerator_effectiveArgumentListAST enumerator_4842 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4842.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_4842.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 114)).add_operation (enumerator_4842.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 114)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 114)) ;
    enumerator_4842.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 116)) ;
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
                               const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentList,
                               GALGAS_routineTypedSignature & outArgument_outSignature,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 125)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5375 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5375.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5466 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5375.current_mFormalArgumentTypeName (HERE), var_typeProxy_5466 COMMA_SOURCE_FILE ("context-routines.galgas", 127)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5375.current_mFormalArgumentPassingMode (HERE), enumerator_5375.current_mSelector (HERE), var_typeProxy_5466  COMMA_SOURCE_FILE ("context-routines.galgas", 128)) ;
    enumerator_5375.gotoNextObject () ;
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
                                 GALGAS_universalValuedObjectMapForContext & outArgument_outUniversalMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalValuedObjectMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 14)) ;
  cEnumerator_moduleMap enumerator_998 (constinArgument_inContext.getter_mModuleMap (HERE), kENUMERATION_UP) ;
  while (enumerator_998.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1024 = function_moduleMangledNameFromModuleName (enumerator_998.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 17)) ;
    GALGAS_PLMType var_moduleType_1091 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_1024, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 18)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 18)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_1193 = (cPtr_universalValuedObjectMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertModule ((cPtr_universalValuedObjectMapForContext *) ptr_1193, enumerator_998.current_lkey (HERE), var_moduleType_1091, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 19)) ;
    }
    enumerator_998.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1356 (constinArgument_inContext.getter_mControlRegisterMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1356.hasCurrentObject ()) {
    GALGAS_bool var_registerIsReadable_1386 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1356.current (HERE).getter_mIsAccessibleInUserMode (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 23)) ;
    GALGAS_bool test_0 = var_registerIsReadable_1386 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1356.current (HERE).getter_mIsReadOnly (HERE).operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 24)) ;
    }
    GALGAS_bool test_1 = test_0 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 24)) ;
    }
    GALGAS_bool var_registerIsWritable_1488 = test_1 ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_1588 = (cPtr_universalValuedObjectMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertRegister ((cPtr_universalValuedObjectMapForContext *) ptr_1588, enumerator_1356.current (HERE).getter_lkey (HERE), var_registerIsReadable_1386, var_registerIsWritable_1488, enumerator_1356.current (HERE).getter_mType (HERE), enumerator_1356.current (HERE).getter_mAddress (HERE), enumerator_1356.current (HERE).getter_mRegisterFieldAccessMap (HERE), enumerator_1356.current (HERE).getter_mArraySize (HERE), enumerator_1356.current (HERE).getter_mElementArraySize (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 25)) ;
    }
    enumerator_1356.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_2084 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2084.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_2110 = (cPtr_universalValuedObjectMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_2110, enumerator_2084.current_lkey (HERE), enumerator_2084.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 38)) ;
    }
    enumerator_2084.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_2292 (constinArgument_inContext.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  while (enumerator_2292.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_2318 = (cPtr_universalValuedObjectMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalVariable ((cPtr_universalValuedObjectMapForContext *) ptr_2318, enumerator_2292.current (HERE).getter_lkey (HERE), enumerator_2292.current (HERE).getter_type (HERE), inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 42)) ;
    }
    GALGAS_bool var_writeAccess_2416 = enumerator_2292.current (HERE).getter_allowedAccessToAll (HERE) ;
    GALGAS_bool var_allowedAccess_2468 = var_writeAccess_2416 ;
    enumerator_2292.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_resultVarName_2629 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 48)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 48)) ;
    GALGAS_PLMType var_resultType_2723 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 49)).getter_type (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 49)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_2827 = (cPtr_universalValuedObjectMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertLocalVariable ((cPtr_universalValuedObjectMapForContext *) ptr_2827, var_resultVarName_2629, var_resultType_2723, var_resultVarName_2629, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("unified-symbol-map.galgas", 50)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 50)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_universalValuedObjectMapForContext & outArgument_outUniversalMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalValuedObjectMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 60)) ;
  cEnumerator_globalConstantMap enumerator_3288 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_3288.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalValuedObjectMapForContext * ptr_3314 = (cPtr_universalValuedObjectMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_3314, enumerator_3288.current_lkey (HERE), enumerator_3288.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 63)) ;
    }
    enumerator_3288.gotoNextObject () ;
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

void routine_buildSemanticContext (const GALGAS_lstring constinArgument_inSourceFile,
                                   const GALGAS_ast constinArgument_inAST,
                                   GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_subprogramInvocationGraph & outArgument_outSubprogramInvocationGraph,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSubprogramInvocationGraph.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 168)) ;
  cEnumerator_initList enumerator_7078 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7078.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_7078.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 171)) ;
    enumerator_7078.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_7223 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7223.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_7223.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 175)) ;
    enumerator_7223.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 178)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 179)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 180)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 181)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 182)) ;
  outArgument_outSubprogramInvocationGraph = GALGAS_subprogramInvocationGraph::constructor_emptyGraph (SOURCE_FILE ("context.galgas", 184)) ;
  cEnumerator_declarationListAST enumerator_7950 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7950.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_7950.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outSubprogramInvocationGraph, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 186)) ;
    enumerator_7950.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 195)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 200)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 205)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 210)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_8936 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_8936.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_8936.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 214)) ;
      enumerator_8936.gotoNextObject () ;
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
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 225)).getter_nowhere (SOURCE_FILE ("context.galgas", 225)) ;
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
//                                               Function 'booleanType'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_booleanType (C_Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 69)), GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("types.galgas", 69))  COMMA_SOURCE_FILE ("types.galgas", 69)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_booleanType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_booleanType (C_Compiler * inCompiler,
                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                            const GALGAS_location & /* inErrorLocation */
                                                            COMMA_LOCATION_ARGS) {
  return function_booleanType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_booleanType ("booleanType",
                                                             functionWithGenericHeader_booleanType,
                                                             & kTypeDescriptor_GALGAS_PLMType,
                                                             0,
                                                             functionArgs_booleanType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'staticIntegerType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_staticIntegerType (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 75)), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("types.galgas", 75))  COMMA_SOURCE_FILE ("types.galgas", 75)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_staticIntegerType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_staticIntegerType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_staticIntegerType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_staticIntegerType ("staticIntegerType",
                                                                   functionWithGenericHeader_staticIntegerType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_staticIntegerType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'literalStringType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_literalStringType (C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 81)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 81))  COMMA_SOURCE_FILE ("types.galgas", 81)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_literalStringType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_literalStringType (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_literalStringType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_literalStringType ("literalStringType",
                                                                   functionWithGenericHeader_literalStringType,
                                                                   & kTypeDescriptor_GALGAS_PLMType,
                                                                   0,
                                                                   functionArgs_literalStringType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'voidType'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_voidType (C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 87)), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 87))  COMMA_SOURCE_FILE ("types.galgas", 87)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_voidType [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_voidType (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_voidType (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_voidType ("voidType",
                                                          functionWithGenericHeader_voidType,
                                                          & kTypeDescriptor_GALGAS_PLMType,
                                                          0,
                                                          functionArgs_voidType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'functionType'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_functionType (const GALGAS_routineDescriptor & constinArgument_inDescriptor,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 93)), GALGAS_typeKind::constructor_function (constinArgument_inDescriptor  COMMA_SOURCE_FILE ("types.galgas", 93))  COMMA_SOURCE_FILE ("types.galgas", 93)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_functionType [2] = {
  & kTypeDescriptor_GALGAS_routineDescriptor,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_functionType (C_Compiler * inCompiler,
                                                             const cObjectArray & inEffectiveParameterArray,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_routineDescriptor operand0 = GALGAS_routineDescriptor::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  return function_functionType (operand0,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_functionType ("functionType",
                                                              functionWithGenericHeader_functionType,
                                                              & kTypeDescriptor_GALGAS_PLMType,
                                                              1,
                                                              functionArgs_functionType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'buildTypeMapHTMLFile'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildTypeMapHTMLFile (GALGAS_unifiedTypeMap inArgument_inTypeMap,
                                   const GALGAS_lstring constinArgument_inSourceFile,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_typeDumpFilePath_12410 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 388)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_12527 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 390)) ;
    cEnumerator_unifiedTypeMap enumerator_12556 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_12556.hasCurrentObject ()) {
      var_firstLetterSet_12527.addAssign_operation (enumerator_12556.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 392)).getter_string (SOURCE_FILE ("types.galgas", 392))  COMMA_SOURCE_FILE ("types.galgas", 392)) ;
      enumerator_12556.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_12664 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_12698 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_12734 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_12734.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_12698.objectCompare (enumerator_12734.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 397)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_12698 = enumerator_12734.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 398)) ;
        var_tableOfTypeString_12664.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_12698.getter_uint (SOURCE_FILE ("types.galgas", 399)).getter_string (SOURCE_FILE ("types.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 399)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 399)).add_operation (var_currentFirstLetter_12698.getter_string (SOURCE_FILE ("types.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 399)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 399)) ;
      }
      var_tableOfTypeString_12664.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_12734.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 401)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 401)) ;
      enumerator_12734.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_13127 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 404)), inArgument_inTypeMap, var_firstLetterSet_12527, var_tableOfTypeString_12664 COMMA_SOURCE_FILE ("types.galgas", 403))) ;
    GALGAS_bool joker_13357 ; // Joker input parameter
    var_typeDumpString_13127.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_12410, joker_13357, inCompiler COMMA_SOURCE_FILE ("types.galgas", 409)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_12410, inCompiler COMMA_SOURCE_FILE ("types.galgas", 411)) ;
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
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 430)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 430)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 430)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 430)) ;
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
    const enumGalgasBool test_1 = constinArgument_inOptionalTargetAnnotationType.getter_mKind (SOURCE_FILE ("semantic-analysis.galgas", 17)).getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = var_sourceType_876.getter_mKind (SOURCE_FILE ("semantic-analysis.galgas", 19)).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inOptionalTargetAnnotationType.getter_mKind (SOURCE_FILE ("semantic-analysis.galgas", 19)).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1228 ;
        GALGAS_PLMType joker_1209_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1209_1, var_value_1228, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1300 ;
        GALGAS_bigint var_maxTarget_1319 ;
        GALGAS_bool joker_1321_3 ; // Joker input parameter
        GALGAS_uint joker_1321_2 ; // Joker input parameter
        GALGAS_string joker_1321_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.getter_mKind (SOURCE_FILE ("semantic-analysis.galgas", 21)).method_integer (var_minTarget_1300, var_maxTarget_1319, joker_1321_3, joker_1321_2, joker_1321_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1228.objectCompare (var_minTarget_1300)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1319.objectCompare (var_value_1228)) ;
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
//                                              Routine 'getNewTempValue'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempValue (const GALGAS_PLMType constinArgument_inType,
                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                              GALGAS_objectIR & outArgument_outTempVariable,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_mKind (SOURCE_FILE ("semantic-analysis.galgas", 73)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 73)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 74)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3431 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3431, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_3431  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 77)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempReference'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempReference (const GALGAS_PLMType constinArgument_inType,
                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                  GALGAS_objectIR & outArgument_outTempVariable,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_mKind (SOURCE_FILE ("semantic-analysis.galgas", 88)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 88)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 89)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3874 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3874, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 91)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_3874  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 92)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               GALGAS_subprogramInvocationGraph inArgument_inSubprogramInvocationGraph,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticStringMap constinArgument_inGlobalLiteralStringMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 107)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_4793 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4793.hasCurrentObject ()) {
    GALGAS_lstring var_requiredProcedureMangledName_4833 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_4793.current (HERE).getter_mName (HERE), enumerator_4793.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 112)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_requiredProcedureMangledName_4833.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 113)) ;
    enumerator_4793.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_5096 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5096.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_5096.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 117)) ;
    enumerator_5096.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5274 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 123)) ;
  var_temporaries_5274.mProperty_mSubprogramInvocationGraph = inArgument_inSubprogramInvocationGraph ;
  cEnumerator_declarationListAST enumerator_5405 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5405.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclarationAST *) enumerator_5405.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 126)) ;
    enumerator_5405.gotoNextObject () ;
  }
  extensionMethod_functionSemanticAnalysis (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 132)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.getter_mTaskListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 138)) ;
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 144)), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 143)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.getter_mGuardListAST (HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 150)), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 155)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 160)) ;
  cEnumerator_bootList enumerator_6703 (constinArgument_inAST.getter_mBootListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_6703.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_6703.current (HERE), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 166)) ;
    enumerator_6703.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_6896 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_6896.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_6896.current (HERE), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 173)) ;
    enumerator_6896.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_7125 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_7125.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_7125.current (HERE), constinArgument_inSemanticContext, var_temporaries_5274, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 181)) ;
    enumerator_7125.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 188)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_7590 = var_temporaries_5274.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 195)) ;
    GALGAS_string var_filePath_7659 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 196)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 196)) ;
    GALGAS_bool joker_7785 ; // Joker input parameter
    var_s_7590.method_writeToFileWhenDifferentContents (var_filePath_7659, joker_7785, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 197)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 200)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_7954 = var_temporaries_5274.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 201)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_7954.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_8078 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_8176 (var_undefinedNodeKeyList_7954, kENUMERATION_UP) ;
      while (enumerator_8176.hasCurrentObject ()) {
        var_s_8078.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_8176.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 205)) ;
        enumerator_8176.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_8078, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 207)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_8383 ;
      GALGAS_lstringlist var_unsortedLKeyList_8427 ;
      var_temporaries_5274.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_8383, var_unsortedLKeyList_8427 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 209)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_8427.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 213)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_8493 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_8573 (var_unsortedLKeyList_8427, kENUMERATION_UP) ;
        while (enumerator_8573.hasCurrentObject ()) {
          var_s_8493.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_8573.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 216)) ;
          enumerator_8573.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_8493, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 218)) ;
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
                                   const GALGAS_routineFormalArgumentListAST constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_universalValuedObjectMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_1254 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1254.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_1275 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1254.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1254.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1275, enumerator_1254.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    switch (enumerator_1254.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalValuedObjectMapForContext * ptr_1504 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalValuedObjectMapForContext *) ptr_1504, enumerator_1254.current_mFormalArgumentName (HERE), var_typeProxy_1275, enumerator_1254.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 30)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalValuedObjectMapForContext * ptr_1623 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalValuedObjectMapForContext *) ptr_1623, enumerator_1254.current_mFormalArgumentName (HERE), var_typeProxy_1275, enumerator_1254.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 32)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalValuedObjectMapForContext * ptr_1760 = (cPtr_universalValuedObjectMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalValuedObjectMapForContext *) ptr_1760, enumerator_1254.current_mFormalArgumentName (HERE), var_typeProxy_1275, enumerator_1254.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 34)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)) ;
        }
      }
      break ;
    }
    enumerator_1254.gotoNextObject () ;
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
                                      const GALGAS_routineFormalArgumentListAST constinArgument_inRoutineFormalArgumentList,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_mKind (SOURCE_FILE ("semantic-routines.galgas", 60)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 60)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (extensionGetter_key (constinArgument_inSelfType, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)) ;
  }
  GALGAS_lstring var_routineMangledName_2810 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 59)) ;
  GALGAS_universalValuedObjectMapForContext var_universalMap_3181 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inRoutineMode, GALGAS_bool (false), constinArgument_inReturnTypeName, var_universalMap_3181, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 65)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_3273 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 73)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_3181, var_formalArguments_3273, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 74)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_2810.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 81)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 81)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_2810, var_routineMangledName_2810, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 82)) ;
    }
  }
  GALGAS_allocaList var_allocaList_3716 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 88)) ;
  GALGAS_instructionListIR var_instructionGenerationList_3768 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 89)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_2810, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_universalMap_3181, var_allocaList_3716, var_instructionGenerationList_3768, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 90)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalValuedObjectMapForContext *) var_universalMap_3181.ptr (), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 105)) ;
  GALGAS_PLMType temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
  }
  GALGAS_PLMType var_returnType_4512 = temp_3 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_2810, constinArgument_inSelfType, var_routineMangledName_2810, var_formalArguments_3273, var_allocaList_3716, var_instructionGenerationList_3768, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_2810.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 121)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_4512, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 114)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.getter_mKind (SOURCE_FILE ("generated-code-prefixes.galgas", 41)).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("generated-code-prefixes.galgas", 41)))).boolEnum () ;
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
  GALGAS_string var_s_2114 = GALGAS_string ("panic ").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)).add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 51)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2114, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
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
  GALGAS_string var_s_4409 = GALGAS_string ("interrupt ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 108)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_4409, constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 109)) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForServiceInterrupt'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForServiceInterrupt (const GALGAS_lstring & constinArgument_inName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("isr.service.").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 115)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceInterrupt [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceInterrupt (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmNameForServiceInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceInterrupt ("llvmNameForServiceInterrupt",
                                                                             functionWithGenericHeader_llvmNameForServiceInterrupt,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             1,
                                                                             functionArgs_llvmNameForServiceInterrupt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForSectionOrSafeInterrupt'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionOrSafeInterrupt (const GALGAS_string & constinArgument_inName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("isr.section.or.safe.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 121)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionOrSafeInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionOrSafeInterrupt (C_Compiler * inCompiler,
                                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionOrSafeInterrupt (operand0,
                                                     inCompiler
                                                     COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionOrSafeInterrupt ("llvmNameForSectionOrSafeInterrupt",
                                                                                   functionWithGenericHeader_llvmNameForSectionOrSafeInterrupt,
                                                                                   & kTypeDescriptor_GALGAS_string,
                                                                                   1,
                                                                                   functionArgs_llvmNameForSectionOrSafeInterrupt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'llvmNameForSVCCall'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSVCCall (const GALGAS_lstring & constinArgument_inName,
                                           const GALGAS_routineKind & constinArgument_inMode,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  switch (constinArgument_inMode.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = function_llvmNameForPrimitiveCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 131)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 133)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 135)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = function_llvmNameForSafeCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 137)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 139)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 139)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSVCCall [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineKind,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSVCCall (C_Compiler * inCompiler,
                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                   const GALGAS_location & /* inErrorLocation */
                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_llvmNameForSVCCall (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSVCCall ("llvmNameForSVCCall",
                                                                    functionWithGenericHeader_llvmNameForSVCCall,
                                                                    & kTypeDescriptor_GALGAS_string,
                                                                    2,
                                                                    functionArgs_llvmNameForSVCCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'llvmNameForSVCImplementation'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSVCImplementation (const GALGAS_lstring & constinArgument_inName,
                                                     const GALGAS_routineKind & constinArgument_inMode,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  switch (constinArgument_inMode.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_primitive:
    {
      result_result = function_llvmNameForPrimitiveImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 148)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 150)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 152)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_safe:
    {
      result_result = function_llvmNameForSafeImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 154)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 156)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 156)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSVCImplementation [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_routineKind,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSVCImplementation (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_routineKind operand1 = GALGAS_routineKind::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_llvmNameForSVCImplementation (operand0,
                                                operand1,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSVCImplementation ("llvmNameForSVCImplementation",
                                                                              functionWithGenericHeader_llvmNameForSVCImplementation,
                                                                              & kTypeDescriptor_GALGAS_string,
                                                                              2,
                                                                              functionArgs_llvmNameForSVCImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForPrimitiveCall'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveCall (const GALGAS_string & constinArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("primitive.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 165)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 165)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveCall (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveCall (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveCall ("llvmNameForPrimitiveCall",
                                                                          functionWithGenericHeader_llvmNameForPrimitiveCall,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForPrimitiveCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmNameForPrimitiveImplementation'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForPrimitiveImplementation (const GALGAS_string & constinArgument_inName,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("primitive.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 171)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 171)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForPrimitiveImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForPrimitiveImplementation (C_Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForPrimitiveImplementation (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForPrimitiveImplementation ("llvmNameForPrimitiveImplementation",
                                                                                    functionWithGenericHeader_llvmNameForPrimitiveImplementation,
                                                                                    & kTypeDescriptor_GALGAS_string,
                                                                                    1,
                                                                                    functionArgs_llvmNameForPrimitiveImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForServiceCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 179)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 179)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceCall (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceCall ("llvmNameForServiceCall",
                                                                        functionWithGenericHeader_llvmNameForServiceCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForServiceCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForServiceImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForServiceImplementation (const GALGAS_string & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 185)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 185)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForServiceImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForServiceImplementation (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForServiceImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForServiceImplementation ("llvmNameForServiceImplementation",
                                                                                  functionWithGenericHeader_llvmNameForServiceImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForServiceImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmNameForSectionCall'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionCall (const GALGAS_string & constinArgument_inName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 193)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 193)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionCall (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionCall (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionCall ("llvmNameForSectionCall",
                                                                        functionWithGenericHeader_llvmNameForSectionCall,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_llvmNameForSectionCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForSectionImplementation'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionImplementation (const GALGAS_string & constinArgument_inName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 199)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 199)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionImplementation (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionImplementation (operand0,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionImplementation ("llvmNameForSectionImplementation",
                                                                                  functionWithGenericHeader_llvmNameForSectionImplementation,
                                                                                  & kTypeDescriptor_GALGAS_string,
                                                                                  1,
                                                                                  functionArgs_llvmNameForSectionImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForSafeCall'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSafeCall (const GALGAS_string & constinArgument_inName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("safe.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 207)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 207)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSafeCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSafeCall (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSafeCall (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSafeCall ("llvmNameForSafeCall",
                                                                     functionWithGenericHeader_llvmNameForSafeCall,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_llvmNameForSafeCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForSafeImplementation'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSafeImplementation (const GALGAS_string & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("safe.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 213)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 213)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSafeImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSafeImplementation (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSafeImplementation (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSafeImplementation ("llvmNameForSafeImplementation",
                                                                               functionWithGenericHeader_llvmNameForSafeImplementation,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForSafeImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'acceptVariablePLMName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_acceptVariablePLMName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("accept") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_acceptVariablePLMName = false ;
static GALGAS_string gOnceFunctionResult_acceptVariablePLMName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_acceptVariablePLMName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_acceptVariablePLMName) {
    gOnceFunctionResult_acceptVariablePLMName = onceFunction_acceptVariablePLMName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_acceptVariablePLMName = true ;
  }
  return gOnceFunctionResult_acceptVariablePLMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_acceptVariablePLMName (void) {
  gOnceFunctionResult_acceptVariablePLMName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_acceptVariablePLMName (NULL,
                                                                   releaseOnceFunctionResult_acceptVariablePLMName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_acceptVariablePLMName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_acceptVariablePLMName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_acceptVariablePLMName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_acceptVariablePLMName ("acceptVariablePLMName",
                                                                       functionWithGenericHeader_acceptVariablePLMName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_acceptVariablePLMName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'llvmNameForGuardCall'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardCall (const GALGAS_string & constinArgument_inName,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("guard.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 227)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 227)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGuardCall [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGuardCall (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGuardCall (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGuardCall ("llvmNameForGuardCall",
                                                                      functionWithGenericHeader_llvmNameForGuardCall,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_llvmNameForGuardCall) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Function 'llvmNameForGuardImplementation'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGuardImplementation (const GALGAS_string & constinArgument_inName,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("guard.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 233)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 233)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGuardImplementation [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGuardImplementation (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGuardImplementation (operand0,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGuardImplementation ("llvmNameForGuardImplementation",
                                                                                functionWithGenericHeader_llvmNameForGuardImplementation,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                1,
                                                                                functionArgs_llvmNameForGuardImplementation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'waitForGuardChangeFunctionName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_waitForGuardChangeFunctionName (C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("waitForGuardChange") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = false ;
static GALGAS_string gOnceFunctionResult_waitForGuardChangeFunctionName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_waitForGuardChangeFunctionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_waitForGuardChangeFunctionName) {
    gOnceFunctionResult_waitForGuardChangeFunctionName = onceFunction_waitForGuardChangeFunctionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_waitForGuardChangeFunctionName = true ;
  }
  return gOnceFunctionResult_waitForGuardChangeFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_waitForGuardChangeFunctionName (void) {
  gOnceFunctionResult_waitForGuardChangeFunctionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_waitForGuardChangeFunctionName (NULL,
                                                                            releaseOnceFunctionResult_waitForGuardChangeFunctionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_waitForGuardChangeFunctionName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_waitForGuardChangeFunctionName (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_waitForGuardChangeFunctionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_waitForGuardChangeFunctionName ("waitForGuardChangeFunctionName",
                                                                                functionWithGenericHeader_waitForGuardChangeFunctionName,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                0,
                                                                                functionArgs_waitForGuardChangeFunctionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForLocalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForLocalVariable (const GALGAS_string & constinArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 247)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 247)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForLocalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForLocalVariable (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForLocalVariable (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForLocalVariable ("llvmNameForLocalVariable",
                                                                          functionWithGenericHeader_llvmNameForLocalVariable,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForLocalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'llvmNameForSelf'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForSelf (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%self") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForSelf = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForSelf ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSelf (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForSelf) {
    gOnceFunctionResult_llvmNameForSelf = onceFunction_llvmNameForSelf (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForSelf = true ;
  }
  return gOnceFunctionResult_llvmNameForSelf ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForSelf (void) {
  gOnceFunctionResult_llvmNameForSelf.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForSelf (NULL,
                                                             releaseOnceFunctionResult_llvmNameForSelf) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSelf [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSelf (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_llvmNameForSelf (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSelf ("llvmNameForSelf",
                                                                 functionWithGenericHeader_llvmNameForSelf,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_llvmNameForSelf) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'llvmNameForGlobalVariable'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGlobalVariable (const GALGAS_string & constinArgument_inName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("gvar.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 259)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 259)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalVariable [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGlobalVariable (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGlobalVariable (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalVariable ("llvmNameForGlobalVariable",
                                                                           functionWithGenericHeader_llvmNameForGlobalVariable,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForGlobalVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'mutatingAttribute'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_mutatingAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("mutating") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_mutatingAttribute = false ;
static GALGAS_string gOnceFunctionResult_mutatingAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mutatingAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_mutatingAttribute) {
    gOnceFunctionResult_mutatingAttribute = onceFunction_mutatingAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_mutatingAttribute = true ;
  }
  return gOnceFunctionResult_mutatingAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_mutatingAttribute (void) {
  gOnceFunctionResult_mutatingAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_mutatingAttribute (NULL,
                                                               releaseOnceFunctionResult_mutatingAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mutatingAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mutatingAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_mutatingAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mutatingAttribute ("mutatingAttribute",
                                                                   functionWithGenericHeader_mutatingAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_mutatingAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'userAccessAttribute'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userAccessAttribute (C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("userAccess") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userAccessAttribute = false ;
static GALGAS_string gOnceFunctionResult_userAccessAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userAccessAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAccessAttribute) {
    gOnceFunctionResult_userAccessAttribute = onceFunction_userAccessAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAccessAttribute = true ;
  }
  return gOnceFunctionResult_userAccessAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userAccessAttribute (void) {
  gOnceFunctionResult_userAccessAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userAccessAttribute (NULL,
                                                                 releaseOnceFunctionResult_userAccessAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userAccessAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userAccessAttribute (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_userAccessAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userAccessAttribute ("userAccessAttribute",
                                                                     functionWithGenericHeader_userAccessAttribute,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     0,
                                                                     functionArgs_userAccessAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Once function 'noUnusedWarningAttribute'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_noUnusedWarningAttribute (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("noUnusedWarning") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_noUnusedWarningAttribute = false ;
static GALGAS_string gOnceFunctionResult_noUnusedWarningAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_noUnusedWarningAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_noUnusedWarningAttribute) {
    gOnceFunctionResult_noUnusedWarningAttribute = onceFunction_noUnusedWarningAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_noUnusedWarningAttribute = true ;
  }
  return gOnceFunctionResult_noUnusedWarningAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_noUnusedWarningAttribute (void) {
  gOnceFunctionResult_noUnusedWarningAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_noUnusedWarningAttribute (NULL,
                                                                      releaseOnceFunctionResult_noUnusedWarningAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_noUnusedWarningAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_noUnusedWarningAttribute (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_noUnusedWarningAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_noUnusedWarningAttribute ("noUnusedWarningAttribute",
                                                                          functionWithGenericHeader_noUnusedWarningAttribute,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_noUnusedWarningAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'exportedAttribute'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_exportedAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("exported") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_exportedAttribute = false ;
static GALGAS_string gOnceFunctionResult_exportedAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_exportedAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_exportedAttribute) {
    gOnceFunctionResult_exportedAttribute = onceFunction_exportedAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_exportedAttribute = true ;
  }
  return gOnceFunctionResult_exportedAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_exportedAttribute (void) {
  gOnceFunctionResult_exportedAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_exportedAttribute (NULL,
                                                               releaseOnceFunctionResult_exportedAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_exportedAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_exportedAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_exportedAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_exportedAttribute ("exportedAttribute",
                                                                   functionWithGenericHeader_exportedAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_exportedAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'stackNameForTask'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_stackNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 293)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 293)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stackNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stackNameForTask (C_Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stackNameForTask (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stackNameForTask ("stackNameForTask",
                                                                  functionWithGenericHeader_stackNameForTask,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_stackNameForTask) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'initNameForTaskType'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_initNameForTaskType (const GALGAS_string & constinArgument_inTaskTypeName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.init.$").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 299)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 299)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForTaskType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForTaskType (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_initNameForTaskType (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_initNameForTaskType ("initNameForTaskType",
                                                                     functionWithGenericHeader_initNameForTaskType,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_initNameForTaskType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'stackAddressForTask'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_stackAddressForTask (const GALGAS_string & constinArgument_inTaskName,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 305)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 305)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_stackAddressForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_stackAddressForTask (C_Compiler * inCompiler,
                                                                    const cObjectArray & inEffectiveParameterArray,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_stackAddressForTask (operand0,
                                       inCompiler
                                       COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_stackAddressForTask ("stackAddressForTask",
                                                                     functionWithGenericHeader_stackAddressForTask,
                                                                     & kTypeDescriptor_GALGAS_string,
                                                                     1,
                                                                     functionArgs_stackAddressForTask) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'mainRoutineNameForTask'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_mainRoutineNameForTask (const GALGAS_string & constinArgument_inTaskName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 311)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 311)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_mainRoutineNameForTask [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_mainRoutineNameForTask (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_mainRoutineNameForTask (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_mainRoutineNameForTask ("mainRoutineNameForTask",
                                                                        functionWithGenericHeader_mainRoutineNameForTask,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        1,
                                                                        functionArgs_mainRoutineNameForTask) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmNameForTaskGlobalVar'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskGlobalVar (const GALGAS_string & constinArgument_inTaskName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.globalvar.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 317)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 317)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskGlobalVar [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskGlobalVar (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForTaskGlobalVar (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskGlobalVar ("llvmNameForTaskGlobalVar",
                                                                          functionWithGenericHeader_llvmNameForTaskGlobalVar,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmNameForTaskGlobalVar) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'llvmNameForTaskLoopFunction'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task$loop") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskLoopFunction ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskLoopFunction (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction) {
    gOnceFunctionResult_llvmNameForTaskLoopFunction = onceFunction_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskLoopFunction = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskLoopFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForTaskLoopFunction (void) {
  gOnceFunctionResult_llvmNameForTaskLoopFunction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskLoopFunction (NULL,
                                                                         releaseOnceFunctionResult_llvmNameForTaskLoopFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskLoopFunction [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskLoopFunction (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskLoopFunction (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskLoopFunction ("llvmNameForTaskLoopFunction",
                                                                             functionWithGenericHeader_llvmNameForTaskLoopFunction,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             0,
                                                                             functionArgs_llvmNameForTaskLoopFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'llvmNameForTaskSelfTerminateService'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskSelfTerminateService (C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("self.terminate") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskSelfTerminateService ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskSelfTerminateService (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService) {
    gOnceFunctionResult_llvmNameForTaskSelfTerminateService = onceFunction_llvmNameForTaskSelfTerminateService (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskSelfTerminateService = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskSelfTerminateService ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForTaskSelfTerminateService (void) {
  gOnceFunctionResult_llvmNameForTaskSelfTerminateService.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskSelfTerminateService (NULL,
                                                                                 releaseOnceFunctionResult_llvmNameForTaskSelfTerminateService) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskSelfTerminateService [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskSelfTerminateService (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskSelfTerminateService (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskSelfTerminateService ("llvmNameForTaskSelfTerminateService",
                                                                                     functionWithGenericHeader_llvmNameForTaskSelfTerminateService,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     0,
                                                                                     functionArgs_llvmNameForTaskSelfTerminateService) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_plmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist.").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 336)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 336))  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 336)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_plmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_plmNameForStaticListType (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmNameForStaticListType (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plmNameForStaticListType ("plmNameForStaticListType",
                                                                          functionWithGenericHeader_plmNameForStaticListType,
                                                                          & kTypeDescriptor_GALGAS_lstring,
                                                                          1,
                                                                          functionArgs_plmNameForStaticListType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'plmNameForStaticListElementType'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_plmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist.element.").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 342)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 342))  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 342)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_plmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_plmNameForStaticListElementType (C_Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_plmNameForStaticListElementType (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_plmNameForStaticListElementType ("plmNameForStaticListElementType",
                                                                                 functionWithGenericHeader_plmNameForStaticListElementType,
                                                                                 & kTypeDescriptor_GALGAS_lstring,
                                                                                 1,
                                                                                 functionArgs_plmNameForStaticListElementType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'llvmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForStaticListType (const GALGAS_string & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("static.list.type.").add_operation (constinArgument_inStaticListName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 348)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListType [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForStaticListType (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForStaticListType (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListType ("llvmNameForStaticListType",
                                                                           functionWithGenericHeader_llvmNameForStaticListType,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmNameForStaticListType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Function 'llvmNameForStaticListElementType'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("static.list.element.type.").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 354)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 354)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForStaticListElementType [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForStaticListElementType ("llvmNameForStaticListElementType",
                                                                                  functionWithGenericHeader_llvmNameForStaticListElementType,
                                                                                  & kTypeDescriptor_GALGAS_lstring,
                                                                                  1,
                                                                                  functionArgs_llvmNameForStaticListElementType) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@nopIR llvmInstructionCode'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nopIR_llvmInstructionCode (const cPtr_abstractInstructionIR * /* inObject */,
                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                       const GALGAS_generationContext constinArgument_inGenerationContext,
                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inGenerationContext.getter_mNopInstructionInLLVM (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)).add_operation (GALGAS_string (" ; NOP instruction in LLVM\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("intermediate-nop.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nopIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_nopIR.mSlotID,
                                            extensionMethod_nopIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nopIR_llvmInstructionCode (defineExtensionMethod_nopIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@nopIR enterAccessibleEntities'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nopIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nopIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_nopIR.mSlotID,
                                                extensionMethod_nopIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nopIR_enterAccessibleEntities (defineExtensionMethod_nopIR_enterAccessibleEntities, NULL) ;

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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_bool var_sourceIsUnsigned_759 ;
  GALGAS_bigint joker_726_2 ; // Joker input parameter
  GALGAS_bigint joker_726_1 ; // Joker input parameter
  GALGAS_uint joker_761_2 ; // Joker input parameter
  GALGAS_string joker_761_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).getter_mKind (SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_726_2, joker_726_1, var_sourceIsUnsigned_759, joker_761_2, joker_761_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned_759.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("zext") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("sext") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
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
//                             Overriding extension method '@truncIR llvmInstructionCode'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_truncIR * object = (const cPtr_truncIR *) inObject ;
  macroValidSharedObject (object, cPtr_truncIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_truncIR.mSlotID,
                                            extensionMethod_truncIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncIR_llvmInstructionCode (defineExtensionMethod_truncIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@truncIR enterAccessibleEntities'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_truncIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_truncIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_truncIR.mSlotID,
                                                extensionMethod_truncIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_truncIR_enterAccessibleEntities (defineExtensionMethod_truncIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@leftShiftIR llvmInstructionCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftIR * object = (const cPtr_leftShiftIR *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("shl ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (object->mProperty_mShiftAmount.getter_string (SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_leftShiftIR.mSlotID,
                                            extensionMethod_leftShiftIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftIR_llvmInstructionCode (defineExtensionMethod_leftShiftIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@leftShiftIR enterAccessibleEntities'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                 GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_leftShiftIR.mSlotID,
                                                extensionMethod_leftShiftIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftIR_enterAccessibleEntities (defineExtensionMethod_leftShiftIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_5085 = extensionGetter_llvmTypeName (object->mProperty_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)) ;
  switch (object->mProperty_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 157)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 155)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 165)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 163)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 173)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 171)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 181)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 179)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 189)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 187)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 197)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 195)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 205)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 203)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), function_panicCodeForSignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 213)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 211)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 221)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 219)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), function_panicCodeForSignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 229)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 227)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (var_llvmType_5085, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mLeftInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 38)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mRightInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 39)) ;
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
  GALGAS_string var_startLabel_1750 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  GALGAS_string var_trueLabel_1815 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  GALGAS_string var_falseLabel_1880 = GALGAS_string ("and.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_1750, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_1750.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel_1815, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel_1880, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel_1815.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel_1880, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel_1880.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (extensionGetter_llvmName (object->mProperty_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_trueLabel_1815, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_startLabel_1750, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
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
//                   Overriding extension method '@loadRegisterWithSubscriptIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadRegisterWithSubscriptIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadRegisterWithSubscriptIR * object = (const cPtr_loadRegisterWithSubscriptIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadRegisterWithSubscriptIR) ;
  GALGAS_string var_registerOffsetName_902 = GALGAS_string ("%register.offset.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 27)) ;
  GALGAS_string var_registerIndexName_980 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 28)) ;
  GALGAS_string var_registerSubscriptedPtr_1062 = GALGAS_string ("%register.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 29)) ;
  GALGAS_string var_registerSubscriptedAddr_1143 = GALGAS_string ("%register.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 30)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 31)) ;
  GALGAS_uint var_bitCount_1337 ;
  GALGAS_bigint joker_1312_3 ; // Joker input parameter
  GALGAS_bigint joker_1312_2 ; // Joker input parameter
  GALGAS_bool joker_1312_1 ; // Joker input parameter
  GALGAS_string joker_1339_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)).getter_mKind (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)).method_integer (joker_1312_3, joker_1312_2, joker_1312_1, var_bitCount_1337, joker_1339_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1337.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_980, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)) ;
  }
  GALGAS_string var_llvmType_1573 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1337.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_980 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_902, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (object->mProperty_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (object->mProperty_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (var_registerSubscriptedAddr_1143, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (var_registerOffsetName_902, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (object->mProperty_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (var_registerSubscriptedPtr_1062, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (var_registerSubscriptedAddr_1143, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (var_llvmType_1573, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 46)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 46)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 46)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (var_llvmType_1573, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (var_llvmType_1573, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (var_registerSubscriptedPtr_1062, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 48)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadRegisterWithSubscriptIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadRegisterWithSubscriptIR.mSlotID,
                                            extensionMethod_loadRegisterWithSubscriptIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterWithSubscriptIR_llvmInstructionCode (defineExtensionMethod_loadRegisterWithSubscriptIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@loadRegisterWithSubscriptIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadRegisterWithSubscriptIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                 GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadRegisterWithSubscriptIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadRegisterWithSubscriptIR.mSlotID,
                                                extensionMethod_loadRegisterWithSubscriptIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadRegisterWithSubscriptIR_enterAccessibleEntities (defineExtensionMethod_loadRegisterWithSubscriptIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@ComputeRegisterAddressWithSubscriptIR llvmInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ComputeRegisterAddressWithSubscriptIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                       GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ComputeRegisterAddressWithSubscriptIR * object = (const cPtr_ComputeRegisterAddressWithSubscriptIR *) inObject ;
  macroValidSharedObject (object, cPtr_ComputeRegisterAddressWithSubscriptIR) ;
  GALGAS_string var_registerOffsetName_942 = GALGAS_string ("%register.offset.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 27)) ;
  GALGAS_string var_registerIndexName_1020 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 28)) ;
  GALGAS_string var_scriptedRegisterAddressValueName_1112 = GALGAS_string ("%register.truc.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 29)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 30)) ;
  GALGAS_uint var_bitCount_1306 ;
  GALGAS_bigint joker_1281_3 ; // Joker input parameter
  GALGAS_bigint joker_1281_2 ; // Joker input parameter
  GALGAS_bool joker_1281_1 ; // Joker input parameter
  GALGAS_string joker_1308_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 32)).getter_mKind (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 32)).method_integer (joker_1281_3, joker_1281_2, joker_1281_1, var_bitCount_1306, joker_1308_1, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 32)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1306.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_1020, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 35)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1306.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_1020 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 39)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 39)).add_operation (object->mProperty_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)).add_operation (object->mProperty_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterAddressValueName_1112, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)).add_operation (object->mProperty_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)) ;
  GALGAS_string var_llvmType_1953 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 43)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (var_scriptedRegisterAddressValueName_1112, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (var_llvmType_1953, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 45)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ComputeRegisterAddressWithSubscriptIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_ComputeRegisterAddressWithSubscriptIR.mSlotID,
                                            extensionMethod_ComputeRegisterAddressWithSubscriptIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ComputeRegisterAddressWithSubscriptIR_llvmInstructionCode (defineExtensionMethod_ComputeRegisterAddressWithSubscriptIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@ComputeRegisterAddressWithSubscriptIR enterAccessibleEntities'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_ComputeRegisterAddressWithSubscriptIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ComputeRegisterAddressWithSubscriptIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_ComputeRegisterAddressWithSubscriptIR.mSlotID,
                                                extensionMethod_ComputeRegisterAddressWithSubscriptIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ComputeRegisterAddressWithSubscriptIR_enterAccessibleEntities (defineExtensionMethod_ComputeRegisterAddressWithSubscriptIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_709 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (var_llvmType_709, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (var_llvmType_709, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (" * inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (var_llvmType_709, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (object->mProperty_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)) ;
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

static void extensionMethod_loadRegisterIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                    GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
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
//                       Overriding extension method '@loadFromReferenceIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadFromReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadFromReferenceIR * object = (const cPtr_loadFromReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadFromReferenceIR) ;
  GALGAS_string var_llvmType_716 = extensionGetter_llvmTypeName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (var_llvmType_716, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 25)).add_operation (var_llvmType_716, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 25)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 25)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-from-reference.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadFromReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadFromReferenceIR.mSlotID,
                                            extensionMethod_loadFromReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadFromReferenceIR_llvmInstructionCode (defineExtensionMethod_loadFromReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadFromReferenceIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadFromReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadFromReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadFromReferenceIR.mSlotID,
                                                extensionMethod_loadFromReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadFromReferenceIR_enterAccessibleEntities (defineExtensionMethod_loadFromReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@computeSubscriptedVolatileRegisterAddress llvmInstructionCode'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                                                           const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_computeSubscriptedVolatileRegisterAddress * object = (const cPtr_computeSubscriptedVolatileRegisterAddress *) inObject ;
  macroValidSharedObject (object, cPtr_computeSubscriptedVolatileRegisterAddress) ;
  GALGAS_string var_registerIndexName_957 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 27)) ;
  GALGAS_string var_scriptedRegisterOffsetName_1043 = GALGAS_string ("%register.offset.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 28)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 29)) ;
  GALGAS_uint var_bitCount_1239 ;
  GALGAS_bigint joker_1214_3 ; // Joker input parameter
  GALGAS_bigint joker_1214_2 ; // Joker input parameter
  GALGAS_bool joker_1214_1 ; // Joker input parameter
  GALGAS_string joker_1241_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)).getter_mKind (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)).method_integer (joker_1214_3, joker_1214_2, joker_1214_1, var_bitCount_1239, joker_1241_1, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1239.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_957, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 34)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1239.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_957 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 38)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterOffsetName_1043, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 37)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 37)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 37)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 38)).add_operation (object->mProperty_mElementSize.getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (GALGAS_string (" ; multiply index by size "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (object->mProperty_mElementSize.getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 37)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mLLVMResultVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)).add_operation (var_scriptedRegisterOffsetName_1043, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)).add_operation (object->mProperty_mRegisterBaseAddress.getter_string (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (GALGAS_string (" ; Adding base address "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (object->mProperty_mRegisterBaseAddress.getter_hexString (SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 40)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress.mSlotID,
                                            extensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode (defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@computeSubscriptedVolatileRegisterAddress enterAccessibleEntities'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_computeSubscriptedVolatileRegisterAddress_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                               GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                               GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_computeSubscriptedVolatileRegisterAddress.mSlotID,
                                                extensionMethod_computeSubscriptedVolatileRegisterAddress_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_computeSubscriptedVolatileRegisterAddress_enterAccessibleEntities (defineExtensionMethod_computeSubscriptedVolatileRegisterAddress_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@noteGlobalVariableAccessIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_noteGlobalVariableAccessIR_llvmInstructionCode (const cPtr_abstractInstructionIR * /* inObject */,
                                                                            GALGAS_string & /* ioArgument_ioLLVMcode */,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_noteGlobalVariableAccessIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_noteGlobalVariableAccessIR.mSlotID,
                                            extensionMethod_noteGlobalVariableAccessIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_noteGlobalVariableAccessIR_llvmInstructionCode (defineExtensionMethod_noteGlobalVariableAccessIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@noteGlobalVariableAccessIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_noteGlobalVariableAccessIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                                GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_noteGlobalVariableAccessIR * object = (const cPtr_noteGlobalVariableAccessIR *) inObject ;
  macroValidSharedObject (object, cPtr_noteGlobalVariableAccessIR) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-note-global-variable-access.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_noteGlobalVariableAccessIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_noteGlobalVariableAccessIR.mSlotID,
                                                extensionMethod_noteGlobalVariableAccessIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_noteGlobalVariableAccessIR_enterAccessibleEntities (defineExtensionMethod_noteGlobalVariableAccessIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@storeToUniversalReferenceIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeToUniversalReferenceIR * object = (const cPtr_storeToUniversalReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeToUniversalReferenceIR) ;
  GALGAS_string var_llvmType_832 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_832, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (var_llvmType_832, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (object->mProperty_mLLVMVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeToUniversalReferenceIR.mSlotID,
                                            extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeToUniversalReferenceIR_llvmInstructionCode (defineExtensionMethod_storeToUniversalReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@storeToUniversalReferenceIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                 GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                 GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeToUniversalReferenceIR.mSlotID,
                                                extensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeToUniversalReferenceIR_enterAccessibleEntities (defineExtensionMethod_storeToUniversalReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@storeIndirectVolatileIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeIndirectVolatileIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeIndirectVolatileIR * object = (const cPtr_storeIndirectVolatileIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeIndirectVolatileIR) ;
  GALGAS_string var_llvmType_815 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string (".ptr = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (var_llvmType_815, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string ("* ; cast to i32*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (GALGAS_string ("  store volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)).add_operation (var_llvmType_815, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)).add_operation (var_llvmType_815, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 27)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string (".ptr ; indirect access "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-indirect-volatile-register.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeIndirectVolatileIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeIndirectVolatileIR.mSlotID,
                                            extensionMethod_storeIndirectVolatileIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeIndirectVolatileIR_llvmInstructionCode (defineExtensionMethod_storeIndirectVolatileIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@storeIndirectVolatileIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeIndirectVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeIndirectVolatileIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeIndirectVolatileIR.mSlotID,
                                                extensionMethod_storeIndirectVolatileIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeIndirectVolatileIR_enterAccessibleEntities (defineExtensionMethod_storeIndirectVolatileIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_780 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store volatile ").add_operation (var_llvmType_780, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (var_llvmType_780, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (GALGAS_string (" * inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (object->mProperty_mAddress.getter_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (var_llvmType_780, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (object->mProperty_mAddress.getter_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)) ;
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

static void extensionMethod_storeVolatileIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                     GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
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
//                       Overriding extension method '@storeLocalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeLocalVariableIR * object = (const cPtr_storeLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeLocalVariableIR) ;
  GALGAS_string var_llvmType_807 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_807, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (var_llvmType_807, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeLocalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                            extensionMethod_storeLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_llvmInstructionCode (defineExtensionMethod_storeLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@storeLocalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeLocalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeLocalVariableIR.mSlotID,
                                                extensionMethod_storeLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeLocalVariableIR_enterAccessibleEntities (defineExtensionMethod_storeLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@storeFromTemporaryReferenceIR llvmInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                               GALGAS_string & ioArgument_ioLLVMcode,
                                                                               const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                               GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeFromTemporaryReferenceIR * object = (const cPtr_storeFromTemporaryReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeFromTemporaryReferenceIR) ;
  GALGAS_string var_llvmType_948 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_948, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (var_llvmType_948, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-temporary-reference.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR.mSlotID,
                                            extensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeFromTemporaryReferenceIR_llvmInstructionCode (defineExtensionMethod_storeFromTemporaryReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@storeFromTemporaryReferenceIR enterAccessibleEntities'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeFromTemporaryReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                   GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                   GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeFromTemporaryReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR.mSlotID,
                                                extensionMethod_storeFromTemporaryReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeFromTemporaryReferenceIR_enterAccessibleEntities (defineExtensionMethod_storeFromTemporaryReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@staticRoutineCallIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticRoutineCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticRoutineCallIR * object = (const cPtr_staticRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticRoutineCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 19)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_null (SOURCE_FILE ("intermediate-static-routine-call.galgas", 20)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 21)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 23)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 25)) ;
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_calleeKindIR::kNotBuilt:
    break ;
  case GALGAS_calleeKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 28)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_serviceFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 30)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_serviceFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 32)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_sectionFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 34)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_sectionFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 36)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_primitiveFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 38)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_primitiveFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 40)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 42)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 44)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_2007 (object->mProperty_mArgumentList, kENUMERATION_UP) ;
  while (enumerator_2007.hasCurrentObject ()) {
    switch (enumerator_2007.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)).add_operation (extensionGetter_llvmName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)).add_operation (extensionGetter_llvmName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 52)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)).add_operation (extensionGetter_llvmName (enumerator_2007.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 54)) ;
      }
      break ;
    }
    if (enumerator_2007.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 57)) ;
    }
    enumerator_2007.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticRoutineCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_staticRoutineCallIR.mSlotID,
                                            extensionMethod_staticRoutineCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticRoutineCallIR_llvmInstructionCode (defineExtensionMethod_staticRoutineCallIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@staticRoutineCallIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_staticRoutineCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_staticRoutineCallIR * object = (const cPtr_staticRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_staticRoutineCallIR) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mGlobalVariableName  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 69)) ;
  }
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (object->mProperty_mFunctionMangledName.getter_string (HERE)  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_staticRoutineCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_staticRoutineCallIR.mSlotID,
                                                extensionMethod_staticRoutineCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_staticRoutineCallIR_enterAccessibleEntities (defineExtensionMethod_staticRoutineCallIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@indirectRoutineCallIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_indirectRoutineCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_indirectRoutineCallIR * object = (const cPtr_indirectRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_indirectRoutineCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 18)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mProperty_mFunctionPointer, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 19)).add_operation (GALGAS_string (".func = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 19)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mFunctionType, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 19)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 20)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mFunctionType, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 21)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 20)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 21)).add_operation (extensionGetter_llvmName (object->mProperty_mFunctionPointer, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 21)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 19)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 24)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_null (SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 25)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 26)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 28)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 28)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmName (object->mProperty_mFunctionPointer, inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 30)).add_operation (GALGAS_string (".func ("), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 30)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_1155 (object->mProperty_mArgumentList, kENUMERATION_UP) ;
  while (enumerator_1155.hasCurrentObject ()) {
    switch (enumerator_1155.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1155.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 34)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 34)).add_operation (extensionGetter_llvmName (enumerator_1155.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 34)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1155.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 36)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 36)).add_operation (extensionGetter_llvmName (enumerator_1155.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 36)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1155.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 38)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 38)).add_operation (extensionGetter_llvmName (enumerator_1155.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 38)) ;
      }
      break ;
    }
    if (enumerator_1155.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 41)) ;
    }
    enumerator_1155.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_indirectRoutineCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_indirectRoutineCallIR.mSlotID,
                                            extensionMethod_indirectRoutineCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_indirectRoutineCallIR_llvmInstructionCode (defineExtensionMethod_indirectRoutineCallIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@indirectRoutineCallIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_indirectRoutineCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                           GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_indirectRoutineCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_indirectRoutineCallIR.mSlotID,
                                                extensionMethod_indirectRoutineCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_indirectRoutineCallIR_enterAccessibleEntities (defineExtensionMethod_indirectRoutineCallIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@copyFromReferencesIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_copyFromReferencesIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_copyFromReferencesIR * object = (const cPtr_copyFromReferencesIR *) inObject ;
  macroValidSharedObject (object, cPtr_copyFromReferencesIR) ;
  GALGAS_string var_llvmType_2484 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 61)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @plm.assign.").add_operation (extensionGetter_key (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)).getter_identifierRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)).add_operation (var_llvmType_2484, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (object->mProperty_mTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (var_llvmType_2484, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (object->mProperty_mSourceLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_copyFromReferencesIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_copyFromReferencesIR.mSlotID,
                                            extensionMethod_copyFromReferencesIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_copyFromReferencesIR_llvmInstructionCode (defineExtensionMethod_copyFromReferencesIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@copyFromReferencesIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_copyFromReferencesIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                          GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_copyFromReferencesIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_copyFromReferencesIR.mSlotID,
                                                extensionMethod_copyFromReferencesIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_copyFromReferencesIR_enterAccessibleEntities (defineExtensionMethod_copyFromReferencesIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@getUniversalPropertyReferenceIR llvmInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                 GALGAS_string & ioArgument_ioLLVMcode,
                                                                                 const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                 GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getUniversalPropertyReferenceIR * object = (const cPtr_getUniversalPropertyReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getUniversalPropertyReferenceIR) ;
  GALGAS_string var_llvmType_1028 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mElementLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_1028.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)).add_operation (var_llvmType_1028, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)).add_operation (object->mProperty_mPropertyIndex.getter_string (SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR.mSlotID,
                                            extensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getUniversalPropertyReferenceIR_llvmInstructionCode (defineExtensionMethod_getUniversalPropertyReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@getUniversalPropertyReferenceIR enterAccessibleEntities'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getUniversalPropertyReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                     GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                     GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getUniversalPropertyReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR.mSlotID,
                                                extensionMethod_getUniversalPropertyReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getUniversalPropertyReferenceIR_enterAccessibleEntities (defineExtensionMethod_getUniversalPropertyReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@getUniversalArrayElementReferenceIR llvmInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getUniversalArrayElementReferenceIR * object = (const cPtr_getUniversalArrayElementReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getUniversalArrayElementReferenceIR) ;
  GALGAS_string var_llvmType_964 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mElementLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 30)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_964.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (var_llvmType_964, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR.mSlotID,
                                            extensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode (defineExtensionMethod_getUniversalArrayElementReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@getUniversalArrayElementReferenceIR enterAccessibleEntities'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getUniversalArrayElementReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getUniversalArrayElementReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR.mSlotID,
                                                extensionMethod_getUniversalArrayElementReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getUniversalArrayElementReferenceIR_enterAccessibleEntities (defineExtensionMethod_getUniversalArrayElementReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@getArrayElementReferenceIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getArrayElementReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                            GALGAS_string & ioArgument_ioLLVMcode,
                                                                            const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                            GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getArrayElementReferenceIR * object = (const cPtr_getArrayElementReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getArrayElementReferenceIR) ;
  GALGAS_string var_llvmType_797 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_797.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (var_llvmType_797, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (object->mProperty_mElementIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; Element of index ").add_operation (object->mProperty_mElementIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getArrayElementReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getArrayElementReferenceIR.mSlotID,
                                            extensionMethod_getArrayElementReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getArrayElementReferenceIR_llvmInstructionCode (defineExtensionMethod_getArrayElementReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@getArrayElementReferenceIR enterAccessibleEntities'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getArrayElementReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getArrayElementReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getArrayElementReferenceIR.mSlotID,
                                                extensionMethod_getArrayElementReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getArrayElementReferenceIR_enterAccessibleEntities (defineExtensionMethod_getArrayElementReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@selectInstructionIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionIR * object = (const cPtr_selectInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)).add_operation (GALGAS_string (" = select "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_m_5F_if_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_if_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (extensionGetter_llvmName (object->mProperty_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_selectInstructionIR.mSlotID,
                                            extensionMethod_selectInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionIR_llvmInstructionCode (defineExtensionMethod_selectInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@selectInstructionIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_selectInstructionIR.mSlotID,
                                                extensionMethod_selectInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionIR_enterAccessibleEntities (defineExtensionMethod_selectInstructionIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@testArrayIndexIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testArrayIndexIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testArrayIndexIR * object = (const cPtr_testArrayIndexIR *) inObject ;
  macroValidSharedObject (object, cPtr_testArrayIndexIR) ;
  GALGAS_uint var_staticStringIndex_1069 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mErrorLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)), var_staticStringIndex_1069, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  }
  GALGAS_bigint var_max_1123 ;
  GALGAS_bool var_isUnsigned_1148 ;
  GALGAS_bigint joker_1108_1 ; // Joker input parameter
  GALGAS_uint joker_1150_2 ; // Joker input parameter
  GALGAS_string joker_1150_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).getter_mKind (SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).method_integer (joker_1108_1, var_max_1123, var_isUnsigned_1148, joker_1150_2, joker_1150_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
  const enumGalgasBool test_0 = var_isUnsigned_1148.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 34)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_testToZero_1237 = GALGAS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
    GALGAS_string var_testToZeroOk_1312 = GALGAS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
    GALGAS_string var_testToZeroFailure_1394 = GALGAS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 37)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToZero_1237, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToZero_1237, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroOk_1312, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroFailure_1394, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroFailure_1394.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_1069.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 46)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroOk_1312.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_max_1123.objectCompare (object->mProperty_mSize)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_testToSize_2243 = GALGAS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
    GALGAS_string var_testToSizeOk_2318 = GALGAS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
    GALGAS_string var_testToSizeFailure_2400 = GALGAS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToSize_2243, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)) ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = var_isUnsigned_1148.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("ult") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("slt") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_2, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToSize_2243, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeOk_2318, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeFailure_2400, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeFailure_2400.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_1069.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 64)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeOk_2318.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)) ;
  }
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 69)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testArrayIndexIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                            extensionMethod_testArrayIndexIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testArrayIndexIR_llvmInstructionCode (defineExtensionMethod_testArrayIndexIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@testArrayIndexIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_testArrayIndexIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_testArrayIndexIR.mSlotID,
                                                extensionMethod_testArrayIndexIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testArrayIndexIR_enterAccessibleEntities (defineExtensionMethod_testArrayIndexIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@upperBoundCheckIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_upperBoundCheckIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_upperBoundCheckIR * object = (const cPtr_upperBoundCheckIR *) inObject ;
  macroValidSharedObject (object, cPtr_upperBoundCheckIR) ;
  GALGAS_uint var_staticStringIndex_983 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_lastPathComponent (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)), var_staticStringIndex_983, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 27)) ;
  }
  GALGAS_string var_llvmType_1002 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)) ;
  GALGAS_string var_llvmSourceName_1055 = extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 32)) ;
  GALGAS_string var_llvmLabelName_1096 = extensionGetter_name (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (".isOk = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmType_1002, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (object->mProperty_mUpperBoundPlusOne.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".isOk, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmLabelName_1096.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_983.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 40)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmLabelName_1096.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_upperBoundCheckIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_upperBoundCheckIR.mSlotID,
                                            extensionMethod_upperBoundCheckIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_upperBoundCheckIR_llvmInstructionCode (defineExtensionMethod_upperBoundCheckIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@upperBoundCheckIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_upperBoundCheckIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                       GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                       GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_upperBoundCheckIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_upperBoundCheckIR.mSlotID,
                                                extensionMethod_upperBoundCheckIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_upperBoundCheckIR_enterAccessibleEntities (defineExtensionMethod_upperBoundCheckIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@sourceLocationIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sourceLocationIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                  GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sourceLocationIR * object = (const cPtr_sourceLocationIR *) inObject ;
  macroValidSharedObject (object, cPtr_sourceLocationIR) ;
  const enumGalgasBool test_0 = object->mProperty_mSourceLocation.getter_isNowhere (SOURCE_FILE ("intermediate-comment-source-line.galgas", 19)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";---------\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 20)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- ").add_operation (object->mProperty_mSourceLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_string (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (object->mProperty_mSourceLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sourceLocationIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_sourceLocationIR.mSlotID,
                                            extensionMethod_sourceLocationIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sourceLocationIR_llvmInstructionCode (defineExtensionMethod_sourceLocationIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sourceLocationIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sourceLocationIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                      GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                      GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sourceLocationIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_sourceLocationIR.mSlotID,
                                                extensionMethod_sourceLocationIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sourceLocationIR_enterAccessibleEntities (defineExtensionMethod_sourceLocationIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'codeOptimisation'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeOptimisation (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR var_initialProcedureMap_2035 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE) ;
  GALGAS_guardMapIR var_initialGuardMap_2098 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE) ;
  GALGAS_uint var_pass_2150 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_bool var_optimizing_2173 = GALGAS_bool (true) ;
  if (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 42)).add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 42)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 42)).isValid ()) {
    uint32_t variant_2187 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 42)).add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 42)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 42)).uintValue () ;
    bool loop_2187 = true ;
    while (loop_2187) {
      loop_2187 = var_optimizing_2173.isValid () ;
      if (loop_2187) {
        loop_2187 = var_optimizing_2173.boolValue () ;
      }
      if (loop_2187 && (0 == variant_2187)) {
        loop_2187 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 42)) ;
      }
      if (loop_2187) {
        variant_2187 -- ;
        var_optimizing_2173 = GALGAS_bool (false) ;
        var_pass_2150.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 45)) ;
        const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_optimization_5F_displayDeadCodeElimination.getter_value ()).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_string var_s_2450 = GALGAS_string ("Optimisation pass ").add_operation (var_pass_2150.getter_string (SOURCE_FILE ("code-optimisation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 48)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 48)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 49)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)).add_operation (GALGAS_string (" static strings\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGlobalConstantMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 50)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)).add_operation (GALGAS_string (" global constants\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGlobalVariableMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 51)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)).add_operation (GALGAS_string (" global variables\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 52)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 52)).add_operation (GALGAS_string (" routine(s)\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 52)) ;
          cEnumerator_routineMapIR enumerator_2908 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE), kENUMERATION_UP) ;
          while (enumerator_2908.hasCurrentObject ()) {
            var_s_2450.plusAssign_operation(GALGAS_string ("   - ").add_operation (enumerator_2908.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("code-optimisation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 54)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 54)) ;
            enumerator_2908.gotoNextObject () ;
          }
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 56)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)).add_operation (GALGAS_string (" guards\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)) ;
          inCompiler->printMessage (var_s_2450  COMMA_SOURCE_FILE ("code-optimisation.galgas", 57)) ;
        }
        GALGAS_accessibleEntities var_accessibleEntities_3272 ;
        {
        routine_suppressInaccessibleSubprograms (ioArgument_ioIntermediateCodeStruct, var_accessibleEntities_3272, var_optimizing_2173, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 60)) ;
        }
        GALGAS_globalConstantMapIR var_globalConstantMap_3372 = GALGAS_globalConstantMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 66)) ;
        cEnumerator_globalConstantMapIR enumerator_3441 (ioArgument_ioIntermediateCodeStruct.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
        while (enumerator_3441.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_accessibleEntities_3272.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_3441.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 68)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_globalConstantMap_3372.setter_insertKey (enumerator_3441.current (HERE).getter_lkey (HERE), enumerator_3441.current (HERE).getter_mType (HERE), enumerator_3441.current (HERE).getter_mSourceExpression (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 69)) ;
            }
          }else if (kBoolFalse == test_1) {
            var_optimizing_2173 = GALGAS_bool (true) ;
          }
          enumerator_3441.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalConstantMap = var_globalConstantMap_3372 ;
        GALGAS_globalVariableMapIR var_globalVariableMap_3832 = GALGAS_globalVariableMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 76)) ;
        cEnumerator_globalVariableMapIR enumerator_3907 (ioArgument_ioIntermediateCodeStruct.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
        while (enumerator_3907.hasCurrentObject ()) {
          const enumGalgasBool test_2 = var_accessibleEntities_3272.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_3907.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 78)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_globalVariableMap_3832.setter_insertKey (enumerator_3907.current (HERE).getter_lkey (HERE), enumerator_3907.current (HERE).getter_mType (HERE), enumerator_3907.current (HERE).getter_mGenerateVolatile (HERE), enumerator_3907.current (HERE).getter_mInitialValue (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 79)) ;
            }
          }else if (kBoolFalse == test_2) {
            var_optimizing_2173 = GALGAS_bool (true) ;
          }
          enumerator_3907.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalVariableMap = var_globalVariableMap_3832 ;
      }
    }
  }
  cEnumerator_routineMapIR enumerator_4385 (var_initialProcedureMap_2035, kENUMERATION_UP) ;
  while (enumerator_4385.hasCurrentObject ()) {
    GALGAS_bool test_3 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_hasKey (enumerator_4385.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 93)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 93)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = enumerator_4385.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_4 = test_3.boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticWarning (enumerator_4385.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 94)), GALGAS_string ("unused procedure; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)), fixItArray5  COMMA_SOURCE_FILE ("code-optimisation.galgas", 94)) ;
    }
    enumerator_4385.gotoNextObject () ;
  }
  cEnumerator_guardMapIR enumerator_4669 (var_initialGuardMap_2098, kENUMERATION_UP) ;
  while (enumerator_4669.hasCurrentObject ()) {
    GALGAS_bool test_6 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_hasKey (enumerator_4669.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 99)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 99)) ;
    if (kBoolTrue == test_6.boolEnum ()) {
      test_6 = enumerator_4669.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticWarning (enumerator_4669.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 100)), GALGAS_string ("unused guard; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)), fixItArray8  COMMA_SOURCE_FILE ("code-optimisation.galgas", 100)) ;
    }
    enumerator_4669.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'suppressInaccessibleSubprograms'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_suppressInaccessibleSubprograms (GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                              GALGAS_accessibleEntities & outArgument_outAccessibleEntities,
                                              GALGAS_bool & ioArgument_ioOptimizing,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAccessibleEntities.drop () ; // Release 'out' argument
  outArgument_outAccessibleEntities = GALGAS_accessibleEntities::constructor_default (SOURCE_FILE ("code-optimisation.galgas", 112)) ;
  GALGAS_routineMapIR var_accessibleProcedureMap_5277 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 113)) ;
  GALGAS_routineMapIR var_nonExploredProcedureMap_5322 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 114)) ;
  GALGAS_guardMapIR var_accessibleGuardMap_5360 = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 115)) ;
  GALGAS_guardMapIR var_nonExploredGuardMap_5399 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE) ;
  cEnumerator_routineMapIR enumerator_5528 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_5528.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_5528.current (HERE).getter_mIsRequired (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_accessibleProcedureMap_5277.setter_insertKey (enumerator_5528.current (HERE).getter_lkey (HERE), enumerator_5528.current (HERE).getter_mReceiverType (HERE), enumerator_5528.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_5528.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_5528.current (HERE).getter_mAllocaList (HERE), enumerator_5528.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_5528.current (HERE).getter_mIsRequired (HERE), enumerator_5528.current (HERE).getter_mWarnIfUnused (HERE), enumerator_5528.current (HERE).getter_mGlobal (HERE), enumerator_5528.current (HERE).getter_mKind (HERE), enumerator_5528.current (HERE).getter_mReturnType (HERE), enumerator_5528.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 120)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_5528.current (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 134)) ;
      outArgument_outAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (enumerator_5528.current (HERE).getter_mRoutineNameForGeneration (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("code-optimisation.galgas", 135)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_nonExploredProcedureMap_5322.setter_insertKey (enumerator_5528.current (HERE).getter_lkey (HERE), enumerator_5528.current (HERE).getter_mReceiverType (HERE), enumerator_5528.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_5528.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_5528.current (HERE).getter_mAllocaList (HERE), enumerator_5528.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_5528.current (HERE).getter_mIsRequired (HERE), enumerator_5528.current (HERE).getter_mWarnIfUnused (HERE), enumerator_5528.current (HERE).getter_mGlobal (HERE), enumerator_5528.current (HERE).getter_mKind (HERE), enumerator_5528.current (HERE).getter_mReturnType (HERE), enumerator_5528.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 137)) ;
      }
    }
    enumerator_5528.gotoNextObject () ;
  }
  cEnumerator_bootListIR enumerator_6874 (ioArgument_ioIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_6874.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_6874.current (HERE).getter_mInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 155)) ;
    enumerator_6874.gotoNextObject () ;
  }
  cEnumerator_initListIR enumerator_7081 (ioArgument_ioIntermediateCodeStruct.getter_mInitList (HERE), kENUMERATION_UP) ;
  while (enumerator_7081.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7081.current (HERE).getter_mInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 161)) ;
    enumerator_7081.gotoNextObject () ;
  }
  cEnumerator_taskMapIR enumerator_7317 (ioArgument_ioIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_7317.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_7317.current (HERE).getter_mInitInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 168)) ;
    outArgument_outAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (GALGAS_string ("$").add_operation (enumerator_7317.current (HERE).getter_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 172))  COMMA_SOURCE_FILE ("code-optimisation.galgas", 172)) ;
    enumerator_7317.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-optimisation.galgas", 175)).boolEnum () ;
  if (kBoolTrue == test_1) {
    extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mPanicSetupInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 176)) ;
    extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mPanicLoopInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 180)) ;
  }
  extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mInterruptMapIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 186)) ;
  GALGAS_bool var_continues_8272 = GALGAS_bool (true) ;
  GALGAS_uint var_bound_8291 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 192)).add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 192)) ;
  if (var_bound_8291.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 193)).isValid ()) {
    uint32_t variant_8394 = var_bound_8291.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 193)).uintValue () ;
    bool loop_8394 = true ;
    while (loop_8394) {
      loop_8394 = var_continues_8272.isValid () ;
      if (loop_8394) {
        loop_8394 = var_continues_8272.boolValue () ;
      }
      if (loop_8394 && (0 == variant_8394)) {
        loop_8394 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 193)) ;
      }
      if (loop_8394) {
        variant_8394 -- ;
        var_continues_8272 = GALGAS_bool (false) ;
        {
        routine_exploreProcs (var_accessibleProcedureMap_5277, outArgument_outAccessibleEntities, var_nonExploredProcedureMap_5322, var_continues_8272, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 195)) ;
        }
        {
        routine_exploreGuards (var_accessibleGuardMap_5360, outArgument_outAccessibleEntities, var_nonExploredGuardMap_5399, var_continues_8272, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 202)) ;
        }
      }
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).objectCompare (var_accessibleProcedureMap_5277)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR = var_accessibleProcedureMap_5277 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).objectCompare (var_accessibleGuardMap_5360)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR = var_accessibleGuardMap_5360 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  GALGAS_staticListInvokedFunctionSetMap var_currentStaticArrayMap_9249 = GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 219)) ;
  cEnumerator_staticListInvokedFunctionSetMap enumerator_9343 (ioArgument_ioIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE), kENUMERATION_UP) ;
  while (enumerator_9343.hasCurrentObject ()) {
    const enumGalgasBool test_4 = outArgument_outAccessibleEntities.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_9343.current_lkey (HERE).getter_string (SOURCE_FILE ("code-optimisation.galgas", 221)) COMMA_SOURCE_FILE ("code-optimisation.galgas", 221)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      var_currentStaticArrayMap_9249.setter_insertKey (enumerator_9343.current_lkey (HERE), enumerator_9343.current_mInvokedFunctionSet (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 222)) ;
      }
    }
    enumerator_9343.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_currentStaticArrayMap_9249.objectCompare (ioArgument_ioIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate = var_currentStaticArrayMap_9249 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreProcs'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreProcs (GALGAS_routineMapIR & ioArgument_ioAccessibleProcedureMap,
                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                           GALGAS_routineMapIR & ioArgument_ioNonExploredProcedureMap,
                           GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                           GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                           C_Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR var_exNonExploredProcedureMap_10114 = ioArgument_ioNonExploredProcedureMap ;
  ioArgument_ioNonExploredProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 241)) ;
  cEnumerator_routineMapIR enumerator_10220 (var_exNonExploredProcedureMap_10114, kENUMERATION_UP) ;
  while (enumerator_10220.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.getter_mRoutineSet (HERE).getter_hasKey (enumerator_10220.current (HERE).getter_mRoutineNameForGeneration (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleProcedureMap.setter_insertKey (enumerator_10220.current (HERE).getter_lkey (HERE), enumerator_10220.current (HERE).getter_mReceiverType (HERE), enumerator_10220.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10220.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_10220.current (HERE).getter_mAllocaList (HERE), enumerator_10220.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_10220.current (HERE).getter_mIsRequired (HERE), enumerator_10220.current (HERE).getter_mWarnIfUnused (HERE), enumerator_10220.current (HERE).getter_mGlobal (HERE), enumerator_10220.current (HERE).getter_mKind (HERE), enumerator_10220.current (HERE).getter_mReturnType (HERE), enumerator_10220.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 244)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_10220.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 258)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredProcedureMap.setter_insertKey (enumerator_10220.current (HERE).getter_lkey (HERE), enumerator_10220.current (HERE).getter_mReceiverType (HERE), enumerator_10220.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_10220.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_10220.current (HERE).getter_mAllocaList (HERE), enumerator_10220.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_10220.current (HERE).getter_mIsRequired (HERE), enumerator_10220.current (HERE).getter_mWarnIfUnused (HERE), enumerator_10220.current (HERE).getter_mGlobal (HERE), enumerator_10220.current (HERE).getter_mKind (HERE), enumerator_10220.current (HERE).getter_mReturnType (HERE), enumerator_10220.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 261)) ;
      }
    }
    enumerator_10220.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'exploreGuards'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_exploreGuards (GALGAS_guardMapIR & ioArgument_ioAccessibleGuardMap,
                            GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                            GALGAS_guardMapIR & ioArgument_ioNonExploredGuardMap,
                            GALGAS_bool & ioArgument_ioContinueExploreRoutines,
                            GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapIR var_exNonExploredGuardMap_11864 = ioArgument_ioNonExploredGuardMap ;
  ioArgument_ioNonExploredGuardMap = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 289)) ;
  cEnumerator_guardMapIR enumerator_11954 (var_exNonExploredGuardMap_11864, kENUMERATION_UP) ;
  while (enumerator_11954.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.getter_mGuardSet (HERE).getter_hasKey (enumerator_11954.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 291)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleGuardMap.setter_insertKey (enumerator_11954.current (HERE).getter_lkey (HERE), enumerator_11954.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_11954.current (HERE).getter_mReceiverType (HERE), enumerator_11954.current (HERE).getter_mGuardKindGenerationIR (HERE), enumerator_11954.current (HERE).getter_mAllocaList (HERE), enumerator_11954.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_11954.current (HERE).getter_mWarnIfUnused (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 292)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_11954.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 301)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredGuardMap.setter_insertKey (enumerator_11954.current (HERE).getter_lkey (HERE), enumerator_11954.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_11954.current (HERE).getter_mReceiverType (HERE), enumerator_11954.current (HERE).getter_mGuardKindGenerationIR (HERE), enumerator_11954.current (HERE).getter_mAllocaList (HERE), enumerator_11954.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_11954.current (HERE).getter_mWarnIfUnused (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 304)) ;
      }
    }
    enumerator_11954.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'llvmSeparatorLine'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmSeparatorLine (C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (";-------------------------------------------------------------------------") ;
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 61)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_llvmSeparatorLine ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmSeparatorLine) {
    gOnceFunctionResult_llvmSeparatorLine = onceFunction_llvmSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmSeparatorLine = true ;
  }
  return gOnceFunctionResult_llvmSeparatorLine ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmSeparatorLine (void) {
  gOnceFunctionResult_llvmSeparatorLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmSeparatorLine (NULL,
                                                               releaseOnceFunctionResult_llvmSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmSeparatorLine [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmSeparatorLine (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_llvmSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmSeparatorLine ("llvmSeparatorLine",
                                                                   functionWithGenericHeader_llvmSeparatorLine,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_llvmSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'llvmTitleComment'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmTitleComment (const GALGAS_string & constinArgument_inTitle,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 67)) ;
  result_outTitle.plusAssign_operation(GALGAS_string (";    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 68)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 68)) ;
  result_outTitle.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 69)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 69)) ;
//---
  return result_outTitle ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmTitleComment (C_Compiler * inCompiler,
                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmTitleComment (operand0,
                                    inCompiler
                                    COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmTitleComment ("llvmTitleComment",
                                                                  functionWithGenericHeader_llvmTitleComment,
                                                                  & kTypeDescriptor_GALGAS_string,
                                                                  1,
                                                                  functionArgs_llvmTitleComment) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Once function 'asSeparatorLine'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_asSeparatorLine (C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@-------------------------------------------------------------------------") ;
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 76)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_asSeparatorLine = false ;
static GALGAS_string gOnceFunctionResult_asSeparatorLine ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_asSeparatorLine (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_asSeparatorLine) {
    gOnceFunctionResult_asSeparatorLine = onceFunction_asSeparatorLine (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_asSeparatorLine = true ;
  }
  return gOnceFunctionResult_asSeparatorLine ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_asSeparatorLine (void) {
  gOnceFunctionResult_asSeparatorLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_asSeparatorLine (NULL,
                                                             releaseOnceFunctionResult_asSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_asSeparatorLine [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_asSeparatorLine (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_asSeparatorLine (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_asSeparatorLine ("asSeparatorLine",
                                                                 functionWithGenericHeader_asSeparatorLine,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_asSeparatorLine) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Function 'asTitleComment'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_asTitleComment (const GALGAS_string & constinArgument_inTitle,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTitle ; // Returned variable
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 82)) ;
  result_outTitle.plusAssign_operation(GALGAS_string ("@    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 83)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 83)) ;
  result_outTitle.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 84)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 84)) ;
//---
  return result_outTitle ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_asTitleComment [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_asTitleComment (C_Compiler * inCompiler,
                                                               const cObjectArray & inEffectiveParameterArray,
                                                               const GALGAS_location & /* inErrorLocation */
                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_asTitleComment (operand0,
                                  inCompiler
                                  COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_asTitleComment ("asTitleComment",
                                                                functionWithGenericHeader_asTitleComment,
                                                                & kTypeDescriptor_GALGAS_string,
                                                                1,
                                                                functionArgs_asTitleComment) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              Routine 'codeGeneration'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_codeGeneration (const GALGAS_string constinArgument_inCurrentDirectory,
                             const GALGAS_string constinArgument_inSourceFileName,
                             const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                             const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                             const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                             const GALGAS_lstring constinArgument_inTargetName,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicCodeType,
                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicLineType,
                             const GALGAS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                             const GALGAS_staticListInitializationMap constinArgument_inStaticListValueMap,
                             const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                             const GALGAS_targetParameters constinArgument_inTargetParameters,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_homeDir_4833 = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 103)).add_operation (GALGAS_string ("/plm-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 103)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("no-panic") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_productDirectory_4948 = var_homeDir_4833.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 105)).add_operation (constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 107)).getter_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 106)) ;
  GALGAS_string var_sourceDirectory_5161 = var_productDirectory_4948.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 108)) ;
  var_sourceDirectory_5161.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 109)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory_4948, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 111)) ;
  }
  {
  routine_generateCodeFiles (constinArgument_inCurrentDirectory, var_productDirectory_4948, constinArgument_inEndOfSourceFileLocation, constinArgument_inIntermediateCodeStruct, constinArgument_inTypeMap, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inStaticListValueMap, constinArgument_inSourceFileAbsolutePathSet, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 118)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateCodeFiles'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCodeFiles (const GALGAS_string constinArgument_inCurrentDirectory,
                                const GALGAS_string constinArgument_inProductDirectory,
                                const GALGAS_location constinArgument_inEndOfSourceFileLocation,
                                const GALGAS_intermediateCodeStruct constinArgument_inIntermediateCodeStruct,
                                const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                const GALGAS_lstring constinArgument_inTargetName,
                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicCodeType,
                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inPanicLineType,
                                const GALGAS_availableInterruptMap constinArgument_inAvailableInterruptMap,
                                const GALGAS_staticListInitializationMap constinArgument_inStaticListValueMap,
                                const GALGAS_stringset constinArgument_inSourceFileAbsolutePathSet,
                                const GALGAS_targetParameters constinArgument_inTargetParameters,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds var_generationAdds_7151 = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 160)) ;
  var_generationAdds_7151.mProperty_mStaticStringMap = constinArgument_inIntermediateCodeStruct.getter_mStaticStringMap (HERE) ;
  GALGAS_generationContext var_generationContext_7283 = GALGAS_generationContext::constructor_new (extensionGetter_llvmTypeName (constinArgument_inPanicCodeType.getter_type (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 163)), extensionGetter_llvmTypeName (constinArgument_inPanicLineType.getter_type (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 164)), constinArgument_inTargetParameters.getter_mNopInstructionStringInLLVM (HERE).getter_string (HERE), constinArgument_inIntermediateCodeStruct.getter_mGlobalTaskVariableList (HERE), constinArgument_inAvailableInterruptMap  COMMA_SOURCE_FILE ("code-generation.galgas", 162)) ;
  GALGAS_string var_sourceDirectory_7546 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 169)) ;
  GALGAS_string var_asCode_7668 = function_asTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 171)) ;
  GALGAS_string var_asFileContents_7732 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_7800 (constinArgument_inTargetParameters.getter_m_5F_S_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_7800.hasCurrentObject ()) {
    var_asFileContents_7732.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 176)).add_operation (enumerator_7800.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 174)) ;
    enumerator_7800.gotoNextObject () ;
  }
  GALGAS_string var_x_7955 = var_asFileContents_7732.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 179)) ;
  var_asCode_7668.plusAssign_operation(var_x_7955.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionOrSafeInterrupt (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 180)) ;
  var_asCode_7668.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 181)) ;
  GALGAS_string var_llvmCode_8244 = function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 183)) ;
  GALGAS_string var_targetLLVMcode_8310 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_8379 (constinArgument_inTargetParameters.getter_m_5F_LL_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_8379.hasCurrentObject ()) {
    var_targetLLVMcode_8310.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 188)).add_operation (enumerator_8379.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 186)) ;
    enumerator_8379.gotoNextObject () ;
  }
  var_llvmCode_8244.plusAssign_operation(var_targetLLVMcode_8310.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 191)) ;
  var_llvmCode_8244.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 192)) ;
  {
  routine_declareLLVMTypes (constinArgument_inTypeMap, var_llvmCode_8244, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 194)) ;
  }
  extensionMethod_generateLLVMForStaticLists (constinArgument_inStaticListValueMap, constinArgument_inIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE), var_llvmCode_8244, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 196)) ;
  cEnumerator_globalVariableMapIR enumerator_9081 (constinArgument_inIntermediateCodeStruct.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_9081.hasCurrentObject () && bool_0) {
    var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global variables"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 199)) ;
    while (enumerator_9081.hasCurrentObject () && bool_0) {
      extensionMethod_generateLLVM (enumerator_9081.current (HERE), var_llvmCode_8244, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 200)) ;
      enumerator_9081.gotoNextObject () ;
    }
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 201)) ;
  }
  cEnumerator_moduleListIR enumerator_9328 (constinArgument_inIntermediateCodeStruct.getter_mModuleList (HERE), kENUMERATION_UP) ;
  const bool bool_1 = true ;
  if (enumerator_9328.hasCurrentObject () && bool_1) {
    var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Modules"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 205)) ;
    while (enumerator_9328.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVM (enumerator_9328.current (HERE), var_llvmCode_8244, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 206)) ;
      enumerator_9328.gotoNextObject () ;
    }
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 207)) ;
  }
  var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Boot routines"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 210)) ;
  var_llvmCode_8244.plusAssign_operation(GALGAS_string ("define internal void @boot ()").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 211)) ;
  cEnumerator_bootListIR enumerator_9682 (constinArgument_inIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_9682.hasCurrentObject ()) {
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  call void @boot.").add_operation (enumerator_9682.current (HERE).getter_mBootIndex (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 213)) ;
    enumerator_9682.gotoNextObject () ;
  }
  var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 215)) ;
  var_llvmCode_8244.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
  cEnumerator_bootListIR enumerator_9856 (constinArgument_inIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_9856.hasCurrentObject ()) {
    var_llvmCode_8244.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 218)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 218)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("define internal void @boot.").add_operation (enumerator_9856.current (HERE).getter_mBootIndex (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219)).add_operation (GALGAS_string ("{\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 219)) ;
    cEnumerator_allocaList enumerator_10062 (enumerator_9856.current (HERE).getter_mAllocaList (HERE), kENUMERATION_UP) ;
    while (enumerator_10062.hasCurrentObject ()) {
      var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_10062.current_mVarLLVMName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 221)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 221)).add_operation (enumerator_10062.current_mLLVMTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 221)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 221)) ;
      enumerator_10062.gotoNextObject () ;
    }
    extensionMethod_instructionListLLVMCode (enumerator_9856.current (HERE).getter_mInstructionListIR (HERE), var_llvmCode_8244, var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 223)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  ret void\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 224)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 225)) ;
    enumerator_9856.gotoNextObject () ;
  }
  cEnumerator_generationListIR enumerator_10441 (constinArgument_inIntermediateCodeStruct.getter_mGenerationListIR (HERE), kENUMERATION_UP) ;
  while (enumerator_10441.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMcode ((const cPtr_abstractGenerationIR *) enumerator_10441.current_mGeneration (HERE).ptr (), var_llvmCode_8244, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 229)) ;
    enumerator_10441.gotoNextObject () ;
  }
  extensionMethod_generateLLVMinitCode (constinArgument_inIntermediateCodeStruct.getter_mInitList (HERE), var_llvmCode_8244, constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 232)) ;
  extensionMethod_llvmCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_llvmCode_8244, var_asCode_7668, var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 239)) ;
  GALGAS_string var_undefinedInterruptString_10981 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 243)).add_operation (constinArgument_inTargetParameters.getter_mUndefinedInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 241)) ;
  GALGAS_string var_XTRInterruptHandlerString_11158 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 247)).add_operation (constinArgument_inTargetParameters.getter_mXtrInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 245)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), var_llvmCode_8244, var_asCode_7668, var_undefinedInterruptString_10981, var_XTRInterruptHandlerString_11158, var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 249)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.getter_mExternProcedureMapIR (HERE), var_llvmCode_8244, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 258)) ;
  GALGAS__32_stringlist var_primitiveAndServiceList_11688 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 259)) ;
  const enumGalgasBool test_2 = var_generationAdds_7151.getter_mUsesGuards (HERE).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_string var_waitForGuardChange_11813 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 262)) ;
    var_primitiveAndServiceList_11688.addAssign_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11813, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 264)), function_llvmNameForServiceImplementation (var_waitForGuardChange_11813, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 265))  COMMA_SOURCE_FILE ("code-generation.galgas", 263)) ;
    var_generationAdds_7151.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_11813, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 266)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 266))  COMMA_SOURCE_FILE ("code-generation.galgas", 266)) ;
  }
  GALGAS_sectionIRlist var_sectionIRlist_12201 = GALGAS_sectionIRlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 269)) ;
  extensionMethod_svcCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_llvmCode_8244, var_primitiveAndServiceList_11688, var_sectionIRlist_12201, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 270)) ;
  extensionMethod_guardCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mGuardMapIR (HERE), var_llvmCode_8244, var_primitiveAndServiceList_11688, var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 276)) ;
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), var_llvmCode_8244, var_generationContext_7283, var_generationAdds_7151, var_primitiveAndServiceList_11688, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 283)) ;
  {
  routine_generatePrimitiveAndServiceDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), var_asCode_7668, var_primitiveAndServiceList_11688, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 290)) ;
  }
  {
  routine_generateSectionAndSafeDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), constinArgument_inTargetParameters, var_asCode_7668, var_llvmCode_8244, var_sectionIRlist_12201, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 298)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 307)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_s_13347 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 310)).add_operation (constinArgument_inTargetParameters.getter_mTargetPanic_5F_LL_5F_filePath (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)) ;
    GALGAS_string var_s_31__13509 = var_s_13347.getter_stringByReplacingStringByString (GALGAS_string ("!PANICCODE!"), var_generationContext_7283.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 312)) ;
    GALGAS_string var_s_32__13611 = var_s_31__13509.getter_stringByReplacingStringByString (GALGAS_string ("!PANICLINE!"), var_generationContext_7283.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 313)) ;
    var_llvmCode_8244.plusAssign_operation(var_s_32__13611, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 314)) ;
    var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Raise Panic internal"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 315)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("define internal void @raise.panic.internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 316)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 317)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 318)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("i8* %in.FILE)").add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 319)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 321)).add_operation (GALGAS_string (" = alloca "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 321)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 322)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext_7283.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 323)).add_operation (GALGAS_string (" %in.LINE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 323)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 324)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("LINE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 324)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 324)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 326)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string (" = alloca ").add_operation (var_generationContext_7283.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 327)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_generationContext_7283.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (function_llvmNameForLocalVariable (GALGAS_string ("CODE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 329)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  ").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)).add_operation (GALGAS_string (" = alloca i8*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 331)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  store i8* %in.FILE, i8** ").add_operation (function_llvmNameForLocalVariable (GALGAS_string ("FILE"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 332)) ;
    extensionMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.getter_mPanicSetupInstructionListIR (HERE), var_llvmCode_8244, var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 333)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 338)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("panic.loop:\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 339)) ;
    extensionMethod_instructionListLLVMCode (constinArgument_inIntermediateCodeStruct.getter_mPanicLoopInstructionListIR (HERE), var_llvmCode_8244, var_generationContext_7283, var_generationAdds_7151, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 340)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  br label %panic.loop\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 346)) ;
    GALGAS_uint var_emptyStringIndex_15516 ;
    {
    extensionSetter_findOrAddStaticString (var_generationAdds_7151.mProperty_mStaticStringMap, GALGAS_string::makeEmptyString (), var_emptyStringIndex_15516, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 348)) ;
    }
    var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Panic for ISR"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 349)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("define internal void @panic.isr (").add_operation (var_generationContext_7283.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)).add_operation (GALGAS_string (" %in.CODE) "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 350)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_emptyStringIndex_15516, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 351)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  call void @raise.panic.internal ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 352)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" 0, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 353)) ;
    var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %in.CODE, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 354)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("i8* %str.FILE"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 355)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string (" )\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 356)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 357)) ;
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("}\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 358)) ;
    cEnumerator_stringset enumerator_16209 (constinArgument_inSourceFileAbsolutePathSet, kENUMERATION_UP) ;
    while (enumerator_16209.hasCurrentObject ()) {
      GALGAS_uint var_staticStringIndex_16376 ;
      {
      extensionSetter_findOrAddStaticString (var_generationAdds_7151.mProperty_mStaticStringMap, enumerator_16209.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 362)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 362)), var_staticStringIndex_16376, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)) ;
      }
      GALGAS_string var_routineName_16406 = GALGAS_string ("@raise.panic.").add_operation (var_staticStringIndex_16376.getter_string (SOURCE_FILE ("code-generation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 365)) ;
      var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (var_routineName_16406.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)).add_operation (enumerator_16209.current_key (HERE).getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 366)) ;
      var_llvmCode_8244.plusAssign_operation(GALGAS_string ("define internal void ").add_operation (var_routineName_16406, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 367)) ;
      var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 368)) ;
      var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %inCode)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)).add_operation (function_llvmAttributeFunction (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)).add_operation (GALGAS_string ("noreturn {\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 369)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 369)) ;
      var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  %str.FILE = load i8*, i8** ").add_operation (function_literalStringName (var_staticStringIndex_16376, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 370)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 370)) ;
      var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  call void @raise.panic ("), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 371)) ;
      var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" %inSourceLine, "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 372)) ;
      var_llvmCode_8244.plusAssign_operation(var_generationContext_7283.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" %inCode, i8* %str.FILE)\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 373)) ;
      var_llvmCode_8244.plusAssign_operation(GALGAS_string ("  unreachable\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 374)) ;
      var_llvmCode_8244.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 375)) ;
      enumerator_16209.gotoNextObject () ;
    }
  }
  GALGAS_lstringlist var_keyList_17244 = constinArgument_inTypeMap.getter_allKeyList (SOURCE_FILE ("code-generation.galgas", 379)) ;
  var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("PLM Copy Functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 380)) ;
  var_llvmCode_8244.plusAssign_operation(GALGAS_string ("declare void @copy.byte.array (i8* %dest, i8* %src, i32 %byteCount)\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 381)) ;
  var_llvmCode_8244.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 382)) ;
  var_llvmCode_8244.plusAssign_operation(GALGAS_string ("declare void @copy.word.array (i32* %dest, i32* %src, i32 %byteCount)\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 383)) ;
  cEnumerator_lstringlist enumerator_17567 (var_keyList_17244, kENUMERATION_UP) ;
  while (enumerator_17567.hasCurrentObject ()) {
    GALGAS_PLMType var_type_17620 ;
    GALGAS_uint joker_17628 ; // Joker input parameter
    constinArgument_inTypeMap.method_searchKey (enumerator_17567.current_mValue (HERE), var_type_17620, joker_17628, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 385)) ;
    extensionMethod_generateCopyRoutine (var_type_17620, var_llvmCode_8244, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 386)) ;
    enumerator_17567.gotoNextObject () ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_generationAdds_7151.getter_mExternFunctionDeclarationSet (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 389)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 390)) ;
    cEnumerator_stringset enumerator_17919 (var_generationAdds_7151.getter_mExternFunctionDeclarationSet (HERE), kENUMERATION_UP) ;
    while (enumerator_17919.hasCurrentObject ()) {
      var_llvmCode_8244.plusAssign_operation(enumerator_17919.current_key (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 392)) ;
      enumerator_17919.gotoNextObject () ;
    }
    var_llvmCode_8244.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 394)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_generationAdds_7151.getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 397)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    var_llvmCode_8244.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 398)) ;
    cEnumerator_staticStringMap enumerator_18195 (var_generationAdds_7151.getter_mStaticStringMap (HERE), kENUMERATION_UP) ;
    while (enumerator_18195.hasCurrentObject ()) {
      GALGAS_string var_lgStr_18214 = enumerator_18195.current_lkey (HERE).getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("code-generation.galgas", 400)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 400)).getter_string (SOURCE_FILE ("code-generation.galgas", 400)) ;
      var_llvmCode_8244.plusAssign_operation(function_literalCharacterArrayName (enumerator_18195.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 401)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 401)) ;
      var_llvmCode_8244.plusAssign_operation(var_lgStr_18214.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 402)).add_operation (enumerator_18195.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 402)).add_operation (GALGAS_string ("\\00\", align 1\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 402)) ;
      var_llvmCode_8244.plusAssign_operation(function_literalStringName (enumerator_18195.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 403)) ;
      var_llvmCode_8244.plusAssign_operation(var_lgStr_18214.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)).add_operation (var_lgStr_18214, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 404)) ;
      var_llvmCode_8244.plusAssign_operation(function_literalCharacterArrayName (enumerator_18195.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 405)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 405)) ;
      enumerator_18195.gotoNextObject () ;
    }
  }
  var_llvmCode_8244.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 409)) ;
  GALGAS_bool joker_18852 ; // Joker input parameter
  var_llvmCode_8244.method_writeToFileWhenDifferentContents (var_sourceDirectory_7546.add_operation (GALGAS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 410)), joker_18852, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 410)) ;
  var_asCode_7668.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 412)) ;
  GALGAS_bool joker_19023 ; // Joker input parameter
  var_asCode_7668.method_writeToFileWhenDifferentContents (var_sourceDirectory_7546.add_operation (GALGAS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 413)), joker_19023, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 413)) ;
  GALGAS_string var_cCode_19094 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_19162 (constinArgument_inTargetParameters.getter_m_5F_C_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_19162.hasCurrentObject ()) {
    var_cCode_19094.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 419)).add_operation (enumerator_19162.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 417)) ;
    enumerator_19162.gotoNextObject () ;
  }
  GALGAS_string var_s_31__19309 = var_cCode_19094.getter_stringByReplacingStringByString (GALGAS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 422)).getter_string (SOURCE_FILE ("code-generation.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 422)) ;
  GALGAS_string var_s_32__19429 = var_s_31__19309.getter_stringByReplacingStringByString (GALGAS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mMaxBranchOfOnInstructions (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 423)) ;
  GALGAS_string var_s_33__19555 = var_s_32__19429.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 424)) ;
  GALGAS_string var_s_34__19640 = var_s_33__19555.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 425)) ;
  GALGAS_string var_s_35__19755 = var_s_34__19640.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 426)) ;
  GALGAS_bool joker_19910 ; // Joker input parameter
  var_s_35__19755.method_writeToFileWhenDifferentContents (var_sourceDirectory_7546.add_operation (GALGAS_string ("/src.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 427)), joker_19910, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 427)) ;
  GALGAS_string var_json_20003 = GALGAS_string ("{\n") ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSystemStackSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 431)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 431)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mStackedUserRegisterOnInterruptByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 432)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 432)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mServicePushedRegisterByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 434)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 434)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"section-stack-needs\" : ").add_operation (extensionGetter_sectionStackByteSize (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSectionImplementation (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)).getter_string (SOURCE_FILE ("code-generation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 435)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 437)) ;
  cEnumerator_taskMapIR enumerator_20675 (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_20675.hasCurrentObject ()) {
    var_json_20003.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (enumerator_20675.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 439)).add_operation (GALGAS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 439)).add_operation (enumerator_20675.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 439)) ;
    if (enumerator_20675.hasNextObject ()) {
      var_json_20003.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 440)) ;
    }
    enumerator_20675.gotoNextObject () ;
  }
  var_json_20003.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 442)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 443)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 445)) ;
  cEnumerator__32_stringlist enumerator_20935 (var_primitiveAndServiceList_11688, kENUMERATION_UP) ;
  const bool bool_6 = true ;
  if (enumerator_20935.hasCurrentObject () && bool_6) {
    while (enumerator_20935.hasCurrentObject () && bool_6) {
      var_json_20003.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_20935.current_mValue_31_ (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 447)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 447)) ;
      enumerator_20935.gotoNextObject () ;
      if (enumerator_20935.hasCurrentObject () && bool_6) {
        var_json_20003.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 448)) ;
      }
    }
    var_json_20003.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 449)) ;
  }
  var_json_20003.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 451)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 453)) ;
  cEnumerator_sectionIRlist enumerator_21164 (var_sectionIRlist_12201, kENUMERATION_UP) ;
  const bool bool_7 = true ;
  if (enumerator_21164.hasCurrentObject () && bool_7) {
    while (enumerator_21164.hasCurrentObject () && bool_7) {
      var_json_20003.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_21164.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 455)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 455)) ;
      enumerator_21164.gotoNextObject () ;
      if (enumerator_21164.hasCurrentObject () && bool_7) {
        var_json_20003.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 456)) ;
      }
    }
    var_json_20003.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 457)) ;
  }
  var_json_20003.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 459)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 461)) ;
  GALGAS_bool var_first_21340 = GALGAS_bool (true) ;
  cEnumerator_interruptMapIR enumerator_21422 (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_21422.hasCurrentObject ()) {
    const enumGalgasBool test_8 = var_first_21340.boolEnum () ;
    if (kBoolTrue == test_8) {
      var_first_21340 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_8) {
      var_json_20003.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 467)) ;
    }
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_21422.current_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("code-generation.galgas", 469)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = function_llvmNameForServiceInterrupt (enumerator_21422.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 470)).getter_string (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = function_llvmNameForSectionOrSafeInterrupt (enumerator_21422.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 472)) ;
    }
    GALGAS_string var_interruptImplementationName_21534 = temp_9 ;
    var_json_20003.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (var_interruptImplementationName_21534, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 474)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 474)) ;
    enumerator_21422.gotoNextObject () ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 476)).boolEnum () ;
  if (kBoolTrue == test_11) {
    cEnumerator_availableInterruptMap enumerator_21882 (constinArgument_inAvailableInterruptMap, kENUMERATION_UP) ;
    while (enumerator_21882.hasCurrentObject ()) {
      const enumGalgasBool test_12 = constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE).getter_hasKey (enumerator_21882.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-generation.galgas", 478)).operator_not (SOURCE_FILE ("code-generation.galgas", 478)).boolEnum () ;
      if (kBoolTrue == test_12) {
        switch (enumerator_21882.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GALGAS_interruptionPanicCode::kNotBuilt:
          break ;
        case GALGAS_interruptionPanicCode::kEnum_noCode:
          {
          }
          break ;
        case GALGAS_interruptionPanicCode::kEnum_code:
          {
            const enumGalgasBool test_13 = var_first_21340.boolEnum () ;
            if (kBoolTrue == test_13) {
              var_first_21340 = GALGAS_bool (false) ;
            }else if (kBoolFalse == test_13) {
              var_json_20003.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 485)) ;
            }
            var_json_20003.plusAssign_operation(GALGAS_string ("\n"
              "    \"").add_operation (function_llvmNameForSectionOrSafeInterrupt (enumerator_21882.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 487)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 487)) ;
          }
          break ;
        }
      }
      enumerator_21882.gotoNextObject () ;
    }
  }
  var_json_20003.plusAssign_operation(GALGAS_string ("\n"
    "  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 492)) ;
  var_json_20003.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 494)) ;
  GALGAS_bool joker_22401 ; // Joker input parameter
  var_json_20003.method_writeToFileWhenDifferentContents (var_sourceDirectory_7546.add_operation (GALGAS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 495)), joker_22401, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 495)) ;
  const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 497)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    GALGAS_string temp_15 ;
    const enumGalgasBool test_16 = GALGAS_bool (gOption_plm_5F_options_performFlashing.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = GALGAS_string ("run") ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string ("build") ;
    }
    GALGAS_string var_script_22519 = temp_15 ;
    GALGAS_string var_fullScript_22614 = GALGAS_string ("python ").add_operation (constinArgument_inProductDirectory, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 499)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 499)).add_operation (var_script_22519, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 499)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 499)) ;
    GALGAS_sint var_result_22687 = var_fullScript_22614.getter_system (SOURCE_FILE ("code-generation.galgas", 500)) ;
    const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, var_result_22687.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing"), fixItArray18  COMMA_SOURCE_FILE ("code-generation.galgas", 502)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'declareLLVMTypes'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_declareLLVMTypes (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                               GALGAS_string & ioArgument_ioLLVMcode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_orderedTypeList var_orderedTypeList_23292 = GALGAS_orderedTypeList::constructor_emptySortedList (SOURCE_FILE ("code-generation.galgas", 520)) ;
  cEnumerator_unifiedTypeMap enumerator_23331 (constinArgument_inTypeMap, kENUMERATION_UP) ;
  while (enumerator_23331.hasCurrentObject ()) {
    var_orderedTypeList_23292.addAssign_operation (enumerator_23331.current_type (HERE), enumerator_23331.current_index (HERE)  COMMA_SOURCE_FILE ("code-generation.galgas", 522)) ;
    enumerator_23331.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Types (structures and static arraies)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 526)) ;
  cEnumerator_orderedTypeList enumerator_23569 (var_orderedTypeList_23292, kENUMERATION_UP) ;
  while (enumerator_23569.hasCurrentObject ()) {
    switch (enumerator_23569.current_mType (HERE).getter_mKind (SOURCE_FILE ("code-generation.galgas", 528)).enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_void:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_boolean:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_enumeration:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_integer:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_structure:
      {
        const cEnumAssociatedValues_typeKind_structure * extractPtr_23937 = (const cEnumAssociatedValues_typeKind_structure *) (enumerator_23569.current_mType (HERE).getter_mKind (SOURCE_FILE ("code-generation.galgas", 528)).unsafePointer ()) ;
        const GALGAS_propertyList extractedValue_propertyList = extractPtr_23937->mAssociatedValue1 ;
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23569.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 534)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 534)) ;
        cEnumerator_propertyList enumerator_23820 (extractedValue_propertyList, kENUMERATION_UP) ;
        while (enumerator_23820.hasCurrentObject ()) {
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23820.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 536)) ;
          if (enumerator_23820.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 537)) ;
          }
          enumerator_23820.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 539)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_literalString:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_staticInteger:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_opaque:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_arrayType:
      {
        const cEnumAssociatedValues_typeKind_arrayType * extractPtr_24183 = (const cEnumAssociatedValues_typeKind_arrayType *) (enumerator_23569.current_mType (HERE).getter_mKind (SOURCE_FILE ("code-generation.galgas", 528)).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_elementType = extractPtr_24183->mAssociatedValue1 ;
        const GALGAS_bigint extractedValue_arraySize = extractPtr_24183->mAssociatedValue2 ;
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_23569.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)).add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)).add_operation (extractedValue_arraySize.getter_string (SOURCE_FILE ("code-generation.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)).add_operation (extensionGetter_llvmTypeName (extractedValue_elementType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 544)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_function:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_pointer:
      {
        const cEnumAssociatedValues_typeKind_pointer * extractPtr_24243 = (const cEnumAssociatedValues_typeKind_pointer *) (enumerator_23569.current_mType (HERE).getter_mKind (SOURCE_FILE ("code-generation.galgas", 528)).unsafePointer ()) ;
        const GALGAS_PLMType extractedValue_pointee = extractPtr_24243->mAssociatedValue0 ;
      }
      break ;
    }
    enumerator_23569.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 549)) ;
}


