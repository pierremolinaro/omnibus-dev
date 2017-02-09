#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handleArrayAccessInExpressionNew'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleArrayAccessInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                               const GALGAS_expressionAST constinArgument_inIndexExpression,
                                               const GALGAS_location constinArgument_inEndOfIndex,
                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                               const GALGAS_bool constinArgument_inGuard,
                                               const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                               const GALGAS_semanticContext constinArgument_inContext,
                                               const GALGAS_mode constinArgument_inCurrentMode,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                               GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                               GALGAS_allocaList & ioArgument_ioAllocaList,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_variableIR_20661 ;
  GALGAS_location var_errorLocation_20687 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_20883 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_20883->mAssociatedValue0 ;
      var_errorLocation_20687 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 502)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_20826 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_20826, extractedValue_identifier, var_variableIR_20661, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 503)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_21880 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21880->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_21880->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 505)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 505)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_20687 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 506)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_21120 ;
        GALGAS_lstring joker_21087_2 ; // Joker input parameter
        GALGAS_propertyMap joker_21087_1 ; // Joker input parameter
        GALGAS_propertyList joker_21122_2 ; // Joker input parameter
        GALGAS_uint joker_21122_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)).method_structure (joker_21087_2, joker_21087_1, var_structureMap_21120, joker_21122_2, joker_21122_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 507)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_21137 = var_structureMap_21120 ;
        GALGAS_objectIR var_masterPropertyIR_21241 ;
        {
        var_m_21137.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_21163 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_21137.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_21163, extractedValue_propertyName, var_masterPropertyIR_21241, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 509)) ;
        }
        var_variableIR_20661 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_21241, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 511)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 512)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 512))  COMMA_SOURCE_FILE ("expression-primary.galgas", 512)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 513)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 510)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 516)) ;
        GALGAS_uint var_index_21599 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_21570 ; // Joker input parameter
        GALGAS_lstring joker_21581 ; // Joker input parameter
        var_masterPropertyIR_21241.method_property (joker_21570, joker_21581, var_index_21599, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 517)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_20661, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 521)), var_index_21599.getter_string (SOURCE_FILE ("expression-primary.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 518)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 525)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 525)) ;
        var_variableIR_20661.drop () ; // Release error dropped variable
        var_errorLocation_20687.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_22023 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_22023->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_22023->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 528)), GALGAS_string ("this object is not an array"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 528)) ;
      var_variableIR_20661.drop () ; // Release error dropped variable
      var_errorLocation_20687.drop () ; // Release error dropped variable
    }
    break ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_variableIR_20661, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 531)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 531)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 531)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_20661, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
    }
    ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 547)), var_variableIR_20661  COMMA_SOURCE_FILE ("expression-primary.galgas", 547)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = var_variableIR_20661.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 548)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_sliceMap var_sliceMap_23225 ;
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_20661, var_sliceMap_23225, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 549)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_sliceMap_23225, var_variableIR_20661  COMMA_SOURCE_FILE ("expression-primary.galgas", 565)) ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_errorLocation_20687, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 567)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handleFunctionCallInExpressionNew'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleFunctionCallInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                const GALGAS_bool constinArgument_inGuard,
                                                const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                const GALGAS_semanticContext constinArgument_inContext,
                                                const GALGAS_mode constinArgument_inMode,
                                                GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                GALGAS_allocaList & ioArgument_ioAllocaList,
                                                const GALGAS_effectiveArgumentListAST constinArgument_inArguments,
                                                const GALGAS_location constinArgument_inErrorLocation,
                                                GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 590)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_24461 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 593)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_currentMap_24521 ;
  GALGAS_lstring var_functionName_24546 ;
  GALGAS_lstring var_routineMangledName_24576 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_24832 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_24832->mAssociatedValue0 ;
      var_currentMap_24521 = ioArgument_ioUniversalMap ;
      var_functionName_24546 = extractedValue_identifier ;
      var_routineMangledName_24576 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_identifier, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 601)) ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_25468 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25468->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_25468->mAssociatedValue1 ;
      const enumGalgasBool test_2 = extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 603)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 603)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_lstring joker_25001_2 ; // Joker input parameter
        GALGAS_propertyMap joker_25001_1 ; // Joker input parameter
        GALGAS_propertyList joker_25030_2 ; // Joker input parameter
        GALGAS_uint joker_25030_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)).method_structure (joker_25001_2, joker_25001_1, var_currentMap_24521, joker_25030_2, joker_25030_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
        var_functionName_24546 = extractedValue_propertyName ;
        var_effectiveParameterListIR_24461.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 606)), extractedValue_currentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
        var_routineMangledName_24576 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 607)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 607)), extractedValue_propertyName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 607)) ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 609)), GALGAS_string ("this object should be a structure"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 609)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        var_functionName_24546.drop () ; // Release error dropped variable
        var_currentMap_24521.drop () ; // Release error dropped variable
        var_routineMangledName_24576.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_25649 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_25649->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 614)), GALGAS_string ("this is not a function"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 614)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      var_currentMap_24521.drop () ; // Release error dropped variable
      var_functionName_24546.drop () ; // Release error dropped variable
      var_routineMangledName_24576.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_lstring var_signature_25706 = extensionGetter_routineSignature (constinArgument_inArguments, var_functionName_24546.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 619)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_25895 ;
  GALGAS_routineDescriptor var_routineDescriptor_25941 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) var_currentMap_24521.ptr (), var_functionName_24546, var_signature_25706, var_LLVMInvocationRoutineName_25895, var_routineDescriptor_25941, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 621)) ;
  GALGAS_routineKind var_routineKind_26009 = var_routineDescriptor_25941.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_26059 = extensionGetter_executionMode (var_routineKind_26009, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 629)) ;
  GALGAS_routineTypedSignature var_formalSignature_26146 = var_routineDescriptor_25941.getter_mSignature (HERE) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_24576 COMMA_SOURCE_FILE ("expression-primary.galgas", 645)) ;
  }
  GALGAS_calleeKindIR var_calleeKind_26868 = function_checkMode (constinArgument_inMode, var_calleeMode_26059, var_routineKind_26009, var_functionName_24546.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 647)) ;
  {
  routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_26146, constinArgument_inArguments, var_functionName_24546.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_24461, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 654)) ;
  }
  GALGAS_objectIR var_functionResult_27677 ;
  {
  routine_getNewTempVariable (var_routineDescriptor_25941.getter_mReturnType (HERE), var_routineMangledName_24576.getter_location (SOURCE_FILE ("expression-primary.galgas", 670)), ioArgument_ioTemporaries, var_functionResult_27677, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 670)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_27677, var_routineMangledName_24576, var_LLVMInvocationRoutineName_25895, var_calleeKind_26868, var_effectiveParameterListIR_24461  COMMA_SOURCE_FILE ("expression-primary.galgas", 672))  COMMA_SOURCE_FILE ("expression-primary.galgas", 672)) ;
  ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 681)), var_functionResult_27677  COMMA_SOURCE_FILE ("expression-primary.galgas", 681)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeEffectiveParametersNew'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParametersNew (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
  GALGAS_procEffectiveParameterList var_parameterList_28982 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 702)) ;
  cEnumerator_routineTypedSignature enumerator_29025 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_29068 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_29025.hasCurrentObject () && enumerator_29068.hasCurrentObject ()) {
    switch (enumerator_29068.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_30095 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_29068.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_30095->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_30095->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_30095->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_29025.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 709)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_29206 = temp_0 ;
        GALGAS_lstring var_varLLVMName_29374 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 711)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 711)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 711))  COMMA_SOURCE_FILE ("expression-primary.galgas", 711)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 712)) ;
        GALGAS_objectIR var_objectIR_29506 = GALGAS_objectIR::constructor_localVariableReference (var_type_29206, var_varLLVMName_29374  COMMA_SOURCE_FILE ("expression-primary.galgas", 713)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_29624 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_29624, extractedValue_name, var_objectIR_29506, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 715)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_29698 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_29698, extractedValue_name, var_objectIR_29506, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 717)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 717)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_29374.getter_string (SOURCE_FILE ("expression-primary.galgas", 719)), extensionGetter_llvmTypeName (var_type_29206.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 719))  COMMA_SOURCE_FILE ("expression-primary.galgas", 719)) ;
        var_parameterList_28982.addAssign_operation (enumerator_29068.current_mEffectiveParameterKind (HERE), enumerator_29068.current_mSelector (HERE), var_type_29206  COMMA_SOURCE_FILE ("expression-primary.galgas", 720)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 722)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_29206, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_29374.getter_string (SOURCE_FILE ("expression-primary.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 723)), var_varLLVMName_29374.getter_location (SOURCE_FILE ("expression-primary.galgas", 723))  COMMA_SOURCE_FILE ("expression-primary.galgas", 723)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 723))  COMMA_SOURCE_FILE ("expression-primary.galgas", 723))  COMMA_SOURCE_FILE ("expression-primary.galgas", 721)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_30913 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_29068.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_30913->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_30205 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_30152 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_30152, extractedValue_name, var_objectIR_30205, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 725)) ;
        }
        var_parameterList_28982.addAssign_operation (enumerator_29068.current_mEffectiveParameterKind (HERE), enumerator_29068.current_mSelector (HERE), extensionGetter_type (var_objectIR_30205, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 735))  COMMA_SOURCE_FILE ("expression-primary.galgas", 735)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 737)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_30205, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 739)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_30205, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 740)), extensionGetter_location (var_objectIR_30205, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 741))  COMMA_SOURCE_FILE ("expression-primary.galgas", 740)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 742))  COMMA_SOURCE_FILE ("expression-primary.galgas", 738))  COMMA_SOURCE_FILE ("expression-primary.galgas", 736)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_32007 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_29068.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_32007->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_32007->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_31487 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_29025.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_31487, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 745)) ;
        GALGAS_objectIR var_expressionValue_31653 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_31487, extractedValue_endOfExp, var_expressionValue_31653, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 759)) ;
        }
        GALGAS_objectIR var_result_31680 = function_checkAssignmentCompatibility (var_expressionValue_31653, enumerator_29025.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 765)) ;
        var_parameterList_28982.addAssign_operation (enumerator_29068.current_mEffectiveParameterKind (HERE), enumerator_29068.current_mSelector (HERE), enumerator_29025.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 771)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 772)), var_result_31680  COMMA_SOURCE_FILE ("expression-primary.galgas", 772)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_32748 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_29068.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_32748->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_32127 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_32070 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_32070, extractedValue_name, var_objectIR_32127, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 774)) ;
        }
        var_parameterList_28982.addAssign_operation (enumerator_29068.current_mEffectiveParameterKind (HERE), enumerator_29068.current_mSelector (HERE), extensionGetter_type (var_objectIR_32127, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 781))  COMMA_SOURCE_FILE ("expression-primary.galgas", 781)) ;
        GALGAS_objectIR var_argumentIR_32499 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_32127, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 783)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_32127, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 784)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 784)), extensionGetter_location (var_objectIR_32127, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 784))  COMMA_SOURCE_FILE ("expression-primary.galgas", 784)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 785))  COMMA_SOURCE_FILE ("expression-primary.galgas", 782)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 787)), var_argumentIR_32499  COMMA_SOURCE_FILE ("expression-primary.galgas", 787)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_35192 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_29068.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_35192->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 789)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 790)), GALGAS_string ("'self' is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 790)) ;
          var_parameterList_28982.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 796)).enumValue ()) {
          case GALGAS_typeKind::kNotBuilt:
            break ;
          case GALGAS_typeKind::kEnum_opaque:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 798)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 798)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_arrayType:
            {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 800)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 800)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_boolean:
            {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 802)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 802)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_staticInteger:
            {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 804)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 804)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_literalString:
            {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 806)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 806)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_enumeration:
            {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 808)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 808)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_function:
            {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 810)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 810)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_pointer:
            {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 812)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 812)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_integer:
            {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 814)), GALGAS_string ("a structure type is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 814)) ;
              var_parameterList_28982.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_structure:
            {
              const cEnumAssociatedValues_typeKind_structure * extractPtr_35166 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 796)).unsafePointer ()) ;
              const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_35166->mAssociatedValue2 ;
              GALGAS_universalPropertyAndRoutineMapForContext var_m_34528 = extractedValue_universalMap ;
              GALGAS_objectIR var_propertyObject_34616 ;
              {
              var_m_34528.insulate (HERE) ;
              cPtr_universalPropertyAndRoutineMapForContext * ptr_34558 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_34528.ptr () ;
              callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_34558, extractedValue_name, var_propertyObject_34616, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 817)) ;
              }
              GALGAS_uint var_idx_34671 ;
              GALGAS_unifiedTypeMap_2D_proxy joker_34654_2 ; // Joker input parameter
              GALGAS_lstring joker_34654_1 ; // Joker input parameter
              var_propertyObject_34616.method_property (joker_34654_2, joker_34654_1, var_idx_34671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 818)) ;
              GALGAS_objectIR var_fieldObjectReference_34773 ;
              {
              routine_getNewTempVariable (extensionGetter_type (var_propertyObject_34616, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 819)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 819)), ioArgument_ioTemporaries, var_fieldObjectReference_34773, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 819)) ;
              }
              {
              extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_34773, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 823)), var_idx_34671, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 820)) ;
              }
              var_parameterList_28982.addAssign_operation (enumerator_29068.current_mEffectiveParameterKind (HERE), enumerator_29068.current_mSelector (HERE), extensionGetter_type (var_propertyObject_34616, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 826))  COMMA_SOURCE_FILE ("expression-primary.galgas", 826)) ;
              ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 828)), var_fieldObjectReference_34773  COMMA_SOURCE_FILE ("expression-primary.galgas", 827)) ;
            }
            break ;
          }
        }
      }
      break ;
    }
    enumerator_29025.gotoNextObject () ;
    enumerator_29068.gotoNextObject () ;
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 835)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 835)))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 836)).getter_string (SOURCE_FILE ("expression-primary.galgas", 836)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 836)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 836)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 837)).getter_string (SOURCE_FILE ("expression-primary.galgas", 836)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 836)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 837)), fixItArray15  COMMA_SOURCE_FILE ("expression-primary.galgas", 836)) ;
  }else if (kBoolFalse == test_14) {
    cEnumerator_routineTypedSignature enumerator_35524 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_35553 (var_parameterList_28982, kENUMERATION_UP) ;
    while (enumerator_35524.hasCurrentObject () && enumerator_35553.hasCurrentObject ()) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, enumerator_35524.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 840)).objectCompare (enumerator_35553.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 840)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_35553.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 841)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_35553.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 841)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 841)).add_operation (enumerator_35524.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 842)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 842)), fixItArray17  COMMA_SOURCE_FILE ("expression-primary.galgas", 841)) ;
      }
      GALGAS_string var_requiredPassingMode_35844 = extensionGetter_requiredActualPassingModeForSelector (enumerator_35524.current_mFormalArgumentPassingMode (HERE), enumerator_35524.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 844)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 844)) ;
      GALGAS_string var_testedPassingMode_35965 = extensionGetter_passingModeForActualSelector (enumerator_35553.current_mEffectiveParameterPassingMode (HERE), enumerator_35553.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 845)) ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_35844.objectCompare (var_testedPassingMode_35965)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_35553.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 847)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_35844, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 847)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 847)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 847)) ;
      }
      enumerator_35524.gotoNextObject () ;
      enumerator_35553.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@primaryInExpressionAST analyzeExpression'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_primaryInExpressionAST_analyzeExpression (const cPtr_expressionAST * inObject,
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
  const cPtr_primaryInExpressionAST * object = (const cPtr_primaryInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_primaryInExpressionAST) ;
  GALGAS_objectIR var_currentPointer_37359 ;
  GALGAS_string var_globalVariableReceiverName_37396 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 879)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 879)) ;
        var_currentPointer_37359.drop () ; // Release error dropped variable
        var_globalVariableReceiverName_37396.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 880)) COMMA_SOURCE_FILE ("expression-primary.galgas", 880)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_unifiedTypeMap_2D_proxy joker_37691_2 ; // Joker input parameter
          GALGAS_bool joker_37691_1 ; // Joker input parameter
          GALGAS_bool joker_37736_2 ; // Joker input parameter
          GALGAS_bool joker_37736_1 ; // Joker input parameter
          ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mObjectName, joker_37691_2, joker_37691_1, var_currentPointer_37359, joker_37736_2, joker_37736_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 881)) ;
          }
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = var_currentPointer_37359.getter_isGlobalVariableReference (SOURCE_FILE ("expression-primary.galgas", 886)).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = object->mProperty_mObjectName.getter_string (HERE) ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          var_globalVariableReceiverName_37396 = temp_3 ;
        }else if (kBoolFalse == test_2) {
          var_currentPointer_37359 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("expression-primary.galgas", 888)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 888)) ;
          var_globalVariableReceiverName_37396 = GALGAS_string::makeEmptyString () ;
        }
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_38947 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_38947->mAssociatedValue0 ;
      var_globalVariableReceiverName_37396 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 893)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 894)) ;
        var_currentPointer_37359.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 895)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 895)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_propertyMap var_structureObjectMap_38348 ;
          GALGAS_lstring joker_38311 ; // Joker input parameter
          GALGAS_universalPropertyAndRoutineMapForContext joker_38350_3 ; // Joker input parameter
          GALGAS_propertyList joker_38350_2 ; // Joker input parameter
          GALGAS_uint joker_38350_1 ; // Joker input parameter
          constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 896)).method_structure (joker_38311, var_structureObjectMap_38348, joker_38350_3, joker_38350_2, joker_38350_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 896)) ;
          const enumGalgasBool test_8 = var_structureObjectMap_38348.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 897)) COMMA_SOURCE_FILE ("expression-primary.galgas", 897)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_objectIR var_object_38504 ;
            GALGAS_bool joker_38481 ; // Joker input parameter
            var_structureObjectMap_38348.method_searchKey (object->mProperty_mObjectName, joker_38481, var_object_38504, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 898)) ;
            {
            routine_handleSelfAccessInExpression (constinArgument_inSelfType, var_object_38504, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_currentPointer_37359, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 903)) ;
            }
          }else if (kBoolFalse == test_8) {
            var_currentPointer_37359 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 911)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 911)) ;
          }
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 914)) ;
          var_currentPointer_37359.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_39000 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_39000.hasCurrentObject ()) {
    switch (enumerator_39000.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_39594 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_39000.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_39594->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_37359, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 921)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_40274 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_39000.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_40274->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_40274->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_37359, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 937)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_41210 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_39000.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_41210->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_41210->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_41063 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_37396, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_37359, var_returnedType_41063, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 955)) ;
        }
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedType_41063.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 975)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 976)) ;
        }
      }
      break ;
    }
    enumerator_39000.gotoNextObject () ;
  }
  outArgument_outResult = var_currentPointer_37359 ;
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
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 992)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_41680 ;
    GALGAS_lstring var_name_41698 ;
    GALGAS_uint var_index_41715 ;
    constinArgument_inObject.method_property (var_type_41680, var_name_41698, var_index_41715, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 993)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_41680, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 996)), var_name_41698.getter_location (SOURCE_FILE ("expression-primary.galgas", 996))  COMMA_SOURCE_FILE ("expression-primary.galgas", 996)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 997)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 994)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1000)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_41698.getter_string (SOURCE_FILE ("expression-primary.galgas", 1004)), var_index_41715, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1001)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 1008)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1008)) ;
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
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 1021)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_42575 ;
    GALGAS_lstring var_name_42593 ;
    GALGAS_uint var_index_42610 ;
    constinArgument_inProperty.method_property (var_type_42575, var_name_42593, var_index_42610, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1022)) ;
    GALGAS_objectIR var_newObject_42629 = GALGAS_objectIR::constructor_temporaryReference (var_type_42575, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1025)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1025)), var_name_42593.getter_location (SOURCE_FILE ("expression-primary.galgas", 1025))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1025)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1026)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 1023)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1029)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_42629, ioArgument_ioObject, var_name_42593.getter_string (SOURCE_FILE ("expression-primary.galgas", 1033)), var_index_42610.getter_string (SOURCE_FILE ("expression-primary.galgas", 1034)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1030)) ;
    }
    ioArgument_ioObject = var_newObject_42629 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1038)) ;
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
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1060)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1060)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1060)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_44061 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_44099 ;
    GALGAS_lstring joker_44024 ; // Joker input parameter
    GALGAS_propertyList joker_44101_2 ; // Joker input parameter
    GALGAS_uint joker_44101_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1061)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1061)).method_structure (joker_44024, var_structureObjectMap_44061, var_universalMap_44099, joker_44101_2, joker_44101_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1061)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_44061.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1062)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1062)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_44235 ;
      GALGAS_bool joker_44214 ; // Joker input parameter
      var_structureObjectMap_44061.method_searchKey (constinArgument_inPropertyName, joker_44214, var_property_44235, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1063)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), var_property_44235, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1064)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 1072)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1075)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1075)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 1075)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_44633 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1076)) ;
      GALGAS_objectIR var_loadedRegisterValue_44852 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), var_loadedRegisterValue_44852, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1077)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_44951 ;
      GALGAS_bigint var_accessRightOperand_44989 ;
      GALGAS_sliceMap var_resultSliceMap_45025 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_45069 ;
      var_sliceMap_44633.method_searchKey (constinArgument_inPropertyName, var_accessOperator_44951, var_accessRightOperand_44989, var_resultSliceMap_45025, var_resultType_45069, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1083)) ;
      GALGAS_objectIR var_resultObject_45096 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_45069, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1092)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1092))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1092)), var_resultSliceMap_45025  COMMA_SOURCE_FILE ("expression-primary.galgas", 1090)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1095)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_45096, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1098)), constinArgument_inPropertyName.getter_location (HERE), var_loadedRegisterValue_44852, var_accessOperator_44951, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_44989  COMMA_SOURCE_FILE ("expression-primary.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1096)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_45096 ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1106)), GALGAS_string ("the current object has no property"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1106)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 1132)).operator_not (SOURCE_FILE ("expression-primary.galgas", 1132)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1133)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_46998 ;
      GALGAS_objectIR joker_46965_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_46965_1, var_functionName_46998, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1135)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_46998.getter_location (SOURCE_FILE ("expression-primary.galgas", 1136)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1136)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_47169 ;
      GALGAS_lstring var_functionName_47200 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_47169, var_functionName_47200, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1138)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_47907 ;
      GALGAS_calleeKindIR var_routineKind_47956 ;
      GALGAS_lstring var_functionMangledName_48015 ;
      GALGAS_lstring var_functionNameForGeneration_48086 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_47169, var_functionName_47200, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_47907, var_routineKind_47956, var_functionMangledName_48015, var_functionNameForGeneration_48086, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1139)) ;
      }
      GALGAS_objectIR var_functionResult_48274 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_48015.getter_location (SOURCE_FILE ("expression-primary.galgas", 1162)), ioArgument_ioTemporaries, var_functionResult_48274, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1162)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_48274, var_functionMangledName_48015, var_functionNameForGeneration_48086, var_routineKind_47956, var_effectiveParameterListIR_47907  COMMA_SOURCE_FILE ("expression-primary.galgas", 1164))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1164)) ;
      ioArgument_ioObjectPtr = var_functionResult_48274 ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1202)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_49925 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1203)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_49925.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1205)))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_receiverType_49925.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1205)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1205)) ;
  }
  GALGAS_bool var_specialCase_50038 = test_0 ;
  const enumGalgasBool test_1 = var_specialCase_50038.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_propertyMap var_propertyMap_50212 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_50250 ;
    GALGAS_lstring joker_50169 ; // Joker input parameter
    GALGAS_propertyList joker_50252_2 ; // Joker input parameter
    GALGAS_uint joker_50252_1 ; // Joker input parameter
    var_receiverType_49925.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1207)).method_structure (joker_50169, var_propertyMap_50212, var_universalMap_50250, joker_50252_2, joker_50252_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1207)) ;
    const enumGalgasBool test_2 = var_propertyMap_50212.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1208)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1208)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_objectIR var_propertyObject_50380 ;
      GALGAS_bool joker_50349 ; // Joker input parameter
      var_propertyMap_50212.method_searchKey (constinArgument_inRoutineName, joker_50349, var_propertyObject_50380, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1209)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_type_50427 ;
      GALGAS_lstring var_plmName_50455 ;
      GALGAS_uint var_index_50479 ;
      var_propertyObject_50380.method_property (var_type_50427, var_plmName_50455, var_index_50479, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1210)) ;
      var_specialCase_50038 = var_type_50427.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1211)).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 1211)) ;
      const enumGalgasBool test_3 = var_specialCase_50038.boolEnum () ;
      if (kBoolTrue == test_3) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 1213)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_receiverType_49925.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1218)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1219)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 1219)) ;
  }
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_receiverType_49925.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1223)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string ("$").add_operation (var_receiverType_49925.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1223)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_5, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1222)) ;
  GALGAS_routineDescriptor var_routineDescriptor_51152 ;
  GALGAS_location var_outRoutineLocation_51190 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1229)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1229)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_51152, var_outRoutineLocation_51190, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1227)) ;
  GALGAS_bool var_isPublic_51209 = var_routineDescriptor_51152.getter_mIsPublic (HERE) ;
  GALGAS_routineKind var_routineKind_51257 = var_routineDescriptor_51152.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_51307 = extensionGetter_executionMode (var_routineKind_51257, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1236)) ;
  GALGAS_routineTypedSignature var_formalSignature_51394 = var_routineDescriptor_51152.getter_mSignature (HERE) ;
  outArgument_outReturnedType = var_routineDescriptor_51152.getter_mReturnType (HERE) ;
  const enumGalgasBool test_7 = var_isPublic_51209.operator_not (SOURCE_FILE ("expression-primary.galgas", 1240)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_49925.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1241)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_51613 = var_outRoutineLocation_51190.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1242)) ;
      GALGAS_string var_invocationFile_51666 = constinArgument_inRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1243)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_51666.objectCompare (var_declarationFile_51613)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1245)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1245)) ;
      }
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_receiverType_49925.objectCompare (constinArgument_inSelfType)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1248)), GALGAS_string ("this routine is not public"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1248)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 1252)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_51307, var_routineKind_51257, constinArgument_inRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1254)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_51394, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1261)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_54119 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1302)) ;
  cEnumerator_routineTypedSignature enumerator_54162 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_54205 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_54162.hasCurrentObject () && enumerator_54205.hasCurrentObject ()) {
    switch (enumerator_54205.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_55683 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_54205.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_55683->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_55683->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_55683->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_54162.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1309)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_54343 = temp_0 ;
        GALGAS_lstring var_varLLVMName_54511 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1311)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1311)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1311)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1311))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1311)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1312)) ;
        GALGAS_objectIR var_objectIR_54643 = GALGAS_objectIR::constructor_localVariableReference (var_type_54343, var_varLLVMName_54511  COMMA_SOURCE_FILE ("expression-primary.galgas", 1313)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_54761 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_54761, extractedValue_name, var_objectIR_54643, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1315)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_54343, GALGAS_bool (true), var_objectIR_54643, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1316)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_55057 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_55057, extractedValue_name, var_objectIR_54643, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 1325)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1325)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_54343, GALGAS_bool (true), var_objectIR_54643, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1326)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_54511.getter_string (SOURCE_FILE ("expression-primary.galgas", 1335)), extensionGetter_llvmTypeName (var_type_54343.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1335))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1335)) ;
        var_parameterList_54119.addAssign_operation (enumerator_54205.current_mEffectiveParameterKind (HERE), enumerator_54205.current_mSelector (HERE), var_type_54343  COMMA_SOURCE_FILE ("expression-primary.galgas", 1336)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1338)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_54343, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_54511.getter_string (SOURCE_FILE ("expression-primary.galgas", 1339)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1339)), var_varLLVMName_54511.getter_location (SOURCE_FILE ("expression-primary.galgas", 1339))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1339)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1339))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1339))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1337)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_56742 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_54205.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_56742->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_55793 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_55740 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_55740, extractedValue_name, var_objectIR_55793, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1341)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_55880 ;
        GALGAS_bool var_accessIsAllowed_55927 ;
        GALGAS_bool var_isCopyable_55994 ;
        GALGAS_bool var_canBeUsedAsInputParameter_56108 ;
        {
        GALGAS_objectIR joker_55946 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_55880, var_accessIsAllowed_55927, joker_55946, var_isCopyable_55994, var_canBeUsedAsInputParameter_56108, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1342)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_55927.operator_not (SOURCE_FILE ("expression-primary.galgas", 1350)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1351)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1351)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_56108.operator_not (SOURCE_FILE ("expression-primary.galgas", 1353)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1354)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1354)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_55994.operator_not (SOURCE_FILE ("expression-primary.galgas", 1356)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1357)), GALGAS_string ("an $").add_operation (var_type_55880.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1357)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1357)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1357)) ;
        }
        var_parameterList_54119.addAssign_operation (enumerator_54205.current_mEffectiveParameterKind (HERE), enumerator_54205.current_mSelector (HERE), var_type_55880  COMMA_SOURCE_FILE ("expression-primary.galgas", 1359)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1361)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_55880, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_55793, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1362)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1362)), extensionGetter_location (var_objectIR_55793, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1362))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1362)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1362))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1362))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1360)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_57836 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_54205.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_57836->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_57836->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_57316 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_54162.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_57316, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1364)) ;
        GALGAS_objectIR var_expressionValue_57482 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_57316, extractedValue_endOfExp, var_expressionValue_57482, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1378)) ;
        }
        GALGAS_objectIR var_result_57509 = function_checkAssignmentCompatibility (var_expressionValue_57482, enumerator_54162.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1384)) ;
        var_parameterList_54119.addAssign_operation (enumerator_54205.current_mEffectiveParameterKind (HERE), enumerator_54205.current_mSelector (HERE), enumerator_54162.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 1390)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1391)), var_result_57509  COMMA_SOURCE_FILE ("expression-primary.galgas", 1391)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_58720 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_54205.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_58720->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_57965 ;
        GALGAS_bool var_accessIsAllowed_58012 ;
        GALGAS_objectIR var_objectIR_58043 ;
        GALGAS_bool var_canBeUsedAsInputParameter_58120 ;
        {
        GALGAS_bool joker_58053_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_57965, var_accessIsAllowed_58012, var_objectIR_58043, joker_58053_1, var_canBeUsedAsInputParameter_58120, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1393)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_58120.operator_not (SOURCE_FILE ("expression-primary.galgas", 1401)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1402)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1402)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_58012.operator_not (SOURCE_FILE ("expression-primary.galgas", 1404)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1405)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1405)) ;
        }
        var_parameterList_54119.addAssign_operation (enumerator_54205.current_mEffectiveParameterKind (HERE), enumerator_54205.current_mSelector (HERE), var_type_57965  COMMA_SOURCE_FILE ("expression-primary.galgas", 1407)) ;
        GALGAS_objectIR var_argumentIR_58482 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_57965, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_58043, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1410)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1410)), extensionGetter_location (var_objectIR_58043, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1410))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1410)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1411))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1408)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1413)), var_argumentIR_58482  COMMA_SOURCE_FILE ("expression-primary.galgas", 1413)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_61160 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_54205.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_61160->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1415)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1416)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1416)) ;
          var_parameterList_54119.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 1417)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1418)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1418)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1418)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 1419)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1420)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1420)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1420)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1420)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1422)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1424)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 1424)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1426)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 1426)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1428)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 1428)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1430)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 1430)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1432)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 1432)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1434)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 1434)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1436)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 1436)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1438)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 1438)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1440)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 1440)) ;
                  var_parameterList_54119.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_61134 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1422)).unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_61134->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_60496 = extractedValue_universalMap ;
                  GALGAS_objectIR var_propertyObject_60584 ;
                  {
                  var_m_60496.insulate (HERE) ;
                  cPtr_universalPropertyAndRoutineMapForContext * ptr_60526 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_60496.ptr () ;
                  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_60526, extractedValue_name, var_propertyObject_60584, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1443)) ;
                  }
                  GALGAS_uint var_idx_60639 ;
                  GALGAS_unifiedTypeMap_2D_proxy joker_60622_2 ; // Joker input parameter
                  GALGAS_lstring joker_60622_1 ; // Joker input parameter
                  var_propertyObject_60584.method_property (joker_60622_2, joker_60622_1, var_idx_60639, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1444)) ;
                  GALGAS_objectIR var_fieldObjectReference_60741 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_60584, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1445)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1445)), ioArgument_ioTemporaries, var_fieldObjectReference_60741, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1445)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_60741, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1449)), var_idx_60639, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1446)) ;
                  }
                  var_parameterList_54119.addAssign_operation (enumerator_54205.current_mEffectiveParameterKind (HERE), enumerator_54205.current_mSelector (HERE), extensionGetter_type (var_propertyObject_60584, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1452))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1452)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1454)), var_fieldObjectReference_60741  COMMA_SOURCE_FILE ("expression-primary.galgas", 1453)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_54162.gotoNextObject () ;
    enumerator_54205.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1461)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1461)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1462)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1462)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1462)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1463)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1462)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1463)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 1462)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_61492 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_61521 (var_parameterList_54119, kENUMERATION_UP) ;
    while (enumerator_61492.hasCurrentObject () && enumerator_61521.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_61492.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1466)).objectCompare (enumerator_61521.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1466)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_61521.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1467)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_61521.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)).add_operation (enumerator_61492.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1468)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1468)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1468)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 1467)) ;
      }
      GALGAS_string var_requiredPassingMode_61812 = extensionGetter_requiredActualPassingModeForSelector (enumerator_61492.current_mFormalArgumentPassingMode (HERE), enumerator_61492.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1470)) ;
      GALGAS_string var_testedPassingMode_61933 = extensionGetter_passingModeForActualSelector (enumerator_61521.current_mEffectiveParameterPassingMode (HERE), enumerator_61521.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1471)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_61812.objectCompare (var_testedPassingMode_61933)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_61521.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1473)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_61812, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1473)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1473)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 1473)) ;
      }
      enumerator_61492.gotoNextObject () ;
      enumerator_61521.gotoNextObject () ;
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
                                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                         GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_checkInstructionAST * object = (const cPtr_checkInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_checkInstructionAST) ;
  GALGAS_instructionListIR var_instructionGenerationList_3108 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 59)) ;
  GALGAS_objectIR var_expressionResult_3557 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 64)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3108, var_expressionResult_3557, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 60)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_expressionResult_3557, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 75)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 75)).operator_not (SOURCE_FILE ("directive-check.galgas", 75)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 76)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3557, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 79)).operator_not (SOURCE_FILE ("directive-check.galgas", 79)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 80)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_3950 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_3927_1 ; // Joker input parameter
    var_expressionResult_3557.method_literalInteger (joker_3927_1, var_value_3950, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 82)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_3950.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 83)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 84)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
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
  GALGAS_objectIR var_currentObject_4317 ;
  GALGAS_string var_globalVariableReceiverName_4387 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_write (SOURCE_FILE ("instruction-assignment.galgas", 75)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_4317, var_globalVariableReceiverName_4387, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 73)) ;
  const enumGalgasBool test_0 = var_currentObject_4317.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment.galgas", 90)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 91)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 91)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 91)) ;
    var_currentObject_4317.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourceOperandPossibleReference_5045 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 98)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_5045, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  GALGAS_objectIR var_sourceOperand_5225 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_5045, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 111)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 111)), var_sourceOperand_5225, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 108)) ;
  }
  GALGAS_objectIR var_result_5244 = function_checkAssignmentCompatibility (var_sourceOperand_5225, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 116)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 117)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 117)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_4317, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 120)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 120)), var_result_5244, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)) ;
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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 108)) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 109)) ;
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
  GALGAS_objectIR var_targetObject_5651 ;
  GALGAS_string var_globalVariableReceiverName_5721 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-assignment-operator.galgas", 133)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_targetObject_5651, var_globalVariableReceiverName_5721, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 131)) ;
  const enumGalgasBool test_0 = var_targetObject_5651.getter_isPossibleFunction (SOURCE_FILE ("instruction-assignment-operator.galgas", 148)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 149)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 149)), GALGAS_string ("invalid assignment target"), fixItArray1  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 149)) ;
    var_targetObject_5651.drop () ; // Release error dropped variable
  }
  GALGAS_objectIR var_sourcePossibleReference_6373 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 156)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_6373, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 152)) ;
  GALGAS_objectIR var_sourceValue_6532 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_6373, object->mProperty_mEndOfSourceExpression, var_sourceValue_6532, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 166)) ;
  }
  GALGAS_bool var_noPanicGeneration_7006 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_7069 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 186)))) ;
  GALGAS_infixOperatorMap var_operatorMap_7131 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_7069.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 197)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 197)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 198)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 198)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 197)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_7006.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_7131 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_7069.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 205)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 205)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 206)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 206)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 205)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_7006.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_7131 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_7069.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 213)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 213)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 213)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_7006.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_7131 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_7069.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 221)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 221)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 221)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_7006.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_7131 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_7069.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 229)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 229)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 229)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_7006.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_7131 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_7131 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_9476 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_9422 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_7131, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 237)), extensionGetter_type (var_sourceValue_6532, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 239)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 239)), joker_9422, var_binaryOperator_9476, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 236)) ;
  GALGAS_objectIR var_variableValue_9659 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_5651, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 247)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 247)), var_variableValue_9659, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 244)) ;
  }
  GALGAS_objectIR var_newResultingValue_9889 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_9476.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_9659, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 254)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 254)), var_sourceValue_6532, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 256)), var_newResultingValue_9889, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 250)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_5651, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 261)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 261)), var_newResultingValue_9889, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 259)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
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
                                                                     const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4372 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_4989 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4372, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_4989, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 102)) ;
  GALGAS_objectIR var_expressionResult_5139 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_4989, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 119)), var_expressionResult_5139, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 116)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4372.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 123)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4372 = extensionGetter_type (var_expressionResult_5139, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 124)) ;
  }
  GALGAS_objectIR var_result_5265 = function_checkAssignmentCompatibility (var_expressionResult_5139, var_targetType_4372, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 126)) ;
  GALGAS_lstring var_varName_5512 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 134)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 134))  COMMA_SOURCE_FILE ("instruction-var.galgas", 134)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 135)) ;
  GALGAS_objectIR var_objectIR_5644 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5265, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 136)), var_varName_5512  COMMA_SOURCE_FILE ("instruction-var.galgas", 136)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5738 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5738, object->mProperty_mVarName, var_objectIR_5644, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 137)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 137)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_5265, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)), GALGAS_bool (true), var_objectIR_5644, extensionGetter_copyable (extensionGetter_type (var_result_5265, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 143)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 138)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_5512.getter_string (SOURCE_FILE ("instruction-var.galgas", 147)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5265, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 147))  COMMA_SOURCE_FILE ("instruction-var.galgas", 147)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_5512.getter_string (SOURCE_FILE ("instruction-var.galgas", 149)), extensionGetter_type (var_result_5265, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)), var_result_5265, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 148)) ;
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
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & /* ioArgument_ioInstructionGenerationList */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInstructionAST * object = (const cPtr_varInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_7147 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 171)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_7147.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 173)).operator_not (SOURCE_FILE ("instruction-var.galgas", 173)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 174)), GALGAS_string ("$").add_operation (var_targetType_7147.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 174)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 174)) ;
  }
  GALGAS_lstring var_varLLVMName_7371 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 177)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 177)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 177))  COMMA_SOURCE_FILE ("instruction-var.galgas", 177)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 178)) ;
  GALGAS_objectIR var_objectIR_7503 = GALGAS_objectIR::constructor_localVariableReference (var_targetType_7147, var_varLLVMName_7371  COMMA_SOURCE_FILE ("instruction-var.galgas", 179)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7598 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7598, object->mProperty_mVarName, var_objectIR_7503, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 180)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 180)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_7147, GALGAS_bool (true), var_objectIR_7503, extensionGetter_copyable (var_targetType_7147, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 186)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 181)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_7371.getter_string (SOURCE_FILE ("instruction-var.galgas", 190)), extensionGetter_llvmTypeName (var_targetType_7147.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190))  COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
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
                                                                     const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3465 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4092 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3465, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4092, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 76)) ;
  GALGAS_objectIR var_expressionResult_4252 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4092, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 93)), var_expressionResult_4252, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 90)) ;
  }
  GALGAS_objectIR var_result_4299 = function_checkAssignmentCompatibility (var_expressionResult_4252, var_targetType_3465, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 97)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 105)).operator_not (SOURCE_FILE ("instruction-let.galgas", 105)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 106)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
    var_result_4299.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_4670 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 109)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 109))  COMMA_SOURCE_FILE ("instruction-let.galgas", 109)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 110)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 111)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_varPLMName_4670.getter_string (SOURCE_FILE ("instruction-let.galgas", 112)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 112))  COMMA_SOURCE_FILE ("instruction-let.galgas", 112)) ;
    GALGAS_objectIR var_localConstant_4929 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)), var_varPLMName_4670  COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_4929, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 114)), var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 114)) ;
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5126 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5126, object->mProperty_mVarName, var_expressionResult_4252, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 116)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mProperty_mVarName, extensionGetter_type (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)), GALGAS_bool (true), var_expressionResult_4252, extensionGetter_copyable (extensionGetter_type (var_result_4299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 122)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 117)) ;
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
                                                          const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                          const GALGAS_semanticContext constinArgument_inContext,
                                                          const GALGAS_mode constinArgument_inCurrentMode,
                                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                          GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                          GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
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
  GALGAS_instructionListIR var_instructionGenerationList_3277 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 62)) ;
  GALGAS_objectIR var_expressionValue_3729 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 67)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_3277, var_expressionValue_3729, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 63)) ;
  const enumGalgasBool test_2 = extensionGetter_kind (var_expressionValue_3729, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 78)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 78)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 78)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 79)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3729, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 82)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 83)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 86)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mAssertInstructionLocation, var_instructionGenerationList_3277, var_expressionValue_3729  COMMA_SOURCE_FILE ("instruction-assert.galgas", 87))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 87)) ;
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
  GALGAS_uint var_assertErrorCode_5126 = GALGAS_uint ((uint32_t) 7U) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 113)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 114)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode_5126.getter_string (SOURCE_FILE ("instruction-assert.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 116)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 116)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 118)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 127)) ;
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
                                                         const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                         const GALGAS_semanticContext constinArgument_inContext,
                                                         const GALGAS_mode constinArgument_inCurrentMode,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
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
  GALGAS_instructionListIR var_unusedInstructionListIR_3265 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 60)) ;
  GALGAS_objectIR var_result_3729 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3265, var_result_3729, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 61)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3265.getter_length (SOURCE_FILE ("instruction-panic.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3729.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 78)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 78)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3729, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 79)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 80)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_4065 ;
    GALGAS_bigint var_max_4078 ;
    GALGAS_bool joker_4089 ; // Joker input parameter
    GALGAS_uint joker_4092_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)).method_integer (var_min_4065, var_max_4078, joker_4089, joker_4092_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 82)) ;
    GALGAS_bigint var_throwValue_4148 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4124_1 ; // Joker input parameter
    var_result_3729.method_literalInteger (joker_4124_1, var_throwValue_4148, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 83)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4148.objectCompare (var_min_4065)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4148.objectCompare (var_max_4078)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 85)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 86)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mThrowLocation, var_throwValue_4148  COMMA_SOURCE_FILE ("instruction-panic.galgas", 87))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 87)) ;
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
  GALGAS_uint var_staticStringIndex_5430 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 112)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 112)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 112)), var_staticStringIndex_5430, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 111)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_5430.getter_string (SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 115)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 117)) ;
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
  GALGAS_objectIR var_testResultPossibleReference_5284 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 117)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_testResultPossibleReference_5284, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 113)) ;
  GALGAS_objectIR var_testResult_5450 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5284, object->mProperty_mTestExpressionEndLocation, var_testResult_5450, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 127)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testResult_5450, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 134)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 134)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_5450, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 135)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 135)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_5450, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 136)).operator_not (SOURCE_FILE ("instruction-if.galgas", 136)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 137)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_5450, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 138)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 139)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 139)) ;
      }
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5972 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5972, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6135 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 144)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6135, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 145)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_6819 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 161)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_6819, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7435 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7435, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 177)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_5450, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_6135, var_elseInstructionGenerationList_6819  COMMA_SOURCE_FILE ("instruction-if.galgas", 180))  COMMA_SOURCE_FILE ("instruction-if.galgas", 180)) ;
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
  GALGAS_string var_labelTrue_8600 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).getter_string (SOURCE_FILE ("instruction-if.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
  GALGAS_string var_labelFalse_8663 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).getter_string (SOURCE_FILE ("instruction-if.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 207)) ;
  GALGAS_string var_labelEnd_8725 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).getter_string (SOURCE_FILE ("instruction-if.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelTrue_8600, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (var_labelFalse_8663, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_8600.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 212)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8725, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 213)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_8663.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 216)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_8725, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 217)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_8725.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 219)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
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
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_7034 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7034, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 172)) ;
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
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_synchronization (extractedValue_isWhileCommand, var_guardMangledName_8032.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_7342, var_guardEffectiveParameterListIR_7976  COMMA_SOURCE_FILE ("instruction-sync.galgas", 196)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolean:
      {
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_9424 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_9424->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_9424->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_9424->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8486 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 204)) ;
        GALGAS_objectIR var_sourceOperand_8991 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 209)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8486, var_sourceOperand_8991, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 205)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_8991, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 219)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 219)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 220)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_8991, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 222)) ;
          }
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8486, var_sourceOperand_8991  COMMA_SOURCE_FILE ("instruction-sync.galgas", 224)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_11575 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_11575->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_11575->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11575->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_11575->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_11575->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_11575->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_9603 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 230)) ;
        GALGAS_objectIR var_boolExpressionResult_10117 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 235)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_9603, var_boolExpressionResult_10117, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 231)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_10117, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 245)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 245)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 246)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_10117, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 247)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 248)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_10435 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 250)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_11069 ;
        GALGAS_lstring var_guardMangledName_11125 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_10435, var_guardEffectiveParameterListIR_11069, var_guardMangledName_11125, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 251)) ;
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_9603, var_boolExpressionResult_10117, var_guardMangledName_11125.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_10435, var_guardEffectiveParameterListIR_11069  COMMA_SOURCE_FILE ("instruction-sync.galgas", 268)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_11662 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 279)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_7009.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_7009.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_11662, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 280)) ;
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_12293 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_12293, enumerator_7009.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 295)) ;
    }
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_7009.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 296)) ;
    }
    var_onInstructionBranchListIR_6938.addAssign_operation (var_guardedCommandIR_7163, var_branchInstructionGenerationList_11662  COMMA_SOURCE_FILE ("instruction-sync.galgas", 298)) ;
    enumerator_7009.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mStartOf_5F_on_5F_instruction, var_onInstructionBranchListIR_6938  COMMA_SOURCE_FILE ("instruction-sync.galgas", 303))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 303)) ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 325)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_13653 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_13823 ;
    {
    GALGAS_bool joker_13792_1 ; // Joker input parameter
    GALGAS_bool joker_13831_2 ; // Joker input parameter
    GALGAS_bool joker_13831_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_13653, joker_13792_1, var_objectIR_13823, joker_13831_2, joker_13831_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 328)) ;
    }
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 335)), var_objectIR_13823  COMMA_SOURCE_FILE ("instruction-sync.galgas", 335)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_13653 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 337)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (var_receiverType_13653.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 340)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 339)) ;
  GALGAS_bool var_isPublic_14204 ;
  GALGAS_routineTypedSignature var_formalSignature_14252 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_14204, var_formalSignature_14252, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 344)) ;
  const enumGalgasBool test_3 = var_isPublic_14204.operator_not (SOURCE_FILE ("instruction-sync.galgas", 350)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_14400 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 352)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 352)) ;
      GALGAS_string var_invocationFile_14509 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 353)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_14509.objectCompare (var_declarationFile_14400)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 355)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 355)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 358)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 358)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 362)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_14252, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 364)) ;
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
  GALGAS_string var_startLabel_17766 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 430)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 431)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_17766, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 433)) ;
  GALGAS_string var_startLabelName_17930 = var_startLabel_17766.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 434)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_17930.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 435)) ;
  GALGAS_string var_exitLabelName_18014 = var_startLabel_17766.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 436)) ;
  GALGAS_string var_selectLabelName_18059 = var_startLabel_17766.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 437)) ;
  GALGAS_string var_errorLabelName_18105 = var_startLabel_17766.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 438)) ;
  GALGAS_string var_currentStartBranchLabel_18159 = var_startLabelName_17930 ;
  cEnumerator_syncInstructionBranchListIR enumerator_18219 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_18182 ((uint32_t) 0) ;
  while (enumerator_18219.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_18254 = GALGAS_string ("%").add_operation (var_startLabel_17766, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 441)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 441)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 441)) ;
    GALGAS_bool var_isWhileGuardedCommand_18324 ;
    switch (enumerator_18219.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_19258 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_18219.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_19258->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_19258->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_19258->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_19258->mAssociatedValue4 ;
        var_isWhileGuardedCommand_18324 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 446)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18254, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 447)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 448)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_18809 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_18809.hasCurrentObject ()) {
          switch (enumerator_18809.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18809.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)).add_operation (extensionGetter_llvmName (enumerator_18809.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 452)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18809.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)).add_operation (extensionGetter_llvmName (enumerator_18809.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 454)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_18809.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)).add_operation (extensionGetter_llvmName (enumerator_18809.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 456)) ;
            }
            break ;
          }
          if (enumerator_18809.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 459)) ;
          }
          enumerator_18809.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 461)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_20076 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_18219.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20076->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_20076->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_20076->mAssociatedValue2 ;
        var_isWhileGuardedCommand_18324 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 464)) ;
        GALGAS_string var_acceptedLabelName_19526 = var_startLabel_17766.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
        GALGAS_string var_rejectedLabelName_19589 = var_startLabel_17766.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (var_acceptedLabelName_19526, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (var_rejectedLabelName_19589, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_19526.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_19589, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_19589.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 471)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18254, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_21807 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_18219.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_21807->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_21807->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_21807->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_21807->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_21807->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_21807->mAssociatedValue6 ;
        var_isWhileGuardedCommand_18324 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 475)) ;
        GALGAS_string var_testOkLabelName_20383 = var_startLabel_17766.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 476)) ;
        GALGAS_string var_testExitLabelName_20454 = var_startLabel_17766.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 477)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (var_testOkLabelName_20383, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (var_testExitLabelName_20454, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_20383.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        GALGAS_string var_guardAcceptationLabelName_20809 = var_startLabel_17766.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 481)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_20809, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 482)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 483)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_21035 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_21035.hasCurrentObject ()) {
          switch (enumerator_21035.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21035.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)).add_operation (extensionGetter_llvmName (enumerator_21035.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 487)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21035.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)).add_operation (extensionGetter_llvmName (enumerator_21035.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 489)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_21035.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)).add_operation (extensionGetter_llvmName (enumerator_21035.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)) ;
            }
            break ;
          }
          if (enumerator_21035.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 494)) ;
          }
          enumerator_21035.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_20454, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_20454.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_18254, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_20809, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)).add_operation (var_testOkLabelName_20383, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_18159, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_21841 = var_startLabel_17766.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
    GALGAS_string var_rejectedLabelName_21901 = var_startLabel_17766.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (index_18182.getter_string (SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_18254, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (var_acceptedLabelName_21841, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (var_rejectedLabelName_21901, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 505)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_21841.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 506)) ;
    extensionMethod_instructionListLLVMCode (enumerator_18219.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_18324.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_17930 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_18014 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_21901.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
    var_currentStartBranchLabel_18159 = var_rejectedLabelName_21901 ;
    enumerator_18219.gotoNextObject () ;
    index_18182.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 440)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_18059, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_18059, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (var_startLabelName_17930, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (var_errorLabelName_18105, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_18105.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_18014, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 516)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_23093 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 519)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 519)), var_staticStringIndex_23093, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 518)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_23093.getter_string (SOURCE_FILE ("instruction-sync.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 522)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 524)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 525)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_18014.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 527)) ;
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
  GALGAS_uint var_branchCount_23746 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 536)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_23746)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_23746 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_23931 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_23931.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_23931.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
    switch (enumerator_23931.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_24485 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_23931.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_24485->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_24485->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_24485->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 547)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_24652 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_23931.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_24652->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_25187 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_23931.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25187->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25187->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25187->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25187->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 552)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 553)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)) ;
        }
      }
      break ;
    }
    enumerator_23931.gotoNextObject () ;
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
  GALGAS_objectIR var_testValuePossibleReference_3999 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 75)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_3528, var_testValuePossibleReference_3999, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 71)) ;
  GALGAS_objectIR var_testValue_4159 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_3999, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_4159, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 85)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testValue_4159, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 92)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 92)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4159, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 93)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 93)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4159, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 94)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 95)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_4534 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 98)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4559 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4559, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 99)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 100)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_4534, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5241 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5241, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 116)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 120)), var_testInstructionGenerationList_3528, var_testValue_4159, var_instructionGenerationList_4534  COMMA_SOURCE_FILE ("instruction-while.galgas", 119))  COMMA_SOURCE_FILE ("instruction-while.galgas", 119)) ;
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
  GALGAS_string var_labelTest_6424 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 145)) ;
  GALGAS_string var_labelLoop_6475 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 146)) ;
  GALGAS_string var_labelEnd_6525 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 147)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6424, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 148)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6424.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 149)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 150)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (var_labelLoop_6475, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (var_labelEnd_6525, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 151)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6475.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 152)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 153)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6424, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 154)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6525.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 155)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 76)) ;
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
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedObjectPointer_4485 ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_4399 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4399, object->mProperty_mIteratedObject, var_iteratedObjectPointer_4485, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_4557_2 ; // Joker input parameter
  GALGAS_bool joker_4557_1 ; // Joker input parameter
  GALGAS_objectIR joker_4574 ; // Joker input parameter
  GALGAS_bool joker_4619_2 ; // Joker input parameter
  GALGAS_bool joker_4619_1 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIteratedObject, joker_4557_2, joker_4557_1, joker_4574, joker_4619_2, joker_4619_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 100)) ;
  }
  GALGAS_typeKind var_iteratedTypeKind_5216 = extensionGetter_type (var_iteratedObjectPointer_4485, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType_5430 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_5216.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 126)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_5430 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 127)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_5216.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_5640 ; // Joker input parameter
      GALGAS_bigint joker_5676_3 ; // Joker input parameter
      GALGAS_classConstantMap joker_5676_2 ; // Joker input parameter
      GALGAS_uint joker_5676_1 ; // Joker input parameter
      var_iteratedTypeKind_5216.method_arrayType (joker_5640, var_iteratedElementType_5430, joker_5676_3, joker_5676_2, joker_5676_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 129)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 131)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 131)) ;
      var_iteratedElementType_5430.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_enumeratedVarLLVMName_5807 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 134))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_5807.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 136)), extensionGetter_llvmTypeName (var_iteratedElementType_5430.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6058 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6058, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
  }
  GALGAS_objectIR var_objectIR_6148 = GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_5430, var_enumeratedVarLLVMName_5807  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 140)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6262 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6262, object->mProperty_mVarName, var_objectIR_6148, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_iteratedElementType_5430, GALGAS_bool (true), var_objectIR_6148, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_6600 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  GALGAS_objectIR var_whileExpressionResult_7068 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 156)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_6600, var_whileExpressionResult_7068, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)) ;
  const enumGalgasBool test_3 = extensionGetter_kind (var_whileExpressionResult_7068, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 167)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 167)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_7068, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_7068, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_7649 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_7649, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_8262 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8262, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 191)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 192)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_5216.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 194)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_enumeratedVarLLVMName_5807.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 196)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4485, var_whileExpression_5F_GenerationList_6600, var_whileExpressionResult_7068, var_doInstructionList_5F_GenerationList_7649  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 195))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 195)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_5216.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 203)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_unifiedTypeMap_2D_proxy var_elementType_8811 ;
      GALGAS_bigint var_size_8826 ;
      GALGAS_lstring joker_8781 ; // Joker input parameter
      GALGAS_classConstantMap joker_8828_2 ; // Joker input parameter
      GALGAS_uint joker_8828_1 ; // Joker input parameter
      var_iteratedTypeKind_5216.method_arrayType (joker_8781, var_elementType_8811, var_size_8826, joker_8828_2, joker_8828_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 204)) ;
      GALGAS_stringset var_invokedFunctionSet_8865 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 205)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 206)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 206)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_8865, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 207)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_enumeratedVarLLVMName_5807.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 210)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4485, var_whileExpression_5F_GenerationList_6600, var_whileExpressionResult_7068, var_doInstructionList_5F_GenerationList_7649, var_elementType_8811, var_size_8826.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 217)), var_invokedFunctionSet_8865  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 209))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 209)) ;
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
  GALGAS_string var_elementTypeLLVMName_11483 = extensionGetter_llvmTypeName (object->mProperty_mElementType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 276)) ;
  GALGAS_string var_listTypeLLVMName_11543 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (var_elementTypeLLVMName_11483, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 277)) ;
  GALGAS_string var_locationIndex_11618 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 278)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 278)) ;
  GALGAS_string var_startLabel_11694 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 280)) ;
  GALGAS_string var_testLabel_11747 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 281)) ;
  GALGAS_string var_whileLabel_11800 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 282)) ;
  GALGAS_string var_nextLabel_11853 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 283)) ;
  GALGAS_string var_loopVar_11903 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 284)) ;
  GALGAS_string var_loopLabel_11949 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 285)) ;
  GALGAS_string var_endLabel_12000 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 286)) ;
  GALGAS_string var_indexVar_12053 = GALGAS_string ("for.index.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 288)) ;
  GALGAS_string var_ptrVar_12098 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 289)) ;
  GALGAS_string var_currentValue_12147 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_11618, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_11694, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_11694.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)).add_operation (var_listTypeLLVMName_11543, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_11543, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11747, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_11747.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (var_elementTypeLLVMName_11483, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (var_startLabel_11694, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)).add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (var_nextLabel_11853, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 307)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (var_startLabel_11694, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)).add_operation (var_indexVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (var_nextLabel_11853, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 310)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_11903, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (var_indexVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_11903, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (var_whileLabel_11800, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (var_endLabel_12000, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_11800.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 317)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 319)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (var_loopLabel_11949, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (var_endLabel_12000, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 320)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_11949.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_12147, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)).add_operation (var_elementTypeLLVMName_11483, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 325)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_11483.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_11483, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (var_currentValue_12147, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (var_elementTypeLLVMName_11483, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_11853, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 331)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 331)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_11853.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)).add_operation (var_elementTypeLLVMName_11483, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_11483.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (var_ptrVar_12098, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (var_indexVar_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 338)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11747, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_12000.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 353)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 354))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
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
  GALGAS_string var_startLabel_15944 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 377)) ;
  GALGAS_string var_testLabel_16009 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 378)) ;
  GALGAS_string var_loopLabel_16073 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 379)) ;
  GALGAS_string var_whileLabel_16138 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 380)) ;
  GALGAS_string var_nextLabel_16203 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 381)) ;
  GALGAS_string var_endLabel_16266 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 382)) ;
  GALGAS_string var_ptrVar_16327 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 383)) ;
  GALGAS_string var_currentVar_16388 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 384)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_15944, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 387)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15944.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 389)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)).add_operation (GALGAS_string (".start = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 390)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_16009, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 391)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_16009.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (" = phi i8* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_15944.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (var_nextLabel_16203, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_16388, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_16388, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (var_currentVar_16388, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_16388, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)).add_operation (var_endLabel_16266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)).add_operation (var_whileLabel_16138, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_16138.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 402)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 404)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)).add_operation (var_loopLabel_16073, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)).add_operation (var_endLabel_16266, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_16073.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 408)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_16388, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_16203, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_16203.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 416)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 417)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 417)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_16327, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_16009, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 419)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 419)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_16266.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 422)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 431)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 432)) ;
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
    GALGAS_lstring var_typeName_2806 = function_llvmRegularTypeMangledNameFromName (object->mProperty_mTypeName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 66)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2806 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 67)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mProperty_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 69)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 70)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 71)) ;
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
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_4268 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 93)) ;
  switch (var_type_4268.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)), GALGAS_string ("an integer type is required here"), fixItArray0  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 96)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)), GALGAS_string ("an integer type is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 98)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)), GALGAS_string ("an integer type is required here"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)), GALGAS_string ("an integer type is required here"), fixItArray3  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 103)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)), GALGAS_string ("an integer type is required here"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 105)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)), GALGAS_string ("an integer type is required here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 107)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_pointer:
    {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)), GALGAS_string ("an integer type is required here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 109)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)), GALGAS_string ("an integer type is required here"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 111)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8987 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4268.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8987->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8987->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8987->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8987->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5662 ;
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4268, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5662, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5885 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5662, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_lowerBoundExpressionResult_5885, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 128)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_6405 ;
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4268, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_6405, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 134)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6628 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_6405, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_upperBoundExpressionResult_6628, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 148)) ;
      }
      GALGAS_objectIR var_lowerBound_6685 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5885, var_type_4268, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 155)) ;
      GALGAS_objectIR var_upperBound_6909 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6628, var_type_4268, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 161)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_7143 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7143, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 168)) ;
      }
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 169)) ;
      }
      GALGAS_lstring var_enumeratedVarLLVMName_7287 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 171)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 172)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_7287.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), extensionGetter_llvmTypeName (var_type_4268.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 173)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_objectIR var_objectIR_7529 = GALGAS_objectIR::constructor_localVariableReference (var_type_4268, var_enumeratedVarLLVMName_7287  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 175)) ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7631 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7631, object->mProperty_mVarName, var_objectIR_7529, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 176)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_type_4268, GALGAS_bool (true), var_objectIR_7529, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_7993 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 187)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_7993, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 188)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_8631 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8631, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 203)) ;
      }
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 204)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_7287.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 207)), var_type_4268, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_6685, var_upperBound_6909, var_instructionGenerationList_7993  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 206))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 206)) ;
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
  GALGAS_string var_llvmType_10064 = extensionGetter_llvmTypeName (object->mProperty_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  GALGAS_string var_llvmVarName_10112 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 243)) ;
  GALGAS_string var_testLabel_10167 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
  GALGAS_string var_loopLabel_10230 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 245)) ;
  GALGAS_string var_endLabel_10292 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 246)) ;
  GALGAS_string var_testResult_10356 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 247)) ;
  GALGAS_string var_loadedVarName_10431 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 248)) ;
  GALGAS_string var_currentVarName_10509 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 249)) ;
  GALGAS_string var_nextVarName_10585 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 250)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (var_llvmVarName_10112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 252)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10167, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_10167.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 255)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (var_llvmVarName_10112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 256)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 257)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 258)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)).add_operation (var_loadedVarName_10431, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 259)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_10356, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (var_loopLabel_10230, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (var_endLabel_10292, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 260)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_10230.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 262)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 262)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 263)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_10509, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (var_llvmVarName_10112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 264)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_10585, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (var_currentVarName_10509, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 265)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (var_nextVarName_10585, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (var_llvmType_10064, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (var_llvmVarName_10112, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 266)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_10167, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 267)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_10292.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 269)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 278)) ;
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
//           Overriding extension method '@complexCallInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  callExtensionMethod_noteInstructionTypesInPrecedenceGraph ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 64)) ;
  cEnumerator_effectiveArgumentListAST enumerator_3371 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_3371.hasCurrentObject ()) {
    switch (enumerator_3371.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_3601 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_3371.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_3601->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 70)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 70)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_3694 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_3371.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_3694->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 72)) ;
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
    enumerator_3371.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                                              extensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_complexCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@simpleCallInstructionAST noteInstructionTypesInPrecedenceGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  cEnumerator_effectiveArgumentListAST enumerator_4044 (object->mProperty_mArguments, kENUMERATION_UP) ;
  while (enumerator_4044.hasCurrentObject ()) {
    switch (enumerator_4044.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_4274 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4044.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_4274->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (function_llvmRegularTypeMangledNameFromName (extractedValue_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 87)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 87)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_4367 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4044.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_4367->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 89)) ;
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
    enumerator_4044.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                                              extensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_simpleCallInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@assignmentTargetNoSelfAST analyzeTargetForRoutineCall'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall (const cPtr_assignmentTargetAST * inObject,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                   const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
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
                                                                                   GALGAS_objectIR & outArgument_outCurrentObject,
                                                                                   GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetNoSelfAST * object = (const cPtr_assignmentTargetNoSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetNoSelfAST) ;
  const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 161)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 161)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_7908_2 ; // Joker input parameter
        GALGAS_bool joker_7908_1 ; // Joker input parameter
        GALGAS_bool joker_7939_2 ; // Joker input parameter
        GALGAS_bool joker_7939_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIdentifier, joker_7908_2, joker_7908_1, outArgument_outCurrentObject, joker_7939_2, joker_7939_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 164)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_8023_2 ; // Joker input parameter
        GALGAS_bool joker_8023_1 ; // Joker input parameter
        GALGAS_bool joker_8054_2 ; // Joker input parameter
        GALGAS_bool joker_8054_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mIdentifier, joker_8023_2, joker_8023_1, outArgument_outCurrentObject, joker_8054_2, joker_8054_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 166)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_8146_2 ; // Joker input parameter
        GALGAS_bool joker_8146_1 ; // Joker input parameter
        GALGAS_bool joker_8177_2 ; // Joker input parameter
        GALGAS_bool joker_8177_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mIdentifier, joker_8146_2, joker_8146_1, outArgument_outCurrentObject, joker_8177_2, joker_8177_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 168)) ;
        }
      }
      break ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("instruction-procedure-call.galgas", 170)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = object->mProperty_mIdentifier.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    outArgument_outGlobalVariableReceiverName = temp_1 ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 172)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 172)) ;
    outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("instruction-procedure-call.galgas", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_8572 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8572, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 177)) ;
    }
  }else if (kBoolFalse == test_3) {
    cEnumerator_accessInAssignmentListAST enumerator_8676 (object->mProperty_mAccessList, kENUMERATION_UP) ;
    while (enumerator_8676.hasCurrentObject ()) {
      switch (enumerator_8676.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_8908 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_8676.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_8908->mAssociatedValue0 ;
          {
          routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 182)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_9609 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_8676.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_9609->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfExpression = extractPtr_9609->mAssociatedValue1 ;
          {
          routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 189)) ;
          }
        }
        break ;
      }
      enumerator_8676.gotoNextObject () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall (void) {
  enterExtensionMethod_analyzeTargetForRoutineCall (kTypeDescriptor_GALGAS_assignmentTargetNoSelfAST.mSlotID,
                                                    extensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall (defineExtensionMethod_assignmentTargetNoSelfAST_analyzeTargetForRoutineCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@assignmentTargetSelfAST analyzeTargetForRoutineCall'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall (const cPtr_assignmentTargetAST * inObject,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                                 const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
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
                                                                                 GALGAS_objectIR & outArgument_outCurrentObject,
                                                                                 GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetSelfAST * object = (const cPtr_assignmentTargetSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetSelfAST) ;
  outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 232)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 233)), GALGAS_string ("'self' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 233)) ;
    outArgument_outCurrentObject.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 234)).getter_isStructure (SOURCE_FILE ("instruction-procedure-call.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_propertyMap var_structureObjectMap_11036 ;
      GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_11074 ;
      GALGAS_lstring joker_10999 ; // Joker input parameter
      GALGAS_propertyList joker_11076_2 ; // Joker input parameter
      GALGAS_uint joker_11076_1 ; // Joker input parameter
      constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 235)).method_structure (joker_10999, var_structureObjectMap_11036, var_universalMap_11074, joker_11076_2, joker_11076_1, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 235)) ;
      const enumGalgasBool test_3 = var_structureObjectMap_11036.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 237)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 237)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_object_11286 ;
        GALGAS_bool joker_11265 ; // Joker input parameter
        var_structureObjectMap_11036.method_searchKey (object->mProperty_mIdentifier, joker_11265, var_object_11286, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 238)) ;
        {
        routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_11286, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 243)) ;
        }
      }else if (kBoolFalse == test_3) {
        outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 251)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 251)) ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("instruction-procedure-call.galgas", 254)), GALGAS_string ("'self' should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 254)) ;
      outArgument_outCurrentObject.drop () ; // Release error dropped variable
      outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
    }
  }
  cEnumerator_accessInAssignmentListAST enumerator_11803 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_11803.hasCurrentObject ()) {
    switch (enumerator_11803.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_12019 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_11803.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_12019->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 260)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_12684 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_11803.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_12684->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_12684->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 267)) ;
        }
      }
      break ;
    }
    enumerator_11803.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall (void) {
  enterExtensionMethod_analyzeTargetForRoutineCall (kTypeDescriptor_GALGAS_assignmentTargetSelfAST.mSlotID,
                                                    extensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall (defineExtensionMethod_assignmentTargetSelfAST_analyzeTargetForRoutineCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@simpleCallInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_simpleCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_simpleCallInstructionAST * object = (const cPtr_simpleCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_simpleCallInstructionAST) ;
  GALGAS_lstring var_calledRoutineSignature_13615 = extensionGetter_routineSignature (object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 305)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_13837 ;
  GALGAS_routineDescriptor var_routineDescriptor_13883 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr (), object->mProperty_mSandAloneRoutineName, var_calledRoutineSignature_13615, var_LLVMInvocationRoutineName_13837, var_routineDescriptor_13883, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 307)) ;
  GALGAS_lstring var_routineMangledName_13951 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), object->mProperty_mSandAloneRoutineName, object->mProperty_mArguments, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 314)) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_13951 COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 320)) ;
  }
  GALGAS_calleeKindIR var_routineKindIR_14212 = function_checkMode (constinArgument_inCurrentMode, extensionGetter_executionMode (var_routineDescriptor_13883.getter_mRoutineKind (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 324)), var_routineDescriptor_13883.getter_mRoutineKind (HERE), object->mProperty_mSandAloneRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 322)) ;
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_14501 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-procedure-call.galgas", 329)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineDescriptor_13883.getter_mSignature (HERE), object->mProperty_mArguments, object->mProperty_mSandAloneRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_14501, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 330)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_objectIR::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 351)), var_routineMangledName_13951, var_LLVMInvocationRoutineName_13837, var_routineKindIR_14212, var_effectiveParameterListIR_14501  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 349))  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 349)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_simpleCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_simpleCallInstructionAST.mSlotID,
                                extensionMethod_simpleCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_simpleCallInstructionAST_analyze (defineExtensionMethod_simpleCallInstructionAST_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@complexCallInstructionAST analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_complexCallInstructionAST_analyze (const cPtr_instructionAST * inObject,
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
  const cPtr_complexCallInstructionAST * object = (const cPtr_complexCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complexCallInstructionAST) ;
  GALGAS_objectIR var_currentObject_16858 ;
  GALGAS_string var_globalVariableReceiverName_16921 ;
  callExtensionMethod_analyzeAssignmentTarget ((const cPtr_assignmentTargetAST *) object->mProperty_mAssignmentTargetAST.ptr (), constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_read (SOURCE_FILE ("instruction-procedure-call.galgas", 377)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_16858, var_globalVariableReceiverName_16921, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 375)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_17617 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_16921, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, object->mProperty_mArguments, object->mProperty_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_16858, var_returnedType_17617, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 393)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_17617.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 413)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value"), fixItArray1  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 414)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_complexCallInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_complexCallInstructionAST.mSlotID,
                                extensionMethod_complexCallInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_complexCallInstructionAST_analyze (defineExtensionMethod_complexCallInstructionAST_analyze, NULL) ;

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
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 67)) ;
  cEnumerator_switchCaseList enumerator_2846 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_2846.hasCurrentObject ()) {
    extensionMethod_noteInstructionListTypesInPrecedenceGraph (enumerator_2846.current_mCaseInstructionList (HERE), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 69)) ;
    enumerator_2846.gotoNextObject () ;
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
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_instructionListIR var_switchExpressionGenerationList_4106 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 92)) ;
  GALGAS_objectIR var_switchValueIRPossibleReference_4584 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 97)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4106, var_switchValueIRPossibleReference_4584, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
  GALGAS_objectIR var_switchValueIR_4752 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4584, object->mProperty_mEndOf_5F_test_5F_expression, var_switchValueIR_4752, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 107)) ;
  }
  GALGAS_enumConstantMap var_enumConstantMap_4818 ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_switchValueIR_4752, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 115)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_classConstantMap joker_4934_1 ; // Joker input parameter
    extensionGetter_kind (var_switchValueIR_4752, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)).method_enumeration (var_enumConstantMap_4818, joker_4934_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 116)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_4752, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 119)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 118)) ;
    var_enumConstantMap_4818.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_4752, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 122)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 123)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5256 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5256, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 126)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 127)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5366 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 128)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5408 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 129)) ;
  cEnumerator_switchCaseList enumerator_5472 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_5472.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_5513 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 131)) ;
    cEnumerator_lstringlist enumerator_5555 (enumerator_5472.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_5555.hasCurrentObject ()) {
      GALGAS_uint var_constantIdx_5623 ;
      var_enumConstantMap_4818.method_searchKey (enumerator_5555.current_mValue (HERE), var_constantIdx_5623, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 133)) ;
      var_caseIdentifierIndexList_5513.addAssign_operation (var_constantIdx_5623  COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5366.getter_hasKey (enumerator_5555.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 135)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_5555.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 136)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 136)) ;
      }
      var_usedEnumerationValues_5366.addAssign_operation (enumerator_5555.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 138))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)) ;
      enumerator_5555.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_5906 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 140)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_5472.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5906, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 141)) ;
    var_switchCaseListIR_5408.addAssign_operation (var_caseIdentifierIndexList_5513, var_instructionGenerationList_5906  COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)) ;
    enumerator_5472.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6626 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6626, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
  }
  cEnumerator_enumConstantMap enumerator_6828 (var_enumConstantMap_4818, kENUMERATION_UP) ;
  while (enumerator_6828.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5366.getter_hasKey (enumerator_6828.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 162)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 162)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_6828.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)) ;
    }
    enumerator_6828.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)), var_switchExpressionGenerationList_4106, var_switchValueIR_4752, var_switchCaseListIR_5408  COMMA_SOURCE_FILE ("instruction-switch.galgas", 167))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
  GALGAS_string var_labelOtherwise_8497 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 203)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8497, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
  cEnumerator_switchCaseListIR enumerator_8747 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8698 ((uint32_t) 0) ;
  while (enumerator_8747.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8810 (enumerator_8747.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8810.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (enumerator_8810.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (index_8698.getter_string (SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
      enumerator_8810.gotoNextObject () ;
    }
    enumerator_8747.gotoNextObject () ;
    index_8698.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 212)) ;
  cEnumerator_switchCaseListIR enumerator_9093 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_9050 ((uint32_t) 0) ;
  while (enumerator_9093.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)).add_operation (index_9050.getter_string (SOURCE_FILE ("instruction-switch.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
    extensionMethod_instructionListLLVMCode (enumerator_9093.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8497, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
    enumerator_9093.gotoNextObject () ;
    index_9050.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8497.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
  cEnumerator_switchCaseListIR enumerator_9840 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9840.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9840.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
    enumerator_9840.gotoNextObject () ;
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
//                                 Routine 'handleSubscriptInAssignmentAndExpression'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptInAssignmentAndExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                       const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                                       const GALGAS_bool constinArgument_inGuard,
                                                       const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                       const GALGAS_semanticContext constinArgument_inContext,
                                                       const GALGAS_mode constinArgument_inCurrentMode,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                                       GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                       const GALGAS_location constinArgument_inErrorLocation,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).getter_isArrayType (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 22)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = ioArgument_ioObjectPtr.getter_isRegisterReference (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inErrorLocation, ioArgument_ioInstructionGenerationList, ioArgument_ioObjectPtr, inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)) ;
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray2  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 58)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Routine 'handleSubscriptArrayInAssignmentAndExpression'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                            const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                            const GALGAS_bool constinArgument_inGuard,
                                                            const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inCurrentMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                            GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                            GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                            const GALGAS_location constinArgument_inErrorLocation,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_type_3322 ;
  GALGAS_bigint var_arraySize_3350 ;
  GALGAS_lstring joker_3299 ; // Joker input parameter
  GALGAS_classConstantMap joker_3352_2 ; // Joker input parameter
  GALGAS_uint joker_3352_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)).method_arrayType (joker_3299, var_type_3322, var_arraySize_3350, joker_3352_2, joker_3352_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)) ;
  GALGAS_objectIR var_indexResultPossibleReference_3855 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 88)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3855, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 84)) ;
  GALGAS_objectIR var_indexResult_4012 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3855, constinArgument_inErrorLocation, var_indexResult_4012, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_4012.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_4145 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4113_1 ; // Joker input parameter
    var_indexResult_4012.method_literalInteger (joker_4113_1, var_indexValue_4145, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_4145.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_4145.objectCompare (var_arraySize_3350)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_3350.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_4328 = GALGAS_objectIR::constructor_temporaryReference (var_type_3322, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 112)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 115)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_4328, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (var_indexValue_4145.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 119)), var_indexValue_4145.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 120)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)) ;
      }
      ioArgument_ioObjectPtr = var_result_4328 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_indexResult_4012, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 125)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_5030 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_4012, constinArgument_inErrorLocation, var_arraySize_3350, var_generatePanicInstruction_5030, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_5030 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 132)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 133)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_5233 = GALGAS_objectIR::constructor_temporaryReference (var_type_3322, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 139)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 136)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 142)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_5233, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (extensionGetter_name (var_indexResult_4012, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 146)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 146)), extensionGetter_llvmName (var_indexResult_4012, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 143)) ;
      }
      ioArgument_ioObjectPtr = var_result_5233 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 151)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Routine 'handleSubscriptArrayInAssignmentAndExpressionNew'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptArrayInAssignmentAndExpressionNew (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
                                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                               GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_type_6646 ;
  GALGAS_bigint var_arraySize_6674 ;
  GALGAS_lstring joker_6623 ; // Joker input parameter
  GALGAS_classConstantMap joker_6676_2 ; // Joker input parameter
  GALGAS_uint joker_6676_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 173)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 173)).method_arrayType (joker_6623, var_type_6646, var_arraySize_6674, joker_6676_2, joker_6676_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 173)) ;
  GALGAS_objectIR var_indexResultPossibleReference_7179 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 179)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_7179, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 175)) ;
  GALGAS_objectIR var_indexResult_7336 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_7179, constinArgument_inErrorLocation, var_indexResult_7336, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 189)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_7336.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 195)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_7469 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_7437_1 ; // Joker input parameter
    var_indexResult_7336.method_literalInteger (joker_7437_1, var_indexValue_7469, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 196)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_7469.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 197)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_7469.objectCompare (var_arraySize_6674)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_6674.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_7652 = GALGAS_objectIR::constructor_temporaryReference (var_type_6646, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 202)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 202)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 203)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 206)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_7652, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (var_indexValue_7469.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 210)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 210)), var_indexValue_7469.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 211)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 207)) ;
      }
      ioArgument_ioObjectPtr = var_result_7652 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_indexResult_7336, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 215)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 216)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_8354 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_7336, constinArgument_inErrorLocation, var_arraySize_6674, var_generatePanicInstruction_8354, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 217)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_8354 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 223)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 223)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 224)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_8557 = GALGAS_objectIR::constructor_temporaryReference (var_type_6646, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 229)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 229)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 230)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 227)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 233)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_8557, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (extensionGetter_name (var_indexResult_7336, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 237)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 237)), extensionGetter_llvmName (var_indexResult_7336, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 234)) ;
      }
      ioArgument_ioObjectPtr = var_result_8557 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 242)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Routine 'handleSubscriptRegisterArrayInAssignmentAndExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpression (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                    const GALGAS_bool /* constinArgument_inDirectAccessToPropertiesAllowed */,
                                                                    const GALGAS_bool constinArgument_inGuard,
                                                                    const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                                                    const GALGAS_semanticContext constinArgument_inContext,
                                                                    const GALGAS_mode constinArgument_inCurrentMode,
                                                                    GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                    GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                    GALGAS_unifiedSymbolMap & /* ioArgument_ioVariableMap */,
                                                                    GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                                    GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                    const GALGAS_expressionAST constinArgument_inIndexExpression,
                                                                    const GALGAS_location constinArgument_inErrorLocation,
                                                                    GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                    GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_10087 ;
  GALGAS_lstring var_registerName_10117 ;
  GALGAS_bool var_readable_10144 ;
  GALGAS_bool var_writable_10171 ;
  GALGAS_bigint var_registerAddress_10212 ;
  GALGAS_sliceMap var_registerBitSliceMap_10256 ;
  GALGAS_uint var_arraySize_10291 ;
  GALGAS_uint var_elementArraySize_10355 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_10087, var_registerName_10117, var_readable_10144, var_writable_10171, var_registerAddress_10212, var_registerBitSliceMap_10256, var_arraySize_10291, var_elementArraySize_10355, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 265)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_10291.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 276)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_10144.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 277)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 278)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_11120 ;
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 284)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_11120, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 280)) ;
      GALGAS_objectIR var_indexResult_11289 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_11120, constinArgument_inErrorLocation, var_indexResult_11289, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 294)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_11289.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 301)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_11455 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_11423_1 ; // Joker input parameter
        var_indexResult_11289.method_literalInteger (joker_11423_1, var_indexValue_11455, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 302)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_11455.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 303)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_11455.objectCompare (var_arraySize_10291.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 303)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_10291.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 304)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 304)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_10087, var_registerName_10117, var_readable_10144, var_writable_10171, var_registerAddress_10212.add_operation (var_indexValue_11455.multiply_operation (var_elementArraySize_10355.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 311)), var_registerBitSliceMap_10256, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 306)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_kind (var_indexResult_11289, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 318)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 318)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 319)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_12272 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_11289, constinArgument_inErrorLocation, var_arraySize_10291.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 323)), var_generatePanicInstruction_12272, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 320)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_12272 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 326)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 326)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 327)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_12487 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_10087, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 332)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 332)), var_registerBitSliceMap_10256, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 330)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 336)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_12487, var_indexResult_11289, var_registerAddress_10212, var_elementArraySize_10355.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 337)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_12487 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 345)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Routine 'handleSubscriptRegisterArrayInAssignmentAndExpressionNew'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
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
                                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                       GALGAS_objectIR & ioArgument_ioObjectPtr,
                                                                       GALGAS_sliceMap & outArgument_outSliceMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_13967 ;
  GALGAS_lstring var_registerName_13997 ;
  GALGAS_bool var_readable_14024 ;
  GALGAS_bool var_writable_14051 ;
  GALGAS_bigint var_registerAddress_14092 ;
  GALGAS_uint var_arraySize_14153 ;
  GALGAS_uint var_elementArraySize_14217 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_13967, var_registerName_13997, var_readable_14024, var_writable_14051, var_registerAddress_14092, outArgument_outSliceMap, var_arraySize_14153, var_elementArraySize_14217, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 368)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_14153.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 379)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_14024.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 381)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_14982 ;
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 387)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_14982, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 383)) ;
      GALGAS_objectIR var_indexResult_15151 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_14982, constinArgument_inErrorLocation, var_indexResult_15151, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 397)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_15151.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 404)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_15317 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_15285_1 ; // Joker input parameter
        var_indexResult_15151.method_literalInteger (joker_15285_1, var_indexValue_15317, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 405)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_15317.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 406)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_15317.objectCompare (var_arraySize_14153.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 406)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_14153.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 407)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 407)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_13967, var_registerName_13997, var_readable_14024, var_writable_14051, var_registerAddress_14092.add_operation (var_indexValue_15317.multiply_operation (var_elementArraySize_14217.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 414)), outArgument_outSliceMap, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 409)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_kind (var_indexResult_15151, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 421)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 421)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 422)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_16126 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_15151, constinArgument_inErrorLocation, var_arraySize_14153.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 426)), var_generatePanicInstruction_16126, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 423)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_16126 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 429)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 429)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 430)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_16375 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_13967, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 436)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 436)), outArgument_outSliceMap, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 434)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 440)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_16375, var_indexResult_15151, var_registerAddress_14092, var_elementArraySize_14217.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 441)) ;
          }
          GALGAS_objectIR var_loadedValueIR_17007 ;
          {
          extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddressObject_16375, constinArgument_inErrorLocation, var_loadedValueIR_17007, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 448)) ;
          }
          ioArgument_ioObjectPtr = var_loadedValueIR_17007 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 456)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@assignmentTargetNoSelfAST analyzeAssignmentTarget'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget (const cPtr_assignmentTargetAST * inObject,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                               const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
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
                                                                               GALGAS_objectIR & outArgument_outCurrentObject,
                                                                               GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetNoSelfAST * object = (const cPtr_assignmentTargetNoSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetNoSelfAST) ;
  const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("assignment-target.galgas", 154)) COMMA_SOURCE_FILE ("assignment-target.galgas", 154)).boolEnum () ;
  if (kBoolTrue == test_0) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_6774_2 ; // Joker input parameter
        GALGAS_bool joker_6774_1 ; // Joker input parameter
        GALGAS_bool joker_6805_2 ; // Joker input parameter
        GALGAS_bool joker_6805_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mIdentifier, joker_6774_2, joker_6774_1, outArgument_outCurrentObject, joker_6805_2, joker_6805_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 157)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_6889_2 ; // Joker input parameter
        GALGAS_bool joker_6889_1 ; // Joker input parameter
        GALGAS_bool joker_6920_2 ; // Joker input parameter
        GALGAS_bool joker_6920_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mIdentifier, joker_6889_2, joker_6889_1, outArgument_outCurrentObject, joker_6920_2, joker_6920_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 159)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        GALGAS_unifiedTypeMap_2D_proxy joker_7012_2 ; // Joker input parameter
        GALGAS_bool joker_7012_1 ; // Joker input parameter
        GALGAS_bool joker_7043_2 ; // Joker input parameter
        GALGAS_bool joker_7043_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mIdentifier, joker_7012_2, joker_7012_1, outArgument_outCurrentObject, joker_7043_2, joker_7043_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 161)) ;
        }
      }
      break ;
    }
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("assignment-target.galgas", 163)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = object->mProperty_mIdentifier.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    outArgument_outGlobalVariableReceiverName = temp_1 ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("assignment-target.galgas", 165)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("assignment-target.galgas", 165)) ;
    outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, object->mProperty_mAccessList.getter_length (SOURCE_FILE ("assignment-target.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    switch (constinArgument_inSelfAccessKind.enumValue ()) {
    case GALGAS_targetAccessKind::kNotBuilt:
      break ;
    case GALGAS_targetAccessKind::kEnum_read:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7484 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7484, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 172)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_write:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7590 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7590, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 174)) ;
        }
      }
      break ;
    case GALGAS_targetAccessKind::kEnum_readWrite:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_7700 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7700, object->mProperty_mIdentifier, outArgument_outCurrentObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 176)) ;
        }
      }
      break ;
    }
  }else if (kBoolFalse == test_3) {
    cEnumerator_accessInAssignmentListAST enumerator_7816 (object->mProperty_mAccessList, kENUMERATION_UP) ;
    while (enumerator_7816.hasCurrentObject ()) {
      switch (enumerator_7816.current_mAccess (HERE).enumValue ()) {
      case GALGAS_accessInAssignmentAST::kNotBuilt:
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_property:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_8048 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_7816.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_propertyName = extractPtr_8048->mAssociatedValue0 ;
          {
          routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 182)) ;
          }
        }
        break ;
      case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
        {
          const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_8749 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_7816.current_mAccess (HERE).unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_8749->mAssociatedValue0 ;
          const GALGAS_location extractedValue_endOfExpression = extractPtr_8749->mAssociatedValue1 ;
          {
          routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 189)) ;
          }
        }
        break ;
      }
      enumerator_7816.gotoNextObject () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget (void) {
  enterExtensionMethod_analyzeAssignmentTarget (kTypeDescriptor_GALGAS_assignmentTargetNoSelfAST.mSlotID,
                                                extensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget (defineExtensionMethod_assignmentTargetNoSelfAST_analyzeAssignmentTarget, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@assignmentTargetSelfAST analyzeAssignmentTarget'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget (const cPtr_assignmentTargetAST * inObject,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                                             const GALGAS_targetAccessKind /* constinArgument_inSelfAccessKind */,
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
                                                                             GALGAS_objectIR & outArgument_outCurrentObject,
                                                                             GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentTargetSelfAST * object = (const cPtr_assignmentTargetSelfAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentTargetSelfAST) ;
  outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("assignment-target.galgas", 232)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("assignment-target.galgas", 233)), GALGAS_string ("'self' is not available in this context"), fixItArray1  COMMA_SOURCE_FILE ("assignment-target.galgas", 233)) ;
    outArgument_outCurrentObject.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 234)).getter_isStructure (SOURCE_FILE ("assignment-target.galgas", 234)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_propertyMap var_structureObjectMap_10172 ;
      GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_10210 ;
      GALGAS_lstring joker_10135 ; // Joker input parameter
      GALGAS_propertyList joker_10212_2 ; // Joker input parameter
      GALGAS_uint joker_10212_1 ; // Joker input parameter
      constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 235)).method_structure (joker_10135, var_structureObjectMap_10172, var_universalMap_10210, joker_10212_2, joker_10212_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 235)) ;
      const enumGalgasBool test_3 = var_structureObjectMap_10172.getter_hasKey (object->mProperty_mIdentifier.getter_string (SOURCE_FILE ("assignment-target.galgas", 237)) COMMA_SOURCE_FILE ("assignment-target.galgas", 237)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_objectIR var_object_10422 ;
        GALGAS_bool joker_10401 ; // Joker input parameter
        var_structureObjectMap_10172.method_searchKey (object->mProperty_mIdentifier, joker_10401, var_object_10422, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 238)) ;
        {
        routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_10422, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 243)) ;
        }
      }else if (kBoolFalse == test_3) {
        outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("assignment-target.galgas", 251)), object->mProperty_mIdentifier  COMMA_SOURCE_FILE ("assignment-target.galgas", 251)) ;
      }
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mIdentifier.getter_location (SOURCE_FILE ("assignment-target.galgas", 254)), GALGAS_string ("'self' should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("assignment-target.galgas", 254)) ;
      outArgument_outCurrentObject.drop () ; // Release error dropped variable
      outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
    }
  }
  cEnumerator_accessInAssignmentListAST enumerator_10939 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_10939.hasCurrentObject ()) {
    switch (enumerator_10939.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_11155 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_10939.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_11155->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 260)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_11820 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_10939.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_11820->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_11820->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 267)) ;
        }
      }
      break ;
    }
    enumerator_10939.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget (void) {
  enterExtensionMethod_analyzeAssignmentTarget (kTypeDescriptor_GALGAS_assignmentTargetSelfAST.mSlotID,
                                                extensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentTargetSelfAST_analyzeAssignmentTarget (defineExtensionMethod_assignmentTargetSelfAST_analyzeAssignmentTarget, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'handleSelfAccessInAssignment'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handleSelfAccessInAssignment (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                           const GALGAS_objectIR constinArgument_inObject,
                                           GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                           GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                           GALGAS_objectIR & outArgument_outObjectPtr,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outObjectPtr.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("assignment-target.galgas", 297)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_12253 ;
    GALGAS_lstring var_name_12271 ;
    GALGAS_uint var_index_12288 ;
    constinArgument_inObject.method_property (var_type_12253, var_name_12271, var_index_12288, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 298)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_12253, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("assignment-target.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 301)), var_name_12271.getter_location (SOURCE_FILE ("assignment-target.galgas", 301))  COMMA_SOURCE_FILE ("assignment-target.galgas", 301)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("assignment-target.galgas", 302)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("assignment-target.galgas", 299)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 305)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_12271.getter_string (SOURCE_FILE ("assignment-target.galgas", 309)), var_index_12288, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 306)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("assignment-target.galgas", 313)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("assignment-target.galgas", 313)) ;
    outArgument_outObjectPtr.drop () ; // Release error dropped variable
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'handlePropertyAccessInAssignment'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInAssignment (GALGAS_objectIR & ioArgument_ioObject,
                                               const GALGAS_lstring constinArgument_inPropertyName,
                                               GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                               GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 325)).getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 325)).getter_isStructure (SOURCE_FILE ("assignment-target.galgas", 325)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_13169 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_13207 ;
    GALGAS_lstring joker_13132 ; // Joker input parameter
    GALGAS_propertyList joker_13209_2 ; // Joker input parameter
    GALGAS_uint joker_13209_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObject, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 326)).getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 326)).method_structure (joker_13132, var_structureObjectMap_13169, var_universalMap_13207, joker_13209_2, joker_13209_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 326)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_13169.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("assignment-target.galgas", 327)) COMMA_SOURCE_FILE ("assignment-target.galgas", 327)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_13343 ;
      GALGAS_bool joker_13322 ; // Joker input parameter
      var_structureObjectMap_13169.method_searchKey (constinArgument_inPropertyName, joker_13322, var_property_13343, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 328)) ;
      const enumGalgasBool test_2 = var_property_13343.getter_isProperty (SOURCE_FILE ("assignment-target.galgas", 329)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_13421 ;
        GALGAS_lstring var_name_13439 ;
        GALGAS_uint var_index_13456 ;
        var_property_13343.method_property (var_type_13421, var_name_13439, var_index_13456, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 330)) ;
        GALGAS_objectIR var_newObject_13479 = GALGAS_objectIR::constructor_temporaryReference (var_type_13421, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("assignment-target.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 333)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 333))  COMMA_SOURCE_FILE ("assignment-target.galgas", 333)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("assignment-target.galgas", 334)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("assignment-target.galgas", 331)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 337)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_13479, ioArgument_ioObject, var_name_13439.getter_string (SOURCE_FILE ("assignment-target.galgas", 341)), var_index_13456.getter_string (SOURCE_FILE ("assignment-target.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 338)) ;
        }
        ioArgument_ioObject = var_newObject_13479 ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 346)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray3  COMMA_SOURCE_FILE ("assignment-target.galgas", 346)) ;
        ioArgument_ioObject.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObject = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObject, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("assignment-target.galgas", 349)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("assignment-target.galgas", 352)), GALGAS_string ("the current object has no property"), fixItArray4  COMMA_SOURCE_FILE ("assignment-target.galgas", 352)) ;
    ioArgument_ioObject.drop () ; // Release error dropped variable
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 106)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 108)) ;
  cEnumerator_routineFormalArgumentList enumerator_4447 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4447.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4447.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 110)).add_operation (enumerator_4447.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 110)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 110)) ;
    enumerator_4447.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 112)) ;
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 124)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 126)) ;
  cEnumerator_effectiveArgumentListAST enumerator_5159 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5159.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5159.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 128)).add_operation (enumerator_5159.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 128)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 128)) ;
    enumerator_5159.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 130)) ;
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
                               GALGAS_routineTypedSignature & outArgument_outResult,
                               C_Compiler * /* inCompiler */
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  outArgument_outResult = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 139)) ;
  cEnumerator_routineFormalArgumentList enumerator_5683 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5683.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5774 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5683.current_mFormalArgumentTypeName (HERE), var_typeProxy_5774 COMMA_SOURCE_FILE ("context-routines.galgas", 141)) ;
    }
    outArgument_outResult.addAssign_operation (enumerator_5683.current_mFormalArgumentPassingMode (HERE), enumerator_5683.current_mSelector (HERE), var_typeProxy_5774  COMMA_SOURCE_FILE ("context-routines.galgas", 142)) ;
    enumerator_5683.gotoNextObject () ;
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
                                 GALGAS_unifiedSymbolMap & outArgument_outVariableMap,
                                 GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 15)) ;
  outArgument_outVariableMap = GALGAS_unifiedSymbolMap::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 16)) ;
  cEnumerator_moduleMap enumerator_1069 (constinArgument_inContext.getter_mModuleMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1069.hasCurrentObject ()) {
    GALGAS_lstring var_moduleTypeName_1095 = function_moduleMangledNameFromModuleName (enumerator_1069.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 19)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_moduleType_1162 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), var_moduleTypeName_1095, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 20)) ;
    {
    outArgument_outVariableMap.setter_insertModule (enumerator_1069.current_lkey (HERE), var_moduleType_1162, GALGAS_bool (false), GALGAS_objectIR::constructor_globalVariableReference (var_moduleType_1162, enumerator_1069.current_lkey (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 25)), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 21)) ;
    }
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_1552 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertModule ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1552, enumerator_1069.current_lkey (HERE), var_moduleType_1162, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 29)) ;
    }
    enumerator_1069.gotoNextObject () ;
  }
  cEnumerator_controlRegisterMap enumerator_1715 (constinArgument_inContext.getter_mControlRegisterMap (HERE), kENUMERATION_UP) ;
  while (enumerator_1715.hasCurrentObject ()) {
    GALGAS_bool var_registerIsReadable_1745 = extensionGetter_controlRegisterAccess (constinArgument_inRequiredMode, enumerator_1715.current (HERE).getter_mIsAccessibleInUserMode (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 33)) ;
    GALGAS_bool test_0 = var_registerIsReadable_1745 ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = enumerator_1715.current (HERE).getter_mIsReadOnly (HERE).operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 34)) ;
    }
    GALGAS_bool test_1 = test_0 ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 34)) ;
    }
    GALGAS_bool var_registerIsWritable_1847 = test_1 ;
    GALGAS_objectIR var_objectReference_1948 = GALGAS_objectIR::constructor_registerReference (enumerator_1715.current (HERE).getter_mType (HERE), enumerator_1715.current (HERE).getter_lkey (HERE), var_registerIsReadable_1745, var_registerIsWritable_1847, enumerator_1715.current (HERE).getter_mAddress (HERE), enumerator_1715.current (HERE).getter_mRegisterFieldAccessMap (HERE), enumerator_1715.current (HERE).getter_mArraySize (HERE), enumerator_1715.current (HERE).getter_mElementArraySize (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 35)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_2341 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertRegister ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2341, enumerator_1715.current (HERE).getter_lkey (HERE), var_registerIsReadable_1745, var_registerIsWritable_1847, var_objectReference_1948, inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 45)) ;
    }
    const enumGalgasBool test_2 = var_registerIsReadable_1745.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 51)).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      outArgument_outVariableMap.setter_insertInaccessibleControlRegister (enumerator_1715.current (HERE).getter_lkey (HERE), enumerator_1715.current (HERE).getter_mType (HERE), GALGAS_bool (false), var_objectReference_1948, GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 52)) ;
      }
    }else if (kBoolFalse == test_2) {
      GALGAS_bool test_3 = enumerator_1715.current (HERE).getter_mIsReadOnly (HERE) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = inArgument_inGlobalsAreConstant ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        outArgument_outVariableMap.setter_insertUsedConstant (enumerator_1715.current (HERE).getter_lkey (HERE), enumerator_1715.current (HERE).getter_mType (HERE), GALGAS_bool (true), var_objectReference_1948, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 61)) ;
        }
      }else if (kBoolFalse == test_4) {
        {
        outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_1715.current (HERE).getter_lkey (HERE), enumerator_1715.current (HERE).getter_mType (HERE), GALGAS_bool (true), var_objectReference_1948, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 70)) ;
        }
      }
    }
    enumerator_1715.gotoNextObject () ;
  }
  cEnumerator_globalConstantMap enumerator_3581 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_3581.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_3607 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_3607, enumerator_3581.current_lkey (HERE), enumerator_3581.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 82)) ;
    }
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_3581.current_lkey (HERE), extensionGetter_type (enumerator_3581.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 85)), GALGAS_bool (true), enumerator_3581.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 83)) ;
    }
    enumerator_3581.gotoNextObject () ;
  }
  cEnumerator_globalVariableMap enumerator_4050 (constinArgument_inContext.getter_mGlobalVariableMap (HERE), kENUMERATION_UP) ;
  while (enumerator_4050.hasCurrentObject ()) {
    GALGAS_objectIR var_objectIR_4070 = GALGAS_objectIR::constructor_globalVariableReference (enumerator_4050.current (HERE).getter_type (HERE), enumerator_4050.current (HERE).getter_lkey (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 94)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_4174 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_4174, enumerator_4050.current (HERE).getter_lkey (HERE), var_objectIR_4070, inArgument_inGlobalsAreConstant.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 95)) ;
    }
    GALGAS_bool var_writeAccess_4267 = enumerator_4050.current (HERE).getter_allowedAccessToAll (HERE) ;
    GALGAS_bool var_allowedAccess_4319 = var_writeAccess_4267 ;
    GALGAS_bool test_5 = inArgument_inGlobalsAreConstant ;
    if (kBoolTrue != test_5.boolEnum ()) {
      test_5 = enumerator_4050.current (HERE).getter_isConstant (HERE) ;
    }
    GALGAS_bool test_6 = test_5 ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = var_writeAccess_4267.operator_not (SOURCE_FILE ("unified-symbol-map.galgas", 98)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      outArgument_outVariableMap.setter_insertUsedConstant (enumerator_4050.current (HERE).getter_lkey (HERE), enumerator_4050.current (HERE).getter_type (HERE), var_allowedAccess_4319, var_objectIR_4070, extensionGetter_copyable (enumerator_4050.current (HERE).getter_type (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 104)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 99)) ;
      }
    }else if (kBoolFalse == test_7) {
      {
      outArgument_outVariableMap.setter_insertDefinedVariable (enumerator_4050.current (HERE).getter_lkey (HERE), enumerator_4050.current (HERE).getter_type (HERE), var_allowedAccess_4319, var_objectIR_4070, extensionGetter_copyable (enumerator_4050.current (HERE).getter_type (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 113)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 108)) ;
      }
    }
    enumerator_4050.gotoNextObject () ;
  }
  cEnumerator_internalRoutineMapForContext enumerator_5114 (constinArgument_inContext.getter_mRoutineMapForContext (HERE).getter_mInternalRoutineMapForContext (HERE), kENUMERATION_UP) ;
  while (enumerator_5114.hasCurrentObject ()) {
    cEnumerator_routineArgumentSignatureMapForContext enumerator_5186 (enumerator_5114.current (HERE).getter_mRoutineArgumentSignatureMapForContext (HERE), kENUMERATION_UP) ;
    while (enumerator_5186.hasCurrentObject ()) {
      {
      outArgument_outUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_5214 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
      callExtensionSetter_insertRoutine ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5214, enumerator_5114.current (HERE).getter_lkey (HERE), enumerator_5186.current (HERE).getter_lkey (HERE), enumerator_5186.current (HERE).getter_mRoutineLLVMName (HERE), enumerator_5186.current (HERE).getter_mDescriptor (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 121)) ;
      }
      enumerator_5186.gotoNextObject () ;
    }
    enumerator_5114.gotoNextObject () ;
  }
  const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_8) {
    GALGAS_lstring var_resultVarName_5507 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 131)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 131)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_resultType_5601 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 132)) ;
    GALGAS_objectIR var_objectIR_5692 = GALGAS_objectIR::constructor_localVariableReference (var_resultType_5601, var_resultVarName_5507  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 133)) ;
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_5792 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5792, var_resultVarName_5507, var_objectIR_5692, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("unified-symbol-map.galgas", 134)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 134)) ;
    }
    {
    outArgument_outVariableMap.setter_insertOutputFormalArgument (var_resultVarName_5507, var_resultType_5601, GALGAS_bool (true), var_objectIR_5692, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 135)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'variableMapWithConstants'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_variableMapWithConstants (const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_unifiedSymbolMap & outArgument_outVariableMap,
                                       GALGAS_universalPropertyAndRoutineMapForContext & outArgument_outUniversalMap,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outVariableMap.drop () ; // Release 'out' argument
  outArgument_outUniversalMap.drop () ; // Release 'out' argument
  outArgument_outVariableMap = GALGAS_unifiedSymbolMap::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 153)) ;
  outArgument_outUniversalMap = GALGAS_universalPropertyAndRoutineMapForContext::constructor_default (SOURCE_FILE ("unified-symbol-map.galgas", 154)) ;
  cEnumerator_globalConstantMap enumerator_6525 (constinArgument_inContext.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
  while (enumerator_6525.hasCurrentObject ()) {
    {
    outArgument_outUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_6551 = (cPtr_universalPropertyAndRoutineMapForContext *) outArgument_outUniversalMap.ptr () ;
    callExtensionSetter_insertGlobalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6551, enumerator_6525.current_lkey (HERE), enumerator_6525.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 157)) ;
    }
    {
    outArgument_outVariableMap.setter_insertUsedConstant (enumerator_6525.current_lkey (HERE), extensionGetter_type (enumerator_6525.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 160)), GALGAS_bool (true), enumerator_6525.current_mValue (HERE), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 158)) ;
    }
    enumerator_6525.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'getNewTempVariable'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_getNewTempVariable (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                 GALGAS_location inArgument_inErrorLocation,
                                 GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                 GALGAS_objectIR & outArgument_outTempVariable,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTempVariable.drop () ; // Release 'out' argument
  outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmTemporaryValue (constinArgument_inType, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("unified-symbol-map.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 179)), inArgument_inErrorLocation  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 179)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("unified-symbol-map.galgas", 180))  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 177)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("unified-symbol-map.galgas", 182)) ;
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
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1616 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 28)) ;
  cEnumerator_declarationListAST enumerator_1668 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_1668.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclaration *) enumerator_1668.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 30)) ;
    enumerator_1668.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mBootListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 32)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mInitListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 33)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mPanicClauseListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 34)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mProcedureListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 36)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGuardListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 38)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mControlRegisterDeclarationListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  cEnumerator_stringlist enumerator_2621 (var_precedenceGraph_1616.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 43)), kENUMERATION_UP) ;
  while (enumerator_2621.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2638 = enumerator_2621.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 44)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2638.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 45)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2638.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2638.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_string ("$u"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2833 = var_split_2638.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)) ;
        GALGAS_integerDeclaration var_declaration_2908 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (false), var_n_2833  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_2908.ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2638.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)).objectCompare (GALGAS_string ("$"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3072 = var_split_2638.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)) ;
          GALGAS_integerDeclaration var_declaration_3147 = GALGAS_integerDeclaration::constructor_new (GALGAS_bool (true), var_n_3072  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclaration *) var_declaration_3147.ptr (), var_precedenceGraph_1616, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
        }
      }
    }
    enumerator_2621.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 58)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3456 = var_precedenceGraph_1616.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 59)) ;
    GALGAS_string var_filePath_3502 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_bool joker_3600 ; // Joker input parameter
    var_s_3456.method_writeToFileWhenDifferentContents (var_filePath_3502, joker_3600, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 64)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1616.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 65)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3822 (var_precedenceGraph_1616.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 66)), kENUMERATION_UP) ;
    while (enumerator_3822.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3822.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), enumerator_3822.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 67)) ;
      enumerator_3822.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4036 ;
    GALGAS_lstringlist joker_3969 ; // Joker input parameter
    GALGAS_lstringlist joker_4044 ; // Joker input parameter
    var_precedenceGraph_1616.method_topologicalSort (outArgument_outDeclarationListAST, joker_3969, var_unsortedSemanticDeclarationListAST_4036, joker_4044, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 70)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4036.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4123 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4036.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 78)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 77)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)) ;
      cEnumerator_declarationListAST enumerator_4338 (var_unsortedSemanticDeclarationListAST_4036, kENUMERATION_UP) ;
      while (enumerator_4338.hasCurrentObject ()) {
        var_s_4123.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4338.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 81)) ;
        enumerator_4338.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4123, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 83)) ;
      cEnumerator_declarationListAST enumerator_4510 (var_unsortedSemanticDeclarationListAST_4036, kENUMERATION_UP) ;
      while (enumerator_4510.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclaration *) enumerator_4510.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclaration *) enumerator_4510.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 85)) ;
        enumerator_4510.gotoNextObject () ;
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
                                   GALGAS_staticlistValues_5F_listMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 209)) ;
  cEnumerator_initList enumerator_8704 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8704.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_8704.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 212)) ;
    enumerator_8704.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_8849 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8849.hasCurrentObject ()) {
    extensionMethod_enterInContext (enumerator_8849.current (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 216)) ;
    enumerator_8849.gotoNextObject () ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 219)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mProcedureListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 220)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 221)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 222)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 223)) ;
  cEnumerator_declarationListAST enumerator_9482 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_9482.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclaration *) enumerator_9482.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mProcedureListAST (HERE), outArgument_outSemanticContext, ioArgument_ioStaticListValueMap, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 226)) ;
    enumerator_9482.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 234)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 239)) ;
  }
  {
  routine_enterControlRegistersInContext (constinArgument_inAST.getter_mControlRegisterDeclarationListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 244)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 249)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 254)) ;
  cEnumerator_declarationListAST enumerator_10504 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_10504.hasCurrentObject ()) {
    callExtensionMethod_enterRoutinesInContext ((const cPtr_abstractDeclaration *) enumerator_10504.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mProcedureListAST (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 257)) ;
    enumerator_10504.gotoNextObject () ;
  }
  cEnumerator_staticlistValues_5F_listMap enumerator_10791 (ioArgument_ioStaticListValueMap, kENUMERATION_UP) ;
  while (enumerator_10791.hasCurrentObject ()) {
    GALGAS_lstring var_lkey_10807 = GALGAS_lstring::constructor_new (enumerator_10791.current_key (HERE), GALGAS_location::constructor_nowhere (SOURCE_FILE ("context.galgas", 265))  COMMA_SOURCE_FILE ("context.galgas", 265)) ;
    GALGAS_lstring var_elementTypePLMName_10866 = function_plmNameForStaticListElementType (var_lkey_10807, inCompiler COMMA_SOURCE_FILE ("context.galgas", 266)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_elementType_10928 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), var_elementTypePLMName_10866, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 267)) ;
    {
    outArgument_outSemanticContext.mProperty_mTypeMap.setter_insertType (function_plmNameForStaticListType (var_lkey_10807, inCompiler COMMA_SOURCE_FILE ("context.galgas", 269)), GALGAS_typeKind::constructor_arrayType (function_llvmNameForStaticListType (enumerator_10791.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("context.galgas", 271)).getter_nowhere (SOURCE_FILE ("context.galgas", 271)), var_elementType_10928, enumerator_10791.current_mList (HERE).getter_length (SOURCE_FILE ("context.galgas", 273)).getter_bigint (SOURCE_FILE ("context.galgas", 273)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("context.galgas", 274)), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("context.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_staticListType_11346 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (outArgument_outSemanticContext.getter_mTypeMap (HERE), function_plmNameForStaticListType (var_lkey_10807, inCompiler COMMA_SOURCE_FILE ("context.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 278)) ;
    {
    outArgument_outSemanticContext.mProperty_mGlobalConstantMap.setter_insertKey (var_lkey_10807, GALGAS_objectIR::constructor_globalVariableReference (var_staticListType_11346, var_lkey_10807  COMMA_SOURCE_FILE ("context.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 279)) ;
    }
    enumerator_10791.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("context.galgas", 285)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    cEnumerator_globalVarDeclarationList enumerator_11715 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
    while (enumerator_11715.hasCurrentObject ()) {
      extensionMethod_enterInContext (enumerator_11715.current (HERE), outArgument_outSemanticContext, ioArgument_ioGlobalLiteralStringMap, inCompiler COMMA_SOURCE_FILE ("context.galgas", 287)) ;
      enumerator_11715.gotoNextObject () ;
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
  GALGAS_lstring result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 298)).getter_nowhere (SOURCE_FILE ("context.galgas", 298)) ;
//---
  return result_outResult ;
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
  GALGAS_string var_typeDumpFilePath_8035 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 233)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_8152 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 235)) ;
    cEnumerator_unifiedTypeMap enumerator_8181 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_8181.hasCurrentObject ()) {
      var_firstLetterSet_8152.addAssign_operation (enumerator_8181.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 237)).getter_string (SOURCE_FILE ("types.galgas", 237))  COMMA_SOURCE_FILE ("types.galgas", 237)) ;
      enumerator_8181.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_8289 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_8323 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_8359 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_8359.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_8323.objectCompare (enumerator_8359.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_8323 = enumerator_8359.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 243)) ;
        var_tableOfTypeString_8289.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_8323.getter_uint (SOURCE_FILE ("types.galgas", 244)).getter_string (SOURCE_FILE ("types.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (var_currentFirstLetter_8323.getter_string (SOURCE_FILE ("types.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 244)) ;
      }
      var_tableOfTypeString_8289.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_8359.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 246)) ;
      enumerator_8359.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_8752 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 249)), inArgument_inTypeMap, var_firstLetterSet_8152, var_tableOfTypeString_8289 COMMA_SOURCE_FILE ("types.galgas", 248))) ;
    GALGAS_bool joker_8982 ; // Joker input parameter
    var_typeDumpString_8752.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_8035, joker_8982, inCompiler COMMA_SOURCE_FILE ("types.galgas", 254)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_8035, inCompiler COMMA_SOURCE_FILE ("types.galgas", 256)) ;
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
      result << extensionGetter_descriptionForHTMLFile (enumerator_1322.current_kind (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
      result << "</td><td>" ;
      result << extensionGetter_llvmTypeName (enumerator_1322.current_kind (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 66)).stringValue () ;
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
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 275)) ;
//---
  return result_outResult ;
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
                                                       const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inTargetAnnotationType,
                                                       const GALGAS_location & constinArgument_inErrorLocation,
                                                       const GALGAS_bool & constinArgument_inStaticTypeAllowed,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_outResult ; // Returned variable
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inTargetAnnotationType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 14)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = constinArgument_inSourceValue ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inTargetAnnotationType.objectCompare (extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 16)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outResult = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)).getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 18)).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 18)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1195 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_1176_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1176_1, var_value_1195, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
        GALGAS_bigint var_minTarget_1258 ;
        GALGAS_bigint var_maxTarget_1277 ;
        GALGAS_bool joker_1279_2 ; // Joker input parameter
        GALGAS_uint joker_1279_1 ; // Joker input parameter
        constinArgument_inTargetAnnotationType.getter_kind (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)).method_integer (var_minTarget_1258, var_maxTarget_1277, joker_1279_2, joker_1279_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1195.objectCompare (var_minTarget_1258)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1277.objectCompare (var_value_1195)) ;
        }
        const enumGalgasBool test_5 = test_4.boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("literal integer too large"), fixItArray6  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 22)) ;
          result_outResult.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_5) {
          result_outResult = extensionGetter_withType (constinArgument_inSourceValue, constinArgument_inTargetAnnotationType, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 24)) ;
        }
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inTargetAnnotationType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)).add_operation (extensionGetter_type (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 27)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 32)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_type (result_outResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 33)).getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 33)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 33)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the $").add_operation (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).add_operation (GALGAS_string (" static type is not allowed here"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)), fixItArray10  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)) ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkAssignmentCompatibility [5] = {
  & kTypeDescriptor_GALGAS_objectIR,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
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
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 68)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticStringMap = constinArgument_inGlobalLiteralStringMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_3520 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3520.hasCurrentObject ()) {
    GALGAS_lstring var_requiredProcedureMangledName_3560 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_3520.current (HERE).getter_mName (HERE), enumerator_3520.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 73)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_requiredProcedureMangledName_3560.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 74)) ;
    enumerator_3520.gotoNextObject () ;
  }
  cEnumerator_globalVarDeclarationList enumerator_3823 (constinArgument_inAST.getter_mGlobalVarDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_3823.hasCurrentObject ()) {
    extensionMethod_semanticAnalysis (enumerator_3823.current (HERE), constinArgument_inSemanticContext, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 78)) ;
    enumerator_3823.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_4001 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 84)) ;
  cEnumerator_declarationListAST enumerator_4061 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4061.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDeclaration *) enumerator_4061.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 86)) ;
    enumerator_4061.gotoNextObject () ;
  }
  extensionMethod_procedureSemanticAnalysis (constinArgument_inAST.getter_mProcedureListAST (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 93)), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 92)) ;
  extensionMethod_semanticAnalysis (constinArgument_inAST.getter_mTaskListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 98)) ;
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 104)), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 103)) ;
  extensionMethod_guardSemanticAnalysis (constinArgument_inAST.getter_mGuardListAST (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 110)), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 109)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 115)) ;
  extensionMethod_isrSemanticAnalysis (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 120)) ;
  cEnumerator_bootList enumerator_5322 (constinArgument_inAST.getter_mBootListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5322.hasCurrentObject ()) {
    extensionMethod_bootSemanticAnalysis (enumerator_5322.current (HERE), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 126)) ;
    enumerator_5322.gotoNextObject () ;
  }
  cEnumerator_initList enumerator_5515 (constinArgument_inAST.getter_mInitListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5515.hasCurrentObject ()) {
    extensionMethod_initSemanticAnalysis (enumerator_5515.current (HERE), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 133)) ;
    enumerator_5515.gotoNextObject () ;
  }
  cEnumerator_panicClauseListAST enumerator_5744 (constinArgument_inAST.getter_mPanicClauseListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_5744.hasCurrentObject ()) {
    extensionMethod_panicSemanticAnalysis (enumerator_5744.current (HERE), constinArgument_inSemanticContext, var_temporaries_4001, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 141)) ;
    enumerator_5744.gotoNextObject () ;
  }
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 148)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6209 = var_temporaries_4001.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 155)) ;
    GALGAS_string var_filePath_6278 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 156)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
    GALGAS_bool joker_6404 ; // Joker input parameter
    var_s_6209.method_writeToFileWhenDifferentContents (var_filePath_6278, joker_6404, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 157)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 160)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6573 = var_temporaries_4001.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 161)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6573.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6697 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6795 (var_undefinedNodeKeyList_6573, kENUMERATION_UP) ;
      while (enumerator_6795.hasCurrentObject ()) {
        var_s_6697.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6795.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
        enumerator_6795.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6697, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 167)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_7002 ;
      GALGAS_lstringlist var_unsortedLKeyList_7046 ;
      var_temporaries_4001.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_7002, var_unsortedLKeyList_7046 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 169)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_7046.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_7112 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7192 (var_unsortedLKeyList_7046, kENUMERATION_UP) ;
        while (enumerator_7192.hasCurrentObject ()) {
          var_s_7112.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7192.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 176)) ;
          enumerator_7192.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_7112, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 178)) ;
      }
    }
  }
}


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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 202)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, extensionGetter_type (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 203)).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 203)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 204)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 206)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 206)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 206)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 208)) ;
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_calleeKindIR::kNotBuilt:
    break ;
  case GALGAS_calleeKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 211)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_serviceFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 213)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_serviceFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 215)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_sectionFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_sectionFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 219)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_primitiveFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 221)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_primitiveFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 223)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeCall (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 225)) ;
    }
    break ;
  case GALGAS_calleeKindIR::kEnum_safeFromProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSafeImplementation (object->mProperty_mFunctionNameForGeneration.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 227)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 229)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9305 (object->mProperty_mArgumentList, kENUMERATION_UP) ;
  while (enumerator_9305.hasCurrentObject ()) {
    switch (enumerator_9305.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9305.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)).add_operation (extensionGetter_llvmName (enumerator_9305.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9305.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)).add_operation (extensionGetter_llvmName (enumerator_9305.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9305.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)).add_operation (extensionGetter_llvmName (enumerator_9305.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)) ;
      }
      break ;
    }
    if (enumerator_9305.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 240)) ;
    }
    enumerator_9305.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 242)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mGlobalVariableName  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 252)) ;
  }
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (object->mProperty_mFunctionMangledName.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 254)) ;
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
//                                           Routine 'enterFormalArguments'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterFormalArguments (const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_routineFormalArgumentList constinArgument_inFormalArgumentPassingMode,
                                   GALGAS_unifiedSymbolMap & ioArgument_ioVariableMap,
                                   GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListForGeneration & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentList enumerator_1306 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1306.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_1327 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1306.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1306.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1327, enumerator_1306.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 28)) ;
    GALGAS_objectIR var_objectIR_1501 = GALGAS_objectIR::constructor_localVariableReference (var_typeProxy_1327, enumerator_1306.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 29)) ;
    switch (enumerator_1306.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_1647 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_1647, enumerator_1306.current_mFormalArgumentName (HERE), var_objectIR_1501, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_1306.current_mFormalArgumentName (HERE), var_typeProxy_1327, GALGAS_bool (true), var_objectIR_1501, extensionGetter_copyable (var_typeProxy_1327, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 38)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 33)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_2005 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2005, enumerator_1306.current_mFormalArgumentName (HERE), var_objectIR_1501, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 42)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 42)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_1306.current_mFormalArgumentName (HERE), var_typeProxy_1327, GALGAS_bool (true), var_objectIR_1501, extensionGetter_copyable (var_typeProxy_1327, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 48)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 43)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_2379 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_2379, enumerator_1306.current_mFormalArgumentName (HERE), var_objectIR_1501, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 52)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 52)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_1306.current_mFormalArgumentName (HERE), var_typeProxy_1327, GALGAS_bool (true), var_objectIR_1501, extensionGetter_copyable (var_typeProxy_1327, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 58)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 53)) ;
        }
      }
      break ;
    }
    enumerator_1306.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'routineSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_routineSemanticAnalysis (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                      const GALGAS_mode constinArgument_inRoutineMode,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_routineFormalArgumentList constinArgument_inRoutineFormalArgumentList,
                                      const GALGAS_lstring constinArgument_inReturnTypeName,
                                      const GALGAS_instructionListAST constinArgument_inRoutineInstructionList,
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 86)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("$").add_operation (constinArgument_inSelfType.getter_key (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 86)) ;
  }
  GALGAS_lstring var_routineMangledName_3664 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 85)) ;
  GALGAS_unifiedSymbolMap var_variableMap_4008 ;
  GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_4068 ;
  {
  routine_initialVariableMap (constinArgument_inContext, constinArgument_inRoutineMode, GALGAS_bool (false), constinArgument_inReturnTypeName, var_variableMap_4008, var_universalMap_4068, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 91)) ;
  }
  GALGAS_routineFormalArgumentListForGeneration var_formalArguments_4160 = GALGAS_routineFormalArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 100)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_variableMap_4008, var_universalMap_4068, var_formalArguments_4160, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 101)) ;
  }
  const enumGalgasBool test_2 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_3664.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 109)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 109)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_3664, var_routineMangledName_3664, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
    }
  }
  GALGAS_allocaList var_allocaList_4621 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 116)) ;
  GALGAS_instructionListIR var_instructionGenerationList_4673 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 117)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_routineMangledName_3664, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticStringMap, var_variableMap_4008, var_universalMap_4068, var_allocaList_4621, var_instructionGenerationList_4673, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 118)) ;
  callExtensionMethod_checkLocalVariableFinalState ((const cPtr_universalPropertyAndRoutineMapForContext *) var_universalMap_4068.ptr (), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 134)) ;
  var_variableMap_4008.method_checkAutomatonStates (constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 135)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_3 ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-routines.galgas", 139)) ;
  }else if (kBoolFalse == test_4) {
    temp_3 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 141)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_5445 = temp_3 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_3664, constinArgument_inSelfType, var_routineMangledName_3664, var_formalArguments_4160, var_allocaList_4621, var_instructionGenerationList_4673, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_3664.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 150)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_5445, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 143)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedAdditionOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 3)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow = onceFunction_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedAdditionOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedAdditionOverflow ("panicCodeForUnsignedAdditionOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedAdditionOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForSignedAdditionOverflow'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 5)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedAdditionOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow) {
    gOnceFunctionResult_panicCodeForSignedAdditionOverflow = onceFunction_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedAdditionOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedAdditionOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedAdditionOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedAdditionOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedAdditionOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedAdditionOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedAdditionOverflow ("panicCodeForSignedAdditionOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedAdditionOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedAdditionOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Once function 'panicCodeForUnsignedSubtractOverflow'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("3", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 7)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow = onceFunction_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedSubtractOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedSubtractOverflow (NULL,
                                                                                  releaseOnceFunctionResult_panicCodeForUnsignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedSubtractOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                                     const GALGAS_location & /* inErrorLocation */
                                                                                     COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedSubtractOverflow ("panicCodeForUnsignedSubtractOverflow",
                                                                                      functionWithGenericHeader_panicCodeForUnsignedSubtractOverflow,
                                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                                      0,
                                                                                      functionArgs_panicCodeForUnsignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForSignedSubtractOverflow'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 9)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedSubtractOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow) {
    gOnceFunctionResult_panicCodeForSignedSubtractOverflow = onceFunction_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedSubtractOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedSubtractOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedSubtractOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedSubtractOverflow (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForSignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedSubtractOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedSubtractOverflow (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedSubtractOverflow ("panicCodeForSignedSubtractOverflow",
                                                                                    functionWithGenericHeader_panicCodeForSignedSubtractOverflow,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForSignedSubtractOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Once function 'panicCodeForUnsignedMultiplicationOverflow'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 11)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow = onceFunction_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedMultiplicationOverflow (NULL,
                                                                                        releaseOnceFunctionResult_panicCodeForUnsignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedMultiplicationOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedMultiplicationOverflow ("panicCodeForUnsignedMultiplicationOverflow",
                                                                                            functionWithGenericHeader_panicCodeForUnsignedMultiplicationOverflow,
                                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                                            0,
                                                                                            functionArgs_panicCodeForUnsignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Once function 'panicCodeForSignedMultiplicationOverflow'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 13)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedMultiplicationOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow) {
    gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow = onceFunction_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedMultiplicationOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow (void) {
  gOnceFunctionResult_panicCodeForSignedMultiplicationOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedMultiplicationOverflow (NULL,
                                                                                      releaseOnceFunctionResult_panicCodeForSignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedMultiplicationOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow (C_Compiler * inCompiler,
                                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                                         const GALGAS_location & /* inErrorLocation */
                                                                                         COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedMultiplicationOverflow ("panicCodeForSignedMultiplicationOverflow",
                                                                                          functionWithGenericHeader_panicCodeForSignedMultiplicationOverflow,
                                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                                          0,
                                                                                          functionArgs_panicCodeForSignedMultiplicationOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForUnsignedDivisionByZero'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 15)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForUnsignedDivisionByZero = onceFunction_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedDivisionByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedDivisionByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedDivisionByZero (NULL,
                                                                                releaseOnceFunctionResult_panicCodeForUnsignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedDivisionByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedDivisionByZero (C_Compiler * inCompiler,
                                                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedDivisionByZero ("panicCodeForUnsignedDivisionByZero",
                                                                                    functionWithGenericHeader_panicCodeForUnsignedDivisionByZero,
                                                                                    & kTypeDescriptor_GALGAS_bigint,
                                                                                    0,
                                                                                    functionArgs_panicCodeForUnsignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'panicCodeForSignedDivisionByZero'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 17)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedDivisionByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedDivisionByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero) {
    gOnceFunctionResult_panicCodeForSignedDivisionByZero = onceFunction_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedDivisionByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedDivisionByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedDivisionByZero (void) {
  gOnceFunctionResult_panicCodeForSignedDivisionByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedDivisionByZero (NULL,
                                                                              releaseOnceFunctionResult_panicCodeForSignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedDivisionByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedDivisionByZero (C_Compiler * inCompiler,
                                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedDivisionByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedDivisionByZero ("panicCodeForSignedDivisionByZero",
                                                                                  functionWithGenericHeader_panicCodeForSignedDivisionByZero,
                                                                                  & kTypeDescriptor_GALGAS_bigint,
                                                                                  0,
                                                                                  functionArgs_panicCodeForSignedDivisionByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Once function 'panicCodeForUnsignedRemainderByZero'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 19)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForUnsignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForUnsignedRemainderByZero = onceFunction_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForUnsignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForUnsignedRemainderByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForUnsignedRemainderByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForUnsignedRemainderByZero (NULL,
                                                                                 releaseOnceFunctionResult_panicCodeForUnsignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForUnsignedRemainderByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForUnsignedRemainderByZero (C_Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GALGAS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForUnsignedRemainderByZero ("panicCodeForUnsignedRemainderByZero",
                                                                                     functionWithGenericHeader_panicCodeForUnsignedRemainderByZero,
                                                                                     & kTypeDescriptor_GALGAS_bigint,
                                                                                     0,
                                                                                     functionArgs_panicCodeForUnsignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Once function 'panicCodeForSignedRemainderByZero'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("10", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 21)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForSignedRemainderByZero ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForSignedRemainderByZero (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero) {
    gOnceFunctionResult_panicCodeForSignedRemainderByZero = onceFunction_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForSignedRemainderByZero = true ;
  }
  return gOnceFunctionResult_panicCodeForSignedRemainderByZero ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForSignedRemainderByZero (void) {
  gOnceFunctionResult_panicCodeForSignedRemainderByZero.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForSignedRemainderByZero (NULL,
                                                                               releaseOnceFunctionResult_panicCodeForSignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForSignedRemainderByZero [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForSignedRemainderByZero (C_Compiler * inCompiler,
                                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                                  const GALGAS_location & /* inErrorLocation */
                                                                                  COMMA_LOCATION_ARGS) {
  return function_panicCodeForSignedRemainderByZero (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForSignedRemainderByZero ("panicCodeForSignedRemainderByZero",
                                                                                   functionWithGenericHeader_panicCodeForSignedRemainderByZero,
                                                                                   & kTypeDescriptor_GALGAS_bigint,
                                                                                   0,
                                                                                   functionArgs_panicCodeForSignedRemainderByZero) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Once function 'panicCodeForConvertOverflow'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForConvertOverflow (C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("11", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 25)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForConvertOverflow = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForConvertOverflow ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForConvertOverflow (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForConvertOverflow) {
    gOnceFunctionResult_panicCodeForConvertOverflow = onceFunction_panicCodeForConvertOverflow (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForConvertOverflow = true ;
  }
  return gOnceFunctionResult_panicCodeForConvertOverflow ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForConvertOverflow (void) {
  gOnceFunctionResult_panicCodeForConvertOverflow.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForConvertOverflow (NULL,
                                                                         releaseOnceFunctionResult_panicCodeForConvertOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForConvertOverflow [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForConvertOverflow (C_Compiler * inCompiler,
                                                                            const cObjectArray & /* inEffectiveParameterArray */,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  return function_panicCodeForConvertOverflow (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForConvertOverflow ("panicCodeForConvertOverflow",
                                                                             functionWithGenericHeader_panicCodeForConvertOverflow,
                                                                             & kTypeDescriptor_GALGAS_bigint,
                                                                             0,
                                                                             functionArgs_panicCodeForConvertOverflow) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'panicCodeForClosedSync'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForClosedSync (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("13", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 33)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForClosedSync = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForClosedSync ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForClosedSync (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForClosedSync) {
    gOnceFunctionResult_panicCodeForClosedSync = onceFunction_panicCodeForClosedSync (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForClosedSync = true ;
  }
  return gOnceFunctionResult_panicCodeForClosedSync ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForClosedSync (void) {
  gOnceFunctionResult_panicCodeForClosedSync.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForClosedSync (NULL,
                                                                    releaseOnceFunctionResult_panicCodeForClosedSync) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForClosedSync [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForClosedSync (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_panicCodeForClosedSync (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForClosedSync ("panicCodeForClosedSync",
                                                                        functionWithGenericHeader_panicCodeForClosedSync,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_panicCodeForClosedSync) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'panicCodeForNegativeArrayIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("14", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 37)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForNegativeArrayIndex ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForNegativeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex) {
    gOnceFunctionResult_panicCodeForNegativeArrayIndex = onceFunction_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForNegativeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForNegativeArrayIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForNegativeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForNegativeArrayIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForNegativeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForNegativeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForNegativeArrayIndex [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForNegativeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForNegativeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForNegativeArrayIndex ("panicCodeForNegativeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForNegativeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForNegativeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Once function 'panicCodeForTooLargeArrayIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint onceFunction_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_outResult ; // Returned variable
  result_outResult = GALGAS_bigint ("15", inCompiler  COMMA_SOURCE_FILE ("panic-codes.galgas", 39)) ;
//---
  return result_outResult ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = false ;
static GALGAS_bigint gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_panicCodeForTooLargeArrayIndex (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex) {
    gOnceFunctionResult_panicCodeForTooLargeArrayIndex = onceFunction_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_panicCodeForTooLargeArrayIndex = true ;
  }
  return gOnceFunctionResult_panicCodeForTooLargeArrayIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex (void) {
  gOnceFunctionResult_panicCodeForTooLargeArrayIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_panicCodeForTooLargeArrayIndex (NULL,
                                                                            releaseOnceFunctionResult_panicCodeForTooLargeArrayIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_panicCodeForTooLargeArrayIndex [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_panicCodeForTooLargeArrayIndex (C_Compiler * inCompiler,
                                                                               const cObjectArray & /* inEffectiveParameterArray */,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  return function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_panicCodeForTooLargeArrayIndex ("panicCodeForTooLargeArrayIndex",
                                                                                functionWithGenericHeader_panicCodeForTooLargeArrayIndex,
                                                                                & kTypeDescriptor_GALGAS_bigint,
                                                                                0,
                                                                                functionArgs_panicCodeForTooLargeArrayIndex) ;

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
//                                            Once function 'equatableFlag'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_equatableFlag (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 0U) COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 17)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_equatableFlag = false ;
static GALGAS_uint gOnceFunctionResult_equatableFlag ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_equatableFlag (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_equatableFlag) {
    gOnceFunctionResult_equatableFlag = onceFunction_equatableFlag (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_equatableFlag = true ;
  }
  return gOnceFunctionResult_equatableFlag ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_equatableFlag (void) {
  gOnceFunctionResult_equatableFlag.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_equatableFlag (NULL,
                                                           releaseOnceFunctionResult_equatableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_equatableFlag [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_equatableFlag (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_equatableFlag (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_equatableFlag ("equatableFlag",
                                                               functionWithGenericHeader_equatableFlag,
                                                               & kTypeDescriptor_GALGAS_uint,
                                                               0,
                                                               functionArgs_equatableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'instanciableFlag'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_instanciableFlag (C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 1U) COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_instanciableFlag = false ;
static GALGAS_uint gOnceFunctionResult_instanciableFlag ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_instanciableFlag (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instanciableFlag) {
    gOnceFunctionResult_instanciableFlag = onceFunction_instanciableFlag (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instanciableFlag = true ;
  }
  return gOnceFunctionResult_instanciableFlag ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_instanciableFlag (void) {
  gOnceFunctionResult_instanciableFlag.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_instanciableFlag (NULL,
                                                              releaseOnceFunctionResult_instanciableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_instanciableFlag [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_instanciableFlag (C_Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GALGAS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_instanciableFlag (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_instanciableFlag ("instanciableFlag",
                                                                  functionWithGenericHeader_instanciableFlag,
                                                                  & kTypeDescriptor_GALGAS_uint,
                                                                  0,
                                                                  functionArgs_instanciableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Once function 'copyableFlag'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint onceFunction_copyableFlag (C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 1U).left_shift_operation (GALGAS_uint ((uint32_t) 2U) COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 19)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_copyableFlag = false ;
static GALGAS_uint gOnceFunctionResult_copyableFlag ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint function_copyableFlag (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableFlag) {
    gOnceFunctionResult_copyableFlag = onceFunction_copyableFlag (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableFlag = true ;
  }
  return gOnceFunctionResult_copyableFlag ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_copyableFlag (void) {
  gOnceFunctionResult_copyableFlag.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_copyableFlag (NULL,
                                                          releaseOnceFunctionResult_copyableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_copyableFlag [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_copyableFlag (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_copyableFlag (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_copyableFlag ("copyableFlag",
                                                              functionWithGenericHeader_copyableFlag,
                                                              & kTypeDescriptor_GALGAS_uint,
                                                              0,
                                                              functionArgs_copyableFlag) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Function 'llvmRegularTypeMangledNameFromName'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmRegularTypeMangledNameFromName (const GALGAS_lstring & constinArgument_inName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 26)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 26)) ;
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
  result_result = GALGAS_lstring::constructor_new (constinArgument_inModuleName.getter_string (HERE).add_operation (GALGAS_string ("$"), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)), constinArgument_inModuleName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 32)) ;
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

GALGAS_lstring function_initNameForInvocationGraph (const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inReceiverType,
                                                    const GALGAS_lbigint & constinArgument_inPriority,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2171 = GALGAS_string ("init") ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("generated-code-prefixes.galgas", 49)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_s_2171.plusAssign_operation(GALGAS_string (" $").add_operation (constinArgument_inReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 50)) ;
  }
  var_s_2171.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 52)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2171, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 53)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMap_2D_proxy operand0 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

