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
  GALGAS_objectIR var_variableIR_14277 ;
  GALGAS_location var_errorLocation_14303 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_14499 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_14499->mAssociatedValue0 ;
      var_errorLocation_14303 = extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 364)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_14442 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14442, extractedValue_identifier, var_variableIR_14277, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 365)) ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_15496 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15496->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_15496->mAssociatedValue1 ;
      const enumGalgasBool test_0 = extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 367)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 367)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_errorLocation_14303 = extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 368)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_14736 ;
        GALGAS_lstring joker_14703_2 ; // Joker input parameter
        GALGAS_propertyMap joker_14703_1 ; // Joker input parameter
        GALGAS_propertyList joker_14738_2 ; // Joker input parameter
        GALGAS_uint joker_14738_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 369)).method_structure (joker_14703_2, joker_14703_1, var_structureMap_14736, joker_14738_2, joker_14738_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 369)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_14753 = var_structureMap_14736 ;
        GALGAS_objectIR var_masterPropertyIR_14857 ;
        {
        var_m_14753.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_14779 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_14753.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_14779, extractedValue_propertyName, var_masterPropertyIR_14857, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 371)) ;
        }
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 372)) ;
        var_variableIR_14277 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_14857, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 374)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 375)), extractedValue_propertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 375))  COMMA_SOURCE_FILE ("expression-primary.galgas", 375)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 376)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 373)) ;
        GALGAS_uint var_index_15215 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_15186 ; // Joker input parameter
        GALGAS_lstring joker_15197 ; // Joker input parameter
        var_masterPropertyIR_14857.method_property (joker_15186, joker_15197, var_index_15215, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 379)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_variableIR_14277, extractedValue_currentPointerIR, extractedValue_propertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 383)), var_index_15215.getter_string (SOURCE_FILE ("expression-primary.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 380)) ;
        }
      }else if (kBoolFalse == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 387)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 387)) ;
        var_variableIR_14277.drop () ; // Release error dropped variable
        var_errorLocation_14303.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_15639 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_15639->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_15639->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 390)), GALGAS_string ("this object is not an array"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 390)) ;
      var_variableIR_14277.drop () ; // Release error dropped variable
      var_errorLocation_14303.drop () ; // Release error dropped variable
    }
    break ;
  }
  const enumGalgasBool test_3 = extensionGetter_type (var_variableIR_14277, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 393)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 393)).getter_isArrayType (SOURCE_FILE ("expression-primary.galgas", 393)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    routine_handleSubscriptArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_14277, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 394)) ;
    }
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = var_variableIR_14277.getter_isRegisterReference (SOURCE_FILE ("expression-primary.galgas", 409)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_handleSubscriptRegisterArrayInAssignmentAndExpressionNew (constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, constinArgument_inIndexExpression, constinArgument_inEndOfIndex, ioArgument_ioInstructionGenerationList, var_variableIR_14277, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 410)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_errorLocation_14303, GALGAS_string ("the receiver is not an array and does not accept subscripting"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 426)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Routine 'handlePropertyAccessInExpressionNew'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_handlePropertyAccessInExpressionNew (GALGAS_internalRepresentation & ioArgument_ioInternalRepresentation,
                                                  const GALGAS_lstring constinArgument_inPropertyName,
                                                  const GALGAS_lstring /* constinArgument_inCallerNameForInvocationGraph */,
                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inOptionalTargetType */,
                                                  const GALGAS_semanticContext constinArgument_inContext,
                                                  const GALGAS_mode /* constinArgument_inCurrentMode */,
                                                  GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                  GALGAS_staticStringMap & /* ioArgument_ioGlobalLiteralStringMap */,
                                                  GALGAS_universalPropertyAndRoutineMapForContext & ioArgument_ioUniversalMap,
                                                  GALGAS_allocaList & /* ioArgument_ioAllocaList */,
                                                  GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_21272 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_21272->mAssociatedValue0 ;
      GALGAS_objectIR var_objectIR_17814 ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_17746 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_17746, extractedValue_identifier, var_objectIR_17814, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 447)) ;
      }
      switch (var_objectIR_17814.enumValue ()) {
      case GALGAS_objectIR::kNotBuilt:
        break ;
      case GALGAS_objectIR::kEnum_globalVariableReference:
        {
          const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_18155 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (var_objectIR_17814.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_18155->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_18155->mAssociatedValue1 ;
          const enumGalgasBool test_0 = extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 450)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 450)).boolEnum () ;
          if (kBoolTrue == test_0) {
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_17814  COMMA_SOURCE_FILE ("expression-primary.galgas", 451)) ;
          }else if (kBoolFalse == test_0) {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 453)), GALGAS_string ("this should be a structure instance"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 453)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_null:
        {
        }
        break ;
      case GALGAS_objectIR::kEnum_selfObject:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 457)), GALGAS_string ("\xC2""\xAB""selfObject\xC2""\xBB"" invalid here"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary.galgas", 457)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_localVariableReference:
        {
          const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_18791 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (var_objectIR_17814.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_18791->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmName = extractPtr_18791->mAssociatedValue1 ;
          const enumGalgasBool test_3 = extractedValue_type.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 459)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 459)).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_objectIR var_objectIR_18418 = GALGAS_objectIR::constructor_llvmTemporaryValue (extractedValue_type, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("expression-primary.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 462)), extractedValue_plmName.getter_location (SOURCE_FILE ("expression-primary.galgas", 462))  COMMA_SOURCE_FILE ("expression-primary.galgas", 462)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 462))  COMMA_SOURCE_FILE ("expression-primary.galgas", 460)) ;
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_objectIR_18418  COMMA_SOURCE_FILE ("expression-primary.galgas", 464)) ;
          }else if (kBoolFalse == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 466)), GALGAS_string ("this should be a structure instance"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 466)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_registerReference:
        {
          const cEnumAssociatedValues_objectIR_registerReference * extractPtr_20312 = (const cEnumAssociatedValues_objectIR_registerReference *) (var_objectIR_17814.unsafePointer ()) ;
          const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_20312->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_plmRegisterName = extractPtr_20312->mAssociatedValue1 ;
          const GALGAS_bigint extractedValue_address = extractPtr_20312->mAssociatedValue4 ;
          const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_20312->mAssociatedValue5 ;
          const GALGAS_uint extractedValue_arraySize = extractPtr_20312->mAssociatedValue6 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, extractedValue_arraySize.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 475)), GALGAS_string ("register is an array, dot notation unavailable"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 475)) ;
            ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            GALGAS_objectIR var_registerIR_19320 ;
            {
            routine_getNewTempVariable (extractedValue_type, extractedValue_plmRegisterName.getter_location (SOURCE_FILE ("expression-primary.galgas", 477)), ioArgument_ioTemporaries, var_registerIR_19320, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 477)) ;
            }
            {
            extensionSetter_appendLoadVolatileRegister (ioArgument_ioInstructionGenerationList, var_registerIR_19320, extractedValue_address, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 478)) ;
            }
            GALGAS_llvmBinaryOperation var_accessOperator_19514 ;
            GALGAS_bigint var_accessRightOperand_19556 ;
            GALGAS_sliceMap var_resultSliceMap_19596 ;
            GALGAS_unifiedTypeMap_2D_proxy var_resultType_19644 ;
            extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_19514, var_accessRightOperand_19556, var_resultSliceMap_19596, var_resultType_19644, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 479)) ;
            GALGAS_objectIR var_resultObject_19679 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_19644, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 488)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 488))  COMMA_SOURCE_FILE ("expression-primary.galgas", 488)), var_resultSliceMap_19596  COMMA_SOURCE_FILE ("expression-primary.galgas", 486)) ;
            ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 491)) ;
            {
            extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_19679, extensionGetter_type (var_registerIR_19320, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 494)), constinArgument_inPropertyName.getter_location (HERE), var_registerIR_19320, var_accessOperator_19514, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_19556  COMMA_SOURCE_FILE ("expression-primary.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 492)) ;
            }
            ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_19596, var_resultObject_19679  COMMA_SOURCE_FILE ("expression-primary.galgas", 500)) ;
          }
        }
        break ;
      case GALGAS_objectIR::kEnum_temporaryReference:
        {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 503)), GALGAS_string ("\xC2""\xAB""temporaryReference\xC2""\xBB"" invalid here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 503)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 505)), GALGAS_string ("\xC2""\xAB""property\xC2""\xBB"" invalid here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 505)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmTemporaryValue:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 507)), GALGAS_string ("\xC2""\xAB""llvmTemporaryValue\xC2""\xBB"" invalid here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 507)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalInteger:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 509)), GALGAS_string ("\xC2""\xAB""literalInteger\xC2""\xBB"" invalid here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 509)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_llvmStructureConstant:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 511)), GALGAS_string ("\xC2""\xAB""llvmStructureConstant\xC2""\xBB"" invalid here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 511)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_literalString:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 513)), GALGAS_string ("a global string constant is invalid here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 513)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_zero:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 515)), GALGAS_string ("\xC2""\xAB""zero\xC2""\xBB"" invalid here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 515)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_objectIR::kEnum_possibleFunction:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_identifier.getter_location (SOURCE_FILE ("expression-primary.galgas", 517)), GALGAS_string ("\xC2""\xAB""possibleFunction\xC2""\xBB"" invalid here"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 517)) ;
          ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_22354 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterPropertyName = extractPtr_22354->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointer = extractPtr_22354->mAssociatedValue1 ;
      const enumGalgasBool test_15 = extensionGetter_kind (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 520)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 520)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_universalPropertyAndRoutineMapForContext var_structureMap_21455 ;
        GALGAS_lstring joker_21422_2 ; // Joker input parameter
        GALGAS_propertyMap joker_21422_1 ; // Joker input parameter
        GALGAS_propertyList joker_21457_2 ; // Joker input parameter
        GALGAS_uint joker_21457_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointer, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 521)).method_structure (joker_21422_2, joker_21422_1, var_structureMap_21455, joker_21457_2, joker_21457_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 521)) ;
        GALGAS_universalPropertyAndRoutineMapForContext var_m_21472 = var_structureMap_21455 ;
        GALGAS_objectIR var_masterPropertyIR_21582 ;
        {
        var_m_21472.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_21498 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_21472.ptr () ;
        callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_21498, extractedValue_masterPropertyName, var_masterPropertyIR_21582, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 523)) ;
        }
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 524)) ;
        GALGAS_objectIR var_newObject_21642 = GALGAS_objectIR::constructor_temporaryReference (extensionGetter_type (var_masterPropertyIR_21582, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 526)), GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 527)), extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 527))  COMMA_SOURCE_FILE ("expression-primary.galgas", 527)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 528)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 525)) ;
        GALGAS_uint var_index_21949 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_21920 ; // Joker input parameter
        GALGAS_lstring joker_21931 ; // Joker input parameter
        var_masterPropertyIR_21582.method_property (joker_21920, joker_21931, var_index_21949, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 531)) ;
        {
        extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_21642, extractedValue_currentPointer, extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 535)), var_index_21949.getter_string (SOURCE_FILE ("expression-primary.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 532)) ;
        }
        ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_structureMember (constinArgument_inPropertyName, var_masterPropertyIR_21582  COMMA_SOURCE_FILE ("expression-primary.galgas", 538)) ;
      }else if (kBoolFalse == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (extractedValue_masterPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 540)), GALGAS_string ("'").add_operation (extractedValue_masterPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)).add_operation (GALGAS_string ("' should be a structure"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 540)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 540)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_23228 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_23228->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentObject = extractPtr_23228->mAssociatedValue1 ;
      GALGAS_llvmBinaryOperation var_accessOperator_22510 ;
      GALGAS_bigint var_accessRightOperand_22548 ;
      GALGAS_sliceMap var_resultSliceMap_22584 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_22628 ;
      extractedValue_sliceMap.method_searchKey (constinArgument_inPropertyName, var_accessOperator_22510, var_accessRightOperand_22548, var_resultSliceMap_22584, var_resultType_22628, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 543)) ;
      GALGAS_objectIR var_resultObject_22655 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_22628, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 552)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 552))  COMMA_SOURCE_FILE ("expression-primary.galgas", 552)), var_resultSliceMap_22584  COMMA_SOURCE_FILE ("expression-primary.galgas", 550)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 555)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_22655, extensionGetter_type (extractedValue_currentObject, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 558)), constinArgument_inPropertyName.getter_location (HERE), extractedValue_currentObject, var_accessOperator_22510, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_22548  COMMA_SOURCE_FILE ("expression-primary.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 556)) ;
      }
      ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (var_resultSliceMap_22584, var_resultObject_22655  COMMA_SOURCE_FILE ("expression-primary.galgas", 564)) ;
    }
    break ;
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
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a routine cannot be called in guard"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 587)) ;
  }
  GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_24281 = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 590)) ;
  GALGAS_universalPropertyAndRoutineMapForContext var_currentMap_24341 ;
  GALGAS_lstring var_functionName_24366 ;
  GALGAS_lstring var_routineMangledName_24396 ;
  switch (ioArgument_ioInternalRepresentation.enumValue ()) {
  case GALGAS_internalRepresentation::kNotBuilt:
    break ;
  case GALGAS_internalRepresentation::kEnum_standAloneIdentifier:
    {
      const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier * extractPtr_24652 = (const cEnumAssociatedValues_internalRepresentation_standAloneIdentifier *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_identifier = extractPtr_24652->mAssociatedValue0 ;
      var_currentMap_24341 = ioArgument_ioUniversalMap ;
      var_functionName_24366 = extractedValue_identifier ;
      var_routineMangledName_24396 = function_routineMangledNameFromCall (GALGAS_string::makeEmptyString (), extractedValue_identifier, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 598)) ;
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_structureMember:
    {
      const cEnumAssociatedValues_internalRepresentation_structureMember * extractPtr_25288 = (const cEnumAssociatedValues_internalRepresentation_structureMember *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25288->mAssociatedValue0 ;
      const GALGAS_objectIR extractedValue_currentPointerIR = extractPtr_25288->mAssociatedValue1 ;
      const enumGalgasBool test_2 = extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 600)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 600)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_lstring joker_24821_2 ; // Joker input parameter
        GALGAS_propertyMap joker_24821_1 ; // Joker input parameter
        GALGAS_propertyList joker_24850_2 ; // Joker input parameter
        GALGAS_uint joker_24850_1 ; // Joker input parameter
        extensionGetter_kind (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 601)).method_structure (joker_24821_2, joker_24821_1, var_currentMap_24341, joker_24850_2, joker_24850_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 601)) ;
        var_functionName_24366 = extractedValue_propertyName ;
        var_effectiveParameterListIR_24281.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 603)), extractedValue_currentPointerIR  COMMA_SOURCE_FILE ("expression-primary.galgas", 603)) ;
        var_routineMangledName_24396 = function_routineMangledNameFromCall (GALGAS_string ("$").add_operation (extensionGetter_type (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)), extractedValue_propertyName, constinArgument_inArguments, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 604)) ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (extensionGetter_location (extractedValue_currentPointerIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 606)), GALGAS_string ("this object should be a structure"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 606)) ;
        ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
        var_functionName_24366.drop () ; // Release error dropped variable
        var_currentMap_24341.drop () ; // Release error dropped variable
        var_routineMangledName_24396.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_internalRepresentation::kEnum_bitField:
    {
      const cEnumAssociatedValues_internalRepresentation_bitField * extractPtr_25469 = (const cEnumAssociatedValues_internalRepresentation_bitField *) (ioArgument_ioInternalRepresentation.unsafePointer ()) ;
      const GALGAS_objectIR extractedValue_valueIR = extractPtr_25469->mAssociatedValue1 ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (extractedValue_valueIR, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 611)), GALGAS_string ("this is not a function"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 611)) ;
      ioArgument_ioInternalRepresentation.drop () ; // Release error dropped variable
      var_currentMap_24341.drop () ; // Release error dropped variable
      var_functionName_24366.drop () ; // Release error dropped variable
      var_routineMangledName_24396.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_lstring var_signature_25526 = extensionGetter_routineSignature (constinArgument_inArguments, var_functionName_24366.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 616)) ;
  GALGAS_lstring var_LLVMInvocationRoutineName_25715 ;
  GALGAS_routineDescriptor var_routineDescriptor_25761 ;
  callExtensionMethod_searchRoutine ((const cPtr_universalPropertyAndRoutineMapForContext *) var_currentMap_24341.ptr (), var_functionName_24366, var_signature_25526, var_LLVMInvocationRoutineName_25715, var_routineDescriptor_25761, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 618)) ;
  GALGAS_routineKind var_routineKind_27189 = var_routineDescriptor_25761.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_27239 = extensionGetter_executionMode (var_routineKind_27189, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 659)) ;
  GALGAS_routineTypedSignature var_formalSignature_27326 = var_routineDescriptor_25761.getter_mSignature (HERE) ;
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, var_routineMangledName_24396 COMMA_SOURCE_FILE ("expression-primary.galgas", 675)) ;
  }
  GALGAS_calleeKindIR var_calleeKind_28048 = function_checkMode (constinArgument_inMode, var_calleeMode_27239, var_routineKind_27189, var_functionName_24366.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 677)) ;
  {
  routine_analyzeEffectiveParametersNew (constinArgument_inSelfType, var_formalSignature_27326, constinArgument_inArguments, var_functionName_24366.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_24281, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 684)) ;
  }
  GALGAS_objectIR var_functionResult_28857 ;
  {
  routine_getNewTempVariable (var_routineDescriptor_25761.getter_mReturnType (HERE), var_routineMangledName_24396.getter_location (SOURCE_FILE ("expression-primary.galgas", 700)), ioArgument_ioTemporaries, var_functionResult_28857, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 700)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (GALGAS_string::makeEmptyString (), var_functionResult_28857, var_routineMangledName_24396, var_LLVMInvocationRoutineName_25715, var_calleeKind_28048, var_effectiveParameterListIR_24281  COMMA_SOURCE_FILE ("expression-primary.galgas", 702))  COMMA_SOURCE_FILE ("expression-primary.galgas", 702)) ;
  ioArgument_ioInternalRepresentation = GALGAS_internalRepresentation::constructor_bitField (GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 711)), var_functionResult_28857  COMMA_SOURCE_FILE ("expression-primary.galgas", 711)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_36325 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 879)) ;
  cEnumerator_routineTypedSignature enumerator_36368 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_36411 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_36368.hasCurrentObject () && enumerator_36411.hasCurrentObject ()) {
    switch (enumerator_36411.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_37438 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_36411.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_37438->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_37438->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_37438->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_36368.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 886)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_36549 = temp_0 ;
        GALGAS_lstring var_varLLVMName_36717 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 888)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 888)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 888))  COMMA_SOURCE_FILE ("expression-primary.galgas", 888)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 889)) ;
        GALGAS_objectIR var_objectIR_36849 = GALGAS_objectIR::constructor_localVariableReference (var_type_36549, var_varLLVMName_36717  COMMA_SOURCE_FILE ("expression-primary.galgas", 890)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_36967 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_36967, extractedValue_name, var_objectIR_36849, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 892)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_37041 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_37041, extractedValue_name, var_objectIR_36849, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 894)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 894)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_36717.getter_string (SOURCE_FILE ("expression-primary.galgas", 896)), extensionGetter_llvmTypeName (var_type_36549.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 896))  COMMA_SOURCE_FILE ("expression-primary.galgas", 896)) ;
        var_parameterList_36325.addAssign_operation (enumerator_36411.current_mEffectiveParameterKind (HERE), enumerator_36411.current_mSelector (HERE), var_type_36549  COMMA_SOURCE_FILE ("expression-primary.galgas", 897)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 899)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_36549, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_36717.getter_string (SOURCE_FILE ("expression-primary.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 900)), var_varLLVMName_36717.getter_location (SOURCE_FILE ("expression-primary.galgas", 900))  COMMA_SOURCE_FILE ("expression-primary.galgas", 900)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 900))  COMMA_SOURCE_FILE ("expression-primary.galgas", 900))  COMMA_SOURCE_FILE ("expression-primary.galgas", 898)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_38256 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_36411.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_38256->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_37548 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_37495 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_37495, extractedValue_name, var_objectIR_37548, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 902)) ;
        }
        var_parameterList_36325.addAssign_operation (enumerator_36411.current_mEffectiveParameterKind (HERE), enumerator_36411.current_mSelector (HERE), extensionGetter_type (var_objectIR_37548, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 912))  COMMA_SOURCE_FILE ("expression-primary.galgas", 912)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 914)), GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_37548, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 916)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_37548, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 917)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 917)), extensionGetter_location (var_objectIR_37548, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 918))  COMMA_SOURCE_FILE ("expression-primary.galgas", 917)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 919))  COMMA_SOURCE_FILE ("expression-primary.galgas", 915))  COMMA_SOURCE_FILE ("expression-primary.galgas", 913)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_39350 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_36411.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_39350->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_39350->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_38830 ;
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_36368.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_38830, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 922)) ;
        GALGAS_objectIR var_expressionValue_38996 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_38830, extractedValue_endOfExp, var_expressionValue_38996, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 936)) ;
        }
        GALGAS_objectIR var_result_39023 = function_checkAssignmentCompatibility (var_expressionValue_38996, enumerator_36368.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 942)) ;
        var_parameterList_36325.addAssign_operation (enumerator_36411.current_mEffectiveParameterKind (HERE), enumerator_36411.current_mSelector (HERE), enumerator_36368.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 948)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 949)), var_result_39023  COMMA_SOURCE_FILE ("expression-primary.galgas", 949)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_40091 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_36411.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_40091->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_39470 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_39413 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForReadWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_39413, extractedValue_name, var_objectIR_39470, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 951)) ;
        }
        var_parameterList_36325.addAssign_operation (enumerator_36411.current_mEffectiveParameterKind (HERE), enumerator_36411.current_mSelector (HERE), extensionGetter_type (var_objectIR_39470, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 958))  COMMA_SOURCE_FILE ("expression-primary.galgas", 958)) ;
        GALGAS_objectIR var_argumentIR_39842 = GALGAS_objectIR::constructor_llvmTemporaryValue (extensionGetter_type (var_objectIR_39470, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 960)), GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_39470, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 961)), extensionGetter_location (var_objectIR_39470, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 961))  COMMA_SOURCE_FILE ("expression-primary.galgas", 961)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 962))  COMMA_SOURCE_FILE ("expression-primary.galgas", 959)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 964)), var_argumentIR_39842  COMMA_SOURCE_FILE ("expression-primary.galgas", 964)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_42535 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_36411.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_42535->mAssociatedValue0 ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 966)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 967)), GALGAS_string ("'self' is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 967)) ;
          var_parameterList_36325.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_3) {
          switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 973)).enumValue ()) {
          case GALGAS_typeKind::kNotBuilt:
            break ;
          case GALGAS_typeKind::kEnum_opaque:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 975)), GALGAS_string ("a structure type is required here"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary.galgas", 975)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_arrayType:
            {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 977)), GALGAS_string ("a structure type is required here"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 977)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_boolean:
            {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 979)), GALGAS_string ("a structure type is required here"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary.galgas", 979)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_staticInteger:
            {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 981)), GALGAS_string ("a structure type is required here"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 981)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_literalString:
            {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 983)), GALGAS_string ("a structure type is required here"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 983)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_enumeration:
            {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 985)), GALGAS_string ("a structure type is required here"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 985)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_function:
            {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 987)), GALGAS_string ("a structure type is required here"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 987)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_pointer:
            {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 989)), GALGAS_string ("a structure type is required here"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 989)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_integer:
            {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 991)), GALGAS_string ("a structure type is required here"), fixItArray13  COMMA_SOURCE_FILE ("expression-primary.galgas", 991)) ;
              var_parameterList_36325.drop () ; // Release error dropped variable
              ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_structure:
            {
              const cEnumAssociatedValues_typeKind_structure * extractPtr_42509 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 973)).unsafePointer ()) ;
              const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_42509->mAssociatedValue2 ;
              GALGAS_universalPropertyAndRoutineMapForContext var_m_41871 = extractedValue_universalMap ;
              GALGAS_objectIR var_propertyObject_41959 ;
              {
              var_m_41871.insulate (HERE) ;
              cPtr_universalPropertyAndRoutineMapForContext * ptr_41901 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_41871.ptr () ;
              callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_41901, extractedValue_name, var_propertyObject_41959, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 994)) ;
              }
              GALGAS_uint var_idx_42014 ;
              GALGAS_unifiedTypeMap_2D_proxy joker_41997_2 ; // Joker input parameter
              GALGAS_lstring joker_41997_1 ; // Joker input parameter
              var_propertyObject_41959.method_property (joker_41997_2, joker_41997_1, var_idx_42014, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 995)) ;
              GALGAS_objectIR var_fieldObjectReference_42116 ;
              {
              routine_getNewTempVariable (extensionGetter_type (var_propertyObject_41959, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 996)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 996)), ioArgument_ioTemporaries, var_fieldObjectReference_42116, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 996)) ;
              }
              {
              extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_42116, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1000)), var_idx_42014, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 997)) ;
              }
              var_parameterList_36325.addAssign_operation (enumerator_36411.current_mEffectiveParameterKind (HERE), enumerator_36411.current_mSelector (HERE), extensionGetter_type (var_propertyObject_41959, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1003))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1003)) ;
              ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1005)), var_fieldObjectReference_42116  COMMA_SOURCE_FILE ("expression-primary.galgas", 1004)) ;
            }
            break ;
          }
        }
      }
      break ;
    }
    enumerator_36368.gotoNextObject () ;
    enumerator_36411.gotoNextObject () ;
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1012)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1012)))).boolEnum () ;
  if (kBoolTrue == test_14) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1013)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1013)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1014)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1013)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1014)), fixItArray15  COMMA_SOURCE_FILE ("expression-primary.galgas", 1013)) ;
  }else if (kBoolFalse == test_14) {
    cEnumerator_routineTypedSignature enumerator_42867 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_42896 (var_parameterList_36325, kENUMERATION_UP) ;
    while (enumerator_42867.hasCurrentObject () && enumerator_42896.hasCurrentObject ()) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, enumerator_42867.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1017)).objectCompare (enumerator_42896.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1017)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_42896.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1018)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_42896.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1018)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1018)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1018)).add_operation (enumerator_42867.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1019)), fixItArray17  COMMA_SOURCE_FILE ("expression-primary.galgas", 1018)) ;
      }
      GALGAS_string var_requiredPassingMode_43187 = extensionGetter_requiredActualPassingModeForSelector (enumerator_42867.current_mFormalArgumentPassingMode (HERE), enumerator_42867.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1021)) ;
      GALGAS_string var_testedPassingMode_43308 = extensionGetter_passingModeForActualSelector (enumerator_42896.current_mEffectiveParameterPassingMode (HERE), enumerator_42896.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1022)) ;
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_43187.objectCompare (var_testedPassingMode_43308)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_42896.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1024)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_43187, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1024)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1024)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 1024)) ;
      }
      enumerator_42867.gotoNextObject () ;
      enumerator_42896.gotoNextObject () ;
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
  GALGAS_objectIR var_currentPointer_44702 ;
  GALGAS_string var_globalVariableReceiverName_44739 ;
  switch (object->mProperty_mSelf.enumValue ()) {
  case GALGAS_selfInExpressionAST::kNotBuilt:
    break ;
  case GALGAS_selfInExpressionAST::kEnum_noSelf:
    {
      const enumGalgasBool test_0 = constinArgument_inGuard.boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (object->mProperty_mObjectName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1056)), GALGAS_string ("in guard, only 'self' properties may be accessed"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1056)) ;
        var_currentPointer_44702.drop () ; // Release error dropped variable
        var_globalVariableReceiverName_44739.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_2 = ioArgument_ioVariableMap.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1057)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1057)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          GALGAS_unifiedTypeMap_2D_proxy joker_45034_2 ; // Joker input parameter
          GALGAS_bool joker_45034_1 ; // Joker input parameter
          GALGAS_bool joker_45079_2 ; // Joker input parameter
          GALGAS_bool joker_45079_1 ; // Joker input parameter
          ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mObjectName, joker_45034_2, joker_45034_1, var_currentPointer_44702, joker_45079_2, joker_45079_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1058)) ;
          }
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = var_currentPointer_44702.getter_isGlobalVariableReference (SOURCE_FILE ("expression-primary.galgas", 1063)).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = object->mProperty_mObjectName.getter_string (HERE) ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          var_globalVariableReceiverName_44739 = temp_3 ;
        }else if (kBoolFalse == test_2) {
          var_currentPointer_44702 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1065)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 1065)) ;
          var_globalVariableReceiverName_44739 = GALGAS_string::makeEmptyString () ;
        }
      }
    }
    break ;
  case GALGAS_selfInExpressionAST::kEnum_selfAt:
    {
      const cEnumAssociatedValues_selfInExpressionAST_selfAt * extractPtr_46290 = (const cEnumAssociatedValues_selfInExpressionAST_selfAt *) (object->mProperty_mSelf.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_46290->mAssociatedValue0 ;
      var_globalVariableReceiverName_44739 = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1070)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1071)) ;
        var_currentPointer_44702.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1072)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1072)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_propertyMap var_structureObjectMap_45691 ;
          GALGAS_lstring joker_45654 ; // Joker input parameter
          GALGAS_universalPropertyAndRoutineMapForContext joker_45693_3 ; // Joker input parameter
          GALGAS_propertyList joker_45693_2 ; // Joker input parameter
          GALGAS_uint joker_45693_1 ; // Joker input parameter
          constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1073)).method_structure (joker_45654, var_structureObjectMap_45691, joker_45693_3, joker_45693_2, joker_45693_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1073)) ;
          const enumGalgasBool test_8 = var_structureObjectMap_45691.getter_hasKey (object->mProperty_mObjectName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1074)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1074)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_objectIR var_object_45847 ;
            GALGAS_bool joker_45824 ; // Joker input parameter
            var_structureObjectMap_45691.method_searchKey (object->mProperty_mObjectName, joker_45824, var_object_45847, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1075)) ;
            {
            routine_handleSelfAccessInExpression (constinArgument_inSelfType, var_object_45847, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_currentPointer_44702, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1080)) ;
            }
          }else if (kBoolFalse == test_8) {
            var_currentPointer_44702 = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("expression-primary.galgas", 1088)), object->mProperty_mObjectName  COMMA_SOURCE_FILE ("expression-primary.galgas", 1088)) ;
          }
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance"), fixItArray9  COMMA_SOURCE_FILE ("expression-primary.galgas", 1091)) ;
          var_currentPointer_44702.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_primaryInExpressionAccessListAST enumerator_46343 (object->mProperty_mAccessList, kENUMERATION_UP) ;
  while (enumerator_46343.hasCurrentObject ()) {
    switch (enumerator_46343.current_mAccess (HERE).enumValue ()) {
    case GALGAS_primaryInExpressionAccessAST::kNotBuilt:
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_property:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_property * extractPtr_46937 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_property *) (enumerator_46343.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_46937->mAssociatedValue0 ;
        {
        routine_handlePropertyInExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_propertyName, ioArgument_ioInstructionGenerationList, var_currentPointer_44702, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1098)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess * extractPtr_47617 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_arrayAccess *) (enumerator_46343.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_47617->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfIndex = extractPtr_47617->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, ioArgument_ioInstructionGenerationList, var_currentPointer_44702, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1114)) ;
        }
      }
      break ;
    case GALGAS_primaryInExpressionAccessAST::kEnum_funcCall:
      {
        const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall * extractPtr_48553 = (const cEnumAssociatedValues_primaryInExpressionAccessAST_funcCall *) (enumerator_46343.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_effectiveArgumentListAST extractedValue_arguments = extractPtr_48553->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_48553->mAssociatedValue1 ;
        GALGAS_unifiedTypeMap_2D_proxy var_returnedType_48406 ;
        {
        routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_44739, GALGAS_bool (false), constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_arguments, extractedValue_errorLocation, ioArgument_ioInstructionGenerationList, var_currentPointer_44702, var_returnedType_48406, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1132)) ;
        }
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_returnedType_48406.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1152)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("the function cannot be called in expression: no return value"), fixItArray11  COMMA_SOURCE_FILE ("expression-primary.galgas", 1153)) ;
        }
      }
      break ;
    }
    enumerator_46343.gotoNextObject () ;
  }
  outArgument_outResult = var_currentPointer_44702 ;
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
  const enumGalgasBool test_0 = constinArgument_inObject.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 1169)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_49023 ;
    GALGAS_lstring var_name_49041 ;
    GALGAS_uint var_index_49058 ;
    constinArgument_inObject.method_property (var_type_49023, var_name_49041, var_index_49058, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1170)) ;
    outArgument_outObjectPtr = GALGAS_objectIR::constructor_temporaryReference (var_type_49023, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1173)), var_name_49041.getter_location (SOURCE_FILE ("expression-primary.galgas", 1173))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1173)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1174)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 1171)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1177)) ;
    {
    extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, outArgument_outObjectPtr, constinArgument_inSelfType, var_name_49041.getter_string (SOURCE_FILE ("expression-primary.galgas", 1181)), var_index_49058, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1178)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("expression-primary.galgas", 1185)), GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1185)) ;
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
  const enumGalgasBool test_0 = constinArgument_inProperty.getter_isProperty (SOURCE_FILE ("expression-primary.galgas", 1198)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_49918 ;
    GALGAS_lstring var_name_49936 ;
    GALGAS_uint var_index_49953 ;
    constinArgument_inProperty.method_property (var_type_49918, var_name_49936, var_index_49953, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1199)) ;
    GALGAS_objectIR var_newObject_49972 = GALGAS_objectIR::constructor_temporaryReference (var_type_49918, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1202)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1202)), var_name_49936.getter_location (SOURCE_FILE ("expression-primary.galgas", 1202))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1202)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1203)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("expression-primary.galgas", 1200)) ;
    ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1206)) ;
    {
    extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_newObject_49972, ioArgument_ioObject, var_name_49936.getter_string (SOURCE_FILE ("expression-primary.galgas", 1210)), var_index_49953.getter_string (SOURCE_FILE ("expression-primary.galgas", 1211)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1207)) ;
    }
    ioArgument_ioObject = var_newObject_49972 ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<getNewTemporarySelfObjectPtr>>"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1215)) ;
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
  const enumGalgasBool test_0 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1237)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1237)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1237)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_propertyMap var_structureObjectMap_51404 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_51442 ;
    GALGAS_lstring joker_51367 ; // Joker input parameter
    GALGAS_propertyList joker_51444_2 ; // Joker input parameter
    GALGAS_uint joker_51444_1 ; // Joker input parameter
    extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1238)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1238)).method_structure (joker_51367, var_structureObjectMap_51404, var_universalMap_51442, joker_51444_2, joker_51444_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1238)) ;
    const enumGalgasBool test_1 = var_structureObjectMap_51404.getter_hasKey (constinArgument_inPropertyName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1239)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1239)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_objectIR var_property_51578 ;
      GALGAS_bool joker_51557 ; // Joker input parameter
      var_structureObjectMap_51404.method_searchKey (constinArgument_inPropertyName, joker_51557, var_property_51578, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1240)) ;
      {
      routine_handlePropertyAccessInExpression (ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), var_property_51578, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1241)) ;
      }
    }else if (kBoolFalse == test_1) {
      ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_possibleFunction (ioArgument_ioObjectPtr, constinArgument_inPropertyName  COMMA_SOURCE_FILE ("expression-primary.galgas", 1249)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1252)).getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1252)).getter_isInteger (SOURCE_FILE ("expression-primary.galgas", 1252)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_sliceMap var_sliceMap_51976 = extensionGetter_sliceMap (ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1253)) ;
      GALGAS_objectIR var_loadedRegisterValue_52195 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, ioArgument_ioObjectPtr, constinArgument_inPropertyName.getter_location (HERE), var_loadedRegisterValue_52195, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1254)) ;
      }
      GALGAS_llvmBinaryOperation var_accessOperator_52294 ;
      GALGAS_bigint var_accessRightOperand_52332 ;
      GALGAS_sliceMap var_resultSliceMap_52368 ;
      GALGAS_unifiedTypeMap_2D_proxy var_resultType_52412 ;
      var_sliceMap_51976.method_searchKey (constinArgument_inPropertyName, var_accessOperator_52294, var_accessRightOperand_52332, var_resultSliceMap_52368, var_resultType_52412, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1260)) ;
      GALGAS_objectIR var_resultObject_52439 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_resultType_52412, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1269)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1269)), constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1269))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1269)), var_resultSliceMap_52368  COMMA_SOURCE_FILE ("expression-primary.galgas", 1267)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1272)) ;
      {
      extensionSetter_appendBinaryOperation (ioArgument_ioInstructionGenerationList, var_resultObject_52439, extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1275)), constinArgument_inPropertyName.getter_location (HERE), var_loadedRegisterValue_52195, var_accessOperator_52294, GALGAS_objectIR::constructor_literalInteger (constinArgument_inContext.getter_mLiteralIntegerType (HERE), var_accessRightOperand_52332  COMMA_SOURCE_FILE ("expression-primary.galgas", 1279)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1273)) ;
      }
      ioArgument_ioObjectPtr = var_resultObject_52439 ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPropertyName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1283)), GALGAS_string ("the current object has no property"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1283)) ;
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
  const enumGalgasBool test_0 = ioArgument_ioObjectPtr.getter_isPossibleFunction (SOURCE_FILE ("expression-primary.galgas", 1309)).operator_not (SOURCE_FILE ("expression-primary.galgas", 1309)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object is not a function"), fixItArray1  COMMA_SOURCE_FILE ("expression-primary.galgas", 1310)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    outArgument_outReturnedType.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = constinArgument_inGuard.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_lstring var_functionName_54341 ;
      GALGAS_objectIR joker_54308_1 ; // Joker input parameter
      ioArgument_ioObjectPtr.method_possibleFunction (joker_54308_1, var_functionName_54341, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1312)) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_functionName_54341.getter_location (SOURCE_FILE ("expression-primary.galgas", 1313)), GALGAS_string ("a function cannot be called in guard expression"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary.galgas", 1313)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
      outArgument_outReturnedType.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_receiver_54512 ;
      GALGAS_lstring var_functionName_54543 ;
      ioArgument_ioObjectPtr.method_possibleFunction (var_receiver_54512, var_functionName_54543, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1315)) ;
      GALGAS_procCallEffectiveParameterListIR var_effectiveParameterListIR_55250 ;
      GALGAS_calleeKindIR var_routineKind_55299 ;
      GALGAS_lstring var_functionMangledName_55358 ;
      GALGAS_lstring var_functionNameForGeneration_55429 ;
      {
      routine_analyzeFunctionCallInExpression (constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, var_receiver_54512, var_functionName_54543, constinArgument_inArguments, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_effectiveParameterListIR_55250, var_routineKind_55299, var_functionMangledName_55358, var_functionNameForGeneration_55429, outArgument_outReturnedType, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1316)) ;
      }
      GALGAS_objectIR var_functionResult_55617 ;
      {
      routine_getNewTempVariable (outArgument_outReturnedType, var_functionMangledName_55358.getter_location (SOURCE_FILE ("expression-primary.galgas", 1339)), ioArgument_ioTemporaries, var_functionResult_55617, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1339)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_functionCallIR::constructor_new (constinArgument_inGlobalVariableReceiverName, var_functionResult_55617, var_functionMangledName_55358, var_functionNameForGeneration_55429, var_routineKind_55299, var_effectiveParameterListIR_55250  COMMA_SOURCE_FILE ("expression-primary.galgas", 1341))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1341)) ;
      ioArgument_ioObjectPtr = var_functionResult_55617 ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1379)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_57268 = extensionGetter_type (constinArgument_inReceiver, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1380)) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsNotEqual, var_receiverType_57268.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1382)))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_receiverType_57268.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1382)).getter_isStructure (SOURCE_FILE ("expression-primary.galgas", 1382)) ;
  }
  GALGAS_bool var_specialCase_57381 = test_0 ;
  const enumGalgasBool test_1 = var_specialCase_57381.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_propertyMap var_propertyMap_57555 ;
    GALGAS_universalPropertyAndRoutineMapForContext var_universalMap_57593 ;
    GALGAS_lstring joker_57512 ; // Joker input parameter
    GALGAS_propertyList joker_57595_2 ; // Joker input parameter
    GALGAS_uint joker_57595_1 ; // Joker input parameter
    var_receiverType_57268.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1384)).method_structure (joker_57512, var_propertyMap_57555, var_universalMap_57593, joker_57595_2, joker_57595_1, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1384)) ;
    const enumGalgasBool test_2 = var_propertyMap_57555.getter_hasKey (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("expression-primary.galgas", 1385)) COMMA_SOURCE_FILE ("expression-primary.galgas", 1385)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_objectIR var_propertyObject_57723 ;
      GALGAS_bool joker_57692 ; // Joker input parameter
      var_propertyMap_57555.method_searchKey (constinArgument_inRoutineName, joker_57692, var_propertyObject_57723, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1386)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_type_57770 ;
      GALGAS_lstring var_plmName_57798 ;
      GALGAS_uint var_index_57822 ;
      var_propertyObject_57723.method_property (var_type_57770, var_plmName_57798, var_index_57822, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1387)) ;
      var_specialCase_57381 = var_type_57770.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1388)).getter_isFunction (SOURCE_FILE ("expression-primary.galgas", 1388)) ;
      const enumGalgasBool test_3 = var_specialCase_57381.boolEnum () ;
      if (kBoolTrue == test_3) {
        constinArgument_inRoutineName.log ("inRoutineName"  COMMA_SOURCE_FILE ("expression-primary.galgas", 1390)) ;
      }
    }
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_receiverType_57268.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1395)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1396)), constinArgument_inReceiver  COMMA_SOURCE_FILE ("expression-primary.galgas", 1396)) ;
  }
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_receiverType_57268.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1400)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string ("$").add_operation (var_receiverType_57268.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1400)) ;
  }
  outArgument_outRoutineMangledName = function_routineMangledNameFromCall (temp_5, constinArgument_inRoutineName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1399)) ;
  GALGAS_routineDescriptor var_routineDescriptor_58495 ;
  GALGAS_location var_outRoutineLocation_58533 ;
  extensionMethod_searchKey (constinArgument_inContext.getter_mRoutineMapForContext (HERE), constinArgument_inRoutineName, extensionGetter_routineSignature (constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1406)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1406)), outArgument_outRoutineNameForGeneration, var_routineDescriptor_58495, var_outRoutineLocation_58533, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1404)) ;
  GALGAS_bool var_isPublic_58552 = var_routineDescriptor_58495.getter_mIsPublic (HERE) ;
  GALGAS_routineKind var_routineKind_58600 = var_routineDescriptor_58495.getter_mRoutineKind (HERE) ;
  GALGAS_mode var_calleeMode_58650 = extensionGetter_executionMode (var_routineKind_58600, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1413)) ;
  GALGAS_routineTypedSignature var_formalSignature_58737 = var_routineDescriptor_58495.getter_mSignature (HERE) ;
  outArgument_outReturnedType = var_routineDescriptor_58495.getter_mReturnType (HERE) ;
  const enumGalgasBool test_7 = var_isPublic_58552.operator_not (SOURCE_FILE ("expression-primary.galgas", 1417)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_receiverType_57268.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1418)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_declarationFile_58956 = var_outRoutineLocation_58533.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1419)) ;
      GALGAS_string var_invocationFile_59009 = constinArgument_inRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1420)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_invocationFile_59009.objectCompare (var_declarationFile_58956)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1422)), GALGAS_string ("this routine is not public"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1422)) ;
      }
    }else if (kBoolFalse == test_8) {
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_receiverType_57268.objectCompare (constinArgument_inSelfType)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("expression-primary.galgas", 1425)), GALGAS_string ("this routine is not public"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1425)) ;
      }
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outRoutineMangledName COMMA_SOURCE_FILE ("expression-primary.galgas", 1429)) ;
  }
  outArgument_outRoutineKindIR = function_checkMode (constinArgument_inRequiredMode, var_calleeMode_58650, var_routineKind_58600, constinArgument_inRoutineName.getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1431)) ;
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inRoutineCanMutateProperties, var_formalSignature_58737, constinArgument_inEffectiveParameterList, constinArgument_inRoutineName.getter_location (HERE), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1438)) ;
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
  GALGAS_procEffectiveParameterList var_parameterList_61462 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("expression-primary.galgas", 1479)) ;
  cEnumerator_routineTypedSignature enumerator_61505 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_61548 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_61505.hasCurrentObject () && enumerator_61548.hasCurrentObject ()) {
    switch (enumerator_61548.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_63026 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_61548.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_63026->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_63026->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_63026->mAssociatedValue2 ;
        GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_61505.current_mType (HERE) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1486)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_61686 = temp_0 ;
        GALGAS_lstring var_varLLVMName_61854 = GALGAS_lstring::constructor_new (extractedValue_name.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1488)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1488)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1488)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1488))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1488)) ;
        ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1489)) ;
        GALGAS_objectIR var_objectIR_61986 = GALGAS_objectIR::constructor_localVariableReference (var_type_61686, var_varLLVMName_61854  COMMA_SOURCE_FILE ("expression-primary.galgas", 1490)) ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_62104 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_62104, extractedValue_name, var_objectIR_61986, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1492)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertConstant (extractedValue_name, var_type_61686, GALGAS_bool (true), var_objectIR_61986, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1493)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioUniversalMap.insulate (HERE) ;
          cPtr_universalPropertyAndRoutineMapForContext * ptr_62400 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
          callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_62400, extractedValue_name, var_objectIR_61986, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("expression-primary.galgas", 1502)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1502)) ;
          }
          {
          ioArgument_ioVariableMap.setter_insertDefinedVariable (extractedValue_name, var_type_61686, GALGAS_bool (true), var_objectIR_61986, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1503)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_61854.getter_string (SOURCE_FILE ("expression-primary.galgas", 1512)), extensionGetter_llvmTypeName (var_type_61686.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1512)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1512))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1512)) ;
        var_parameterList_61462.addAssign_operation (enumerator_61548.current_mEffectiveParameterKind (HERE), enumerator_61548.current_mSelector (HERE), var_type_61686  COMMA_SOURCE_FILE ("expression-primary.galgas", 1513)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1515)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_61686, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (var_varLLVMName_61854.getter_string (SOURCE_FILE ("expression-primary.galgas", 1516)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1516)), var_varLLVMName_61854.getter_location (SOURCE_FILE ("expression-primary.galgas", 1516))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1516)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1516))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1516))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1514)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_64085 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_61548.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_64085->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_63136 ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_63083 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_searchValuedObjectForWriteAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_63083, extractedValue_name, var_objectIR_63136, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1518)) ;
        }
        GALGAS_unifiedTypeMap_2D_proxy var_type_63223 ;
        GALGAS_bool var_accessIsAllowed_63270 ;
        GALGAS_bool var_isCopyable_63337 ;
        GALGAS_bool var_canBeUsedAsInputParameter_63451 ;
        {
        GALGAS_objectIR joker_63289 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForWriteAccess (extractedValue_name, var_type_63223, var_accessIsAllowed_63270, joker_63289, var_isCopyable_63337, var_canBeUsedAsInputParameter_63451, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1519)) ;
        }
        const enumGalgasBool test_3 = var_accessIsAllowed_63270.operator_not (SOURCE_FILE ("expression-primary.galgas", 1527)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1528)), GALGAS_string ("routine has no access right on the this variable"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary.galgas", 1528)) ;
        }
        const enumGalgasBool test_5 = var_canBeUsedAsInputParameter_63451.operator_not (SOURCE_FILE ("expression-primary.galgas", 1530)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1531)), GALGAS_string ("this variable cannot be used as input parameter"), fixItArray6  COMMA_SOURCE_FILE ("expression-primary.galgas", 1531)) ;
        }
        const enumGalgasBool test_7 = var_isCopyable_63337.operator_not (SOURCE_FILE ("expression-primary.galgas", 1533)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1534)), GALGAS_string ("an $").add_operation (var_type_63223.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1534)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1534)).add_operation (GALGAS_string (" instance is not copyable"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1534)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary.galgas", 1534)) ;
        }
        var_parameterList_61462.addAssign_operation (enumerator_61548.current_mEffectiveParameterKind (HERE), enumerator_61548.current_mSelector (HERE), var_type_63223  COMMA_SOURCE_FILE ("expression-primary.galgas", 1536)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("expression-primary.galgas", 1538)), GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_63223, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_name (var_objectIR_63136, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1539)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1539)), extensionGetter_location (var_objectIR_63136, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1539))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1539)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1539))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1539))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1537)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_65287 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_61548.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_65287->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_65287->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_64767 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, enumerator_61505.current_mType (HERE), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_64767, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1541)) ;
        GALGAS_objectIR var_expressionValue_64933 ;
        {
        extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_64767, extractedValue_endOfExp, var_expressionValue_64933, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1557)) ;
        }
        GALGAS_objectIR var_result_64960 = function_checkAssignmentCompatibility (var_expressionValue_64933, enumerator_61505.current_mType (HERE), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1563)) ;
        var_parameterList_61462.addAssign_operation (enumerator_61548.current_mEffectiveParameterKind (HERE), enumerator_61548.current_mSelector (HERE), enumerator_61505.current_mType (HERE)  COMMA_SOURCE_FILE ("expression-primary.galgas", 1569)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("expression-primary.galgas", 1570)), var_result_64960  COMMA_SOURCE_FILE ("expression-primary.galgas", 1570)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_66171 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_61548.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_66171->mAssociatedValue0 ;
        GALGAS_unifiedTypeMap_2D_proxy var_type_65416 ;
        GALGAS_bool var_accessIsAllowed_65463 ;
        GALGAS_objectIR var_objectIR_65494 ;
        GALGAS_bool var_canBeUsedAsInputParameter_65571 ;
        {
        GALGAS_bool joker_65504_1 ; // Joker input parameter
        ioArgument_ioVariableMap.setter_searchForReadWriteAccess (extractedValue_name, var_type_65416, var_accessIsAllowed_65463, var_objectIR_65494, joker_65504_1, var_canBeUsedAsInputParameter_65571, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1572)) ;
        }
        const enumGalgasBool test_9 = var_canBeUsedAsInputParameter_65571.operator_not (SOURCE_FILE ("expression-primary.galgas", 1580)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1581)), GALGAS_string ("this variable cannot be used as output/input parameter"), fixItArray10  COMMA_SOURCE_FILE ("expression-primary.galgas", 1581)) ;
        }
        const enumGalgasBool test_11 = var_accessIsAllowed_65463.operator_not (SOURCE_FILE ("expression-primary.galgas", 1583)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1584)), GALGAS_string ("routine has no access right on the this variable"), fixItArray12  COMMA_SOURCE_FILE ("expression-primary.galgas", 1584)) ;
        }
        var_parameterList_61462.addAssign_operation (enumerator_61548.current_mEffectiveParameterKind (HERE), enumerator_61548.current_mSelector (HERE), var_type_65416  COMMA_SOURCE_FILE ("expression-primary.galgas", 1586)) ;
        GALGAS_objectIR var_argumentIR_65933 = GALGAS_objectIR::constructor_llvmTemporaryValue (var_type_65416, GALGAS_lstring::constructor_new (function_llvmNameForLocalVariable (extensionGetter_llvmName (var_objectIR_65494, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1589)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1589)), extensionGetter_location (var_objectIR_65494, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1589))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1589)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("expression-primary.galgas", 1590))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1587)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1592)), var_argumentIR_65933  COMMA_SOURCE_FILE ("expression-primary.galgas", 1592)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_68611 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_61548.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_68611->mAssociatedValue0 ;
        const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("expression-primary.galgas", 1594)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1595)), GALGAS_string ("'self' is not available in this context"), fixItArray14  COMMA_SOURCE_FILE ("expression-primary.galgas", 1595)) ;
          var_parameterList_61462.drop () ; // Release error dropped variable
          ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_13) {
          const enumGalgasBool test_15 = constinArgument_inDirectAccessToPropertiesAllowed.operator_not (SOURCE_FILE ("expression-primary.galgas", 1596)).boolEnum () ;
          if (kBoolTrue == test_15) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1597)), GALGAS_string ("the current function should be declared @").add_operation (function_userAccessAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1597)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1597)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary.galgas", 1597)) ;
          }else if (kBoolFalse == test_15) {
            const enumGalgasBool test_17 = constinArgument_inRoutineCanMutateProperties.operator_not (SOURCE_FILE ("expression-primary.galgas", 1598)).boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1599)), GALGAS_string ("the current routine should be declared @").add_operation (function_mutatingAttribute (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1599)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1599)), fixItArray18  COMMA_SOURCE_FILE ("expression-primary.galgas", 1599)) ;
            }else if (kBoolFalse == test_17) {
              switch (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1601)).enumValue ()) {
              case GALGAS_typeKind::kNotBuilt:
                break ;
              case GALGAS_typeKind::kEnum_opaque:
                {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1603)), GALGAS_string ("a structure type is required here"), fixItArray19  COMMA_SOURCE_FILE ("expression-primary.galgas", 1603)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_arrayType:
                {
                  TC_Array <C_FixItDescription> fixItArray20 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1605)), GALGAS_string ("a structure type is required here"), fixItArray20  COMMA_SOURCE_FILE ("expression-primary.galgas", 1605)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_boolean:
                {
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1607)), GALGAS_string ("a structure type is required here"), fixItArray21  COMMA_SOURCE_FILE ("expression-primary.galgas", 1607)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_staticInteger:
                {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1609)), GALGAS_string ("a structure type is required here"), fixItArray22  COMMA_SOURCE_FILE ("expression-primary.galgas", 1609)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_literalString:
                {
                  TC_Array <C_FixItDescription> fixItArray23 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1611)), GALGAS_string ("a structure type is required here"), fixItArray23  COMMA_SOURCE_FILE ("expression-primary.galgas", 1611)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_enumeration:
                {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1613)), GALGAS_string ("a structure type is required here"), fixItArray24  COMMA_SOURCE_FILE ("expression-primary.galgas", 1613)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_function:
                {
                  TC_Array <C_FixItDescription> fixItArray25 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1615)), GALGAS_string ("a structure type is required here"), fixItArray25  COMMA_SOURCE_FILE ("expression-primary.galgas", 1615)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_pointer:
                {
                  TC_Array <C_FixItDescription> fixItArray26 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1617)), GALGAS_string ("a structure type is required here"), fixItArray26  COMMA_SOURCE_FILE ("expression-primary.galgas", 1617)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_integer:
                {
                  TC_Array <C_FixItDescription> fixItArray27 ;
                  inCompiler->emitSemanticError (extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1619)), GALGAS_string ("a structure type is required here"), fixItArray27  COMMA_SOURCE_FILE ("expression-primary.galgas", 1619)) ;
                  var_parameterList_61462.drop () ; // Release error dropped variable
                  ioArgument_ioEffectiveParameterListIR.drop () ; // Release error dropped variable
                }
                break ;
              case GALGAS_typeKind::kEnum_structure:
                {
                  const cEnumAssociatedValues_typeKind_structure * extractPtr_68585 = (const cEnumAssociatedValues_typeKind_structure *) (constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1601)).unsafePointer ()) ;
                  const GALGAS_universalPropertyAndRoutineMapForContext extractedValue_universalMap = extractPtr_68585->mAssociatedValue2 ;
                  GALGAS_universalPropertyAndRoutineMapForContext var_m_67947 = extractedValue_universalMap ;
                  GALGAS_objectIR var_propertyObject_68035 ;
                  {
                  var_m_67947.insulate (HERE) ;
                  cPtr_universalPropertyAndRoutineMapForContext * ptr_67977 = (cPtr_universalPropertyAndRoutineMapForContext *) var_m_67947.ptr () ;
                  callExtensionSetter_searchValuedObjectForReadAccess ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_67977, extractedValue_name, var_propertyObject_68035, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1622)) ;
                  }
                  GALGAS_uint var_idx_68090 ;
                  GALGAS_unifiedTypeMap_2D_proxy joker_68073_2 ; // Joker input parameter
                  GALGAS_lstring joker_68073_1 ; // Joker input parameter
                  var_propertyObject_68035.method_property (joker_68073_2, joker_68073_1, var_idx_68090, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1623)) ;
                  GALGAS_objectIR var_fieldObjectReference_68192 ;
                  {
                  routine_getNewTempVariable (extensionGetter_type (var_propertyObject_68035, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1624)), extractedValue_name.getter_location (SOURCE_FILE ("expression-primary.galgas", 1624)), ioArgument_ioTemporaries, var_fieldObjectReference_68192, inCompiler  COMMA_SOURCE_FILE ("expression-primary.galgas", 1624)) ;
                  }
                  {
                  extensionSetter_appendPropertyReferenceFromSelf (ioArgument_ioInstructionGenerationList, var_fieldObjectReference_68192, constinArgument_inSelfType, extractedValue_name.getter_string (SOURCE_FILE ("expression-primary.galgas", 1628)), var_idx_68090, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1625)) ;
                  }
                  var_parameterList_61462.addAssign_operation (enumerator_61548.current_mEffectiveParameterKind (HERE), enumerator_61548.current_mSelector (HERE), extensionGetter_type (var_propertyObject_68035, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1631))  COMMA_SOURCE_FILE ("expression-primary.galgas", 1631)) ;
                  ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("expression-primary.galgas", 1633)), var_fieldObjectReference_68192  COMMA_SOURCE_FILE ("expression-primary.galgas", 1632)) ;
                }
                break ;
              }
            }
          }
        }
      }
      break ;
    }
    enumerator_61505.gotoNextObject () ;
    enumerator_61548.gotoNextObject () ;
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1640)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1640)))).boolEnum () ;
  if (kBoolTrue == test_28) {
    TC_Array <C_FixItDescription> fixItArray29 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("expression-primary.galgas", 1641)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1641)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1641)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1641)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("expression-primary.galgas", 1642)).getter_string (SOURCE_FILE ("expression-primary.galgas", 1641)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1641)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1642)), fixItArray29  COMMA_SOURCE_FILE ("expression-primary.galgas", 1641)) ;
  }else if (kBoolFalse == test_28) {
    cEnumerator_routineTypedSignature enumerator_68943 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_68972 (var_parameterList_61462, kENUMERATION_UP) ;
    while (enumerator_68943.hasCurrentObject () && enumerator_68972.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_68943.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1645)).objectCompare (enumerator_68972.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1645)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_68972.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1646)), GALGAS_string ("the actual parameter type is '").add_operation (enumerator_68972.current_mParameterType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1646)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1646)).add_operation (GALGAS_string ("', and is incompatible with the formal type '"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1646)).add_operation (enumerator_68943.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1647)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1647)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1647)), fixItArray31  COMMA_SOURCE_FILE ("expression-primary.galgas", 1646)) ;
      }
      GALGAS_string var_requiredPassingMode_69263 = extensionGetter_requiredActualPassingModeForSelector (enumerator_68943.current_mFormalArgumentPassingMode (HERE), enumerator_68943.current_mSelector (HERE).getter_string (SOURCE_FILE ("expression-primary.galgas", 1649)), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1649)) ;
      GALGAS_string var_testedPassingMode_69384 = extensionGetter_passingModeForActualSelector (enumerator_68972.current_mEffectiveParameterPassingMode (HERE), enumerator_68972.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1650)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_69263.objectCompare (var_testedPassingMode_69384)).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <C_FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_68972.current_mSelector (HERE).getter_location (SOURCE_FILE ("expression-primary.galgas", 1652)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_69263, inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1652)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary.galgas", 1652)), fixItArray33  COMMA_SOURCE_FILE ("expression-primary.galgas", 1652)) ;
      }
      enumerator_68943.gotoNextObject () ;
      enumerator_68972.gotoNextObject () ;
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
  GALGAS_semanticTemporariesStruct joker_3883 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("directive-check.galgas", 83)) ;
  GALGAS_allocaList joker_3994 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 86)) ;
  GALGAS_instructionListIR joker_4035 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("directive-check.galgas", 87)) ;
  GALGAS_objectIR joker_4077 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("directive-check.galgas", 80)), constinArgument_inContext, constinArgument_inCurrentMode, joker_3883, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_3994, joker_4035, joker_4077, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 76)) ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 91)).getter_isBoolean (SOURCE_FILE ("directive-check.galgas", 91)).operator_not (SOURCE_FILE ("directive-check.galgas", 91)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray1  COMMA_SOURCE_FILE ("directive-check.galgas", 92)) ;
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_expressionResult_3643, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 95)).operator_not (SOURCE_FILE ("directive-check.galgas", 95)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("expression is not static: use assert instruction"), fixItArray3  COMMA_SOURCE_FILE ("directive-check.galgas", 96)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_bigint var_value_4500 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4477_1 ; // Joker input parameter
    var_expressionResult_3643.method_literalInteger (joker_4477_1, var_value_4500, inCompiler COMMA_SOURCE_FILE ("directive-check.galgas", 98)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_value_4500.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("directive-check.galgas", 99)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mCheckInstructionLocation, GALGAS_string ("check expression value is false"), fixItArray5  COMMA_SOURCE_FILE ("directive-check.galgas", 100)) ;
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
  GALGAS_objectIR var_sourceOperandPossibleReference_5145 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 99)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourceOperandPossibleReference_5145, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 94)) ;
  GALGAS_allocaList joker_5513 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 120)) ;
  GALGAS_instructionListIR joker_5539 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment.galgas", 121)) ;
  GALGAS_objectIR joker_5553 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_5513, joker_5539, joker_5553, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 110)) ;
  GALGAS_objectIR var_sourceOperand_5734 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourceOperandPossibleReference_5145, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 127)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 127)), var_sourceOperand_5734, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 124)) ;
  }
  GALGAS_objectIR var_result_5753 = function_checkAssignmentCompatibility (var_sourceOperand_5734, extensionGetter_type (var_currentObject_4317, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 132)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 133)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 133)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_currentObject_4317, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment.galgas", 136)).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 136)), var_result_5753, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 136)) ;
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
  GALGAS_objectIR var_sourcePossibleReference_6469 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 157)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_6469, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 152)) ;
  GALGAS_semanticTemporariesStruct joker_6729 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-assignment-operator.galgas", 175)) ;
  GALGAS_allocaList joker_6840 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 178)) ;
  GALGAS_instructionListIR joker_6881 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assignment-operator.galgas", 179)) ;
  GALGAS_objectIR joker_6925 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 172)), constinArgument_inContext, constinArgument_inCurrentMode, joker_6729, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_6840, joker_6881, joker_6925, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 168)) ;
  GALGAS_objectIR var_sourceValue_7121 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_6469, object->mProperty_mEndOfSourceExpression, var_sourceValue_7121, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 182)) ;
  }
  GALGAS_bool var_noPanicGeneration_7595 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()) ;
  GALGAS_bool var_panicMode_7658 = GALGAS_bool (kIsEqual, constinArgument_inCurrentMode.objectCompare (GALGAS_mode::constructor_panicMode (SOURCE_FILE ("instruction-assignment-operator.galgas", 202)))) ;
  GALGAS_infixOperatorMap var_operatorMap_7720 ;
  switch (object->mProperty_mOperator.enumValue ()) {
  case GALGAS_operatorAssignmentKind::kNotBuilt:
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseAndAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mAndOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseOrAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mOrOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_bitWiseXorAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mXorOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addAssign:
    {
      const enumGalgasBool test_2 = var_panicMode_7658.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 213)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 213)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 214)), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 213)) ;
      }
      GALGAS_infixOperatorMap temp_4 ;
      const enumGalgasBool test_5 = var_noPanicGeneration_7595.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_5) {
        temp_4 = constinArgument_inContext.getter_mAddOperatorMap (HERE) ;
      }
      var_operatorMap_7720 = temp_4 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_addModuloAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mAddNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subAssign:
    {
      const enumGalgasBool test_6 = var_panicMode_7658.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 221)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 221)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 222)), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 221)) ;
      }
      GALGAS_infixOperatorMap temp_8 ;
      const enumGalgasBool test_9 = var_noPanicGeneration_7595.boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_9) {
        temp_8 = constinArgument_inContext.getter_mSubOperatorMap (HERE) ;
      }
      var_operatorMap_7720 = temp_8 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_subModuloAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mSubNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulAssign:
    {
      const enumGalgasBool test_10 = var_panicMode_7658.boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 229)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 229)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 230)), fixItArray11  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 229)) ;
      }
      GALGAS_infixOperatorMap temp_12 ;
      const enumGalgasBool test_13 = var_noPanicGeneration_7595.boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_13) {
        temp_12 = constinArgument_inContext.getter_mMulOperatorMap (HERE) ;
      }
      var_operatorMap_7720 = temp_12 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_mulModuloAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mMulNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divAssign:
    {
      const enumGalgasBool test_14 = var_panicMode_7658.boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 237)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 237)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 238)), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 237)) ;
      }
      GALGAS_infixOperatorMap temp_16 ;
      const enumGalgasBool test_17 = var_noPanicGeneration_7595.boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_17) {
        temp_16 = constinArgument_inContext.getter_mDivOperatorMap (HERE) ;
      }
      var_operatorMap_7720 = temp_16 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_divZeroAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mDivNoOvfOperatorMap (HERE) ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modAssign:
    {
      const enumGalgasBool test_18 = var_panicMode_7658.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 245)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 245)), GALGAS_string ("operations that can generate panic are not allowed in `").add_operation (function_panicModeName (inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)).add_operation (GALGAS_string (" mode"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 246)), fixItArray19  COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 245)) ;
      }
      GALGAS_infixOperatorMap temp_20 ;
      const enumGalgasBool test_21 = var_noPanicGeneration_7595.boolEnum () ;
      if (kBoolTrue == test_21) {
        temp_20 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
      }else if (kBoolFalse == test_21) {
        temp_20 = constinArgument_inContext.getter_mModOperatorMap (HERE) ;
      }
      var_operatorMap_7720 = temp_20 ;
    }
    break ;
  case GALGAS_operatorAssignmentKind::kEnum_modZeroAssign:
    {
      var_operatorMap_7720 = constinArgument_inContext.getter_mModNoOvfOperatorMap (HERE) ;
    }
    break ;
  }
  GALGAS_infixOperatorDescription var_binaryOperator_10065 ;
  GALGAS_unifiedTypeMap_2D_proxy joker_10011 ; // Joker input parameter
  extensionMethod_checkBinaryOperationWith (var_operatorMap_7720, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 253)), extensionGetter_type (var_sourceValue_7121, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 254)), object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 255)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 255)), joker_10011, var_binaryOperator_10065, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 252)) ;
  GALGAS_objectIR var_variableValue_10248 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_targetObject_5651, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 263)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 263)), var_variableValue_10248, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 260)) ;
  }
  GALGAS_objectIR var_newResultingValue_10478 ;
  callExtensionMethod_generateInfixOperatorCode ((const cPtr_infixOperatorDescription *) var_binaryOperator_10065.ptr (), ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, var_variableValue_10248, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 270)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 270)), var_sourceValue_7121, extensionGetter_type (var_targetObject_5651, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 272)), var_newResultingValue_10478, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 266)) ;
  {
  extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_targetObject_5651, object->mProperty_mAssignmentTargetAST.getter_mIdentifier (SOURCE_FILE ("instruction-assignment-operator.galgas", 277)).getter_location (SOURCE_FILE ("instruction-assignment-operator.galgas", 277)), var_newResultingValue_10478, inCompiler COMMA_SOURCE_FILE ("instruction-assignment-operator.galgas", 275)) ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 98)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 99)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_4365 = temp_0 ;
  GALGAS_objectIR var_sourcePossibleReference_5078 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4365, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_sourcePossibleReference_5078, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 102)) ;
  GALGAS_semanticTemporariesStruct joker_5329 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-var.galgas", 125)) ;
  GALGAS_allocaList joker_5440 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-var.galgas", 128)) ;
  GALGAS_instructionListIR joker_5481 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-var.galgas", 129)) ;
  GALGAS_objectIR joker_5525 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_4365, constinArgument_inContext, constinArgument_inCurrentMode, joker_5329, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_5440, joker_5481, joker_5525, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 118)) ;
  GALGAS_objectIR var_expressionResult_5712 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_sourcePossibleReference_5078, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 135)), var_expressionResult_5712, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 132)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_targetType_4365.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var.galgas", 139)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_targetType_4365 = extensionGetter_type (var_expressionResult_5712, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 140)) ;
  }
  GALGAS_objectIR var_result_5838 = function_checkAssignmentCompatibility (var_expressionResult_5712, var_targetType_4365, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 142)) ;
  GALGAS_lstring var_varName_6085 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 150)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 150))  COMMA_SOURCE_FILE ("instruction-var.galgas", 150)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 151)) ;
  GALGAS_objectIR var_objectIR_6217 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_5838, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 152)), var_varName_6085  COMMA_SOURCE_FILE ("instruction-var.galgas", 152)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6311 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6311, object->mProperty_mVarName, var_objectIR_6217, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("instruction-var.galgas", 153)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 153)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertDefinedVariable (object->mProperty_mVarName, extensionGetter_type (var_result_5838, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 156)), GALGAS_bool (true), var_objectIR_6217, extensionGetter_copyable (extensionGetter_type (var_result_5838, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 159)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 154)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varName_6085.getter_string (SOURCE_FILE ("instruction-var.galgas", 163)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_5838, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 163)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 163))  COMMA_SOURCE_FILE ("instruction-var.galgas", 163)) ;
  {
  extensionSetter_appendStoreLocalVariable (ioArgument_ioInstructionGenerationList, var_varName_6085.getter_string (SOURCE_FILE ("instruction-var.galgas", 165)), extensionGetter_type (var_result_5838, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 166)), var_result_5838, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 164)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_7720 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 187)) ;
  const enumGalgasBool test_0 = extensionGetter_instanciable (var_targetType_7720.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 189)).operator_not (SOURCE_FILE ("instruction-var.galgas", 189)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 190)), GALGAS_string ("$").add_operation (var_targetType_7720.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 190)), fixItArray1  COMMA_SOURCE_FILE ("instruction-var.galgas", 190)) ;
  }
  GALGAS_lstring var_varLLVMName_7944 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 193)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-var.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 193)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-var.galgas", 193))  COMMA_SOURCE_FILE ("instruction-var.galgas", 193)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-var.galgas", 194)) ;
  GALGAS_objectIR var_objectIR_8076 = GALGAS_objectIR::constructor_localVariableReference (var_targetType_7720, var_varLLVMName_7944  COMMA_SOURCE_FILE ("instruction-var.galgas", 195)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_8171 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalVariable ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8171, object->mProperty_mVarName, var_objectIR_8076, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("instruction-var.galgas", 196)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 196)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUndefinedVariable (object->mProperty_mVarName, var_targetType_7720, GALGAS_bool (true), var_objectIR_8076, extensionGetter_copyable (var_targetType_7720, inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 202)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 197)) ;
  }
  ioArgument_ioAllocaList.addAssign_operation (var_varLLVMName_7944.getter_string (SOURCE_FILE ("instruction-var.galgas", 206)), extensionGetter_llvmTypeName (var_targetType_7720.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-var.galgas", 206))  COMMA_SOURCE_FILE ("instruction-var.galgas", 206)) ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mProperty_mOptionalTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-let.galgas", 72)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), object->mProperty_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 73)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3458 = temp_0 ;
  GALGAS_objectIR var_expressionResultPossibleReference_4185 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3458, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResultPossibleReference_4185, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 76)) ;
  GALGAS_semanticTemporariesStruct joker_4436 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-let.galgas", 99)) ;
  GALGAS_allocaList joker_4547 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-let.galgas", 102)) ;
  GALGAS_instructionListIR joker_4588 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-let.galgas", 103)) ;
  GALGAS_objectIR joker_4632 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_targetType_3458, constinArgument_inContext, constinArgument_inCurrentMode, joker_4436, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_4547, joker_4588, joker_4632, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 92)) ;
  GALGAS_objectIR var_expressionResult_4843 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResultPossibleReference_4185, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 109)), var_expressionResult_4843, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 106)) ;
  }
  GALGAS_objectIR var_result_4890 = function_checkAssignmentCompatibility (var_expressionResult_4843, var_targetType_3458, object->mProperty_mVarName.getter_location (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 113)) ;
  const enumGalgasBool test_2 = extensionGetter_instanciable (extensionGetter_type (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 121)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 121)).operator_not (SOURCE_FILE ("instruction-let.galgas", 121)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 122)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 122)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 122)), fixItArray3  COMMA_SOURCE_FILE ("instruction-let.galgas", 122)) ;
    var_result_4890.drop () ; // Release error dropped variable
  }
  GALGAS_lstring var_varPLMName_5261 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-let.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 125)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 125))  COMMA_SOURCE_FILE ("instruction-let.galgas", 125)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 126)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 127)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioAllocaList.addAssign_operation (var_varPLMName_5261.getter_string (SOURCE_FILE ("instruction-let.galgas", 128)), extensionGetter_llvmTypeName (extensionGetter_type (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 128))  COMMA_SOURCE_FILE ("instruction-let.galgas", 128)) ;
    GALGAS_objectIR var_localConstant_5520 = GALGAS_objectIR::constructor_localVariableReference (extensionGetter_type (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 129)), var_varPLMName_5261  COMMA_SOURCE_FILE ("instruction-let.galgas", 129)) ;
    {
    extensionSetter_appendStoreFromReference (ioArgument_ioInstructionGenerationList, var_localConstant_5520, object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-let.galgas", 130)), var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 130)) ;
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5717 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5717, object->mProperty_mVarName, var_expressionResult_4843, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 132)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertConstant (object->mProperty_mVarName, extensionGetter_type (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 135)), GALGAS_bool (true), var_expressionResult_4843, extensionGetter_copyable (extensionGetter_type (var_result_4890, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 138)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 133)) ;
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
  GALGAS_semanticTemporariesStruct joker_4051 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-assert.galgas", 86)) ;
  GALGAS_allocaList joker_4162 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 89)) ;
  GALGAS_instructionListIR joker_4203 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-assert.galgas", 90)) ;
  GALGAS_objectIR joker_4245 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-assert.galgas", 83)), constinArgument_inContext, constinArgument_inCurrentMode, joker_4051, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_4162, joker_4203, joker_4245, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 79)) ;
  const enumGalgasBool test_2 = extensionGetter_kind (var_expressionValue_3811, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 94)).getter_isBoolean (SOURCE_FILE ("instruction-assert.galgas", 94)).operator_not (SOURCE_FILE ("instruction-assert.galgas", 94)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assert.galgas", 95)) ;
  }
  const enumGalgasBool test_4 = extensionGetter_isStatic (var_expressionValue_3811, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 98)).boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mAssertInstructionLocation, GALGAS_string ("expression is static: use check directive"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assert.galgas", 99)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-assert.galgas", 102)).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_assertInstructionIR::constructor_new (object->mProperty_mAssertInstructionLocation, var_instructionGenerationList_3263, var_expressionValue_3811  COMMA_SOURCE_FILE ("instruction-assert.galgas", 103))  COMMA_SOURCE_FILE ("instruction-assert.galgas", 103)) ;
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
  GALGAS_uint var_assertErrorCode_5671 = GALGAS_uint ((uint32_t) 7U) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 129)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("if (!").add_operation (extensionGetter_llvmName (object->mProperty_mExpressionValue, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 130)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 130)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  raise_exception (").add_operation (var_assertErrorCode_5671.getter_string (SOURCE_FILE ("instruction-assert.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 131)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 131)).add_operation (object->mProperty_mAssertInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 132)).getter_lastPathComponent (SOURCE_FILE ("instruction-assert.galgas", 132)).getter_utf_38_Representation (SOURCE_FILE ("instruction-assert.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 132)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 132)).add_operation (object->mProperty_mAssertInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 133)).getter_string (SOURCE_FILE ("instruction-assert.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 133)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 131)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-assert.galgas", 134)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-assert.galgas", 143)) ;
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
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_unusedInstructionListIR_3251, var_result_3811, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 61)) ;
  GALGAS_semanticTemporariesStruct joker_4074 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-panic.galgas", 84)) ;
  GALGAS_allocaList joker_4185 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 87)) ;
  GALGAS_instructionListIR joker_4226 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-panic.galgas", 88)) ;
  GALGAS_objectIR joker_4266 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mCodeExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext.getter_mPanicCodeType (HERE), constinArgument_inContext, constinArgument_inCurrentMode, joker_4074, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_4185, joker_4226, joker_4266, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 77)) ;
  GALGAS_bool test_2 = GALGAS_bool (kIsStrictSup, var_unusedInstructionListIR_3251.getter_length (SOURCE_FILE ("instruction-panic.galgas", 93)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = var_result_3811.getter_isLiteralInteger (SOURCE_FILE ("instruction-panic.galgas", 94)).operator_not (SOURCE_FILE ("instruction-panic.galgas", 94)) ;
  }
  GALGAS_bool test_3 = test_2 ;
  if (kBoolTrue != test_3.boolEnum ()) {
    test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_result_3811, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 95)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 95)))) ;
  }
  const enumGalgasBool test_4 = test_3.boolEnum () ;
  if (kBoolTrue == test_4) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("throw expression should be a literal integer"), fixItArray5  COMMA_SOURCE_FILE ("instruction-panic.galgas", 96)) ;
  }else if (kBoolFalse == test_4) {
    GALGAS_bigint var_min_4622 ;
    GALGAS_bigint var_max_4635 ;
    GALGAS_bool joker_4646 ; // Joker input parameter
    GALGAS_uint joker_4649_1 ; // Joker input parameter
    constinArgument_inContext.getter_mPanicCodeType (HERE).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 98)).method_integer (var_min_4622, var_max_4635, joker_4646, joker_4649_1, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 98)) ;
    GALGAS_bigint var_throwValue_4705 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4681_1 ; // Joker input parameter
    var_result_3811.method_literalInteger (joker_4681_1, var_throwValue_4705, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 99)) ;
    GALGAS_bool test_6 = GALGAS_bool (kIsStrictInf, var_throwValue_4705.objectCompare (var_min_4622)) ;
    if (kBoolTrue != test_6.boolEnum ()) {
      test_6 = GALGAS_bool (kIsStrictSup, var_throwValue_4705.objectCompare (var_max_4635)) ;
    }
    const enumGalgasBool test_7 = test_6.boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mThrowLocation, GALGAS_string ("panic expression cannot be represented by an `").add_operation (constinArgument_inContext.getter_mPanicCodeType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 101)), fixItArray8  COMMA_SOURCE_FILE ("instruction-panic.galgas", 101)) ;
    }else if (kBoolFalse == test_7) {
      const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("instruction-panic.galgas", 102)).boolEnum () ;
      if (kBoolTrue == test_9) {
        ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_panicInstructionIR::constructor_new (object->mProperty_mThrowLocation, var_throwValue_4705  COMMA_SOURCE_FILE ("instruction-panic.galgas", 103))  COMMA_SOURCE_FILE ("instruction-panic.galgas", 103)) ;
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
  GALGAS_uint var_staticStringIndex_5987 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mThrowLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 128)).getter_lastPathComponent (SOURCE_FILE ("instruction-panic.galgas", 128)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-panic.galgas", 128)), var_staticStringIndex_5987, inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 127)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_5987.getter_string (SOURCE_FILE ("instruction-panic.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 131)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 131)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 132)).add_operation (object->mProperty_mThrowLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 132)).getter_string (SOURCE_FILE ("instruction-panic.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 132)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 132)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 133)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("instruction-panic.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 133)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-panic.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("instruction-panic.galgas", 133)) ;
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
  GALGAS_semanticTemporariesStruct joker_5628 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-if.galgas", 136)) ;
  GALGAS_allocaList joker_5739 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 139)) ;
  GALGAS_instructionListIR joker_5780 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 140)) ;
  GALGAS_objectIR joker_5824 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-if.galgas", 133)), constinArgument_inContext, constinArgument_inCurrentMode, joker_5628, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_5739, joker_5780, joker_5824, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
  GALGAS_objectIR var_testResult_6035 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testResultPossibleReference_5384, object->mProperty_mTestExpressionEndLocation, var_testResult_6035, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 143)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testResult_6035, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 150)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-if.galgas", 150)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testResult_6035, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 151)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 151)), fixItArray1  COMMA_SOURCE_FILE ("instruction-if.galgas", 151)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_bool test_2 = object->mProperty_mStaticIfExpression ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_isStatic (var_testResult_6035, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 152)).operator_not (SOURCE_FILE ("instruction-if.galgas", 152)) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is not static"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 153)) ;
    }else if (kBoolFalse == test_3) {
      GALGAS_bool test_5 = extensionGetter_isStatic (var_testResult_6035, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 154)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = object->mProperty_mStaticIfExpression.operator_not (SOURCE_FILE ("instruction-if.galgas", 154)) ;
      }
      const enumGalgasBool test_6 = test_5.boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticWarning (object->mProperty_mTestExpressionEndLocation, GALGAS_string ("'if' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 155)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("instruction-if.galgas", 155)) ;
      }
    }
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6557 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6557, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 158)) ;
  }
  GALGAS_instructionListIR var_thenInstructionGenerationList_6720 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 160)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mThenInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfThenInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_thenInstructionGenerationList_6720, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 161)) ;
  GALGAS_instructionListIR var_elseInstructionGenerationList_7404 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 177)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mElseInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOfElseInstructionList, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_elseInstructionGenerationList_7404, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_8020 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8020, object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 193)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 194)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_ifInstructionIR::constructor_new (var_testResult_6035, object->mProperty_mTestExpressionEndLocation, var_thenInstructionGenerationList_6720, var_elseInstructionGenerationList_7404  COMMA_SOURCE_FILE ("instruction-if.galgas", 196))  COMMA_SOURCE_FILE ("instruction-if.galgas", 196)) ;
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
  GALGAS_string var_labelTrue_9185 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 222)).getter_string (SOURCE_FILE ("instruction-if.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 222)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 222)) ;
  GALGAS_string var_labelFalse_9248 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)).getter_string (SOURCE_FILE ("instruction-if.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)) ;
  GALGAS_string var_labelEnd_9310 = GALGAS_string ("if.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)).getter_string (SOURCE_FILE ("instruction-if.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestVariable, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (var_labelTrue_9185, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (var_labelFalse_9248, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 225)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTrue_9185.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 227)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mThenInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_9310, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 229)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelFalse_9248.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 231)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mElseInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 232)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelEnd_9310, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 233)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_9310.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 235)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mThenInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 244)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mElseInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 245)) ;
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
        const cEnumAssociatedValues_guardedCommand_boolean * extractPtr_10048 = (const cEnumAssociatedValues_guardedCommand_boolean *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_10048->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_10048->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_10048->mAssociatedValue2 ;
        GALGAS_instructionListIR var_guardInstructionGenerationList_8486 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 204)) ;
        GALGAS_objectIR var_sourceOperand_9095 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 210)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_8486, var_sourceOperand_9095, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 205)) ;
        GALGAS_semanticTemporariesStruct joker_9369 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-sync.galgas", 228)) ;
        GALGAS_allocaList joker_9492 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 231)) ;
        GALGAS_instructionListIR joker_9537 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 232)) ;
        GALGAS_objectIR joker_9588 ; // Joker input parameter
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 225)), constinArgument_inContext, constinArgument_inCurrentMode, joker_9369, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_9492, joker_9537, joker_9588, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 221)) ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_sourceOperand_9095, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 235)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 235)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray1  COMMA_SOURCE_FILE ("instruction-sync.galgas", 236)) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_2 = extensionGetter_isStatic (var_sourceOperand_9095, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 237)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-sync.galgas", 238)) ;
          }
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_booleanGuard (extractedValue_isWhileCommand, var_guardInstructionGenerationList_8486, var_sourceOperand_9095  COMMA_SOURCE_FILE ("instruction-sync.galgas", 240)) ;
      }
      break ;
    case GALGAS_guardedCommand::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommand_boolAndSync * extractPtr_12840 = (const cEnumAssociatedValues_guardedCommand_boolAndSync *) (enumerator_7009.current_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_12840->mAssociatedValue0 ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_12840->mAssociatedValue1 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_12840->mAssociatedValue2 ;
        const GALGAS_lstring extractedValue_optionalReceiverName = extractPtr_12840->mAssociatedValue3 ;
        const GALGAS_lstring extractedValue_guardName = extractPtr_12840->mAssociatedValue4 ;
        const GALGAS_effectiveArgumentListAST extractedValue_effectiveParameterList = extractPtr_12840->mAssociatedValue5 ;
        GALGAS_instructionListIR var_boolExpInstructionGenerationList_10227 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 246)) ;
        GALGAS_objectIR var_boolExpressionResult_10849 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 252)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_boolExpInstructionGenerationList_10227, var_boolExpressionResult_10849, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 247)) ;
        GALGAS_semanticTemporariesStruct joker_11123 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-sync.galgas", 270)) ;
        GALGAS_allocaList joker_11246 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 273)) ;
        GALGAS_instructionListIR joker_11291 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 274)) ;
        GALGAS_objectIR joker_11344 ; // Joker input parameter
        callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, GALGAS_bool (true), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 267)), constinArgument_inContext, constinArgument_inCurrentMode, joker_11123, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_11246, joker_11291, joker_11344, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 263)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, extensionGetter_key (var_boolExpressionResult_10849, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 277)).objectCompare (function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 277)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_endOfExpression, GALGAS_string ("guarded expression should be boolean"), fixItArray5  COMMA_SOURCE_FILE ("instruction-sync.galgas", 278)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = extensionGetter_isStatic (var_boolExpressionResult_10849, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 279)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (extractedValue_endOfExpression, GALGAS_string ("guarded expression is static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 280)) ;
          }
        }
        GALGAS_instructionListIR var_guardInstructionGenerationList_11700 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 282)) ;
        GALGAS_procCallEffectiveParameterListIR var_guardEffectiveParameterListIR_12334 ;
        GALGAS_lstring var_guardMangledName_12390 ;
        {
        routine_analyzeGuardCall (constinArgument_inSelfType, extractedValue_optionalReceiverName, extractedValue_guardName, extractedValue_effectiveParameterList, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_guardInstructionGenerationList_11700, var_guardEffectiveParameterListIR_12334, var_guardMangledName_12390, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 283)) ;
        }
        var_guardedCommandIR_7163 = GALGAS_guardedCommandIR::constructor_boolAndSync (extractedValue_isWhileCommand, var_boolExpInstructionGenerationList_10227, var_boolExpressionResult_10849, var_guardMangledName_12390.getter_string (HERE), extractedValue_optionalReceiverName.getter_string (HERE), var_guardInstructionGenerationList_11700, var_guardEffectiveParameterListIR_12334  COMMA_SOURCE_FILE ("instruction-sync.galgas", 300)) ;
      }
      break ;
    }
    GALGAS_instructionListIR var_branchInstructionGenerationList_12927 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 311)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_7009.current_mInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, enumerator_7009.current_mEndOfBranch (HERE), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_branchInstructionGenerationList_12927, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 312)) ;
    {
    ioArgument_ioUniversalMap.insulate (HERE) ;
    cPtr_universalPropertyAndRoutineMapForContext * ptr_13558 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
    callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_13558, enumerator_7009.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 327)) ;
    }
    {
    ioArgument_ioVariableMap.setter_closeOverride (enumerator_7009.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 328)) ;
    }
    var_onInstructionBranchListIR_6938.addAssign_operation (var_guardedCommandIR_7163, var_branchInstructionGenerationList_12927  COMMA_SOURCE_FILE ("instruction-sync.galgas", 330)) ;
    enumerator_7009.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_syncInstructionIR::constructor_new (object->mProperty_mStartOf_5F_on_5F_instruction, var_onInstructionBranchListIR_6938  COMMA_SOURCE_FILE ("instruction-sync.galgas", 335))  COMMA_SOURCE_FILE ("instruction-sync.galgas", 335)) ;
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
  outArgument_outEffectiveParameterListIR = GALGAS_procCallEffectiveParameterListIR::constructor_emptyList (SOURCE_FILE ("instruction-sync.galgas", 357)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_14918 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectIR var_objectIR_15088 ;
    {
    GALGAS_bool joker_15057_1 ; // Joker input parameter
    GALGAS_bool joker_15096_2 ; // Joker input parameter
    GALGAS_bool joker_15096_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForMethodCall (constinArgument_inReceiverName, var_receiverType_14918, joker_15057_1, var_objectIR_15088, joker_15096_2, joker_15096_1, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 360)) ;
    }
    outArgument_outEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("instruction-sync.galgas", 367)), var_objectIR_15088  COMMA_SOURCE_FILE ("instruction-sync.galgas", 367)) ;
  }else if (kBoolFalse == test_0) {
    var_receiverType_14918 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-sync.galgas", 369)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("$").add_operation (var_receiverType_14918.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 372)) ;
  }
  outArgument_outGuardMangledName = function_routineMangledNameFromCall (temp_1, constinArgument_inGuardName, constinArgument_inEffectiveParameterList, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 371)) ;
  GALGAS_bool var_isPublic_15469 ;
  GALGAS_routineTypedSignature var_formalSignature_15517 ;
  constinArgument_inContext.getter_mGuardMapForContext (HERE).method_searchKey (outArgument_outGuardMangledName, var_isPublic_15469, var_formalSignature_15517, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 376)) ;
  const enumGalgasBool test_3 = var_isPublic_15469.operator_not (SOURCE_FILE ("instruction-sync.galgas", 382)).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_inReceiverName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_declarationFile_15665 = constinArgument_inContext.getter_mGuardMapForContext (HERE).getter_locationForKey (outArgument_outGuardMangledName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 384)).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 384)) ;
      GALGAS_string var_invocationFile_15774 = constinArgument_inGuardName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 385)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_invocationFile_15774.objectCompare (var_declarationFile_15665)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 387)), GALGAS_string ("this guard is not public"), fixItArray6  COMMA_SOURCE_FILE ("instruction-sync.galgas", 387)) ;
      }
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inGuardName.getter_location (SOURCE_FILE ("instruction-sync.galgas", 390)), GALGAS_string ("this guard is not public"), fixItArray7  COMMA_SOURCE_FILE ("instruction-sync.galgas", 390)) ;
    }
  }
  {
  ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addEdge (constinArgument_inCallerNameForInvocationGraph, outArgument_outGuardMangledName COMMA_SOURCE_FILE ("instruction-sync.galgas", 394)) ;
  }
  {
  routine_analyzeEffectiveParameters (constinArgument_inSelfType, GALGAS_bool (true), GALGAS_bool (true), var_formalSignature_15517, constinArgument_inEffectiveParameterList, constinArgument_inGuardName.getter_location (HERE), outArgument_outGuardMangledName, constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, outArgument_outEffectiveParameterListIR, inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 396)) ;
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
  GALGAS_string var_startLabel_19031 = GALGAS_string ("select.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("instruction-sync.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 462)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 463)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_19031, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)).add_operation (GALGAS_string (".start\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 465)) ;
  GALGAS_string var_startLabelName_19195 = var_startLabel_19031.add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 466)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabelName_19195.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 467)) ;
  GALGAS_string var_exitLabelName_19279 = var_startLabel_19031.add_operation (GALGAS_string (".exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 468)) ;
  GALGAS_string var_selectLabelName_19324 = var_startLabel_19031.add_operation (GALGAS_string (".select"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 469)) ;
  GALGAS_string var_errorLabelName_19370 = var_startLabel_19031.add_operation (GALGAS_string (".error"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 470)) ;
  GALGAS_string var_currentStartBranchLabel_19424 = var_startLabelName_19195 ;
  cEnumerator_syncInstructionBranchListIR enumerator_19484 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  GALGAS_uint index_19447 ((uint32_t) 0) ;
  while (enumerator_19484.hasCurrentObject ()) {
    GALGAS_string var_acceptanceVarName_19519 = GALGAS_string ("%").add_operation (var_startLabel_19031, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (GALGAS_string (".accept."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 473)) ;
    GALGAS_bool var_isWhileGuardedCommand_19589 ;
    switch (enumerator_19484.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_20523 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_19484.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_20523->mAssociatedValue0 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_20523->mAssociatedValue1 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_20523->mAssociatedValue3 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterListIR = extractPtr_20523->mAssociatedValue4 ;
        var_isWhileGuardedCommand_19589 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 478)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_19519, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 479)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 480)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_20074 (extractedValue_effectiveParameterListIR, kENUMERATION_UP) ;
        while (enumerator_20074.hasCurrentObject ()) {
          switch (enumerator_20074.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20074.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)).add_operation (extensionGetter_llvmName (enumerator_20074.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 484)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20074.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)).add_operation (extensionGetter_llvmName (enumerator_20074.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 486)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_20074.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)).add_operation (extensionGetter_llvmName (enumerator_20074.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 488)) ;
            }
            break ;
          }
          if (enumerator_20074.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 491)) ;
          }
          enumerator_20074.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 493)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_21341 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_19484.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_21341->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_21341->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_result = extractPtr_21341->mAssociatedValue2 ;
        var_isWhileGuardedCommand_19589 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_instructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 496)) ;
        GALGAS_string var_acceptedLabelName_20791 = var_startLabel_19031.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 497)) ;
        GALGAS_string var_rejectedLabelName_20854 = var_startLabel_19031.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 498)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (var_acceptedLabelName_20791, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (var_rejectedLabelName_20854, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 499)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_20791.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 500)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @noteGuardHasBeenAccepted ()\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 501)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_rejectedLabelName_20854, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 502)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_20854.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 503)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_19519, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string (" = or i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (extensionGetter_llvmName (extractedValue_result, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)).add_operation (GALGAS_string (", 0 ; assignment\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 504)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_23072 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_19484.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_isWhileCommand = extractPtr_23072->mAssociatedValue0 ;
        const GALGAS_instructionListIR extractedValue_expInstructionList = extractPtr_23072->mAssociatedValue1 ;
        const GALGAS_objectIR extractedValue_expResult = extractPtr_23072->mAssociatedValue2 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_23072->mAssociatedValue3 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionList = extractPtr_23072->mAssociatedValue5 ;
        const GALGAS_procCallEffectiveParameterListIR extractedValue_effectiveParameterList = extractPtr_23072->mAssociatedValue6 ;
        var_isWhileGuardedCommand_19589 = extractedValue_isWhileCommand ;
        extensionMethod_instructionListLLVMCode (extractedValue_expInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 507)) ;
        GALGAS_string var_testOkLabelName_21648 = var_startLabel_19031.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)).add_operation (GALGAS_string (".boolexp.true"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 508)) ;
        GALGAS_string var_testExitLabelName_21719 = var_startLabel_19031.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)).add_operation (GALGAS_string (".test.exit"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 509)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (extractedValue_expResult, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (var_testOkLabelName_21648, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (var_testExitLabelName_21719, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 510)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testOkLabelName_21648.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 511)) ;
        extensionMethod_instructionListLLVMCode (extractedValue_guardInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 512)) ;
        GALGAS_string var_guardAcceptationLabelName_22074 = var_startLabel_19031.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)).add_operation (GALGAS_string (".guard.acceptation"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 513)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_guardAcceptationLabelName_22074, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)).add_operation (function_llvmNameForGuardCall (extractedValue_guardMangledName, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 514)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 515)) ;
        cEnumerator_procCallEffectiveParameterListIR enumerator_22300 (extractedValue_effectiveParameterList, kENUMERATION_UP) ;
        while (enumerator_22300.hasCurrentObject ()) {
          switch (enumerator_22300.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
          case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22300.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)).add_operation (extensionGetter_llvmName (enumerator_22300.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 519)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22300.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)).add_operation (extensionGetter_llvmName (enumerator_22300.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 521)) ;
            }
            break ;
          case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
            {
              ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22300.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)).add_operation (extensionGetter_llvmName (enumerator_22300.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 523)) ;
            }
            break ;
          }
          if (enumerator_22300.hasNextObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 526)) ;
          }
          enumerator_22300.gotoNextObject () ;
        }
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 528)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testExitLabelName_21719, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 529)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(var_testExitLabelName_21719.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 530)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_acceptanceVarName_19519, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)).add_operation (GALGAS_string (" = phi i1 "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 531)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[%").add_operation (var_guardAcceptationLabelName_22074, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)).add_operation (var_testOkLabelName_21648, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)).add_operation (GALGAS_string ("], "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 532)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("[false, %").add_operation (var_currentStartBranchLabel_19424, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 533)) ;
      }
      break ;
    }
    GALGAS_string var_acceptedLabelName_23106 = var_startLabel_19031.add_operation (GALGAS_string (".accepted."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 535)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 535)) ;
    GALGAS_string var_rejectedLabelName_23166 = var_startLabel_19031.add_operation (GALGAS_string (".rejected."), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 536)).add_operation (index_19447.getter_string (SOURCE_FILE ("instruction-sync.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 536)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_acceptanceVarName_19519, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (var_acceptedLabelName_23106, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (var_rejectedLabelName_23166, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 537)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_acceptedLabelName_23106.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 538)) ;
    extensionMethod_instructionListLLVMCode (enumerator_19484.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 539)) ;
    GALGAS_string temp_0 ;
    const enumGalgasBool test_1 = var_isWhileGuardedCommand_19589.boolEnum () ;
    if (kBoolTrue == test_1) {
      temp_0 = var_startLabelName_19195 ;
    }else if (kBoolFalse == test_1) {
      temp_0 = var_exitLabelName_19279 ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 540)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_rejectedLabelName_23166.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 541)) ;
    var_currentStartBranchLabel_19424 = var_rejectedLabelName_23166 ;
    enumerator_19484.gotoNextObject () ;
    index_19447.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 472)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_selectLabelName_19324, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (GALGAS_string (" = call i1 @"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (function_llvmNameForServiceCall (function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 544)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_selectLabelName_19324, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)).add_operation (var_startLabelName_19195, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)).add_operation (var_errorLabelName_19370, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 545)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_errorLabelName_19370.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 546)) ;
  const enumGalgasBool test_2 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_exitLabelName_19279, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 548)) ;
  }else if (kBoolFalse == test_2) {
    GALGAS_uint var_staticStringIndex_24358 ;
    {
    extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticStringMap, object->mProperty_mSelectInstructionLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 551)).getter_lastPathComponent (SOURCE_FILE ("instruction-sync.galgas", 551)).getter_stringByDeletingPathExtension (SOURCE_FILE ("instruction-sync.galgas", 551)), var_staticStringIndex_24358, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 550)) ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_24358.getter_string (SOURCE_FILE ("instruction-sync.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 554)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)).add_operation (object->mProperty_mSelectInstructionLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 555)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)).add_operation (function_panicCodeForClosedSync (inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)).getter_string (SOURCE_FILE ("instruction-sync.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 556)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 557)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabelName_19279.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("instruction-sync.galgas", 559)) ;
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
  GALGAS_uint var_branchCount_25011 = object->mProperty_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 568)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_25011)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_25011 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_25196 (object->mProperty_mOnInstructionBranchListIR, kENUMERATION_UP) ;
  while (enumerator_25196.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_25196.current (HERE).getter_mInstructionGenerationList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 573)) ;
    switch (enumerator_25196.current (HERE).getter_mGuardedCommand (HERE).enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_25750 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_25196.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25750->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25750->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25750->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 576)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 577)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 579)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_25917 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_25196.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25917->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 582)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_26452 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_25196.current (HERE).getter_mGuardedCommand (HERE).unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_26452->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_26452->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_26452->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_26452->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 584)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 585)) ;
        ioArgument_ioAccessibleEntities.mProperty_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 586)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 588)) ;
        }
      }
      break ;
    }
    enumerator_25196.gotoNextObject () ;
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
  GALGAS_semanticTemporariesStruct joker_4339 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-while.galgas", 94)) ;
  GALGAS_allocaList joker_4450 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 97)) ;
  GALGAS_instructionListIR joker_4491 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 98)) ;
  GALGAS_objectIR joker_4537 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mTestExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 91)), constinArgument_inContext, constinArgument_inCurrentMode, joker_4339, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_4450, joker_4491, joker_4537, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 87)) ;
  GALGAS_objectIR var_testValue_4737 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_testValuePossibleReference_4095, object->mProperty_mEndOf_5F_test_5F_expression, var_testValue_4737, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 101)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testValue_4737, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 108)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4737, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 109)), fixItArray1  COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = extensionGetter_isStatic (var_testValue_4737, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 110)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-while.galgas", 111)) ;
    }
  }
  GALGAS_instructionListIR var_instructionGenerationList_5112 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 114)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5137 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5137, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 115)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 116)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_5112, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 117)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5819 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5819, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 132)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 133)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 136)), var_testInstructionGenerationList_3528, var_testValue_4737, var_instructionGenerationList_5112  COMMA_SOURCE_FILE ("instruction-while.galgas", 135))  COMMA_SOURCE_FILE ("instruction-while.galgas", 135)) ;
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
  GALGAS_string var_labelTest_7002 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 161)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 161)) ;
  GALGAS_string var_labelLoop_7053 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 162)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 162)) ;
  GALGAS_string var_labelEnd_7103 = GALGAS_string ("while.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_7002, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_7002.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 166)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)).add_operation (var_labelLoop_7053, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)).add_operation (var_labelEnd_7103, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 167)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_7053.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 168)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 169)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_7002, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 170)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_7103.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 171)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 180)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 181)) ;
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
  GALGAS_typeKind var_iteratedTypeKind_5211 = extensionGetter_type (var_iteratedObjectPointer_4485, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122)).getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 122)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType_5425 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_5211.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 126)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_iteratedElementType_5425 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), GALGAS_string ("uint8").getter_nowhere (SOURCE_FILE ("instruction-for-in-do.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 127)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = var_iteratedTypeKind_5211.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 128)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_5635 ; // Joker input parameter
      GALGAS_bigint joker_5671_3 ; // Joker input parameter
      GALGAS_classConstantMap joker_5671_2 ; // Joker input parameter
      GALGAS_uint joker_5671_1 ; // Joker input parameter
      var_iteratedTypeKind_5211.method_arrayType (joker_5635, var_iteratedElementType_5425, joker_5671_3, joker_5671_2, joker_5671_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 129)) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mIteratedObject.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 131)), GALGAS_string ("this object is not enumerable"), fixItArray2  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 131)) ;
      var_iteratedElementType_5425.drop () ; // Release error dropped variable
    }
  }
  GALGAS_lstring var_enumeratedVarLLVMName_5802 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 134))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 134)) ;
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 135)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_5802.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 136)), extensionGetter_llvmTypeName (var_iteratedElementType_5425.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 136)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6053 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 138)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 139)) ;
  }
  GALGAS_objectIR var_objectIR_6143 = GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_5425, var_enumeratedVarLLVMName_5802  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 140)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_6257 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_6257, object->mProperty_mVarName, var_objectIR_6143, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 141)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_iteratedElementType_5425, GALGAS_bool (true), var_objectIR_6143, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 142)) ;
  }
  GALGAS_instructionListIR var_whileExpression_5F_GenerationList_6595 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 151)) ;
  GALGAS_objectIR var_whileExpressionResult_7159 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 157)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_whileExpression_5F_GenerationList_6595, var_whileExpressionResult_7159, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 152)) ;
  GALGAS_semanticTemporariesStruct joker_7404 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  GALGAS_allocaList joker_7515 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 178)) ;
  GALGAS_instructionListIR joker_7556 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 179)) ;
  GALGAS_objectIR joker_7603 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 172)), constinArgument_inContext, constinArgument_inCurrentMode, joker_7404, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_7515, joker_7556, joker_7603, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
  const enumGalgasBool test_3 = extensionGetter_kind (var_whileExpressionResult_7159, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 183)).getter_isBoolean (SOURCE_FILE ("instruction-for-in-do.galgas", 183)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 183)).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression should be boolean"), fixItArray4  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
  }else if (kBoolFalse == test_3) {
    GALGAS_bool test_5 = object->mProperty_mStaticWhileExpression ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = extensionGetter_isStatic (var_whileExpressionResult_7159, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 185)).operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 185)) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is not static"), fixItArray7  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 186)) ;
    }else if (kBoolFalse == test_6) {
      GALGAS_bool test_8 = extensionGetter_isStatic (var_whileExpressionResult_7159, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 187)) ;
      if (kBoolTrue == test_8.boolEnum ()) {
        test_8 = object->mProperty_mStaticWhileExpression.operator_not (SOURCE_FILE ("instruction-for-in-do.galgas", 187)) ;
      }
      const enumGalgasBool test_9 = test_8.boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (object->mProperty_mEndOf_5F_whileExpression, GALGAS_string ("'while' expression is static (insert @").add_operation (function_staticAttribute (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 188)).add_operation (GALGAS_string (" attribute)"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 188)), fixItArray10  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 188)) ;
      }
    }
  }
  GALGAS_instructionListIR var_doInstructionList_5F_GenerationList_8219 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 191)) ;
  extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_doInstructionList_5F_GenerationList_8219, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 192)) ;
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_8832 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8832, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 207)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 208)) ;
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_iteratedTypeKind_5211.objectCompare (GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("instruction-for-in-do.galgas", 210)))).boolEnum () ;
  if (kBoolTrue == test_11) {
    ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnStringIR::constructor_new (var_enumeratedVarLLVMName_5802.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 212)), object->mProperty_mIteratedObject.getter_location (HERE), var_iteratedObjectPointer_4485, var_whileExpression_5F_GenerationList_6595, var_whileExpressionResult_7159, var_doInstructionList_5F_GenerationList_8219  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 211))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 211)) ;
  }else if (kBoolFalse == test_11) {
    const enumGalgasBool test_12 = var_iteratedTypeKind_5211.getter_isArrayType (SOURCE_FILE ("instruction-for-in-do.galgas", 219)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_unifiedTypeMap_2D_proxy var_elementType_9381 ;
      GALGAS_bigint var_size_9396 ;
      GALGAS_lstring joker_9351 ; // Joker input parameter
      GALGAS_classConstantMap joker_9398_2 ; // Joker input parameter
      GALGAS_uint joker_9398_1 ; // Joker input parameter
      var_iteratedTypeKind_5211.method_arrayType (joker_9351, var_elementType_9381, var_size_9396, joker_9398_2, joker_9398_1, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 220)) ;
      GALGAS_stringset var_invokedFunctionSet_9435 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-for-in-do.galgas", 221)) ;
      const enumGalgasBool test_13 = ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).getter_hasKey (object->mProperty_mIteratedObject.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 222)) COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 222)).boolEnum () ;
      if (kBoolTrue == test_13) {
        ioArgument_ioTemporaries.getter_mStaticArrayMap (HERE).method_searchKey (object->mProperty_mIteratedObject, var_invokedFunctionSet_9435, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 223)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionOnArrayIR::constructor_new (var_enumeratedVarLLVMName_5802.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 226)), object->mProperty_mIteratedObject, var_iteratedObjectPointer_4485, var_whileExpression_5F_GenerationList_6595, var_whileExpressionResult_7159, var_doInstructionList_5F_GenerationList_8219, var_elementType_9381, var_size_9396.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 233)), var_invokedFunctionSet_9435  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 225))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 225)) ;
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
  GALGAS_string var_elementTypeLLVMName_12053 = extensionGetter_llvmTypeName (object->mProperty_mElementType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 292)) ;
  GALGAS_string var_listTypeLLVMName_12113 = GALGAS_string ("[").add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)).add_operation (var_elementTypeLLVMName_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 293)) ;
  GALGAS_string var_locationIndex_12188 = object->mProperty_mIteratedObjectName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 294)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 294)) ;
  GALGAS_string var_startLabel_12264 = GALGAS_string ("for.label.start.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 296)) ;
  GALGAS_string var_testLabel_12317 = GALGAS_string ("for.label.test.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 297)) ;
  GALGAS_string var_whileLabel_12370 = GALGAS_string ("for.label.while.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 298)) ;
  GALGAS_string var_nextLabel_12423 = GALGAS_string ("for.label.next.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 299)) ;
  GALGAS_string var_loopVar_12473 = GALGAS_string ("for.loop.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 300)) ;
  GALGAS_string var_loopLabel_12519 = GALGAS_string ("for.label.loop.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 301)) ;
  GALGAS_string var_endLabel_12570 = GALGAS_string ("for.label.end.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 302)) ;
  GALGAS_string var_indexVar_12623 = GALGAS_string ("for.index.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 304)) ;
  GALGAS_string var_ptrVar_12668 = GALGAS_string ("for.ptr.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 305)) ;
  GALGAS_string var_currentValue_12717 = GALGAS_string ("for.currentValue.").add_operation (var_locationIndex_12188, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 306)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_12264, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 309)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_12264.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 312)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (GALGAS_string (".start = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)).add_operation (var_listTypeLLVMName_12113, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 314)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", ").add_operation (var_listTypeLLVMName_12113, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 315)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", i32 0, i32 0\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 316)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_12317, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 318)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 318)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_12317.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 321)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (GALGAS_string (" = phi "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (var_elementTypeLLVMName_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (GALGAS_string ("* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (var_startLabel_12264, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)).add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (var_nextLabel_12423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 323)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_12623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string (" = phi i32 ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (object->mProperty_mArraySize.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (var_startLabel_12264, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)).add_operation (var_indexVar_12623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (var_nextLabel_12423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 326)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_loopVar_12473, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)).add_operation (GALGAS_string (" = icmp ugt i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)).add_operation (var_indexVar_12623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 328)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_loopVar_12473, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (var_whileLabel_12370, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (var_endLabel_12570, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 330)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_12370.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 333)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 335)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (var_loopLabel_12519, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (var_endLabel_12570, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 336)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_12519.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 339)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentValue_12717, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (var_elementTypeLLVMName_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 341)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_12053.add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 342)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeLLVMName_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (var_currentValue_12717, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (var_elementTypeLLVMName_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (GALGAS_string ("* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)).add_operation (function_llvmNameForLocalVariable (object->mProperty_mEnumeratedValueName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 343)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 346)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_12423, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 347)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_12423.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 349)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (var_elementTypeLLVMName_12053, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 351)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeLLVMName_12053.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (var_ptrVar_12668, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 352)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_indexVar_12623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).add_operation (GALGAS_string (".next = add i32 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).add_operation (var_indexVar_12623, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)).add_operation (GALGAS_string (", -1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 354)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_12317, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 355)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_12570.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 358)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 367)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 368)) ;
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.plusAssign_operation(object->mProperty_mInvokedFunctionSet, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 369)) ;
  ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mIteratedObjectName.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 370))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 370)) ;
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
  GALGAS_string var_startLabel_16514 = GALGAS_string ("for.label.start.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 393)) ;
  GALGAS_string var_testLabel_16579 = GALGAS_string ("for.label.test.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 394)) ;
  GALGAS_string var_loopLabel_16643 = GALGAS_string ("for.label.loop.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 395)) ;
  GALGAS_string var_whileLabel_16708 = GALGAS_string ("for.label.while.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 396)) ;
  GALGAS_string var_nextLabel_16773 = GALGAS_string ("for.label.next.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 397)) ;
  GALGAS_string var_endLabel_16836 = GALGAS_string ("for.label.end.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 398)) ;
  GALGAS_string var_ptrVar_16897 = GALGAS_string ("for.ptr.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 399)) ;
  GALGAS_string var_currentVar_16958 = GALGAS_string ("for.current.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 400)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 400)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_16514, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 403)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_16514.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 405)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)).add_operation (GALGAS_string (".start = load i8*, i8** "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)).add_operation (extensionGetter_llvmName (object->mProperty_mIteratedObject, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_16579, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 407)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 407)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_16579.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 410)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)).add_operation (GALGAS_string (" = phi i8* [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)).add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)).add_operation (GALGAS_string (".start, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 411)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_16514.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)).add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)).add_operation (var_nextLabel_16773, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 412)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_16958, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)).add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 413)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_16958, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)).add_operation (var_currentVar_16958, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 414)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_16958, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)).add_operation (var_endLabel_16836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)).add_operation (var_whileLabel_16708, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 415)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_whileLabel_16708.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 418)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mWhileInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 420)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mProperty_mWhileExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (var_loopLabel_16643, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (var_endLabel_16836, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 421)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_16643.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 424)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store i8 %").add_operation (var_currentVar_16958, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 426)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 427)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mDoInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 429)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_nextLabel_16773, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 430)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_nextLabel_16773.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 432)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 433)).add_operation (GALGAS_string (".next = getelementptr inbounds i8, "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 433)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("i8 * %").add_operation (var_ptrVar_16897, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 434)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 434)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_16579, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 435)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 435)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_16836.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 438)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 438)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mWhileInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 447)) ;
  extensionMethod_enterAccessibleEntities (object->mProperty_mDoInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 448)) ;
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
      const cEnumAssociatedValues_typeKind_integer * extractPtr_10197 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4268.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 94)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_10197->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_10197->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_10197->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_10197->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResultPossibleReference_5762 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4268, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResultPossibleReference_5762, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 114)) ;
      GALGAS_allocaList joker_6142 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 140)) ;
      GALGAS_instructionListIR joker_6170 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 141)) ;
      GALGAS_objectIR joker_6186 ; // Joker input parameter
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mLowerBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4268, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_6142, joker_6170, joker_6186, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 130)) ;
      GALGAS_objectIR var_lowerBoundExpressionResult_6469 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_lowerBoundExpressionResultPossibleReference_5762, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, var_lowerBoundExpressionResult_6469, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 144)) ;
      }
      GALGAS_objectIR var_upperBoundExpressionResultPossibleReference_7089 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4268, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResultPossibleReference_7089, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)) ;
      GALGAS_allocaList joker_7469 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 176)) ;
      GALGAS_instructionListIR joker_7512 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 177)) ;
      GALGAS_objectIR joker_7558 ; // Joker input parameter
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mUpperBoundExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4268, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_7469, joker_7512, joker_7558, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 166)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_7838 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_upperBoundExpressionResultPossibleReference_7089, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, var_upperBoundExpressionResult_7838, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 180)) ;
      }
      GALGAS_objectIR var_lowerBound_7895 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_6469, var_type_4268, object->mProperty_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 187)) ;
      GALGAS_objectIR var_upperBound_8119 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_7838, var_type_4268, object->mProperty_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 193)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_8353 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_openOverrideForRepeatBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8353, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 200)) ;
      }
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 201)) ;
      }
      GALGAS_lstring var_enumeratedVarLLVMName_8497 = GALGAS_lstring::constructor_new (object->mProperty_mVarName.getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 203)).add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 203)), object->mProperty_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 203))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 203)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 204)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_8497.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 205)), extensionGetter_llvmTypeName (var_type_4268.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 205))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 205)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mProperty_mVarName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_objectIR var_objectIR_8739 = GALGAS_objectIR::constructor_localVariableReference (var_type_4268, var_enumeratedVarLLVMName_8497  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 207)) ;
        {
        ioArgument_ioUniversalMap.insulate (HERE) ;
        cPtr_universalPropertyAndRoutineMapForContext * ptr_8841 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
        callExtensionSetter_insertLocalConstant ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_8841, object->mProperty_mVarName, var_objectIR_8739, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 208)) ;
        }
        {
        ioArgument_ioVariableMap.setter_insertUsedConstant (object->mProperty_mVarName, var_type_4268, GALGAS_bool (true), var_objectIR_8739, GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 209)) ;
        }
      }
      GALGAS_instructionListIR var_instructionGenerationList_9203 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)) ;
      extensionMethod_analyzeBranchInstructionList (object->mProperty_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_9203, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)) ;
      {
      ioArgument_ioUniversalMap.insulate (HERE) ;
      cPtr_universalPropertyAndRoutineMapForContext * ptr_9841 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
      callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_9841, object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
      }
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 236)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_8497.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), var_type_4268, extractedValue_unsigned, object->mProperty_mEndOf_5F_do_5F_instruction, var_lowerBound_7895, var_upperBound_8119, var_instructionGenerationList_9203  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
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
  GALGAS_string var_llvmType_11274 = extensionGetter_llvmTypeName (object->mProperty_mType.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 274)) ;
  GALGAS_string var_llvmVarName_11322 = function_llvmNameForLocalVariable (object->mProperty_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 275)) ;
  GALGAS_string var_testLabel_11377 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 276)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 276)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 276)) ;
  GALGAS_string var_loopLabel_11440 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 277)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 277)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 277)) ;
  GALGAS_string var_endLabel_11502 = GALGAS_string ("for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 278)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 278)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 278)) ;
  GALGAS_string var_testResult_11566 = GALGAS_string ("%for.").add_operation (object->mProperty_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 279)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 279)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 279)) ;
  GALGAS_string var_loadedVarName_11641 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 280)) ;
  GALGAS_string var_currentVarName_11719 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 281)) ;
  GALGAS_string var_nextVarName_11795 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mProperty_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 282)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (extensionGetter_llvmName (object->mProperty_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (var_llvmVarName_11322, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 284)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11377, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 285)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 285)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_11377.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 287)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_11641, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (var_llvmVarName_11322, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 288)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_11566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 289)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 289)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 290)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)).add_operation (var_loadedVarName_11641, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)).add_operation (extensionGetter_llvmName (object->mProperty_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 291)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_11566, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)).add_operation (var_loopLabel_11440, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)).add_operation (var_endLabel_11502, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 292)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_11440.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 294)) ;
  extensionMethod_instructionListLLVMCode (object->mProperty_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 295)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_11719, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (var_llvmVarName_11322, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 296)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_11795, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)).add_operation (var_currentVarName_11719, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 297)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (var_nextVarName_11795, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (var_llvmType_11274, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (var_llvmVarName_11322, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 298)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_11377, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 299)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 299)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_11502.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 301)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 310)) ;
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
  GALGAS_objectIR var_switchValueIRPossibleReference_4680 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 98)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_switchExpressionGenerationList_4106, var_switchValueIRPossibleReference_4680, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 93)) ;
  GALGAS_semanticTemporariesStruct joker_4926 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("instruction-switch.galgas", 116)) ;
  GALGAS_allocaList joker_5037 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 119)) ;
  GALGAS_instructionListIR joker_5078 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 120)) ;
  GALGAS_objectIR joker_5125 ; // Joker input parameter
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inSelfType, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 113)), constinArgument_inContext, constinArgument_inCurrentMode, joker_4926, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, joker_5037, joker_5078, joker_5125, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 109)) ;
  GALGAS_objectIR var_switchValueIR_5337 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_switchValueIRPossibleReference_4680, object->mProperty_mEndOf_5F_test_5F_expression, var_switchValueIR_5337, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 123)) ;
  }
  GALGAS_enumConstantMap var_enumConstantMap_5403 ;
  const enumGalgasBool test_0 = extensionGetter_kind (var_switchValueIR_5337, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)).getter_isEnumeration (SOURCE_FILE ("instruction-switch.galgas", 131)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_classConstantMap joker_5519_1 ; // Joker input parameter
    extensionGetter_kind (var_switchValueIR_5337, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)).method_enumeration (var_enumConstantMap_5403, joker_5519_1, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_switchValueIR_5337, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 135)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    var_enumConstantMap_5403.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_2 = extensionGetter_isStatic (var_switchValueIR_5337, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static"), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_5841 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_openOverrideForSelectBlock ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_5841, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 142)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 143)) ;
  }
  GALGAS_stringset var_usedEnumerationValues_5951 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 144)) ;
  GALGAS_switchCaseListIR var_switchCaseListIR_5993 = GALGAS_switchCaseListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 145)) ;
  cEnumerator_switchCaseList enumerator_6057 (object->mProperty_mSwitchCaseList, kENUMERATION_UP) ;
  while (enumerator_6057.hasCurrentObject ()) {
    GALGAS_uintlist var_caseIdentifierIndexList_6098 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 147)) ;
    cEnumerator_lstringlist enumerator_6140 (enumerator_6057.current_mCaseIdentifiers (HERE), kENUMERATION_UP) ;
    while (enumerator_6140.hasCurrentObject ()) {
      GALGAS_uint var_constantIdx_6208 ;
      var_enumConstantMap_5403.method_searchKey (enumerator_6140.current_mValue (HERE), var_constantIdx_6208, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 149)) ;
      var_caseIdentifierIndexList_6098.addAssign_operation (var_constantIdx_6208  COMMA_SOURCE_FILE ("instruction-switch.galgas", 150)) ;
      const enumGalgasBool test_4 = var_usedEnumerationValues_5951.getter_hasKey (enumerator_6140.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 151)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
        inCompiler->emitSemanticError (enumerator_6140.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 152)), GALGAS_string ("duplicated enumeration constant"), fixItArray5  COMMA_SOURCE_FILE ("instruction-switch.galgas", 152)) ;
      }
      var_usedEnumerationValues_5951.addAssign_operation (enumerator_6140.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 154))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)) ;
      enumerator_6140.gotoNextObject () ;
    }
    GALGAS_instructionListIR var_instructionGenerationList_6491 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 156)) ;
    extensionMethod_analyzeBranchInstructionList (enumerator_6057.current_mCaseInstructionList (HERE), constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mProperty_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_instructionGenerationList_6491, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 157)) ;
    var_switchCaseListIR_5993.addAssign_operation (var_caseIdentifierIndexList_6098, var_instructionGenerationList_6491  COMMA_SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    enumerator_6057.gotoNextObject () ;
  }
  {
  ioArgument_ioUniversalMap.insulate (HERE) ;
  cPtr_universalPropertyAndRoutineMapForContext * ptr_7211 = (cPtr_universalPropertyAndRoutineMapForContext *) ioArgument_ioUniversalMap.ptr () ;
  callExtensionSetter_closeOverride ((cPtr_universalPropertyAndRoutineMapForContext *) ptr_7211, object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)) ;
  }
  cEnumerator_enumConstantMap enumerator_7413 (var_enumConstantMap_5403, kENUMERATION_UP) ;
  while (enumerator_7413.hasCurrentObject ()) {
    const enumGalgasBool test_6 = var_usedEnumerationValues_5951.getter_hasKey (enumerator_7413.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 178)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).operator_not (SOURCE_FILE ("instruction-switch.galgas", 178)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_test_5F_expression, GALGAS_string ("missing '").add_operation (enumerator_7413.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)).add_operation (GALGAS_string ("' enumeration constant"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
    }
    enumerator_7413.gotoNextObject () ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_switchInstructionIR::constructor_new (object->mProperty_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)), var_switchExpressionGenerationList_4106, var_switchValueIR_5337, var_switchCaseListIR_5993  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 217)) ;
  GALGAS_string var_labelOtherwise_9082 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 220)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_9082, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 221)) ;
  cEnumerator_switchCaseListIR enumerator_9332 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_9283 ((uint32_t) 0) ;
  while (enumerator_9332.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_9395 (enumerator_9332.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_9395.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)).add_operation (enumerator_9395.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)).add_operation (index_9283.getter_string (SOURCE_FILE ("instruction-switch.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 225)) ;
      enumerator_9395.gotoNextObject () ;
    }
    enumerator_9332.gotoNextObject () ;
    index_9283.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 222)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 228)) ;
  cEnumerator_switchCaseListIR enumerator_9678 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_9635 ((uint32_t) 0) ;
  while (enumerator_9678.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)).add_operation (index_9635.getter_string (SOURCE_FILE ("instruction-switch.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
    extensionMethod_instructionListLLVMCode (enumerator_9678.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 232)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_9082, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)) ;
    enumerator_9678.gotoNextObject () ;
    index_9635.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 230)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_9082.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 236)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 245)) ;
  cEnumerator_switchCaseListIR enumerator_10425 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_10425.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_10425.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 247)) ;
    enumerator_10425.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type_3308 ;
  GALGAS_bigint var_arraySize_3336 ;
  GALGAS_lstring joker_3285 ; // Joker input parameter
  GALGAS_classConstantMap joker_3338_2 ; // Joker input parameter
  GALGAS_uint joker_3338_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)).method_arrayType (joker_3285, var_type_3308, var_arraySize_3336, joker_3338_2, joker_3338_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 82)) ;
  GALGAS_objectIR var_indexResultPossibleReference_3941 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 89)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_3941, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 84)) ;
  GALGAS_objectIR var_indexResult_4098 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_3941, constinArgument_inErrorLocation, var_indexResult_4098, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 100)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_4098.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 106)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_4231 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_4199_1 ; // Joker input parameter
    var_indexResult_4098.method_literalInteger (joker_4199_1, var_indexValue_4231, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_4231.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 108)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_4231.objectCompare (var_arraySize_3336)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_3336.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_4414 = GALGAS_objectIR::constructor_temporaryReference (var_type_3308, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 113)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 113)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 114)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 111)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 117)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_4414, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (var_indexValue_4231.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 121)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 121)), var_indexValue_4231.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 122)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)) ;
      }
      ioArgument_ioObjectPtr = var_result_4414 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_indexResult_4098, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 126)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 127)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_5116 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_4098, constinArgument_inErrorLocation, var_arraySize_3336, var_generatePanicInstruction_5116, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 128)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_5116 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 134)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 134)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 135)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_5319 = GALGAS_objectIR::constructor_temporaryReference (var_type_3308, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 140)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 140)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 141)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 138)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 144)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_5319, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (extensionGetter_name (var_indexResult_4098, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 148)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 148)), extensionGetter_llvmName (var_indexResult_4098, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 145)) ;
      }
      ioArgument_ioObjectPtr = var_result_5319 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 153)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_type_6732 ;
  GALGAS_bigint var_arraySize_6760 ;
  GALGAS_lstring joker_6709 ; // Joker input parameter
  GALGAS_classConstantMap joker_6762_2 ; // Joker input parameter
  GALGAS_uint joker_6762_1 ; // Joker input parameter
  extensionGetter_type (ioArgument_ioObjectPtr, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 175)).getter_kind (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 175)).method_arrayType (joker_6709, var_type_6732, var_arraySize_6760, joker_6762_2, joker_6762_1, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 175)) ;
  GALGAS_objectIR var_indexResultPossibleReference_7265 ;
  callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 181)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_7265, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 177)) ;
  GALGAS_objectIR var_indexResult_7422 ;
  {
  extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_7265, constinArgument_inErrorLocation, var_indexResult_7422, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 191)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_7422.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 197)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_7555 ;
    GALGAS_unifiedTypeMap_2D_proxy joker_7523_1 ; // Joker input parameter
    var_indexResult_7422.method_literalInteger (joker_7523_1, var_indexValue_7555, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 198)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_7555.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 199)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_7555.objectCompare (var_arraySize_6760)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_6760.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 200)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_result_7738 = GALGAS_objectIR::constructor_temporaryReference (var_type_6732, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 204)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 204)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 205)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 202)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 208)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_7738, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (var_indexValue_7555.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 212)), var_indexValue_7555.getter_uint (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 213)).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 209)) ;
      }
      ioArgument_ioObjectPtr = var_result_7738 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_kind (var_indexResult_7422, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 217)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_8440 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_7422, constinArgument_inErrorLocation, var_arraySize_6760, var_generatePanicInstruction_8440, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 219)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_8440 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 225)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 225)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 226)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_objectIR var_result_8643 = GALGAS_objectIR::constructor_temporaryReference (var_type_6732, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 231)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 231)), GALGAS_sliceMap::constructor_emptyMap (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 232)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 229)) ;
      ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 235)) ;
      {
      extensionSetter_appendGetPropertyReference (ioArgument_ioInstructionGenerationList, var_result_8643, ioArgument_ioObjectPtr, GALGAS_string ("[").add_operation (extensionGetter_name (var_indexResult_7422, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 239)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 239)), extensionGetter_llvmName (var_indexResult_7422, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 236)) ;
      }
      ioArgument_ioObjectPtr = var_result_8643 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 244)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_10159 ;
  GALGAS_lstring var_registerName_10189 ;
  GALGAS_bool var_readable_10216 ;
  GALGAS_bool var_writable_10243 ;
  GALGAS_bigint var_registerAddress_10284 ;
  GALGAS_sliceMap var_registerBitSliceMap_10328 ;
  GALGAS_uint var_arraySize_10363 ;
  GALGAS_uint var_elementArraySize_10427 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_10159, var_registerName_10189, var_readable_10216, var_writable_10243, var_registerAddress_10284, var_registerBitSliceMap_10328, var_arraySize_10363, var_elementArraySize_10427, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 267)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_10363.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 278)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_10216.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 279)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 280)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_11296 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 287)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_11296, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 282)) ;
      GALGAS_objectIR var_indexResult_11465 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_11296, constinArgument_inErrorLocation, var_indexResult_11465, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 298)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_11465.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 305)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_11631 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_11599_1 ; // Joker input parameter
        var_indexResult_11465.method_literalInteger (joker_11599_1, var_indexValue_11631, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 306)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_11631.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_11631.objectCompare (var_arraySize_10363.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 307)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_10363.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 308)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 308)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_10159, var_registerName_10189, var_readable_10216, var_writable_10243, var_registerAddress_10284.add_operation (var_indexValue_11631.multiply_operation (var_elementArraySize_10427.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 315)), var_registerBitSliceMap_10328, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 310)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_kind (var_indexResult_11465, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 322)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 322)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 323)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_12448 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_11465, constinArgument_inErrorLocation, var_arraySize_10363.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 327)), var_generatePanicInstruction_12448, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 324)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_12448 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 330)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 330)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 331)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_12663 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_10159, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 336)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 336)), var_registerBitSliceMap_10328, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 334)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 340)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_12663, var_indexResult_11465, var_registerAddress_10284, var_elementArraySize_10427.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 341)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_12663 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 349)) ;
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
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_registerType_14109 ;
  GALGAS_lstring var_registerName_14139 ;
  GALGAS_bool var_readable_14166 ;
  GALGAS_bool var_writable_14193 ;
  GALGAS_bigint var_registerAddress_14234 ;
  GALGAS_sliceMap var_registerBitSliceMap_14278 ;
  GALGAS_uint var_arraySize_14313 ;
  GALGAS_uint var_elementArraySize_14377 ;
  ioArgument_ioObjectPtr.method_registerReference (var_registerType_14109, var_registerName_14139, var_readable_14166, var_writable_14193, var_registerAddress_14234, var_registerBitSliceMap_14278, var_arraySize_14313, var_elementArraySize_14377, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 371)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_arraySize_14313.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register is not an array and does not support subscripting"), fixItArray1  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 382)) ;
    ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_readable_14166.operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 383)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("register cannot be read in this context"), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 384)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_objectIR var_indexResultPossibleReference_15142 ;
      callExtensionMethod_analyzeExpressionNew ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inGuard, constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 390)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResultPossibleReference_15142, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 386)) ;
      GALGAS_objectIR var_indexResult_15311 ;
      {
      extensionSetter_appendLoadFromReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResultPossibleReference_15142, constinArgument_inErrorLocation, var_indexResult_15311, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 400)) ;
      }
      const enumGalgasBool test_4 = var_indexResult_15311.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 407)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_bigint var_indexValue_15477 ;
        GALGAS_unifiedTypeMap_2D_proxy joker_15445_1 ; // Joker input parameter
        var_indexResult_15311.method_literalInteger (joker_15445_1, var_indexValue_15477, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 408)) ;
        GALGAS_bool test_5 = GALGAS_bool (kIsStrictInf, var_indexValue_15477.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 409)))) ;
        if (kBoolTrue != test_5.boolEnum ()) {
          test_5 = GALGAS_bool (kIsSupOrEqual, var_indexValue_15477.objectCompare (var_arraySize_14313.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 409)))) ;
        }
        const enumGalgasBool test_6 = test_5.boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (var_arraySize_14313.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)), fixItArray7  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 410)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          ioArgument_ioObjectPtr = GALGAS_objectIR::constructor_registerReference (var_registerType_14109, var_registerName_14139, var_readable_14166, var_writable_14193, var_registerAddress_14234.add_operation (var_indexValue_15477.multiply_operation (var_elementArraySize_14377.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 417)), var_registerBitSliceMap_14278, GALGAS_uint ((uint32_t) 0U), GALGAS_uint ((uint32_t) 0U)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 412)) ;
        }
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_8 = extensionGetter_kind (var_indexResult_15311, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 424)).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 424)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const enumGalgasBool test_9 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 425)).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_bool var_generatePanicInstruction_16294 ;
            {
            extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_15311, constinArgument_inErrorLocation, var_arraySize_14313.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 429)), var_generatePanicInstruction_16294, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 426)) ;
            }
            GALGAS_bool test_10 = var_generatePanicInstruction_16294 ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_panicAllowed (constinArgument_inCurrentMode, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 432)) ;
            }
            const enumGalgasBool test_11 = test_10.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generated panic"), fixItArray12  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 433)) ;
            }
          }
          GALGAS_objectIR var_registerAddressObject_16509 = GALGAS_objectIR::constructor_temporaryReference (var_registerType_14109, GALGAS_lstring::constructor_new (GALGAS_string ("temp.").add_operation (ioArgument_ioTemporaries.getter_mTemporaryIndex (HERE).getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 438)), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 438)), var_registerBitSliceMap_14278, GALGAS_bool (true)  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 436)) ;
          ioArgument_ioTemporaries.mProperty_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 442)) ;
          {
          extensionSetter_appendComputeVolatileRegisterAddressWithSubscript (ioArgument_ioInstructionGenerationList, var_registerAddressObject_16509, var_indexResult_15311, var_registerAddress_14234, var_elementArraySize_14377.getter_bigint (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 443)) ;
          }
          ioArgument_ioObjectPtr = var_registerAddressObject_16509 ;
        }else if (kBoolFalse == test_8) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray13  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 451)) ;
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

