#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-9.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension Getter '@effectiveParameterPassingModeAST passingModeForActualSelector'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_passingModeForActualSelector (const GALGAS_effectiveParameterPassingModeAST & inObject,
                                                            GALGAS_lstring inArgument_inSelector,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_effectiveParameterPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
    {
      result_outResult = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
    {
      result_outResult = GALGAS_string ("!\?") ;
    }
    break ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, inArgument_inSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_outResult.plusAssign_operation(inArgument_inSelector.mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 69)) ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Extension method '@assignmentTargetAST noteInstructionTypesInPrecedenceGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_noteInstructionTypesInPrecedenceGraph (const GALGAS_assignmentTargetAST inObject,
                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_accessInAssignmentListAST enumerator_3110 (inObject.mAttribute_mAccessList, kEnumeration_up) ;
  while (enumerator_3110.hasCurrentObject ()) {
    switch (enumerator_3110.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_3284 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_3110.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_3284->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 83)) ;
      }
      break ;
    }
    enumerator_3110.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@assignmentTargetAST analyzeAssignmentTarget'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeAssignmentTarget (const GALGAS_assignmentTargetAST inObject,
                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                              const GALGAS_targetAccessKind constinArgument_inSelfAccessKind,
                                              const GALGAS_bool /* constinArgument_inRoutineCanMutateProperties */,
                                              const GALGAS_bool constinArgument_inDirectAccessToPropertiesAllowed,
                                              const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                              const GALGAS_semanticContext constinArgument_inContext,
                                              const GALGAS_stringset constinArgument_inModeSet,
                                              const GALGAS_bool constinArgument_inAllowPanic,
                                              GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                              GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                              GALGAS_allocaList & ioArgument_ioAllocaList,
                                              GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                              GALGAS_objectIR & outArgument_outCurrentObject,
                                              GALGAS_string & outArgument_outGlobalVariableReceiverName,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCurrentObject.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableReceiverName.drop () ; // Release 'out' argument
  switch (inObject.mAttribute_mSelfAccess.enumValue ()) {
  case GALGAS_assignmentSelfAccessAST::kNotBuilt:
    break ;
  case GALGAS_assignmentSelfAccessAST::kEnum_noSelfAccess:
    {
      const enumGalgasBool test_0 = ioArgument_ioVariableMap.getter_hasKey (inObject.mAttribute_mIdentifier.getter_string (SOURCE_FILE ("assignment-target.galgas", 119)) COMMA_SOURCE_FILE ("assignment-target.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_0) {
        switch (constinArgument_inSelfAccessKind.enumValue ()) {
        case GALGAS_targetAccessKind::kNotBuilt:
          break ;
        case GALGAS_targetAccessKind::kEnum_read:
          {
            {
            GALGAS_unifiedTypeMap_2D_proxy joker_4961_2 ; // Joker input parameter
            GALGAS_bool joker_4961_1 ; // Joker input parameter
            GALGAS_bool joker_4992_2 ; // Joker input parameter
            GALGAS_bool joker_4992_1 ; // Joker input parameter
            ioArgument_ioVariableMap.setter_searchForReadAccess (inObject.mAttribute_mIdentifier, joker_4961_2, joker_4961_1, outArgument_outCurrentObject, joker_4992_2, joker_4992_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 122)) ;
            }
          }
          break ;
        case GALGAS_targetAccessKind::kEnum_write:
          {
            {
            GALGAS_unifiedTypeMap_2D_proxy joker_5080_2 ; // Joker input parameter
            GALGAS_bool joker_5080_1 ; // Joker input parameter
            GALGAS_bool joker_5111_2 ; // Joker input parameter
            GALGAS_bool joker_5111_1 ; // Joker input parameter
            ioArgument_ioVariableMap.setter_searchForWriteAccess (inObject.mAttribute_mIdentifier, joker_5080_2, joker_5080_1, outArgument_outCurrentObject, joker_5111_2, joker_5111_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 124)) ;
            }
          }
          break ;
        case GALGAS_targetAccessKind::kEnum_readWrite:
          {
            {
            GALGAS_unifiedTypeMap_2D_proxy joker_5207_2 ; // Joker input parameter
            GALGAS_bool joker_5207_1 ; // Joker input parameter
            GALGAS_bool joker_5238_2 ; // Joker input parameter
            GALGAS_bool joker_5238_1 ; // Joker input parameter
            ioArgument_ioVariableMap.setter_searchForReadWriteAccess (inObject.mAttribute_mIdentifier, joker_5207_2, joker_5207_1, outArgument_outCurrentObject, joker_5238_2, joker_5238_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 126)) ;
            }
          }
          break ;
        }
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = outArgument_outCurrentObject.getter_isGlobalVariableReference (SOURCE_FILE ("assignment-target.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = inObject.mAttribute_mIdentifier.mAttribute_string ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string::makeEmptyString () ;
        }
        outArgument_outGlobalVariableReceiverName = temp_1 ;
      }else if (kBoolFalse == test_0) {
        outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_null (SOURCE_FILE ("assignment-target.galgas", 130)), inObject.mAttribute_mIdentifier  COMMA_SOURCE_FILE ("assignment-target.galgas", 130)) ;
        outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
      }
    }
    break ;
  case GALGAS_assignmentSelfAccessAST::kEnum_selfAccess:
    {
      const cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess * extractPtr_6555 = (const cEnumAssociatedValues_assignmentSelfAccessAST_selfAccess *) (inObject.mAttribute_mSelfAccess.unsafePointer ()) ;
      const GALGAS_location extractedValue_selfLocation = extractPtr_6555->mAssociatedValue0 ;
      outArgument_outGlobalVariableReceiverName = GALGAS_string::makeEmptyString () ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("assignment-target.galgas", 135)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' is not available in this context")  COMMA_SOURCE_FILE ("assignment-target.galgas", 136)) ;
        outArgument_outCurrentObject.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 137)).getter_isStructure (SOURCE_FILE ("assignment-target.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_propertyMap var_structureObjectMap_5906 ;
          GALGAS_propertyList joker_5908_1 ; // Joker input parameter
          constinArgument_inSelfType.getter_kind (inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 138)).method_structure (var_structureObjectMap_5906, joker_5908_1, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 138)) ;
          const enumGalgasBool test_5 = var_structureObjectMap_5906.getter_hasKey (inObject.mAttribute_mIdentifier.getter_string (SOURCE_FILE ("assignment-target.galgas", 139)) COMMA_SOURCE_FILE ("assignment-target.galgas", 139)).boolEnum () ;
          if (kBoolTrue == test_5) {
            GALGAS_objectIR var_object_6062 ;
            GALGAS_bool joker_6039 ; // Joker input parameter
            GALGAS_uint joker_6074 ; // Joker input parameter
            var_structureObjectMap_5906.method_searchKey (inObject.mAttribute_mIdentifier, joker_6039, var_object_6062, joker_6074, inCompiler COMMA_SOURCE_FILE ("assignment-target.galgas", 140)) ;
            {
            routine_handleSelfAccessInAssignment (constinArgument_inSelfType, var_object_6062, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 146)) ;
            }
          }else if (kBoolFalse == test_5) {
            outArgument_outCurrentObject = GALGAS_objectIR::constructor_possibleFunction (GALGAS_objectIR::constructor_selfObject (constinArgument_inSelfType  COMMA_SOURCE_FILE ("assignment-target.galgas", 154)), inObject.mAttribute_mIdentifier  COMMA_SOURCE_FILE ("assignment-target.galgas", 154)) ;
          }
        }else if (kBoolFalse == test_4) {
          inCompiler->emitSemanticError (extractedValue_selfLocation, GALGAS_string ("'self' should be a structure instance")  COMMA_SOURCE_FILE ("assignment-target.galgas", 157)) ;
          outArgument_outCurrentObject.drop () ; // Release error dropped variable
          outArgument_outGlobalVariableReceiverName.drop () ; // Release error dropped variable
        }
      }
    }
    break ;
  }
  cEnumerator_accessInAssignmentListAST enumerator_6627 (inObject.mAttribute_mAccessList, kEnumeration_up) ;
  while (enumerator_6627.hasCurrentObject ()) {
    switch (enumerator_6627.current_mAccess (HERE).enumValue ()) {
    case GALGAS_accessInAssignmentAST::kNotBuilt:
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_property:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_6843 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_6627.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_propertyName = extractPtr_6843->mAssociatedValue0 ;
        {
        routine_handlePropertyAccessInAssignment (outArgument_outCurrentObject, extractedValue_propertyName, ioArgument_ioTemporaries, ioArgument_ioInstructionGenerationList, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 164)) ;
        }
      }
      break ;
    case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
      {
        const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_7501 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_6627.current_mAccess (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_7501->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExpression = extractPtr_7501->mAssociatedValue1 ;
        {
        routine_handleSubscriptInAssignmentAndExpression (constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfExpression, ioArgument_ioInstructionGenerationList, outArgument_outCurrentObject, inCompiler  COMMA_SOURCE_FILE ("assignment-target.galgas", 171)) ;
        }
      }
      break ;
    }
    enumerator_6627.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mTargetParameters (),
mAttribute_mPointerSize (),
mAttribute_mBooleanType (),
mAttribute_mLiteralIntegerType (),
mAttribute_mPanicCodeType (),
mAttribute_mPanicLineType (),
mAttribute_mUnsignedIntegerType (),
mAttribute_mTypeMap (),
mAttribute_mRoutineMapForContext (),
mAttribute_mGuardMapForContext (),
mAttribute_mInitRoutineMap (),
mAttribute_mPanicSetupRoutinePriorityMap (),
mAttribute_mPanicLoopRoutinePriorityMap (),
mAttribute_mControlRegisterMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mModuleMap (),
mAttribute_mConstructorMap (),
mAttribute_mModeMap (),
mAttribute_mDefinedInterruptSet (),
mAttribute_mAvailableInterruptMap (),
mAttribute_mEqualOperatorMap (),
mAttribute_mNonEqualOperatorMap (),
mAttribute_mStrictInfOperatorMap (),
mAttribute_mInfEqualOperatorMap (),
mAttribute_mStrictSupOperatorMap (),
mAttribute_mSupEqualOperatorMap (),
mAttribute_mAndOperatorMap (),
mAttribute_mOrOperatorMap (),
mAttribute_mXorOperatorMap (),
mAttribute_mBooleanXorOperatorMap (),
mAttribute_mAddOperatorMap (),
mAttribute_mAddNoOvfOperatorMap (),
mAttribute_mSubOperatorMap (),
mAttribute_mSubNoOvfOperatorMap (),
mAttribute_mMulOperatorMap (),
mAttribute_mMulNoOvfOperatorMap (),
mAttribute_mDivOperatorMap (),
mAttribute_mDivNoOvfOperatorMap (),
mAttribute_mModOperatorMap (),
mAttribute_mModNoOvfOperatorMap (),
mAttribute_mLeftShiftOperatorMap (),
mAttribute_mRightShiftOperatorMap (),
mAttribute_mUnaryMinusOperatorMap (),
mAttribute_mNotOperatorMap (),
mAttribute_mUnsignedComplementOperatorMap (),
mAttribute_mTaskMap (),
mAttribute_mGlobalTaskVariableList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_uint & inOperand1,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand6,
                                                const GALGAS_unifiedTypeMap & inOperand7,
                                                const GALGAS_routineMapForContext & inOperand8,
                                                const GALGAS_guardMapForContext & inOperand9,
                                                const GALGAS_initRoutineMap & inOperand10,
                                                const GALGAS_panicRoutinePriorityMap & inOperand11,
                                                const GALGAS_panicRoutinePriorityMap & inOperand12,
                                                const GALGAS_controlRegisterMap & inOperand13,
                                                const GALGAS_globalConstantMap & inOperand14,
                                                const GALGAS_globalVariableMap & inOperand15,
                                                const GALGAS_moduleMap & inOperand16,
                                                const GALGAS_constructorMap & inOperand17,
                                                const GALGAS_modeMap & inOperand18,
                                                const GALGAS_stringset & inOperand19,
                                                const GALGAS_availableInterruptMap & inOperand20,
                                                const GALGAS_infixOperatorMap & inOperand21,
                                                const GALGAS_infixOperatorMap & inOperand22,
                                                const GALGAS_infixOperatorMap & inOperand23,
                                                const GALGAS_infixOperatorMap & inOperand24,
                                                const GALGAS_infixOperatorMap & inOperand25,
                                                const GALGAS_infixOperatorMap & inOperand26,
                                                const GALGAS_infixOperatorMap & inOperand27,
                                                const GALGAS_infixOperatorMap & inOperand28,
                                                const GALGAS_infixOperatorMap & inOperand29,
                                                const GALGAS_infixOperatorMap & inOperand30,
                                                const GALGAS_infixOperatorMap & inOperand31,
                                                const GALGAS_infixOperatorMap & inOperand32,
                                                const GALGAS_infixOperatorMap & inOperand33,
                                                const GALGAS_infixOperatorMap & inOperand34,
                                                const GALGAS_infixOperatorMap & inOperand35,
                                                const GALGAS_infixOperatorMap & inOperand36,
                                                const GALGAS_infixOperatorMap & inOperand37,
                                                const GALGAS_infixOperatorMap & inOperand38,
                                                const GALGAS_infixOperatorMap & inOperand39,
                                                const GALGAS_infixOperatorMap & inOperand40,
                                                const GALGAS_infixOperatorMap & inOperand41,
                                                const GALGAS_infixOperatorMap & inOperand42,
                                                const GALGAS_prefixOperatorMap & inOperand43,
                                                const GALGAS_prefixOperatorMap & inOperand44,
                                                const GALGAS_prefixOperatorMap & inOperand45,
                                                const GALGAS_taskMap & inOperand46,
                                                const GALGAS_globalTaskVariableList & inOperand47) :
mAttribute_mTargetParameters (inOperand0),
mAttribute_mPointerSize (inOperand1),
mAttribute_mBooleanType (inOperand2),
mAttribute_mLiteralIntegerType (inOperand3),
mAttribute_mPanicCodeType (inOperand4),
mAttribute_mPanicLineType (inOperand5),
mAttribute_mUnsignedIntegerType (inOperand6),
mAttribute_mTypeMap (inOperand7),
mAttribute_mRoutineMapForContext (inOperand8),
mAttribute_mGuardMapForContext (inOperand9),
mAttribute_mInitRoutineMap (inOperand10),
mAttribute_mPanicSetupRoutinePriorityMap (inOperand11),
mAttribute_mPanicLoopRoutinePriorityMap (inOperand12),
mAttribute_mControlRegisterMap (inOperand13),
mAttribute_mGlobalConstantMap (inOperand14),
mAttribute_mGlobalVariableMap (inOperand15),
mAttribute_mModuleMap (inOperand16),
mAttribute_mConstructorMap (inOperand17),
mAttribute_mModeMap (inOperand18),
mAttribute_mDefinedInterruptSet (inOperand19),
mAttribute_mAvailableInterruptMap (inOperand20),
mAttribute_mEqualOperatorMap (inOperand21),
mAttribute_mNonEqualOperatorMap (inOperand22),
mAttribute_mStrictInfOperatorMap (inOperand23),
mAttribute_mInfEqualOperatorMap (inOperand24),
mAttribute_mStrictSupOperatorMap (inOperand25),
mAttribute_mSupEqualOperatorMap (inOperand26),
mAttribute_mAndOperatorMap (inOperand27),
mAttribute_mOrOperatorMap (inOperand28),
mAttribute_mXorOperatorMap (inOperand29),
mAttribute_mBooleanXorOperatorMap (inOperand30),
mAttribute_mAddOperatorMap (inOperand31),
mAttribute_mAddNoOvfOperatorMap (inOperand32),
mAttribute_mSubOperatorMap (inOperand33),
mAttribute_mSubNoOvfOperatorMap (inOperand34),
mAttribute_mMulOperatorMap (inOperand35),
mAttribute_mMulNoOvfOperatorMap (inOperand36),
mAttribute_mDivOperatorMap (inOperand37),
mAttribute_mDivNoOvfOperatorMap (inOperand38),
mAttribute_mModOperatorMap (inOperand39),
mAttribute_mModNoOvfOperatorMap (inOperand40),
mAttribute_mLeftShiftOperatorMap (inOperand41),
mAttribute_mRightShiftOperatorMap (inOperand42),
mAttribute_mUnaryMinusOperatorMap (inOperand43),
mAttribute_mNotOperatorMap (inOperand44),
mAttribute_mUnsignedComplementOperatorMap (inOperand45),
mAttribute_mTaskMap (inOperand46),
mAttribute_mGlobalTaskVariableList (inOperand47) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_targetParameters::constructor_default (HERE),
                                 GALGAS_uint::constructor_default (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                 GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_routineMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_guardMapForContext::constructor_emptyMap (HERE),
                                 GALGAS_initRoutineMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                 GALGAS_controlRegisterMap::constructor_emptyMap (HERE),
                                 GALGAS_globalConstantMap::constructor_emptyMap (HERE),
                                 GALGAS_globalVariableMap::constructor_emptyMap (HERE),
                                 GALGAS_moduleMap::constructor_emptyMap (HERE),
                                 GALGAS_constructorMap::constructor_emptyMap (HERE),
                                 GALGAS_modeMap::constructor_emptyMap (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_availableInterruptMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_infixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_prefixOperatorMap::constructor_emptyMap (HERE),
                                 GALGAS_taskMap::constructor_emptyMap (HERE),
                                 GALGAS_globalTaskVariableList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_targetParameters & inOperand0,
                                                                const GALGAS_uint & inOperand1,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand4,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand5,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand6,
                                                                const GALGAS_unifiedTypeMap & inOperand7,
                                                                const GALGAS_routineMapForContext & inOperand8,
                                                                const GALGAS_guardMapForContext & inOperand9,
                                                                const GALGAS_initRoutineMap & inOperand10,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand11,
                                                                const GALGAS_panicRoutinePriorityMap & inOperand12,
                                                                const GALGAS_controlRegisterMap & inOperand13,
                                                                const GALGAS_globalConstantMap & inOperand14,
                                                                const GALGAS_globalVariableMap & inOperand15,
                                                                const GALGAS_moduleMap & inOperand16,
                                                                const GALGAS_constructorMap & inOperand17,
                                                                const GALGAS_modeMap & inOperand18,
                                                                const GALGAS_stringset & inOperand19,
                                                                const GALGAS_availableInterruptMap & inOperand20,
                                                                const GALGAS_infixOperatorMap & inOperand21,
                                                                const GALGAS_infixOperatorMap & inOperand22,
                                                                const GALGAS_infixOperatorMap & inOperand23,
                                                                const GALGAS_infixOperatorMap & inOperand24,
                                                                const GALGAS_infixOperatorMap & inOperand25,
                                                                const GALGAS_infixOperatorMap & inOperand26,
                                                                const GALGAS_infixOperatorMap & inOperand27,
                                                                const GALGAS_infixOperatorMap & inOperand28,
                                                                const GALGAS_infixOperatorMap & inOperand29,
                                                                const GALGAS_infixOperatorMap & inOperand30,
                                                                const GALGAS_infixOperatorMap & inOperand31,
                                                                const GALGAS_infixOperatorMap & inOperand32,
                                                                const GALGAS_infixOperatorMap & inOperand33,
                                                                const GALGAS_infixOperatorMap & inOperand34,
                                                                const GALGAS_infixOperatorMap & inOperand35,
                                                                const GALGAS_infixOperatorMap & inOperand36,
                                                                const GALGAS_infixOperatorMap & inOperand37,
                                                                const GALGAS_infixOperatorMap & inOperand38,
                                                                const GALGAS_infixOperatorMap & inOperand39,
                                                                const GALGAS_infixOperatorMap & inOperand40,
                                                                const GALGAS_infixOperatorMap & inOperand41,
                                                                const GALGAS_infixOperatorMap & inOperand42,
                                                                const GALGAS_prefixOperatorMap & inOperand43,
                                                                const GALGAS_prefixOperatorMap & inOperand44,
                                                                const GALGAS_prefixOperatorMap & inOperand45,
                                                                const GALGAS_taskMap & inOperand46,
                                                                const GALGAS_globalTaskVariableList & inOperand47 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid () && inOperand21.isValid () && inOperand22.isValid () && inOperand23.isValid () && inOperand24.isValid () && inOperand25.isValid () && inOperand26.isValid () && inOperand27.isValid () && inOperand28.isValid () && inOperand29.isValid () && inOperand30.isValid () && inOperand31.isValid () && inOperand32.isValid () && inOperand33.isValid () && inOperand34.isValid () && inOperand35.isValid () && inOperand36.isValid () && inOperand37.isValid () && inOperand38.isValid () && inOperand39.isValid () && inOperand40.isValid () && inOperand41.isValid () && inOperand42.isValid () && inOperand43.isValid () && inOperand44.isValid () && inOperand45.isValid () && inOperand46.isValid () && inOperand47.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20, inOperand21, inOperand22, inOperand23, inOperand24, inOperand25, inOperand26, inOperand27, inOperand28, inOperand29, inOperand30, inOperand31, inOperand32, inOperand33, inOperand34, inOperand35, inOperand36, inOperand37, inOperand38, inOperand39, inOperand40, inOperand41, inOperand42, inOperand43, inOperand44, inOperand45, inOperand46, inOperand47) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetParameters.objectCompare (inOperand.mAttribute_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPointerSize.objectCompare (inOperand.mAttribute_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBooleanType.objectCompare (inOperand.mAttribute_mBooleanType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLiteralIntegerType.objectCompare (inOperand.mAttribute_mLiteralIntegerType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicCodeType.objectCompare (inOperand.mAttribute_mPanicCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicLineType.objectCompare (inOperand.mAttribute_mPanicLineType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnsignedIntegerType.objectCompare (inOperand.mAttribute_mUnsignedIntegerType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeMap.objectCompare (inOperand.mAttribute_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineMapForContext.objectCompare (inOperand.mAttribute_mRoutineMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardMapForContext.objectCompare (inOperand.mAttribute_mGuardMapForContext) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitRoutineMap.objectCompare (inOperand.mAttribute_mInitRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mAttribute_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mAttribute_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterMap.objectCompare (inOperand.mAttribute_mControlRegisterMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModuleMap.objectCompare (inOperand.mAttribute_mModuleMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mConstructorMap.objectCompare (inOperand.mAttribute_mConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeMap.objectCompare (inOperand.mAttribute_mModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefinedInterruptSet.objectCompare (inOperand.mAttribute_mDefinedInterruptSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAvailableInterruptMap.objectCompare (inOperand.mAttribute_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEqualOperatorMap.objectCompare (inOperand.mAttribute_mEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonEqualOperatorMap.objectCompare (inOperand.mAttribute_mNonEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictInfOperatorMap.objectCompare (inOperand.mAttribute_mStrictInfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfEqualOperatorMap.objectCompare (inOperand.mAttribute_mInfEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStrictSupOperatorMap.objectCompare (inOperand.mAttribute_mStrictSupOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSupEqualOperatorMap.objectCompare (inOperand.mAttribute_mSupEqualOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAndOperatorMap.objectCompare (inOperand.mAttribute_mAndOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrOperatorMap.objectCompare (inOperand.mAttribute_mOrOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXorOperatorMap.objectCompare (inOperand.mAttribute_mXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBooleanXorOperatorMap.objectCompare (inOperand.mAttribute_mBooleanXorOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddOperatorMap.objectCompare (inOperand.mAttribute_mAddOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mAddNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubOperatorMap.objectCompare (inOperand.mAttribute_mSubOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mSubNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulOperatorMap.objectCompare (inOperand.mAttribute_mMulOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMulNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mMulNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivOperatorMap.objectCompare (inOperand.mAttribute_mDivOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDivNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mDivNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModOperatorMap.objectCompare (inOperand.mAttribute_mModOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModNoOvfOperatorMap.objectCompare (inOperand.mAttribute_mModNoOvfOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLeftShiftOperatorMap.objectCompare (inOperand.mAttribute_mLeftShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRightShiftOperatorMap.objectCompare (inOperand.mAttribute_mRightShiftOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnaryMinusOperatorMap.objectCompare (inOperand.mAttribute_mUnaryMinusOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNotOperatorMap.objectCompare (inOperand.mAttribute_mNotOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUnsignedComplementOperatorMap.objectCompare (inOperand.mAttribute_mUnsignedComplementOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskMap.objectCompare (inOperand.mAttribute_mTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalTaskVariableList.objectCompare (inOperand.mAttribute_mGlobalTaskVariableList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mTargetParameters.isValid () && mAttribute_mPointerSize.isValid () && mAttribute_mBooleanType.isValid () && mAttribute_mLiteralIntegerType.isValid () && mAttribute_mPanicCodeType.isValid () && mAttribute_mPanicLineType.isValid () && mAttribute_mUnsignedIntegerType.isValid () && mAttribute_mTypeMap.isValid () && mAttribute_mRoutineMapForContext.isValid () && mAttribute_mGuardMapForContext.isValid () && mAttribute_mInitRoutineMap.isValid () && mAttribute_mPanicSetupRoutinePriorityMap.isValid () && mAttribute_mPanicLoopRoutinePriorityMap.isValid () && mAttribute_mControlRegisterMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mModuleMap.isValid () && mAttribute_mConstructorMap.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mDefinedInterruptSet.isValid () && mAttribute_mAvailableInterruptMap.isValid () && mAttribute_mEqualOperatorMap.isValid () && mAttribute_mNonEqualOperatorMap.isValid () && mAttribute_mStrictInfOperatorMap.isValid () && mAttribute_mInfEqualOperatorMap.isValid () && mAttribute_mStrictSupOperatorMap.isValid () && mAttribute_mSupEqualOperatorMap.isValid () && mAttribute_mAndOperatorMap.isValid () && mAttribute_mOrOperatorMap.isValid () && mAttribute_mXorOperatorMap.isValid () && mAttribute_mBooleanXorOperatorMap.isValid () && mAttribute_mAddOperatorMap.isValid () && mAttribute_mAddNoOvfOperatorMap.isValid () && mAttribute_mSubOperatorMap.isValid () && mAttribute_mSubNoOvfOperatorMap.isValid () && mAttribute_mMulOperatorMap.isValid () && mAttribute_mMulNoOvfOperatorMap.isValid () && mAttribute_mDivOperatorMap.isValid () && mAttribute_mDivNoOvfOperatorMap.isValid () && mAttribute_mModOperatorMap.isValid () && mAttribute_mModNoOvfOperatorMap.isValid () && mAttribute_mLeftShiftOperatorMap.isValid () && mAttribute_mRightShiftOperatorMap.isValid () && mAttribute_mUnaryMinusOperatorMap.isValid () && mAttribute_mNotOperatorMap.isValid () && mAttribute_mUnsignedComplementOperatorMap.isValid () && mAttribute_mTaskMap.isValid () && mAttribute_mGlobalTaskVariableList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mTargetParameters.drop () ;
  mAttribute_mPointerSize.drop () ;
  mAttribute_mBooleanType.drop () ;
  mAttribute_mLiteralIntegerType.drop () ;
  mAttribute_mPanicCodeType.drop () ;
  mAttribute_mPanicLineType.drop () ;
  mAttribute_mUnsignedIntegerType.drop () ;
  mAttribute_mTypeMap.drop () ;
  mAttribute_mRoutineMapForContext.drop () ;
  mAttribute_mGuardMapForContext.drop () ;
  mAttribute_mInitRoutineMap.drop () ;
  mAttribute_mPanicSetupRoutinePriorityMap.drop () ;
  mAttribute_mPanicLoopRoutinePriorityMap.drop () ;
  mAttribute_mControlRegisterMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mModuleMap.drop () ;
  mAttribute_mConstructorMap.drop () ;
  mAttribute_mModeMap.drop () ;
  mAttribute_mDefinedInterruptSet.drop () ;
  mAttribute_mAvailableInterruptMap.drop () ;
  mAttribute_mEqualOperatorMap.drop () ;
  mAttribute_mNonEqualOperatorMap.drop () ;
  mAttribute_mStrictInfOperatorMap.drop () ;
  mAttribute_mInfEqualOperatorMap.drop () ;
  mAttribute_mStrictSupOperatorMap.drop () ;
  mAttribute_mSupEqualOperatorMap.drop () ;
  mAttribute_mAndOperatorMap.drop () ;
  mAttribute_mOrOperatorMap.drop () ;
  mAttribute_mXorOperatorMap.drop () ;
  mAttribute_mBooleanXorOperatorMap.drop () ;
  mAttribute_mAddOperatorMap.drop () ;
  mAttribute_mAddNoOvfOperatorMap.drop () ;
  mAttribute_mSubOperatorMap.drop () ;
  mAttribute_mSubNoOvfOperatorMap.drop () ;
  mAttribute_mMulOperatorMap.drop () ;
  mAttribute_mMulNoOvfOperatorMap.drop () ;
  mAttribute_mDivOperatorMap.drop () ;
  mAttribute_mDivNoOvfOperatorMap.drop () ;
  mAttribute_mModOperatorMap.drop () ;
  mAttribute_mModNoOvfOperatorMap.drop () ;
  mAttribute_mLeftShiftOperatorMap.drop () ;
  mAttribute_mRightShiftOperatorMap.drop () ;
  mAttribute_mUnaryMinusOperatorMap.drop () ;
  mAttribute_mNotOperatorMap.drop () ;
  mAttribute_mUnsignedComplementOperatorMap.drop () ;
  mAttribute_mTaskMap.drop () ;
  mAttribute_mGlobalTaskVariableList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPointerSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBooleanType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLiteralIntegerType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnsignedIntegerType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardMapForContext.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModuleMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mConstructorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefinedInterruptSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictInfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStrictSupOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSupEqualOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAndOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBooleanXorOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMulNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDivNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModNoOvfOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLeftShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRightShiftOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnaryMinusOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNotOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUnsignedComplementOperatorMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_semanticContext::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticContext::getter_mPointerSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPointerSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mBooleanType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mLiteralIntegerType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralIntegerType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mPanicCodeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicCodeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mPanicLineType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLineType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_semanticContext::getter_mUnsignedIntegerType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsignedIntegerType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::getter_mTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext GALGAS_semanticContext::getter_mRoutineMapForContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext GALGAS_semanticContext::getter_mGuardMapForContext (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardMapForContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap GALGAS_semanticContext::getter_mInitRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticContext::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap GALGAS_semanticContext::getter_mControlRegisterMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap GALGAS_semanticContext::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap GALGAS_semanticContext::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap GALGAS_semanticContext::getter_mModuleMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModuleMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap GALGAS_semanticContext::getter_mConstructorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_semanticContext::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_semanticContext::getter_mDefinedInterruptSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefinedInterruptSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_availableInterruptMap GALGAS_semanticContext::getter_mAvailableInterruptMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAvailableInterruptMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mNonEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictInfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictInfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mInfEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mStrictSupOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStrictSupOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSupEqualOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSupEqualOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAndOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAndOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mOrOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mBooleanXorOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBooleanXorOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mAddNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mSubNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mMulNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMulNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mDivNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDivNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mModNoOvfOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModNoOvfOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mLeftShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap GALGAS_semanticContext::getter_mRightShiftOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightShiftOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnaryMinusOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnaryMinusOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mNotOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNotOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap GALGAS_semanticContext::getter_mUnsignedComplementOperatorMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnsignedComplementOperatorMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap GALGAS_semanticContext::getter_mTaskMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_semanticContext::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalTaskVariableList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (void) :
mAttribute_mTemporaryIndex (),
mAttribute_mPanicSetupRoutinePriorityMap (),
mAttribute_mPanicLoopRoutinePriorityMap (),
mAttribute_mInitRoutinePriorityMap (),
mAttribute_mBootRoutinePriorityMap (),
mAttribute_mSubprogramInvocationGraph () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::~ GALGAS_semanticTemporariesStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct::GALGAS_semanticTemporariesStruct (const GALGAS_uint & inOperand0,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                    const GALGAS_subprogramInvocationGraph & inOperand5) :
mAttribute_mTemporaryIndex (inOperand0),
mAttribute_mPanicSetupRoutinePriorityMap (inOperand1),
mAttribute_mPanicLoopRoutinePriorityMap (inOperand2),
mAttribute_mInitRoutinePriorityMap (inOperand3),
mAttribute_mBootRoutinePriorityMap (inOperand4),
mAttribute_mSubprogramInvocationGraph (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticTemporariesStruct (GALGAS_uint::constructor_default (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_panicRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_initRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_bootRoutinePriorityMap::constructor_emptyMap (HERE),
                                           GALGAS_subprogramInvocationGraph::constructor_emptyGraph (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::constructor_new (const GALGAS_uint & inOperand0,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand1,
                                                                                    const GALGAS_panicRoutinePriorityMap & inOperand2,
                                                                                    const GALGAS_initRoutinePriorityMap & inOperand3,
                                                                                    const GALGAS_bootRoutinePriorityMap & inOperand4,
                                                                                    const GALGAS_subprogramInvocationGraph & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_semanticTemporariesStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticTemporariesStruct::objectCompare (const GALGAS_semanticTemporariesStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTemporaryIndex.objectCompare (inOperand.mAttribute_mTemporaryIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mAttribute_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mAttribute_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitRoutinePriorityMap.objectCompare (inOperand.mAttribute_mInitRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBootRoutinePriorityMap.objectCompare (inOperand.mAttribute_mBootRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubprogramInvocationGraph.objectCompare (inOperand.mAttribute_mSubprogramInvocationGraph) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticTemporariesStruct::isValid (void) const {
  return mAttribute_mTemporaryIndex.isValid () && mAttribute_mPanicSetupRoutinePriorityMap.isValid () && mAttribute_mPanicLoopRoutinePriorityMap.isValid () && mAttribute_mInitRoutinePriorityMap.isValid () && mAttribute_mBootRoutinePriorityMap.isValid () && mAttribute_mSubprogramInvocationGraph.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::drop (void) {
  mAttribute_mTemporaryIndex.drop () ;
  mAttribute_mPanicSetupRoutinePriorityMap.drop () ;
  mAttribute_mPanicLoopRoutinePriorityMap.drop () ;
  mAttribute_mInitRoutinePriorityMap.drop () ;
  mAttribute_mBootRoutinePriorityMap.drop () ;
  mAttribute_mSubprogramInvocationGraph.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticTemporariesStruct::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @semanticTemporariesStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTemporaryIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubprogramInvocationGraph.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_semanticTemporariesStruct::getter_mTemporaryIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemporaryIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mPanicSetupRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicSetupRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mPanicLoopRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLoopRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mInitRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap GALGAS_semanticTemporariesStruct::getter_mBootRoutinePriorityMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootRoutinePriorityMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_subprogramInvocationGraph GALGAS_semanticTemporariesStruct::getter_mSubprogramInvocationGraph (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubprogramInvocationGraph ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @semanticTemporariesStruct type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTemporariesStruct ("semanticTemporariesStruct",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticTemporariesStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTemporariesStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticTemporariesStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTemporariesStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticTemporariesStruct GALGAS_semanticTemporariesStruct::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTemporariesStruct result ;
  const GALGAS_semanticTemporariesStruct * p = (const GALGAS_semanticTemporariesStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTemporariesStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTemporariesStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineNameForGeneration (),
mAttribute_mFormalArgumentListForGeneration (),
mAttribute_mAllocaList (),
mAttribute_mInstructionGenerationList (),
mAttribute_mIsRequired (),
mAttribute_mWarnIfUnused (),
mAttribute_mWeak (),
mAttribute_mGlobal (),
mAttribute_mKind (),
mAttribute_mReturnType (),
mAttribute_mAppendFileAndLineArgumentForPanicLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::~ GALGAS_routineMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element::GALGAS_routineMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand2,
                                                                const GALGAS_allocaList & inOperand3,
                                                                const GALGAS_instructionListIR & inOperand4,
                                                                const GALGAS_bool & inOperand5,
                                                                const GALGAS_bool & inOperand6,
                                                                const GALGAS_bool & inOperand7,
                                                                const GALGAS_bool & inOperand8,
                                                                const GALGAS_routineKind & inOperand9,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand10,
                                                                const GALGAS_bool & inOperand11) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineNameForGeneration (inOperand1),
mAttribute_mFormalArgumentListForGeneration (inOperand2),
mAttribute_mAllocaList (inOperand3),
mAttribute_mInstructionGenerationList (inOperand4),
mAttribute_mIsRequired (inOperand5),
mAttribute_mWarnIfUnused (inOperand6),
mAttribute_mWeak (inOperand7),
mAttribute_mGlobal (inOperand8),
mAttribute_mKind (inOperand9),
mAttribute_mReturnType (inOperand10),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (inOperand11) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_procFormalArgumentListForGeneration & inOperand2,
                                                                                const GALGAS_allocaList & inOperand3,
                                                                                const GALGAS_instructionListIR & inOperand4,
                                                                                const GALGAS_bool & inOperand5,
                                                                                const GALGAS_bool & inOperand6,
                                                                                const GALGAS_bool & inOperand7,
                                                                                const GALGAS_bool & inOperand8,
                                                                                const GALGAS_routineKind & inOperand9,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand10,
                                                                                const GALGAS_bool & inOperand11 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_routineMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMapIR_2D_element::objectCompare (const GALGAS_routineMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineNameForGeneration.objectCompare (inOperand.mAttribute_mRoutineNameForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentListForGeneration.objectCompare (inOperand.mAttribute_mFormalArgumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsRequired.objectCompare (inOperand.mAttribute_mIsRequired) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWarnIfUnused.objectCompare (inOperand.mAttribute_mWarnIfUnused) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWeak.objectCompare (inOperand.mAttribute_mWeak) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobal.objectCompare (inOperand.mAttribute_mGlobal) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnType.objectCompare (inOperand.mAttribute_mReturnType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAppendFileAndLineArgumentForPanicLocation.objectCompare (inOperand.mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineNameForGeneration.isValid () && mAttribute_mFormalArgumentListForGeneration.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mIsRequired.isValid () && mAttribute_mWarnIfUnused.isValid () && mAttribute_mWeak.isValid () && mAttribute_mGlobal.isValid () && mAttribute_mKind.isValid () && mAttribute_mReturnType.isValid () && mAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineNameForGeneration.drop () ;
  mAttribute_mFormalArgumentListForGeneration.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mIsRequired.drop () ;
  mAttribute_mWarnIfUnused.drop () ;
  mAttribute_mWeak.drop () ;
  mAttribute_mGlobal.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mReturnType.drop () ;
  mAttribute_mAppendFileAndLineArgumentForPanicLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapIR_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @routineMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineNameForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsRequired.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWarnIfUnused.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWeak.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobal.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapIR_2D_element::getter_mRoutineNameForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineNameForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration GALGAS_routineMapIR_2D_element::getter_mFormalArgumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_routineMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_routineMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mIsRequired (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsRequired ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mWarnIfUnused (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWarnIfUnused ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mWeak (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeak ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mGlobal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapIR_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineMapIR_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapIR_2D_element::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineMapIR-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapIR_2D_element ("routineMapIR-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR_2D_element GALGAS_routineMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineMapIR_2D_element result ;
  const GALGAS_routineMapIR_2D_element * p = (const GALGAS_routineMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR location'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location extensionGetter_location (const GALGAS_objectIR & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 38)), GALGAS_string ("<<@objectIR location null>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 38)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const cEnumAssociatedValues_objectIR_possibleFunction * extractPtr_1896 = (const cEnumAssociatedValues_objectIR_possibleFunction *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_functionName = extractPtr_1896->mAssociatedValue1 ;
      result_outResult = extractedValue_functionName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 40)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_1952 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_1952->mAssociatedValue1 ;
      result_outResult = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 42)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_2021 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_2021->mAssociatedValue1 ;
      result_outResult = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 44)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_2089 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_2089->mAssociatedValue1 ;
      result_outResult = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 46)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_2158 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_2158->mAssociatedValue1 ;
      result_outResult = extractedValue_plmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 48)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 50)), GALGAS_string ("<<@objectIR location zero>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 50)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 52)), GALGAS_string ("<<@objectIR location selfObject>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 52)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 54)), GALGAS_string ("<<@objectIR location literalInteger>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 54)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_2503 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_2503->mAssociatedValue1 ;
      result_outResult = extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 56)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_2573 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_2573->mAssociatedValue1 ;
      result_outResult = extractedValue_llvmName.getter_location (SOURCE_FILE ("intermediate-value-representation.galgas", 58)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 60)), GALGAS_string ("<<@objectIR location llvmStructureConstant>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 60)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("intermediate-value-representation.galgas", 62)), GALGAS_string ("<<@objectIR location literalString>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 62)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension Getter '@objectIR isGlobalVariable'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isGlobalVariable (const GALGAS_objectIR & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_outResult = temp_0.getter_isGlobalVariableReference (SOURCE_FILE ("intermediate-value-representation.galgas", 69)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR llvmName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmName (const GALGAS_objectIR & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 76)), GALGAS_string ("<<@objectIR llvmName null>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 76)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_2 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_2, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 78)), GALGAS_string ("<<@objectIR llvmName possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 78)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const GALGAS_objectIR temp_3 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 79)), GALGAS_string ("<<@objectIR llvmName>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 79)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_3593 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_3593->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 80)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_3691 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_3691->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (extractedValue_plmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 81)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const GALGAS_objectIR temp_4 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_4, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 82)), GALGAS_string ("<<@objectIR llvmName>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 82)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_outResult = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_string ("%self") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_3950 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_3950->mAssociatedValue1 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 85)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_4020 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_4020->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 86)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_4092 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_4092->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("%").add_operation (extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 87)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureConstant * extractPtr_4329 = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_inValues = extractPtr_4329->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("{") ;
      cEnumerator_operandIRList enumerator_4194 (extractedValue_inValues, kEnumeration_up) ;
      while (enumerator_4194.hasCurrentObject ()) {
        result_outResult.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_4194.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)).add_operation (extensionGetter_llvmName (enumerator_4194.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 91)) ;
        if (enumerator_4194.hasNextObject ()) {
          result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 92)) ;
        }
        enumerator_4194.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 94)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_4575 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_4575->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_4575->mAssociatedValue2 ;
      GALGAS_string var_sizeStr_4396 = extractedValue_size.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 96)) ;
      result_outResult = GALGAS_string ("getelementptr inbounds ([").add_operation (var_sizeStr_4396, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)).add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)).add_operation (var_sizeStr_4396, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 97)) ;
      result_outResult.plusAssign_operation(function_literalCharacterArrayName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)).add_operation (GALGAS_string (", i32 0, i32 0)"), inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 98)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR sliceMap'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap extensionGetter_sliceMap (const GALGAS_objectIR & inObject,
                                          const GALGAS_location & constinArgument_inErrorLocation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 106)), GALGAS_string ("<<@objectIR sliceMap null>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 106)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_2 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_2, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 108)), GALGAS_string ("<<@objectIR sliceMap possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 108)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 109)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 110)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 111)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_5345 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_5345->mAssociatedValue5 ;
      result_outResult = extractedValue_sliceMap ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 113)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 114)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 115)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_5664 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_5664->mAssociatedValue2 ;
      result_outResult = extractedValue_sliceMap ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_5730 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_5730->mAssociatedValue2 ;
      result_outResult = extractedValue_sliceMap ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 118)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("<<@objectIR sliceMap>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 119)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR type'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy extensionGetter_type (const GALGAS_objectIR & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      result_outResult = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("intermediate-value-representation.galgas", 127)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 129)), GALGAS_string ("<<@objectIR type possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 129)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_6346 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6346->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_6391 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6391->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_6450 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6450->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_6509 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6509->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_6567 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6567->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      const cEnumAssociatedValues_objectIR_zero * extractPtr_6605 = (const cEnumAssociatedValues_objectIR_zero *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6605->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      const cEnumAssociatedValues_objectIR_selfObject * extractPtr_6649 = (const cEnumAssociatedValues_objectIR_selfObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6649->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_6699 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6699->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_6755 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6755->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureConstant * extractPtr_6812 = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6812->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_6864 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMap_2D_proxy extractedValue_type = extractPtr_6864->mAssociatedValue0 ;
      result_outResult = extractedValue_type ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension Getter '@objectIR llvmTypeName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_llvmTypeName (const GALGAS_objectIR & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_outResult = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 147)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 147)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR key'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_key (const GALGAS_objectIR & inObject,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_outResult = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 153)).getter_key (inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 153)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR kind'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind extensionGetter_kind (const GALGAS_objectIR & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  result_outResult = extensionGetter_type (temp_0, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 159)).getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 159)) ;
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR withType'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR extensionGetter_withType (const GALGAS_objectIR & inObject,
                                          GALGAS_unifiedTypeMap_2D_proxy inArgument_inType,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 166)), GALGAS_string ("<<@objectIR withType null>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 166)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_2 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_2, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 168)), GALGAS_string ("<<@objectIR withType possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 168)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_8075 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_8075->mAssociatedValue1 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_8075->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_volatile = extractPtr_8075->mAssociatedValue3 ;
      result_outResult = GALGAS_objectIR::constructor_temporaryReference (inArgument_inType, extractedValue_llvmName, extractedValue_sliceMap, extractedValue_volatile  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 170)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_8182 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_8182->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_8182->mAssociatedValue2 ;
      result_outResult = GALGAS_objectIR::constructor_property (inArgument_inType, extractedValue_plmName, extractedValue_index  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 172)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_8527 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_plmName = extractPtr_8527->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_readable = extractPtr_8527->mAssociatedValue2 ;
      const GALGAS_bool extractedValue_writable = extractPtr_8527->mAssociatedValue3 ;
      const GALGAS_bigint extractedValue_address = extractPtr_8527->mAssociatedValue4 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_8527->mAssociatedValue5 ;
      const GALGAS_uint extractedValue_arraySize = extractPtr_8527->mAssociatedValue6 ;
      const GALGAS_uint extractedValue_elementSize = extractPtr_8527->mAssociatedValue7 ;
      result_outResult = GALGAS_objectIR::constructor_registerReference (inArgument_inType, extractedValue_plmName, extractedValue_readable, extractedValue_writable, extractedValue_address, extractedValue_sliceMap, extractedValue_arraySize, extractedValue_elementSize  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 174)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_8639 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_8639->mAssociatedValue1 ;
      result_outResult = GALGAS_objectIR::constructor_localVariableReference (inArgument_inType, extractedValue_name  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 185)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_8753 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_8753->mAssociatedValue1 ;
      result_outResult = GALGAS_objectIR::constructor_globalVariableReference (inArgument_inType, extractedValue_name  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 187)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_8857 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_8857->mAssociatedValue1 ;
      result_outResult = GALGAS_objectIR::constructor_literalInteger (inArgument_inType, extractedValue_value  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 189)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_8998 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_8998->mAssociatedValue1 ;
      const GALGAS_sliceMap extractedValue_sliceMap = extractPtr_8998->mAssociatedValue2 ;
      result_outResult = GALGAS_objectIR::constructor_llvmTemporaryValue (inArgument_inType, extractedValue_llvmName, extractedValue_sliceMap  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 191)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_outResult = GALGAS_objectIR::constructor_zero (inArgument_inType  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 193)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_objectIR::constructor_selfObject (inArgument_inType  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 195)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureConstant * extractPtr_9250 = (const cEnumAssociatedValues_objectIR_llvmStructureConstant *) (temp_0.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_values = extractPtr_9250->mAssociatedValue1 ;
      result_outResult = GALGAS_objectIR::constructor_llvmStructureConstant (inArgument_inType, extractedValue_values  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 197)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_9374 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_size = extractPtr_9374->mAssociatedValue1 ;
      const GALGAS_uint extractedValue_index = extractPtr_9374->mAssociatedValue2 ;
      result_outResult = GALGAS_objectIR::constructor_literalString (inArgument_inType, extractedValue_size, extractedValue_index  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 199)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@objectIR name'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_name (const GALGAS_objectIR & inObject,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 207)), GALGAS_string ("<<@objectIR name null>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 207)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      const GALGAS_objectIR temp_2 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_2, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 209)), GALGAS_string ("<<@objectIR name possibleFunction>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 209)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      const cEnumAssociatedValues_objectIR_temporaryReference * extractPtr_9814 = (const cEnumAssociatedValues_objectIR_temporaryReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_llvmName = extractPtr_9814->mAssociatedValue1 ;
      result_outResult = extractedValue_llvmName.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 210)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      const cEnumAssociatedValues_objectIR_property * extractPtr_9860 = (const cEnumAssociatedValues_objectIR_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9860->mAssociatedValue1 ;
      result_outResult = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 211)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      const cEnumAssociatedValues_objectIR_registerReference * extractPtr_9920 = (const cEnumAssociatedValues_objectIR_registerReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9920->mAssociatedValue1 ;
      result_outResult = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 212)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      const cEnumAssociatedValues_objectIR_localVariableReference * extractPtr_9978 = (const cEnumAssociatedValues_objectIR_localVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_9978->mAssociatedValue1 ;
      result_outResult = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 213)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      const cEnumAssociatedValues_objectIR_globalVariableReference * extractPtr_10037 = (const cEnumAssociatedValues_objectIR_globalVariableReference *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10037->mAssociatedValue1 ;
      result_outResult = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 214)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_outResult = GALGAS_string ("zeroinitializer") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_string ("self") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_10197 = (const cEnumAssociatedValues_objectIR_literalInteger *) (temp_0.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_10197->mAssociatedValue1 ;
      result_outResult = extractedValue_value.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      const cEnumAssociatedValues_objectIR_llvmTemporaryValue * extractPtr_10253 = (const cEnumAssociatedValues_objectIR_llvmTemporaryValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_name = extractPtr_10253->mAssociatedValue1 ;
      result_outResult = extractedValue_name.getter_string (SOURCE_FILE ("intermediate-value-representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      result_outResult = GALGAS_string ("{...}") ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      const cEnumAssociatedValues_objectIR_literalString * extractPtr_10391 = (const cEnumAssociatedValues_objectIR_literalString *) (temp_0.unsafePointer ()) ;
      const GALGAS_uint extractedValue_index = extractPtr_10391->mAssociatedValue2 ;
      result_outResult = function_literalStringName (extractedValue_index, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 220)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension Getter '@objectIR isStatic'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isStatic (const GALGAS_objectIR & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_objectIR temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      const GALGAS_objectIR temp_1 = inObject ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 228)), GALGAS_string ("<<@objectIR isStatic null>>")  COMMA_SOURCE_FILE ("intermediate-value-representation.galgas", 228)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_objectIR::kEnum_possibleFunction:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_temporaryReference:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_property:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_registerReference:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_localVariableReference:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_globalVariableReference:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_selfObject:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmTemporaryValue:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureConstant:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (void) :
mAttribute_mStaticStringMap (),
mAttribute_mGlobalVariableMap (),
mAttribute_mGlobalConstantMap (),
mAttribute_mRoutineMapIR (),
mAttribute_mGuardMapIR (),
mAttribute_mInterruptMapIR (),
mAttribute_mExternProcedureMapIR (),
mAttribute_mRequiredProcedureSet (),
mAttribute_mBootList (),
mAttribute_mInitList (),
mAttribute_mPanicSetupInstructionListIR (),
mAttribute_mPanicLoopInstructionListIR (),
mAttribute_mTaskMapIR (),
mAttribute_mGlobalTaskVariableList (),
mAttribute_mMaxBranchOfOnInstructions (),
mAttribute_mTargetParameters (),
mAttribute_mModuleList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::~ GALGAS_intermediateCodeStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct::GALGAS_intermediateCodeStruct (const GALGAS_staticStringMap & inOperand0,
                                                              const GALGAS_globalVariableMapIR & inOperand1,
                                                              const GALGAS_globalConstantMapIR & inOperand2,
                                                              const GALGAS_routineMapIR & inOperand3,
                                                              const GALGAS_guardMapIR & inOperand4,
                                                              const GALGAS_interruptMapIR & inOperand5,
                                                              const GALGAS_externProcedureMapIR & inOperand6,
                                                              const GALGAS_stringset & inOperand7,
                                                              const GALGAS_bootListIR & inOperand8,
                                                              const GALGAS_initListIR & inOperand9,
                                                              const GALGAS_instructionListIR & inOperand10,
                                                              const GALGAS_instructionListIR & inOperand11,
                                                              const GALGAS_taskMapIR & inOperand12,
                                                              const GALGAS_globalTaskVariableList & inOperand13,
                                                              const GALGAS_uint & inOperand14,
                                                              const GALGAS_targetParameters & inOperand15,
                                                              const GALGAS_moduleListIR & inOperand16) :
mAttribute_mStaticStringMap (inOperand0),
mAttribute_mGlobalVariableMap (inOperand1),
mAttribute_mGlobalConstantMap (inOperand2),
mAttribute_mRoutineMapIR (inOperand3),
mAttribute_mGuardMapIR (inOperand4),
mAttribute_mInterruptMapIR (inOperand5),
mAttribute_mExternProcedureMapIR (inOperand6),
mAttribute_mRequiredProcedureSet (inOperand7),
mAttribute_mBootList (inOperand8),
mAttribute_mInitList (inOperand9),
mAttribute_mPanicSetupInstructionListIR (inOperand10),
mAttribute_mPanicLoopInstructionListIR (inOperand11),
mAttribute_mTaskMapIR (inOperand12),
mAttribute_mGlobalTaskVariableList (inOperand13),
mAttribute_mMaxBranchOfOnInstructions (inOperand14),
mAttribute_mTargetParameters (inOperand15),
mAttribute_mModuleList (inOperand16) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_intermediateCodeStruct (GALGAS_staticStringMap::constructor_emptyMap (HERE),
                                        GALGAS_globalVariableMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalConstantMapIR::constructor_emptyMap (HERE),
                                        GALGAS_routineMapIR::constructor_emptyMap (HERE),
                                        GALGAS_guardMapIR::constructor_emptyMap (HERE),
                                        GALGAS_interruptMapIR::constructor_emptyMap (HERE),
                                        GALGAS_externProcedureMapIR::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_bootListIR::constructor_emptyList (HERE),
                                        GALGAS_initListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_instructionListIR::constructor_emptyList (HERE),
                                        GALGAS_taskMapIR::constructor_emptyMap (HERE),
                                        GALGAS_globalTaskVariableList::constructor_emptyList (HERE),
                                        GALGAS_uint::constructor_default (HERE),
                                        GALGAS_targetParameters::constructor_default (HERE),
                                        GALGAS_moduleListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::constructor_new (const GALGAS_staticStringMap & inOperand0,
                                                                              const GALGAS_globalVariableMapIR & inOperand1,
                                                                              const GALGAS_globalConstantMapIR & inOperand2,
                                                                              const GALGAS_routineMapIR & inOperand3,
                                                                              const GALGAS_guardMapIR & inOperand4,
                                                                              const GALGAS_interruptMapIR & inOperand5,
                                                                              const GALGAS_externProcedureMapIR & inOperand6,
                                                                              const GALGAS_stringset & inOperand7,
                                                                              const GALGAS_bootListIR & inOperand8,
                                                                              const GALGAS_initListIR & inOperand9,
                                                                              const GALGAS_instructionListIR & inOperand10,
                                                                              const GALGAS_instructionListIR & inOperand11,
                                                                              const GALGAS_taskMapIR & inOperand12,
                                                                              const GALGAS_globalTaskVariableList & inOperand13,
                                                                              const GALGAS_uint & inOperand14,
                                                                              const GALGAS_targetParameters & inOperand15,
                                                                              const GALGAS_moduleListIR & inOperand16 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid ()) {
    result = GALGAS_intermediateCodeStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_intermediateCodeStruct::objectCompare (const GALGAS_intermediateCodeStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStaticStringMap.objectCompare (inOperand.mAttribute_mStaticStringMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableMap.objectCompare (inOperand.mAttribute_mGlobalVariableMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalConstantMap.objectCompare (inOperand.mAttribute_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineMapIR.objectCompare (inOperand.mAttribute_mRoutineMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardMapIR.objectCompare (inOperand.mAttribute_mGuardMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInterruptMapIR.objectCompare (inOperand.mAttribute_mInterruptMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternProcedureMapIR.objectCompare (inOperand.mAttribute_mExternProcedureMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureSet.objectCompare (inOperand.mAttribute_mRequiredProcedureSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBootList.objectCompare (inOperand.mAttribute_mBootList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitList.objectCompare (inOperand.mAttribute_mInitList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicSetupInstructionListIR.objectCompare (inOperand.mAttribute_mPanicSetupInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicLoopInstructionListIR.objectCompare (inOperand.mAttribute_mPanicLoopInstructionListIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskMapIR.objectCompare (inOperand.mAttribute_mTaskMapIR) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalTaskVariableList.objectCompare (inOperand.mAttribute_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMaxBranchOfOnInstructions.objectCompare (inOperand.mAttribute_mMaxBranchOfOnInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetParameters.objectCompare (inOperand.mAttribute_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModuleList.objectCompare (inOperand.mAttribute_mModuleList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_intermediateCodeStruct::isValid (void) const {
  return mAttribute_mStaticStringMap.isValid () && mAttribute_mGlobalVariableMap.isValid () && mAttribute_mGlobalConstantMap.isValid () && mAttribute_mRoutineMapIR.isValid () && mAttribute_mGuardMapIR.isValid () && mAttribute_mInterruptMapIR.isValid () && mAttribute_mExternProcedureMapIR.isValid () && mAttribute_mRequiredProcedureSet.isValid () && mAttribute_mBootList.isValid () && mAttribute_mInitList.isValid () && mAttribute_mPanicSetupInstructionListIR.isValid () && mAttribute_mPanicLoopInstructionListIR.isValid () && mAttribute_mTaskMapIR.isValid () && mAttribute_mGlobalTaskVariableList.isValid () && mAttribute_mMaxBranchOfOnInstructions.isValid () && mAttribute_mTargetParameters.isValid () && mAttribute_mModuleList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::drop (void) {
  mAttribute_mStaticStringMap.drop () ;
  mAttribute_mGlobalVariableMap.drop () ;
  mAttribute_mGlobalConstantMap.drop () ;
  mAttribute_mRoutineMapIR.drop () ;
  mAttribute_mGuardMapIR.drop () ;
  mAttribute_mInterruptMapIR.drop () ;
  mAttribute_mExternProcedureMapIR.drop () ;
  mAttribute_mRequiredProcedureSet.drop () ;
  mAttribute_mBootList.drop () ;
  mAttribute_mInitList.drop () ;
  mAttribute_mPanicSetupInstructionListIR.drop () ;
  mAttribute_mPanicLoopInstructionListIR.drop () ;
  mAttribute_mTaskMapIR.drop () ;
  mAttribute_mGlobalTaskVariableList.drop () ;
  mAttribute_mMaxBranchOfOnInstructions.drop () ;
  mAttribute_mTargetParameters.drop () ;
  mAttribute_mModuleList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_intermediateCodeStruct::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @intermediateCodeStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStaticStringMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInterruptMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternProcedureMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRequiredProcedureSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBootList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicSetupInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicLoopInstructionListIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskMapIR.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMaxBranchOfOnInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModuleList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap GALGAS_intermediateCodeStruct::getter_mStaticStringMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStaticStringMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMapIR GALGAS_intermediateCodeStruct::getter_mGlobalVariableMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR GALGAS_intermediateCodeStruct::getter_mGlobalConstantMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalConstantMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapIR GALGAS_intermediateCodeStruct::getter_mRoutineMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapIR GALGAS_intermediateCodeStruct::getter_mGuardMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR GALGAS_intermediateCodeStruct::getter_mInterruptMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInterruptMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externProcedureMapIR GALGAS_intermediateCodeStruct::getter_mExternProcedureMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternProcedureMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_intermediateCodeStruct::getter_mRequiredProcedureSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootListIR GALGAS_intermediateCodeStruct::getter_mBootList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBootList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR GALGAS_intermediateCodeStruct::getter_mInitList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mPanicSetupInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicSetupInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_intermediateCodeStruct::getter_mPanicLoopInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicLoopInstructionListIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR GALGAS_intermediateCodeStruct::getter_mTaskMapIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskMapIR ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList GALGAS_intermediateCodeStruct::getter_mGlobalTaskVariableList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalTaskVariableList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_intermediateCodeStruct::getter_mMaxBranchOfOnInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMaxBranchOfOnInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetParameters GALGAS_intermediateCodeStruct::getter_mTargetParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleListIR GALGAS_intermediateCodeStruct::getter_mModuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModuleList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @intermediateCodeStruct type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_intermediateCodeStruct ("intermediateCodeStruct",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_intermediateCodeStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_intermediateCodeStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_intermediateCodeStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_intermediateCodeStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_intermediateCodeStruct GALGAS_intermediateCodeStruct::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_intermediateCodeStruct result ;
  const GALGAS_intermediateCodeStruct * p = (const GALGAS_intermediateCodeStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_intermediateCodeStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("intermediateCodeStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@binaryOperationIR enterCodeForOverflowOperation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation> gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForOverflowOperation (const int32_t inClassIndex,
                                                         extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation inMethod) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_binaryOperationIR_enterCodeForOverflowOperation f = NULL ;
    if (classIndex < gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
      f = gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.count ()) {
           f = gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_enterCodeForOverflowOperation (const cPtr_binaryOperationIR * inObject,
                                                                             const GALGAS_string constinArgument_inOperation,
                                                                             const GALGAS_bigint constinArgument_inPanicCode,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex_2105 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 83)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 83)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 83)), var_staticStringIndex_2105, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 82)) ;
  }
  GALGAS_string var_llvmType_2124 = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  GALGAS_string var_labelName_2536 = extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2536, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2536, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".noovf\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2536.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_2105.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2536.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioGenerationAdds.mAttribute_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("declare {").add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2124, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  enterExtensionMethod_enterCodeForOverflowOperation (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                      extensionMethod_binaryOperationIR_enterCodeForOverflowOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation (void) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForOverflowOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForOverflowOperation (defineExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation,
                                                                            freeExtensionMethod_binaryOperationIR_enterCodeForOverflowOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic> gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const int32_t inClassIndex,
                                                                    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic inMethod) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (const cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic f = NULL ;
    if (classIndex < gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.count ()) {
      f = gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.count ()) {
           f = gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (const cPtr_binaryOperationIR * inObject,
                                                                                        const GALGAS_string constinArgument_inOperation,
                                                                                        const GALGAS_bigint constinArgument_inPanicCode,
                                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                                        const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                                        GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_binaryOperationIR * object = inObject ;
  macroValidSharedObject (object, cPtr_binaryOperationIR) ;
  GALGAS_uint var_staticStringIndex_3861 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).getter_lastPathComponent (SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), var_staticStringIndex_3861, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
  }
  GALGAS_string var_llvmType_3880 = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)).add_operation (var_llvmType_3880, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  GALGAS_string var_labelName_4037 = extensionGetter_name (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (var_labelName_4037, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (var_labelName_4037, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4037.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_3861.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 124)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4037.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 125)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (var_llvmType_3880, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (void) {
  enterExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (kTypeDescriptor_GALGAS_binaryOperationIR.mSlotID,
                                                                 extensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (void) {
  gExtensionMethodTable_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic (defineExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic,
                                                                                       freeExtensionMethod_binaryOperationIR_enterCodeForDivisionWithZeroDivisorPanic) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@routineMapIR-element enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterAccessibleEntities (const GALGAS_routineMapIR_2D_element inObject,
                                              GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                              GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_enterAccessibleEntities (inObject.mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 32)) ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_enumConstantMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::GALGAS_structureFieldListAST_2D_element (void) :
mAttribute_mFieldName (),
mAttribute_mIsPublic (),
mAttribute_mFieldTypeName (),
mAttribute_mInitialisation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::~ GALGAS_structureFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element::GALGAS_structureFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_bool & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_structureVarInit & inOperand3) :
mAttribute_mFieldName (inOperand0),
mAttribute_mIsPublic (inOperand1),
mAttribute_mFieldTypeName (inOperand2),
mAttribute_mInitialisation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element GALGAS_structureFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_bool & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_structureVarInit & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structureFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_structureFieldListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structureFieldListAST_2D_element::objectCompare (const GALGAS_structureFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsPublic.objectCompare (inOperand.mAttribute_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldTypeName.objectCompare (inOperand.mAttribute_mFieldTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialisation.objectCompare (inOperand.mAttribute_mInitialisation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structureFieldListAST_2D_element::isValid (void) const {
  return mAttribute_mFieldName.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mFieldTypeName.isValid () && mAttribute_mInitialisation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::drop (void) {
  mAttribute_mFieldName.drop () ;
  mAttribute_mIsPublic.drop () ;
  mAttribute_mFieldTypeName.drop () ;
  mAttribute_mInitialisation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structureFieldListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @structureFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialisation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_structureFieldListAST_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structureFieldListAST_2D_element::getter_mFieldTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureVarInit GALGAS_structureFieldListAST_2D_element::getter_mInitialisation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialisation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @structureFieldListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ("structureFieldListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structureFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structureFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structureFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structureFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST_2D_element GALGAS_structureFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structureFieldListAST_2D_element result ;
  const GALGAS_structureFieldListAST_2D_element * p = (const GALGAS_structureFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structureFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structureFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mAttribute_mPropertyName (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mPropertyName (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_propertyList_2D_element (GALGAS_string::constructor_default (HERE),
                                         GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_propertyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mAttribute_mPropertyName.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::drop (void) {
  mAttribute_mPropertyName.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @propertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_propertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_propertyList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @propertyList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsPublic (),
mAttribute_mPropertyObject (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bool & inOperand1,
                                                              const GALGAS_objectIR & inOperand2,
                                                              const GALGAS_uint & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mIsPublic (inOperand1),
mAttribute_mPropertyObject (inOperand2),
mAttribute_mIndex (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_bool & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2,
                                                                              const GALGAS_uint & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsPublic.objectCompare (inOperand.mAttribute_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyObject.objectCompare (inOperand.mAttribute_mPropertyObject) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mPropertyObject.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsPublic.drop () ;
  mAttribute_mPropertyObject.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyObject.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyMap_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_propertyMap_2D_element::getter_mPropertyObject (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyObject ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_propertyMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @propertyMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mType (),
mAttribute_mFieldIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mAttribute_mSelector (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mFieldIndex (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_constructorSignature_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                const GALGAS_uint & inOperand2 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_constructorSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorSignature_2D_element::objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldIndex.objectCompare (inOperand.mAttribute_mFieldIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mType.isValid () && mAttribute_mFieldIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mFieldIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorSignature_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @constructorSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_constructorSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_constructorSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_constructorSignature_2D_element::getter_mFieldIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @constructorSignature-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  const GALGAS_constructorSignature_2D_element * p = (const GALGAS_constructorSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::GALGAS_sortedOperandIRList_2D_element (void) :
mAttribute_mOperand (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::~ GALGAS_sortedOperandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element::GALGAS_sortedOperandIRList_2D_element (const GALGAS_objectIR & inOperand0,
                                                                              const GALGAS_uint & inOperand1) :
mAttribute_mOperand (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element GALGAS_sortedOperandIRList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0,
                                                                                              const GALGAS_uint & inOperand1 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortedOperandIRList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortedOperandIRList_2D_element::objectCompare (const GALGAS_sortedOperandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOperand.objectCompare (inOperand.mAttribute_mOperand) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortedOperandIRList_2D_element::isValid (void) const {
  return mAttribute_mOperand.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList_2D_element::drop (void) {
  mAttribute_mOperand.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortedOperandIRList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @sortedOperandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_sortedOperandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_sortedOperandIRList_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sortedOperandIRList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ("sortedOperandIRList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedOperandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedOperandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedOperandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedOperandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedOperandIRList_2D_element GALGAS_sortedOperandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_sortedOperandIRList_2D_element result ;
  const GALGAS_sortedOperandIRList_2D_element * p = (const GALGAS_sortedOperandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedOperandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedOperandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mProcedureDeclarationListAST (),
mAttribute_mFieldList (),
mAttribute_mServiceListAST (),
mAttribute_mSectionListAST (),
mAttribute_mPrimitiveListAST (),
mAttribute_mGuardListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::~ GALGAS_extensionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element::GALGAS_extensionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                              const GALGAS_structureFieldListAST & inOperand2,
                                                                                              const GALGAS_serviceDeclarationListAST & inOperand3,
                                                                                              const GALGAS_sectionDeclarationListAST & inOperand4,
                                                                                              const GALGAS_primitiveDeclarationListAST & inOperand5,
                                                                                              const GALGAS_guardDeclarationListAST & inOperand6) :
mAttribute_mTypeName (inOperand0),
mAttribute_mProcedureDeclarationListAST (inOperand1),
mAttribute_mFieldList (inOperand2),
mAttribute_mServiceListAST (inOperand3),
mAttribute_mSectionListAST (inOperand4),
mAttribute_mPrimitiveListAST (inOperand5),
mAttribute_mGuardListAST (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_extensionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_functionDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_structureFieldListAST::constructor_emptyList (HERE),
                                                        GALGAS_serviceDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_sectionDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_primitiveDeclarationListAST::constructor_emptyList (HERE),
                                                        GALGAS_guardDeclarationListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_functionDeclarationListAST & inOperand1,
                                                                                                              const GALGAS_structureFieldListAST & inOperand2,
                                                                                                              const GALGAS_serviceDeclarationListAST & inOperand3,
                                                                                                              const GALGAS_sectionDeclarationListAST & inOperand4,
                                                                                                              const GALGAS_primitiveDeclarationListAST & inOperand5,
                                                                                                              const GALGAS_guardDeclarationListAST & inOperand6 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_extensionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_extensionDeclarationListAST_2D_element::objectCompare (const GALGAS_extensionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureDeclarationListAST.objectCompare (inOperand.mAttribute_mProcedureDeclarationListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldList.objectCompare (inOperand.mAttribute_mFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServiceListAST.objectCompare (inOperand.mAttribute_mServiceListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionListAST.objectCompare (inOperand.mAttribute_mSectionListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrimitiveListAST.objectCompare (inOperand.mAttribute_mPrimitiveListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardListAST.objectCompare (inOperand.mAttribute_mGuardListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_extensionDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mProcedureDeclarationListAST.isValid () && mAttribute_mFieldList.isValid () && mAttribute_mServiceListAST.isValid () && mAttribute_mSectionListAST.isValid () && mAttribute_mPrimitiveListAST.isValid () && mAttribute_mGuardListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mProcedureDeclarationListAST.drop () ;
  mAttribute_mFieldList.drop () ;
  mAttribute_mServiceListAST.drop () ;
  mAttribute_mSectionListAST.drop () ;
  mAttribute_mPrimitiveListAST.drop () ;
  mAttribute_mGuardListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_extensionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @extensionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureDeclarationListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServiceListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrimitiveListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_extensionDeclarationListAST_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mProcedureDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structureFieldListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mServiceListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mSectionListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mPrimitiveListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardDeclarationListAST GALGAS_extensionDeclarationListAST_2D_element::getter_mGuardListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @extensionDeclarationListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ("extensionDeclarationListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_extensionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_extensionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extensionDeclarationListAST_2D_element GALGAS_extensionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extensionDeclarationListAST_2D_element result ;
  const GALGAS_extensionDeclarationListAST_2D_element * p = (const GALGAS_extensionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (void) :
mAttribute_mRegisterName (),
mAttribute_mControlRegisterKind (),
mAttribute_mAttributeList (),
mAttribute_mRegisterAddress (),
mAttribute_mRegisterAddressLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::~ GALGAS_controlRegisterNameList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element::GALGAS_controlRegisterNameList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                      const GALGAS_expressionAST & inOperand3,
                                                                                      const GALGAS_location & inOperand4) :
mAttribute_mRegisterName (inOperand0),
mAttribute_mControlRegisterKind (inOperand1),
mAttribute_mAttributeList (inOperand2),
mAttribute_mRegisterAddress (inOperand3),
mAttribute_mRegisterAddressLocation (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_controlRegisterKind & inOperand1,
                                                                                                      const GALGAS_lstringlist & inOperand2,
                                                                                                      const GALGAS_expressionAST & inOperand3,
                                                                                                      const GALGAS_location & inOperand4 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_controlRegisterNameList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterNameList_2D_element::objectCompare (const GALGAS_controlRegisterNameList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterName.objectCompare (inOperand.mAttribute_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterKind.objectCompare (inOperand.mAttribute_mControlRegisterKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeList.objectCompare (inOperand.mAttribute_mAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddress.objectCompare (inOperand.mAttribute_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterAddressLocation.objectCompare (inOperand.mAttribute_mRegisterAddressLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterNameList_2D_element::isValid (void) const {
  return mAttribute_mRegisterName.isValid () && mAttribute_mControlRegisterKind.isValid () && mAttribute_mAttributeList.isValid () && mAttribute_mRegisterAddress.isValid () && mAttribute_mRegisterAddressLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::drop (void) {
  mAttribute_mRegisterName.drop () ;
  mAttribute_mControlRegisterKind.drop () ;
  mAttribute_mAttributeList.drop () ;
  mAttribute_mRegisterAddress.drop () ;
  mAttribute_mRegisterAddressLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterNameList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterNameList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterAddressLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterNameList_2D_element::getter_mRegisterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterKind GALGAS_controlRegisterNameList_2D_element::getter_mControlRegisterKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_controlRegisterNameList_2D_element::getter_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_controlRegisterNameList_2D_element::getter_mRegisterAddressLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterAddressLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterNameList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ("controlRegisterNameList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterNameList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterNameList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterNameList_2D_element GALGAS_controlRegisterNameList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameList_2D_element result ;
  const GALGAS_controlRegisterNameList_2D_element * p = (const GALGAS_controlRegisterNameList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterNameList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (void) :
mAttribute_mRegisterBitSlice () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::~ GALGAS_controlRegisterBitSliceList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element::GALGAS_controlRegisterBitSliceList_2D_element (const GALGAS_controlRegisterBitSlice & inOperand0) :
mAttribute_mRegisterBitSlice (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element GALGAS_controlRegisterBitSliceList_2D_element::constructor_new (const GALGAS_controlRegisterBitSlice & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_controlRegisterBitSliceList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterBitSliceList_2D_element::objectCompare (const GALGAS_controlRegisterBitSliceList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterBitSlice.objectCompare (inOperand.mAttribute_mRegisterBitSlice) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterBitSliceList_2D_element::isValid (void) const {
  return mAttribute_mRegisterBitSlice.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::drop (void) {
  mAttribute_mRegisterBitSlice.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterBitSliceList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterBitSliceList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRegisterBitSlice.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSlice GALGAS_controlRegisterBitSliceList_2D_element::getter_mRegisterBitSlice (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitSlice ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controlRegisterBitSliceList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ("controlRegisterBitSliceList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterBitSliceList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterBitSliceList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterBitSliceList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterBitSliceList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterBitSliceList_2D_element GALGAS_controlRegisterBitSliceList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterBitSliceList_2D_element result ;
  const GALGAS_controlRegisterBitSliceList_2D_element * p = (const GALGAS_controlRegisterBitSliceList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterBitSliceList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterBitSliceList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBitIndex (),
mAttribute_mBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mBitIndex (inOperand1),
mAttribute_mBitCount (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterFieldMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE),
                                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                      const GALGAS_uint & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_controlRegisterFieldMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterFieldMap_2D_element::objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitIndex.objectCompare (inOperand.mAttribute_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitIndex.isValid () && mAttribute_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBitIndex.drop () ;
  mAttribute_mBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterFieldMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterFieldMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterFieldMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterFieldMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @controlRegisterFieldMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAccessOperator (),
mAttribute_mAccessRightOperand (),
mAttribute_mSubMap (),
mAttribute_mResultType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_sliceMap & inOperand3,
                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mAccessOperator (inOperand1),
mAttribute_mAccessRightOperand (inOperand2),
mAttribute_mSubMap (inOperand3),
mAttribute_mResultType (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                                        const GALGAS_bigint & inOperand2,
                                                                        const GALGAS_sliceMap & inOperand3,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand4 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_sliceMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sliceMap_2D_element::objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessOperator.objectCompare (inOperand.mAttribute_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAccessRightOperand.objectCompare (inOperand.mAttribute_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubMap.objectCompare (inOperand.mAttribute_mSubMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAccessOperator.isValid () && mAttribute_mAccessRightOperand.isValid () && mAttribute_mSubMap.isValid () && mAttribute_mResultType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAccessOperator.drop () ;
  mAttribute_mAccessRightOperand.drop () ;
  mAttribute_mSubMap.drop () ;
  mAttribute_mResultType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sliceMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @sliceMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sliceMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_llvmBinaryOperation GALGAS_sliceMap_2D_element::getter_mAccessOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_sliceMap_2D_element::getter_mAccessRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccessRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_sliceMap_2D_element::getter_mSubMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_sliceMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @sliceMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mIsReadOnly (),
mAttribute_mIsAccessibleInUserMode (),
mAttribute_mRegisterFieldAccessMap (),
mAttribute_mRegisterFieldMap (),
mAttribute_mAddress (),
mAttribute_mControlRegisterFieldList (),
mAttribute_mRegisterBitCount (),
mAttribute_mArraySize (),
mAttribute_mElementArraySize () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_sliceMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8,
                                                                            const GALGAS_uint & inOperand9,
                                                                            const GALGAS_uint & inOperand10) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mIsReadOnly (inOperand2),
mAttribute_mIsAccessibleInUserMode (inOperand3),
mAttribute_mRegisterFieldAccessMap (inOperand4),
mAttribute_mRegisterFieldMap (inOperand5),
mAttribute_mAddress (inOperand6),
mAttribute_mControlRegisterFieldList (inOperand7),
mAttribute_mRegisterBitCount (inOperand8),
mAttribute_mArraySize (inOperand9),
mAttribute_mElementArraySize (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controlRegisterMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_sliceMap::constructor_emptyMap (HERE),
                                               GALGAS_controlRegisterFieldMap::constructor_emptyMap (HERE),
                                               GALGAS_bigint::constructor_zero (HERE),
                                               GALGAS_controlRegisterFieldList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_sliceMap & inOperand4,
                                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                                            const GALGAS_bigint & inOperand6,
                                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                                            const GALGAS_uint & inOperand8,
                                                                                            const GALGAS_uint & inOperand9,
                                                                                            const GALGAS_uint & inOperand10 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_controlRegisterMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsReadOnly.objectCompare (inOperand.mAttribute_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsAccessibleInUserMode.objectCompare (inOperand.mAttribute_mIsAccessibleInUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterFieldAccessMap.objectCompare (inOperand.mAttribute_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterFieldMap.objectCompare (inOperand.mAttribute_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAddress.objectCompare (inOperand.mAttribute_mAddress) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControlRegisterFieldList.objectCompare (inOperand.mAttribute_mControlRegisterFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegisterBitCount.objectCompare (inOperand.mAttribute_mRegisterBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArraySize.objectCompare (inOperand.mAttribute_mArraySize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mElementArraySize.objectCompare (inOperand.mAttribute_mElementArraySize) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mIsReadOnly.isValid () && mAttribute_mIsAccessibleInUserMode.isValid () && mAttribute_mRegisterFieldAccessMap.isValid () && mAttribute_mRegisterFieldMap.isValid () && mAttribute_mAddress.isValid () && mAttribute_mControlRegisterFieldList.isValid () && mAttribute_mRegisterBitCount.isValid () && mAttribute_mArraySize.isValid () && mAttribute_mElementArraySize.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mIsReadOnly.drop () ;
  mAttribute_mIsAccessibleInUserMode.drop () ;
  mAttribute_mRegisterFieldAccessMap.drop () ;
  mAttribute_mRegisterFieldMap.drop () ;
  mAttribute_mAddress.drop () ;
  mAttribute_mControlRegisterFieldList.drop () ;
  mAttribute_mRegisterBitCount.drop () ;
  mAttribute_mArraySize.drop () ;
  mAttribute_mElementArraySize.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controlRegisterMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @controlRegisterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsAccessibleInUserMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAddress.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArraySize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controlRegisterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controlRegisterMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsReadOnly (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsReadOnly ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_controlRegisterMap_2D_element::getter_mIsAccessibleInUserMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsAccessibleInUserMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sliceMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldAccessMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterFieldAccessMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldMap GALGAS_controlRegisterMap_2D_element::getter_mRegisterFieldMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterFieldMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_controlRegisterMap_2D_element::getter_mAddress (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAddress ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterFieldList GALGAS_controlRegisterMap_2D_element::getter_mControlRegisterFieldList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControlRegisterFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mRegisterBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegisterBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mArraySize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArraySize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_controlRegisterMap_2D_element::getter_mElementArraySize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementArraySize ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @controlRegisterMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element::GALGAS_allowedRoutineList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mReceiverTypeName (),
mAttribute_mRoutineName (),
mAttribute_mRoutineKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element::~ GALGAS_allowedRoutineList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element::GALGAS_allowedRoutineList_2D_element (const GALGAS_bool & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_lstring & inOperand2,
                                                                            const GALGAS_routineKind & inOperand3) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mReceiverTypeName (inOperand1),
mAttribute_mRoutineName (inOperand2),
mAttribute_mRoutineKind (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element GALGAS_allowedRoutineList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_routineKind & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedRoutineList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_allowedRoutineList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedRoutineList_2D_element::objectCompare (const GALGAS_allowedRoutineList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReceiverTypeName.objectCompare (inOperand.mAttribute_mReceiverTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineName.objectCompare (inOperand.mAttribute_mRoutineName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineKind.objectCompare (inOperand.mAttribute_mRoutineKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedRoutineList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mReceiverTypeName.isValid () && mAttribute_mRoutineName.isValid () && mAttribute_mRoutineKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mReceiverTypeName.drop () ;
  mAttribute_mRoutineName.drop () ;
  mAttribute_mRoutineKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @allowedRoutineList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReceiverTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineList_2D_element::getter_mReceiverTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineList_2D_element::getter_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_allowedRoutineList_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @allowedRoutineList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineList_2D_element ("allowedRoutineList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineList_2D_element GALGAS_allowedRoutineList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineList_2D_element result ;
  const GALGAS_allowedRoutineList_2D_element * p = (const GALGAS_allowedRoutineList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::GALGAS_allowedInitList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mInitPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::~ GALGAS_allowedInitList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element::GALGAS_allowedInitList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_lbigint & inOperand1) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mInitPriority (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedInitList_2D_element (GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lbigint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedInitList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedInitList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedInitList_2D_element::objectCompare (const GALGAS_allowedInitList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitPriority.objectCompare (inOperand.mAttribute_mInitPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedInitList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mInitPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mInitPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedInitList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedInitList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedInitList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedInitList_2D_element::getter_mInitPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedInitList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedInitList_2D_element ("allowedInitList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedInitList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedInitList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedInitList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedInitList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedInitList_2D_element GALGAS_allowedInitList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedInitList_2D_element result ;
  const GALGAS_allowedInitList_2D_element * p = (const GALGAS_allowedInitList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedInitList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedInitList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element::GALGAS_allowedPanicList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mPanicName (),
mAttribute_mPanicPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element::~ GALGAS_allowedPanicList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element::GALGAS_allowedPanicList_2D_element (const GALGAS_bool & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_lbigint & inOperand2) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mPanicName (inOperand1),
mAttribute_mPanicPriority (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element GALGAS_allowedPanicList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedPanicList_2D_element (GALGAS_bool::constructor_default (HERE),
                                             GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_lbigint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element GALGAS_allowedPanicList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lbigint & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedPanicList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_allowedPanicList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedPanicList_2D_element::objectCompare (const GALGAS_allowedPanicList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicName.objectCompare (inOperand.mAttribute_mPanicName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPanicPriority.objectCompare (inOperand.mAttribute_mPanicPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedPanicList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mPanicName.isValid () && mAttribute_mPanicPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mPanicName.drop () ;
  mAttribute_mPanicPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedPanicList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @allowedPanicList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPanicPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedPanicList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedPanicList_2D_element::getter_mPanicName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_allowedPanicList_2D_element::getter_mPanicPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPanicPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @allowedPanicList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedPanicList_2D_element ("allowedPanicList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedPanicList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedPanicList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedPanicList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedPanicList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedPanicList_2D_element GALGAS_allowedPanicList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_allowedPanicList_2D_element result ;
  const GALGAS_allowedPanicList_2D_element * p = (const GALGAS_allowedPanicList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedPanicList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedPanicList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element::GALGAS_allowedGuardList_2D_element (void) :
mAttribute_mOptionalTypeName (),
mAttribute_mGuardName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element::~ GALGAS_allowedGuardList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element::GALGAS_allowedGuardList_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1) :
mAttribute_mOptionalTypeName (inOperand0),
mAttribute_mGuardName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element GALGAS_allowedGuardList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedGuardList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element GALGAS_allowedGuardList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedGuardList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedGuardList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedGuardList_2D_element::objectCompare (const GALGAS_allowedGuardList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionalTypeName.objectCompare (inOperand.mAttribute_mOptionalTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGuardName.objectCompare (inOperand.mAttribute_mGuardName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedGuardList_2D_element::isValid (void) const {
  return mAttribute_mOptionalTypeName.isValid () && mAttribute_mGuardName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList_2D_element::drop (void) {
  mAttribute_mOptionalTypeName.drop () ;
  mAttribute_mGuardName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @allowedGuardList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGuardName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardList_2D_element::getter_mOptionalTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardList_2D_element::getter_mGuardName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @allowedGuardList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedGuardList_2D_element ("allowedGuardList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedGuardList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedGuardList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedGuardList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedGuardList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardList_2D_element GALGAS_allowedGuardList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardList_2D_element result ;
  const GALGAS_allowedGuardList_2D_element * p = (const GALGAS_allowedGuardList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedGuardList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedGuardList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element::GALGAS_allowedISRList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mISRName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element::~ GALGAS_allowedISRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element::GALGAS_allowedISRList_2D_element (const GALGAS_bool & inOperand0,
                                                                    const GALGAS_lstring & inOperand1) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mISRName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element GALGAS_allowedISRList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedISRList_2D_element (GALGAS_bool::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element GALGAS_allowedISRList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedISRList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedISRList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedISRList_2D_element::objectCompare (const GALGAS_allowedISRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mISRName.objectCompare (inOperand.mAttribute_mISRName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedISRList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mISRName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mISRName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @allowedISRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mISRName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedISRList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedISRList_2D_element::getter_mISRName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mISRName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedISRList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedISRList_2D_element ("allowedISRList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedISRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedISRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedISRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedISRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRList_2D_element GALGAS_allowedISRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_allowedISRList_2D_element result ;
  const GALGAS_allowedISRList_2D_element * p = (const GALGAS_allowedISRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedISRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedISRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element::GALGAS_allowedTaskList_2D_element (void) :
mAttribute_mHasWriteAccess (),
mAttribute_mTaskName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element::~ GALGAS_allowedTaskList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element::GALGAS_allowedTaskList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mHasWriteAccess (inOperand0),
mAttribute_mTaskName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element GALGAS_allowedTaskList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedTaskList_2D_element (GALGAS_bool::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element GALGAS_allowedTaskList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedTaskList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedTaskList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedTaskList_2D_element::objectCompare (const GALGAS_allowedTaskList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskName.objectCompare (inOperand.mAttribute_mTaskName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedTaskList_2D_element::isValid (void) const {
  return mAttribute_mHasWriteAccess.isValid () && mAttribute_mTaskName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList_2D_element::drop (void) {
  mAttribute_mHasWriteAccess.drop () ;
  mAttribute_mTaskName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedTaskList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedTaskList_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedTaskList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedTaskList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedTaskList_2D_element ("allowedTaskList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedTaskList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedTaskList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedTaskList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedTaskList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskList_2D_element GALGAS_allowedTaskList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedTaskList_2D_element result ;
  const GALGAS_allowedTaskList_2D_element * p = (const GALGAS_allowedTaskList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedTaskList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedTaskList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::GALGAS_allowedRoutineMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHasWriteAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::~ GALGAS_allowedRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element::GALGAS_allowedRoutineMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHasWriteAccess (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                              GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedRoutineMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedRoutineMap_2D_element::objectCompare (const GALGAS_allowedRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHasWriteAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedRoutineMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @allowedRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedRoutineMap_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @allowedRoutineMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedRoutineMap_2D_element ("allowedRoutineMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap_2D_element GALGAS_allowedRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_allowedRoutineMap_2D_element result ;
  const GALGAS_allowedRoutineMap_2D_element * p = (const GALGAS_allowedRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element::GALGAS_allowedISRMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHasWriteAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element::~ GALGAS_allowedISRMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element::GALGAS_allowedISRMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHasWriteAccess (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element GALGAS_allowedISRMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedISRMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element GALGAS_allowedISRMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_bool & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedISRMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedISRMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedISRMap_2D_element::objectCompare (const GALGAS_allowedISRMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedISRMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHasWriteAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedISRMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @allowedISRMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedISRMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedISRMap_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @allowedISRMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedISRMap_2D_element ("allowedISRMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedISRMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedISRMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedISRMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedISRMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap_2D_element GALGAS_allowedISRMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_allowedISRMap_2D_element result ;
  const GALGAS_allowedISRMap_2D_element * p = (const GALGAS_allowedISRMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedISRMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedISRMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element::GALGAS_allowedTaskMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHasWriteAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element::~ GALGAS_allowedTaskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element::GALGAS_allowedTaskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHasWriteAccess (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element GALGAS_allowedTaskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedTaskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element GALGAS_allowedTaskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_bool & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedTaskMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allowedTaskMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedTaskMap_2D_element::objectCompare (const GALGAS_allowedTaskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasWriteAccess.objectCompare (inOperand.mAttribute_mHasWriteAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedTaskMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHasWriteAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHasWriteAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedTaskMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @allowedTaskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasWriteAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedTaskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_allowedTaskMap_2D_element::getter_mHasWriteAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasWriteAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedTaskMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedTaskMap_2D_element ("allowedTaskMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedTaskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedTaskMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedTaskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedTaskMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap_2D_element GALGAS_allowedTaskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_allowedTaskMap_2D_element result ;
  const GALGAS_allowedTaskMap_2D_element * p = (const GALGAS_allowedTaskMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedTaskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedTaskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::GALGAS_moduleMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::~ GALGAS_moduleMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element::GALGAS_moduleMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_moduleMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_moduleMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_moduleMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_moduleMap_2D_element::objectCompare (const GALGAS_moduleMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_moduleMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_moduleMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @moduleMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_moduleMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @moduleMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduleMap_2D_element ("moduleMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_moduleMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduleMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_moduleMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduleMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_moduleMap_2D_element GALGAS_moduleMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduleMap_2D_element result ;
  const GALGAS_moduleMap_2D_element * p = (const GALGAS_moduleMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduleMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduleMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::GALGAS_taskInitListAST_2D_element (void) :
mAttribute_mTaskInitPriority (),
mAttribute_mTaskInitInstructionList (),
mAttribute_mEndOfTaskInitDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::~ GALGAS_taskInitListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element::GALGAS_taskInitListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mAttribute_mTaskInitPriority (inOperand0),
mAttribute_mTaskInitInstructionList (inOperand1),
mAttribute_mEndOfTaskInitDeclaration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskInitListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                            GALGAS_instructionListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                      const GALGAS_instructionListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskInitListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_taskInitListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskInitListAST_2D_element::objectCompare (const GALGAS_taskInitListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTaskInitPriority.objectCompare (inOperand.mAttribute_mTaskInitPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskInitInstructionList.objectCompare (inOperand.mAttribute_mTaskInitInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfTaskInitDeclaration.objectCompare (inOperand.mAttribute_mEndOfTaskInitDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskInitListAST_2D_element::isValid (void) const {
  return mAttribute_mTaskInitPriority.isValid () && mAttribute_mTaskInitInstructionList.isValid () && mAttribute_mEndOfTaskInitDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST_2D_element::drop (void) {
  mAttribute_mTaskInitPriority.drop () ;
  mAttribute_mTaskInitInstructionList.drop () ;
  mAttribute_mEndOfTaskInitDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @taskInitListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskInitPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskInitInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfTaskInitDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskInitListAST_2D_element::getter_mTaskInitPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskInitListAST_2D_element::getter_mTaskInitInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskInitListAST_2D_element::getter_mEndOfTaskInitDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfTaskInitDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @taskInitListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitListAST_2D_element ("taskInitListAST-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitListAST_2D_element GALGAS_taskInitListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskInitListAST_2D_element result ;
  const GALGAS_taskInitListAST_2D_element * p = (const GALGAS_taskInitListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element::GALGAS_taskInitSortedListAST_2D_element (void) :
mAttribute_mTaskInitPriority (),
mAttribute_mTaskInitInstructionList (),
mAttribute_mEndOfTaskInitDeclaration (),
mAttribute_mPriority () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element::~ GALGAS_taskInitSortedListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element::GALGAS_taskInitSortedListAST_2D_element (const GALGAS_lbigint & inOperand0,
                                                                                  const GALGAS_instructionListAST & inOperand1,
                                                                                  const GALGAS_location & inOperand2,
                                                                                  const GALGAS_bigint & inOperand3) :
mAttribute_mTaskInitPriority (inOperand0),
mAttribute_mTaskInitInstructionList (inOperand1),
mAttribute_mEndOfTaskInitDeclaration (inOperand2),
mAttribute_mPriority (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element GALGAS_taskInitSortedListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskInitSortedListAST_2D_element (GALGAS_lbigint::constructor_default (HERE),
                                                  GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE),
                                                  GALGAS_bigint::constructor_zero (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element GALGAS_taskInitSortedListAST_2D_element::constructor_new (const GALGAS_lbigint & inOperand0,
                                                                                                  const GALGAS_instructionListAST & inOperand1,
                                                                                                  const GALGAS_location & inOperand2,
                                                                                                  const GALGAS_bigint & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_taskInitSortedListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskInitSortedListAST_2D_element::objectCompare (const GALGAS_taskInitSortedListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTaskInitPriority.objectCompare (inOperand.mAttribute_mTaskInitPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskInitInstructionList.objectCompare (inOperand.mAttribute_mTaskInitInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfTaskInitDeclaration.objectCompare (inOperand.mAttribute_mEndOfTaskInitDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskInitSortedListAST_2D_element::isValid (void) const {
  return mAttribute_mTaskInitPriority.isValid () && mAttribute_mTaskInitInstructionList.isValid () && mAttribute_mEndOfTaskInitDeclaration.isValid () && mAttribute_mPriority.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST_2D_element::drop (void) {
  mAttribute_mTaskInitPriority.drop () ;
  mAttribute_mTaskInitInstructionList.drop () ;
  mAttribute_mEndOfTaskInitDeclaration.drop () ;
  mAttribute_mPriority.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskInitSortedListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @taskInitSortedListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskInitPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskInitInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfTaskInitDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_taskInitSortedListAST_2D_element::getter_mTaskInitPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskInitPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_taskInitSortedListAST_2D_element::getter_mTaskInitInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskInitInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_taskInitSortedListAST_2D_element::getter_mEndOfTaskInitDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfTaskInitDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskInitSortedListAST_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @taskInitSortedListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskInitSortedListAST_2D_element ("taskInitSortedListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskInitSortedListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskInitSortedListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskInitSortedListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskInitSortedListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskInitSortedListAST_2D_element GALGAS_taskInitSortedListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_taskInitSortedListAST_2D_element result ;
  const GALGAS_taskInitSortedListAST_2D_element * p = (const GALGAS_taskInitSortedListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskInitSortedListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskInitSortedListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::~ GALGAS_taskProcedureMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element::GALGAS_taskProcedureMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskProcedureMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskProcedureMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_taskProcedureMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskProcedureMap_2D_element::objectCompare (const GALGAS_taskProcedureMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskProcedureMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskProcedureMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @taskProcedureMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskProcedureMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @taskProcedureMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskProcedureMap_2D_element ("taskProcedureMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskProcedureMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskProcedureMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskProcedureMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskProcedureMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap_2D_element GALGAS_taskProcedureMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskProcedureMap_2D_element result ;
  const GALGAS_taskProcedureMap_2D_element * p = (const GALGAS_taskProcedureMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskProcedureMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskProcedureMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTaskProcedureMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_taskProcedureMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mTaskProcedureMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                    GALGAS_taskProcedureMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_taskProcedureMap & inOperand1 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_taskMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskMap_2D_element::objectCompare (const GALGAS_taskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskProcedureMap.objectCompare (inOperand.mAttribute_mTaskProcedureMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTaskProcedureMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTaskProcedureMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @taskMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskProcedureMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskProcedureMap GALGAS_taskMap_2D_element::getter_mTaskProcedureMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskProcedureMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @taskMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMap_2D_element ("taskMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  const GALGAS_taskMap_2D_element * p = (const GALGAS_taskMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTaskType (),
mAttribute_mPriority (),
mAttribute_mStackSize (),
mAttribute_mAllocaList (),
mAttribute_mInitInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::~ GALGAS_taskMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                          const GALGAS_bigint & inOperand2,
                                                          const GALGAS_bigint & inOperand3,
                                                          const GALGAS_allocaList & inOperand4,
                                                          const GALGAS_instructionListIR & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mTaskType (inOperand1),
mAttribute_mPriority (inOperand2),
mAttribute_mStackSize (inOperand3),
mAttribute_mAllocaList (inOperand4),
mAttribute_mInitInstructionListIR (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_taskMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                      GALGAS_bigint::constructor_zero (HERE),
                                      GALGAS_bigint::constructor_zero (HERE),
                                      GALGAS_allocaList::constructor_emptyList (HERE),
                                      GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_bigint & inOperand2,
                                                                          const GALGAS_bigint & inOperand3,
                                                                          const GALGAS_allocaList & inOperand4,
                                                                          const GALGAS_instructionListIR & inOperand5 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_taskMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_taskMapIR_2D_element::objectCompare (const GALGAS_taskMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskType.objectCompare (inOperand.mAttribute_mTaskType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStackSize.objectCompare (inOperand.mAttribute_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitInstructionListIR.objectCompare (inOperand.mAttribute_mInitInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_taskMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTaskType.isValid () && mAttribute_mPriority.isValid () && mAttribute_mStackSize.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInitInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTaskType.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mStackSize.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInitInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_taskMapIR_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @taskMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStackSize.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_taskMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_taskMapIR_2D_element::getter_mTaskType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_taskMapIR_2D_element::getter_mStackSize (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStackSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_taskMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_taskMapIR_2D_element::getter_mInitInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @taskMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_taskMapIR_2D_element ("taskMapIR-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_taskMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_taskMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  const GALGAS_taskMapIR_2D_element * p = (const GALGAS_taskMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_taskMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::~ GALGAS_panicRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_panicRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_panicRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_panicRoutinePriorityMap_2D_element::objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_panicRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_panicRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @panicRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_panicRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @panicRoutinePriorityMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ("panicRoutinePriorityMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  const GALGAS_panicRoutinePriorityMap_2D_element * p = (const GALGAS_panicRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_panicRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::~ GALGAS_bootRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element::GALGAS_bootRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bootRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_bootRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bootRoutinePriorityMap_2D_element::objectCompare (const GALGAS_bootRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bootRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bootRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @bootRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bootRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bootRoutinePriorityMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ("bootRoutinePriorityMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bootRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bootRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bootRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bootRoutinePriorityMap_2D_element GALGAS_bootRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bootRoutinePriorityMap_2D_element result ;
  const GALGAS_bootRoutinePriorityMap_2D_element * p = (const GALGAS_bootRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bootRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::~ GALGAS_initRoutineMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element::GALGAS_initRoutineMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRoutineMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRoutineMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initRoutineMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRoutineMap_2D_element::objectCompare (const GALGAS_initRoutineMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutineMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutineMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @initRoutineMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutineMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @initRoutineMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutineMap_2D_element ("initRoutineMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutineMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutineMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutineMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutineMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutineMap_2D_element GALGAS_initRoutineMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRoutineMap_2D_element result ;
  const GALGAS_initRoutineMap_2D_element * p = (const GALGAS_initRoutineMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutineMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutineMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::~ GALGAS_initRoutinePriorityMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element::GALGAS_initRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initRoutinePriorityMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_initRoutinePriorityMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initRoutinePriorityMap_2D_element::objectCompare (const GALGAS_initRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initRoutinePriorityMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initRoutinePriorityMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @initRoutinePriorityMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_initRoutinePriorityMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @initRoutinePriorityMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ("initRoutinePriorityMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initRoutinePriorityMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initRoutinePriorityMap_2D_element GALGAS_initRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_initRoutinePriorityMap_2D_element result ;
  const GALGAS_initRoutinePriorityMap_2D_element * p = (const GALGAS_initRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (void) :
mAttribute_mSelfType (),
mAttribute_mGlobalVariable (),
mAttribute_mInitRequiredByProcList (),
mAttribute_mPriority (),
mAttribute_mAllocaList (),
mAttribute_mInstructionListIR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::~ GALGAS_initListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element::GALGAS_initListIR_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_lstringlist & inOperand2,
                                                            const GALGAS_bigint & inOperand3,
                                                            const GALGAS_allocaList & inOperand4,
                                                            const GALGAS_instructionListIR & inOperand5) :
mAttribute_mSelfType (inOperand0),
mAttribute_mGlobalVariable (inOperand1),
mAttribute_mInitRequiredByProcList (inOperand2),
mAttribute_mPriority (inOperand3),
mAttribute_mAllocaList (inOperand4),
mAttribute_mInstructionListIR (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_initListIR_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                       GALGAS_string::constructor_default (HERE),
                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                       GALGAS_bigint::constructor_zero (HERE),
                                       GALGAS_allocaList::constructor_emptyList (HERE),
                                       GALGAS_instructionListIR::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_lstringlist & inOperand2,
                                                                            const GALGAS_bigint & inOperand3,
                                                                            const GALGAS_allocaList & inOperand4,
                                                                            const GALGAS_instructionListIR & inOperand5 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_initListIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_initListIR_2D_element::objectCompare (const GALGAS_initListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelfType.objectCompare (inOperand.mAttribute_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariable.objectCompare (inOperand.mAttribute_mGlobalVariable) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitRequiredByProcList.objectCompare (inOperand.mAttribute_mInitRequiredByProcList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPriority.objectCompare (inOperand.mAttribute_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionListIR.objectCompare (inOperand.mAttribute_mInstructionListIR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_initListIR_2D_element::isValid (void) const {
  return mAttribute_mSelfType.isValid () && mAttribute_mGlobalVariable.isValid () && mAttribute_mInitRequiredByProcList.isValid () && mAttribute_mPriority.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionListIR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::drop (void) {
  mAttribute_mSelfType.drop () ;
  mAttribute_mGlobalVariable.drop () ;
  mAttribute_mInitRequiredByProcList.drop () ;
  mAttribute_mPriority.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInstructionListIR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_initListIR_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @initListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitRequiredByProcList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPriority.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionListIR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_initListIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_initListIR_2D_element::getter_mGlobalVariable (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariable ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_initListIR_2D_element::getter_mInitRequiredByProcList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitRequiredByProcList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_initListIR_2D_element::getter_mPriority (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPriority ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_initListIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_initListIR_2D_element::getter_mInstructionListIR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionListIR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @initListIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_initListIR_2D_element ("initListIR-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_initListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_initListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_initListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_initListIR_2D_element GALGAS_initListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_initListIR_2D_element result ;
  const GALGAS_initListIR_2D_element * p = (const GALGAS_initListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_initListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (void) :
mAttribute_mFunctionModeList (),
mAttribute_mPublicFunction (),
mAttribute_mFunctionName (),
mAttribute_mFunctionAttributeList (),
mAttribute_mFunctionFormalArgumentList (),
mAttribute_mFunctionReturnTypeName (),
mAttribute_mFunctionInstructionList (),
mAttribute_mEndOfFunctionDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::~ GALGAS_functionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element::GALGAS_functionDeclarationListAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                            const GALGAS_procFormalArgumentList & inOperand4,
                                                                                            const GALGAS_lstring & inOperand5,
                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                            const GALGAS_location & inOperand7) :
mAttribute_mFunctionModeList (inOperand0),
mAttribute_mPublicFunction (inOperand1),
mAttribute_mFunctionName (inOperand2),
mAttribute_mFunctionAttributeList (inOperand3),
mAttribute_mFunctionFormalArgumentList (inOperand4),
mAttribute_mFunctionReturnTypeName (inOperand5),
mAttribute_mFunctionInstructionList (inOperand6),
mAttribute_mEndOfFunctionDeclaration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionDeclarationListAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                            const GALGAS_bool & inOperand1,
                                                                                                            const GALGAS_lstring & inOperand2,
                                                                                                            const GALGAS_lstringlist & inOperand3,
                                                                                                            const GALGAS_procFormalArgumentList & inOperand4,
                                                                                                            const GALGAS_lstring & inOperand5,
                                                                                                            const GALGAS_instructionListAST & inOperand6,
                                                                                                            const GALGAS_location & inOperand7 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_functionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionDeclarationListAST_2D_element::objectCompare (const GALGAS_functionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionModeList.objectCompare (inOperand.mAttribute_mFunctionModeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPublicFunction.objectCompare (inOperand.mAttribute_mPublicFunction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionName.objectCompare (inOperand.mAttribute_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionAttributeList.objectCompare (inOperand.mAttribute_mFunctionAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionFormalArgumentList.objectCompare (inOperand.mAttribute_mFunctionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionReturnTypeName.objectCompare (inOperand.mAttribute_mFunctionReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionInstructionList.objectCompare (inOperand.mAttribute_mFunctionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfFunctionDeclaration.objectCompare (inOperand.mAttribute_mEndOfFunctionDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mFunctionModeList.isValid () && mAttribute_mPublicFunction.isValid () && mAttribute_mFunctionName.isValid () && mAttribute_mFunctionAttributeList.isValid () && mAttribute_mFunctionFormalArgumentList.isValid () && mAttribute_mFunctionReturnTypeName.isValid () && mAttribute_mFunctionInstructionList.isValid () && mAttribute_mEndOfFunctionDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mFunctionModeList.drop () ;
  mAttribute_mPublicFunction.drop () ;
  mAttribute_mFunctionName.drop () ;
  mAttribute_mFunctionAttributeList.drop () ;
  mAttribute_mFunctionFormalArgumentList.drop () ;
  mAttribute_mFunctionReturnTypeName.drop () ;
  mAttribute_mFunctionInstructionList.drop () ;
  mAttribute_mEndOfFunctionDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @functionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFunctionModeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPublicFunction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfFunctionDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationListAST_2D_element::getter_mPublicFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPublicFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_functionDeclarationListAST_2D_element::getter_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationListAST_2D_element::getter_mEndOfFunctionDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFunctionDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ("functionDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationListAST_2D_element GALGAS_functionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationListAST_2D_element result ;
  const GALGAS_functionDeclarationListAST_2D_element * p = (const GALGAS_functionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mFormalArgumentTypeName (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::~ GALGAS_procFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element::GALGAS_procFormalArgumentList_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2,
                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mFormalArgumentTypeName (inOperand2),
mAttribute_mFormalArgumentName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_procFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentList_2D_element::objectCompare (const GALGAS_procFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentTypeName.objectCompare (inOperand.mAttribute_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mFormalArgumentTypeName.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mFormalArgumentTypeName.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentList_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::getter_mFormalArgumentTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procFormalArgumentList_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @procFormalArgumentList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ("procFormalArgumentList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList_2D_element GALGAS_procFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentList_2D_element result ;
  const GALGAS_procFormalArgumentList_2D_element * p = (const GALGAS_procFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::~ GALGAS_labelMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element::GALGAS_labelMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_labelMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_labelMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_labelMap_2D_element::objectCompare (const GALGAS_labelMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_labelMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_labelMap_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @labelMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_labelMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @labelMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_labelMap_2D_element ("labelMap-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_labelMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_labelMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_labelMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_labelMap_2D_element GALGAS_labelMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_labelMap_2D_element result ;
  const GALGAS_labelMap_2D_element * p = (const GALGAS_labelMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_labelMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (void) :
mAttribute_mRequiredProcedureName (),
mAttribute_mProcedureModeList (),
mAttribute_mProcFormalArgumentList (),
mAttribute_mEndOfProcLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::~ GALGAS_requiredProcedureDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element::GALGAS_requiredProcedureDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                              const GALGAS_location & inOperand3) :
mAttribute_mRequiredProcedureName (inOperand0),
mAttribute_mProcedureModeList (inOperand1),
mAttribute_mProcFormalArgumentList (inOperand2),
mAttribute_mEndOfProcLocation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_requiredProcedureDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                                              const GALGAS_procFormalArgumentList & inOperand2,
                                                                                                                              const GALGAS_location & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_requiredProcedureDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_requiredProcedureDeclarationListAST_2D_element::objectCompare (const GALGAS_requiredProcedureDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRequiredProcedureName.objectCompare (inOperand.mAttribute_mRequiredProcedureName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcedureModeList.objectCompare (inOperand.mAttribute_mProcedureModeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProcFormalArgumentList.objectCompare (inOperand.mAttribute_mProcFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfProcLocation.objectCompare (inOperand.mAttribute_mEndOfProcLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_requiredProcedureDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mRequiredProcedureName.isValid () && mAttribute_mProcedureModeList.isValid () && mAttribute_mProcFormalArgumentList.isValid () && mAttribute_mEndOfProcLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::drop (void) {
  mAttribute_mRequiredProcedureName.drop () ;
  mAttribute_mProcedureModeList.drop () ;
  mAttribute_mProcFormalArgumentList.drop () ;
  mAttribute_mEndOfProcLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_requiredProcedureDeclarationListAST_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @requiredProcedureDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRequiredProcedureName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcedureModeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProcFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mRequiredProcedureName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRequiredProcedureName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mProcedureModeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcedureModeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mProcFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProcFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_requiredProcedureDeclarationListAST_2D_element::getter_mEndOfProcLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfProcLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @requiredProcedureDeclarationListAST-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ("requiredProcedureDeclarationListAST-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_requiredProcedureDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredProcedureDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_requiredProcedureDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredProcedureDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_requiredProcedureDeclarationListAST_2D_element GALGAS_requiredProcedureDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_requiredProcedureDeclarationListAST_2D_element result ;
  const GALGAS_requiredProcedureDeclarationListAST_2D_element * p = (const GALGAS_requiredProcedureDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_requiredProcedureDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredProcedureDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::GALGAS_isrDeclarationListAST_2D_element (void) :
mAttribute_mISRName (),
mAttribute_mSelfTypeName (),
mAttribute_mGlobalVariableName (),
mAttribute_mISRAttributeList (),
mAttribute_mISRInstructionList (),
mAttribute_mEndOfISRDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::~ GALGAS_isrDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element::GALGAS_isrDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_lstringlist & inOperand3,
                                                                                  const GALGAS_instructionListAST & inOperand4,
                                                                                  const GALGAS_location & inOperand5) :
mAttribute_mISRName (inOperand0),
mAttribute_mSelfTypeName (inOperand1),
mAttribute_mGlobalVariableName (inOperand2),
mAttribute_mISRAttributeList (inOperand3),
mAttribute_mISRInstructionList (inOperand4),
mAttribute_mEndOfISRDeclaration (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_isrDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE),
                                                  GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                  GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_string & inOperand2,
                                                                                                  const GALGAS_lstringlist & inOperand3,
                                                                                                  const GALGAS_instructionListAST & inOperand4,
                                                                                                  const GALGAS_location & inOperand5 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_isrDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_isrDeclarationListAST_2D_element::objectCompare (const GALGAS_isrDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mISRName.objectCompare (inOperand.mAttribute_mISRName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfTypeName.objectCompare (inOperand.mAttribute_mSelfTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableName.objectCompare (inOperand.mAttribute_mGlobalVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mISRAttributeList.objectCompare (inOperand.mAttribute_mISRAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mISRInstructionList.objectCompare (inOperand.mAttribute_mISRInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfISRDeclaration.objectCompare (inOperand.mAttribute_mEndOfISRDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_isrDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mISRName.isValid () && mAttribute_mSelfTypeName.isValid () && mAttribute_mGlobalVariableName.isValid () && mAttribute_mISRAttributeList.isValid () && mAttribute_mISRInstructionList.isValid () && mAttribute_mEndOfISRDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::drop (void) {
  mAttribute_mISRName.drop () ;
  mAttribute_mSelfTypeName.drop () ;
  mAttribute_mGlobalVariableName.drop () ;
  mAttribute_mISRAttributeList.drop () ;
  mAttribute_mISRInstructionList.drop () ;
  mAttribute_mEndOfISRDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_isrDeclarationListAST_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @isrDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mISRName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mISRAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mISRInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfISRDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mISRName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mISRName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_isrDeclarationListAST_2D_element::getter_mSelfTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_isrDeclarationListAST_2D_element::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_isrDeclarationListAST_2D_element::getter_mISRAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mISRAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_isrDeclarationListAST_2D_element::getter_mISRInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mISRInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_isrDeclarationListAST_2D_element::getter_mEndOfISRDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfISRDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @isrDeclarationListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ("isrDeclarationListAST-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_isrDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_isrDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_isrDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_isrDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_isrDeclarationListAST_2D_element GALGAS_isrDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_isrDeclarationListAST_2D_element result ;
  const GALGAS_isrDeclarationListAST_2D_element * p = (const GALGAS_isrDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_isrDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("isrDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST_2D_element::GALGAS_sectionDeclarationListAST_2D_element (void) :
mAttribute_mSectionName (),
mAttribute_mPublic (),
mAttribute_mSectionAttributeList (),
mAttribute_mSectionFormalArgumentList (),
mAttribute_mReturnTypeName (),
mAttribute_mSectionInstructionList (),
mAttribute_mEndOfSectionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST_2D_element::~ GALGAS_sectionDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST_2D_element::GALGAS_sectionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                          const GALGAS_procFormalArgumentList & inOperand3,
                                                                                          const GALGAS_lstring & inOperand4,
                                                                                          const GALGAS_instructionListAST & inOperand5,
                                                                                          const GALGAS_location & inOperand6) :
mAttribute_mSectionName (inOperand0),
mAttribute_mPublic (inOperand1),
mAttribute_mSectionAttributeList (inOperand2),
mAttribute_mSectionFormalArgumentList (inOperand3),
mAttribute_mReturnTypeName (inOperand4),
mAttribute_mSectionInstructionList (inOperand5),
mAttribute_mEndOfSectionLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST_2D_element GALGAS_sectionDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sectionDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST_2D_element GALGAS_sectionDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1,
                                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                                          const GALGAS_procFormalArgumentList & inOperand3,
                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                          const GALGAS_instructionListAST & inOperand5,
                                                                                                          const GALGAS_location & inOperand6 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sectionDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_sectionDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sectionDeclarationListAST_2D_element::objectCompare (const GALGAS_sectionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSectionName.objectCompare (inOperand.mAttribute_mSectionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPublic.objectCompare (inOperand.mAttribute_mPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionAttributeList.objectCompare (inOperand.mAttribute_mSectionAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionFormalArgumentList.objectCompare (inOperand.mAttribute_mSectionFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnTypeName.objectCompare (inOperand.mAttribute_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSectionInstructionList.objectCompare (inOperand.mAttribute_mSectionInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfSectionLocation.objectCompare (inOperand.mAttribute_mEndOfSectionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sectionDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mSectionName.isValid () && mAttribute_mPublic.isValid () && mAttribute_mSectionAttributeList.isValid () && mAttribute_mSectionFormalArgumentList.isValid () && mAttribute_mReturnTypeName.isValid () && mAttribute_mSectionInstructionList.isValid () && mAttribute_mEndOfSectionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionDeclarationListAST_2D_element::drop (void) {
  mAttribute_mSectionName.drop () ;
  mAttribute_mPublic.drop () ;
  mAttribute_mSectionAttributeList.drop () ;
  mAttribute_mSectionFormalArgumentList.drop () ;
  mAttribute_mReturnTypeName.drop () ;
  mAttribute_mSectionInstructionList.drop () ;
  mAttribute_mEndOfSectionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sectionDeclarationListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @sectionDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSectionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSectionInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfSectionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sectionDeclarationListAST_2D_element::getter_mSectionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_sectionDeclarationListAST_2D_element::getter_mPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_sectionDeclarationListAST_2D_element::getter_mSectionAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_sectionDeclarationListAST_2D_element::getter_mSectionFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sectionDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_sectionDeclarationListAST_2D_element::getter_mSectionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSectionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_sectionDeclarationListAST_2D_element::getter_mEndOfSectionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfSectionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @sectionDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sectionDeclarationListAST_2D_element ("sectionDeclarationListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sectionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sectionDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sectionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sectionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sectionDeclarationListAST_2D_element GALGAS_sectionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sectionDeclarationListAST_2D_element result ;
  const GALGAS_sectionDeclarationListAST_2D_element * p = (const GALGAS_sectionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sectionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sectionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST_2D_element::GALGAS_serviceDeclarationListAST_2D_element (void) :
mAttribute_mServiceName (),
mAttribute_mPublic (),
mAttribute_mServiceAttributeList (),
mAttribute_mServiceFormalArgumentList (),
mAttribute_mReturnTypeName (),
mAttribute_mServiceInstructionList (),
mAttribute_mEndOfServiceLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST_2D_element::~ GALGAS_serviceDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST_2D_element::GALGAS_serviceDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_bool & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                          const GALGAS_procFormalArgumentList & inOperand3,
                                                                                          const GALGAS_lstring & inOperand4,
                                                                                          const GALGAS_instructionListAST & inOperand5,
                                                                                          const GALGAS_location & inOperand6) :
mAttribute_mServiceName (inOperand0),
mAttribute_mPublic (inOperand1),
mAttribute_mServiceAttributeList (inOperand2),
mAttribute_mServiceFormalArgumentList (inOperand3),
mAttribute_mReturnTypeName (inOperand4),
mAttribute_mServiceInstructionList (inOperand5),
mAttribute_mEndOfServiceLocation (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST_2D_element GALGAS_serviceDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_serviceDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                      GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST_2D_element GALGAS_serviceDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_bool & inOperand1,
                                                                                                          const GALGAS_lstringlist & inOperand2,
                                                                                                          const GALGAS_procFormalArgumentList & inOperand3,
                                                                                                          const GALGAS_lstring & inOperand4,
                                                                                                          const GALGAS_instructionListAST & inOperand5,
                                                                                                          const GALGAS_location & inOperand6 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_serviceDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_serviceDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_serviceDeclarationListAST_2D_element::objectCompare (const GALGAS_serviceDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mServiceName.objectCompare (inOperand.mAttribute_mServiceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPublic.objectCompare (inOperand.mAttribute_mPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServiceAttributeList.objectCompare (inOperand.mAttribute_mServiceAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServiceFormalArgumentList.objectCompare (inOperand.mAttribute_mServiceFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnTypeName.objectCompare (inOperand.mAttribute_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mServiceInstructionList.objectCompare (inOperand.mAttribute_mServiceInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfServiceLocation.objectCompare (inOperand.mAttribute_mEndOfServiceLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_serviceDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mServiceName.isValid () && mAttribute_mPublic.isValid () && mAttribute_mServiceAttributeList.isValid () && mAttribute_mServiceFormalArgumentList.isValid () && mAttribute_mReturnTypeName.isValid () && mAttribute_mServiceInstructionList.isValid () && mAttribute_mEndOfServiceLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_serviceDeclarationListAST_2D_element::drop (void) {
  mAttribute_mServiceName.drop () ;
  mAttribute_mPublic.drop () ;
  mAttribute_mServiceAttributeList.drop () ;
  mAttribute_mServiceFormalArgumentList.drop () ;
  mAttribute_mReturnTypeName.drop () ;
  mAttribute_mServiceInstructionList.drop () ;
  mAttribute_mEndOfServiceLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_serviceDeclarationListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @serviceDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mServiceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServiceAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServiceFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mServiceInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfServiceLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_serviceDeclarationListAST_2D_element::getter_mServiceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_serviceDeclarationListAST_2D_element::getter_mPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_serviceDeclarationListAST_2D_element::getter_mServiceAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_serviceDeclarationListAST_2D_element::getter_mServiceFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_serviceDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_serviceDeclarationListAST_2D_element::getter_mServiceInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mServiceInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_serviceDeclarationListAST_2D_element::getter_mEndOfServiceLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfServiceLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @serviceDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_serviceDeclarationListAST_2D_element ("serviceDeclarationListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_serviceDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_serviceDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_serviceDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_serviceDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_serviceDeclarationListAST_2D_element GALGAS_serviceDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_serviceDeclarationListAST_2D_element result ;
  const GALGAS_serviceDeclarationListAST_2D_element * p = (const GALGAS_serviceDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_serviceDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("serviceDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST_2D_element::GALGAS_primitiveDeclarationListAST_2D_element (void) :
mAttribute_mPrimitiveName (),
mAttribute_mPublic (),
mAttribute_mPrimitiveNameAttributeList (),
mAttribute_mPrimitiveFormalArgumentList (),
mAttribute_mReturnTypeName (),
mAttribute_mPrimitiveInstructionList (),
mAttribute_mEndOfPrimitiveDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST_2D_element::~ GALGAS_primitiveDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST_2D_element::GALGAS_primitiveDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_bool & inOperand1,
                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                              const GALGAS_procFormalArgumentList & inOperand3,
                                                                                              const GALGAS_lstring & inOperand4,
                                                                                              const GALGAS_instructionListAST & inOperand5,
                                                                                              const GALGAS_location & inOperand6) :
mAttribute_mPrimitiveName (inOperand0),
mAttribute_mPublic (inOperand1),
mAttribute_mPrimitiveNameAttributeList (inOperand2),
mAttribute_mPrimitiveFormalArgumentList (inOperand3),
mAttribute_mReturnTypeName (inOperand4),
mAttribute_mPrimitiveInstructionList (inOperand5),
mAttribute_mEndOfPrimitiveDeclaration (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST_2D_element GALGAS_primitiveDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_primitiveDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE),
                                                        GALGAS_procFormalArgumentList::constructor_emptyList (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_instructionListAST::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST_2D_element GALGAS_primitiveDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                              const GALGAS_lstringlist & inOperand2,
                                                                                                              const GALGAS_procFormalArgumentList & inOperand3,
                                                                                                              const GALGAS_lstring & inOperand4,
                                                                                                              const GALGAS_instructionListAST & inOperand5,
                                                                                                              const GALGAS_location & inOperand6 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primitiveDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_primitiveDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_primitiveDeclarationListAST_2D_element::objectCompare (const GALGAS_primitiveDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPrimitiveName.objectCompare (inOperand.mAttribute_mPrimitiveName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPublic.objectCompare (inOperand.mAttribute_mPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrimitiveNameAttributeList.objectCompare (inOperand.mAttribute_mPrimitiveNameAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrimitiveFormalArgumentList.objectCompare (inOperand.mAttribute_mPrimitiveFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnTypeName.objectCompare (inOperand.mAttribute_mReturnTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrimitiveInstructionList.objectCompare (inOperand.mAttribute_mPrimitiveInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfPrimitiveDeclaration.objectCompare (inOperand.mAttribute_mEndOfPrimitiveDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_primitiveDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mPrimitiveName.isValid () && mAttribute_mPublic.isValid () && mAttribute_mPrimitiveNameAttributeList.isValid () && mAttribute_mPrimitiveFormalArgumentList.isValid () && mAttribute_mReturnTypeName.isValid () && mAttribute_mPrimitiveInstructionList.isValid () && mAttribute_mEndOfPrimitiveDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveDeclarationListAST_2D_element::drop (void) {
  mAttribute_mPrimitiveName.drop () ;
  mAttribute_mPublic.drop () ;
  mAttribute_mPrimitiveNameAttributeList.drop () ;
  mAttribute_mPrimitiveFormalArgumentList.drop () ;
  mAttribute_mReturnTypeName.drop () ;
  mAttribute_mPrimitiveInstructionList.drop () ;
  mAttribute_mEndOfPrimitiveDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primitiveDeclarationListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @primitiveDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPrimitiveName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrimitiveNameAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrimitiveFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrimitiveInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfPrimitiveDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_primitiveDeclarationListAST_2D_element::getter_mPrimitiveName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_primitiveDeclarationListAST_2D_element::getter_mPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_primitiveDeclarationListAST_2D_element::getter_mPrimitiveNameAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveNameAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentList GALGAS_primitiveDeclarationListAST_2D_element::getter_mPrimitiveFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_primitiveDeclarationListAST_2D_element::getter_mReturnTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_primitiveDeclarationListAST_2D_element::getter_mPrimitiveInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrimitiveInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_primitiveDeclarationListAST_2D_element::getter_mEndOfPrimitiveDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfPrimitiveDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @primitiveDeclarationListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primitiveDeclarationListAST_2D_element ("primitiveDeclarationListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primitiveDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primitiveDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primitiveDeclarationListAST_2D_element GALGAS_primitiveDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_primitiveDeclarationListAST_2D_element result ;
  const GALGAS_primitiveDeclarationListAST_2D_element * p = (const GALGAS_primitiveDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primitiveDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (void) :
mAttribute_mSelector (),
mAttribute_mExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::~ GALGAS_functionCallEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element::GALGAS_functionCallEffectiveParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mAttribute_mSelector (inOperand0),
mAttribute_mExpression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_expressionAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionCallEffectiveParameterList_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionCallEffectiveParameterList_2D_element::isValid (void) const {
  return mAttribute_mSelector.isValid () && mAttribute_mExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::drop (void) {
  mAttribute_mSelector.drop () ;
  mAttribute_mExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionCallEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @functionCallEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_functionCallEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_functionCallEffectiveParameterList_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @functionCallEffectiveParameterList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ("functionCallEffectiveParameterList-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionCallEffectiveParameterList_2D_element GALGAS_functionCallEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterList_2D_element result ;
  const GALGAS_functionCallEffectiveParameterList_2D_element * p = (const GALGAS_functionCallEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionCallEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (void) :
mAttribute_mFieldName (),
mAttribute_mExpression (),
mAttribute_mExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::~ GALGAS_registerIntegerFieldListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2) :
mAttribute_mFieldName (inOperand0),
mAttribute_mExpression (inOperand1),
mAttribute_mExpressionLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                                              const GALGAS_location & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_registerIntegerFieldListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_registerIntegerFieldListAST_2D_element::objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExpressionLocation.objectCompare (inOperand.mAttribute_mExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_registerIntegerFieldListAST_2D_element::isValid (void) const {
  return mAttribute_mFieldName.isValid () && mAttribute_mExpression.isValid () && mAttribute_mExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST_2D_element::drop (void) {
  mAttribute_mFieldName.drop () ;
  mAttribute_mExpression.drop () ;
  mAttribute_mExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_registerIntegerFieldListAST_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @registerIntegerFieldListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_registerIntegerFieldListAST_2D_element::getter_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expressionAST GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_registerIntegerFieldListAST_2D_element::getter_mExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @registerIntegerFieldListAST-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ("registerIntegerFieldListAST-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  const GALGAS_registerIntegerFieldListAST_2D_element * p = (const GALGAS_registerIntegerFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_registerIntegerFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST_2D_element::GALGAS_effectiveParameterListAST_2D_element (void) :
mAttribute_mEffectiveParameterKind (),
mAttribute_mSelector () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST_2D_element::~ GALGAS_effectiveParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST_2D_element::GALGAS_effectiveParameterListAST_2D_element (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1) :
mAttribute_mEffectiveParameterKind (inOperand0),
mAttribute_mSelector (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST_2D_element GALGAS_effectiveParameterListAST_2D_element::constructor_new (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveParameterListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_effectiveParameterListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_effectiveParameterListAST_2D_element::objectCompare (const GALGAS_effectiveParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterKind.objectCompare (inOperand.mAttribute_mEffectiveParameterKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_effectiveParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterKind.isValid () && mAttribute_mSelector.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST_2D_element::drop (void) {
  mAttribute_mEffectiveParameterKind.drop () ;
  mAttribute_mSelector.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_effectiveParameterListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @effectiveParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_effectiveParameterListAST_2D_element::getter_mEffectiveParameterKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_effectiveParameterListAST_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @effectiveParameterListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_effectiveParameterListAST_2D_element ("effectiveParameterListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_effectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_effectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterListAST_2D_element GALGAS_effectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_effectiveParameterListAST_2D_element result ;
  const GALGAS_effectiveParameterListAST_2D_element * p = (const GALGAS_effectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_effectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::GALGAS_primaryInExpressionAccessListAST_2D_element (void) :
mAttribute_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::~ GALGAS_primaryInExpressionAccessListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element::GALGAS_primaryInExpressionAccessListAST_2D_element (const GALGAS_primaryInExpressionAccessAST & inOperand0) :
mAttribute_mAccess (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element GALGAS_primaryInExpressionAccessListAST_2D_element::constructor_new (const GALGAS_primaryInExpressionAccessAST & inOperand0 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_primaryInExpressionAccessListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_primaryInExpressionAccessListAST_2D_element::objectCompare (const GALGAS_primaryInExpressionAccessListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAccess.objectCompare (inOperand.mAttribute_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_primaryInExpressionAccessListAST_2D_element::isValid (void) const {
  return mAttribute_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST_2D_element::drop (void) {
  mAttribute_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_primaryInExpressionAccessListAST_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @primaryInExpressionAccessListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessAST GALGAS_primaryInExpressionAccessListAST_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @primaryInExpressionAccessListAST-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ("primaryInExpressionAccessListAST-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_primaryInExpressionAccessListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primaryInExpressionAccessListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_primaryInExpressionAccessListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primaryInExpressionAccessListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_primaryInExpressionAccessListAST_2D_element GALGAS_primaryInExpressionAccessListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_primaryInExpressionAccessListAST_2D_element result ;
  const GALGAS_primaryInExpressionAccessListAST_2D_element * p = (const GALGAS_primaryInExpressionAccessListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_primaryInExpressionAccessListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primaryInExpressionAccessListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::GALGAS_syncInstructionBranchList_2D_element (void) :
mAttribute_mGuardedCommand (),
mAttribute_mInstructionList (),
mAttribute_mEndOfBranch () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::~ GALGAS_syncInstructionBranchList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element::GALGAS_syncInstructionBranchList_2D_element (const GALGAS_guardedCommand & inOperand0,
                                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                                          const GALGAS_location & inOperand2) :
mAttribute_mGuardedCommand (inOperand0),
mAttribute_mInstructionList (inOperand1),
mAttribute_mEndOfBranch (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element GALGAS_syncInstructionBranchList_2D_element::constructor_new (const GALGAS_guardedCommand & inOperand0,
                                                                                                          const GALGAS_instructionListAST & inOperand1,
                                                                                                          const GALGAS_location & inOperand2 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_syncInstructionBranchList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syncInstructionBranchList_2D_element::objectCompare (const GALGAS_syncInstructionBranchList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGuardedCommand.objectCompare (inOperand.mAttribute_mGuardedCommand) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBranch.objectCompare (inOperand.mAttribute_mEndOfBranch) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syncInstructionBranchList_2D_element::isValid (void) const {
  return mAttribute_mGuardedCommand.isValid () && mAttribute_mInstructionList.isValid () && mAttribute_mEndOfBranch.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList_2D_element::drop (void) {
  mAttribute_mGuardedCommand.drop () ;
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfBranch.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @syncInstructionBranchList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommand GALGAS_syncInstructionBranchList_2D_element::getter_mGuardedCommand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListAST GALGAS_syncInstructionBranchList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_syncInstructionBranchList_2D_element::getter_mEndOfBranch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBranch ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @syncInstructionBranchList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ("syncInstructionBranchList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchList_2D_element GALGAS_syncInstructionBranchList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchList_2D_element result ;
  const GALGAS_syncInstructionBranchList_2D_element * p = (const GALGAS_syncInstructionBranchList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::GALGAS_syncInstructionBranchListIR_2D_element (void) :
mAttribute_mGuardedCommand (),
mAttribute_mInstructionGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::~ GALGAS_syncInstructionBranchListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element::GALGAS_syncInstructionBranchListIR_2D_element (const GALGAS_guardedCommandIR & inOperand0,
                                                                                              const GALGAS_instructionListIR & inOperand1) :
mAttribute_mGuardedCommand (inOperand0),
mAttribute_mInstructionGenerationList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element GALGAS_syncInstructionBranchListIR_2D_element::constructor_new (const GALGAS_guardedCommandIR & inOperand0,
                                                                                                              const GALGAS_instructionListIR & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syncInstructionBranchListIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syncInstructionBranchListIR_2D_element::objectCompare (const GALGAS_syncInstructionBranchListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGuardedCommand.objectCompare (inOperand.mAttribute_mGuardedCommand) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syncInstructionBranchListIR_2D_element::isValid (void) const {
  return mAttribute_mGuardedCommand.isValid () && mAttribute_mInstructionGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR_2D_element::drop (void) {
  mAttribute_mGuardedCommand.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syncInstructionBranchListIR_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @syncInstructionBranchListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGuardedCommand.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardedCommandIR GALGAS_syncInstructionBranchListIR_2D_element::getter_mGuardedCommand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGuardedCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_syncInstructionBranchListIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @syncInstructionBranchListIR-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ("syncInstructionBranchListIR-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syncInstructionBranchListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syncInstructionBranchListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syncInstructionBranchListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syncInstructionBranchListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syncInstructionBranchListIR_2D_element GALGAS_syncInstructionBranchListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syncInstructionBranchListIR_2D_element result ;
  const GALGAS_syncInstructionBranchListIR_2D_element * p = (const GALGAS_syncInstructionBranchListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syncInstructionBranchListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syncInstructionBranchListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mSelector (),
mAttribute_mParameterType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mParameterType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::constructor_new (const GALGAS_effectiveParameterPassingModeAST & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procEffectiveParameterList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procEffectiveParameterList_2D_element::objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterPassingMode.objectCompare (inOperand.mAttribute_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameterType.objectCompare (inOperand.mAttribute_mParameterType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mParameterType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mParameterType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procEffectiveParameterList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @procEffectiveParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_effectiveParameterPassingModeAST GALGAS_procEffectiveParameterList_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_procEffectiveParameterList_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procEffectiveParameterList_2D_element::getter_mParameterType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @procEffectiveParameterList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  const GALGAS_procEffectiveParameterList_2D_element * p = (const GALGAS_procEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (void) :
mAttribute_mEffectiveParameterPassingMode (),
mAttribute_mParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::~ GALGAS_procCallEffectiveParameterListIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element::GALGAS_procCallEffectiveParameterListIR_2D_element (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                        const GALGAS_objectIR & inOperand1) :
mAttribute_mEffectiveParameterPassingMode (inOperand0),
mAttribute_mParameter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::constructor_new (const GALGAS_procEffectiveParameterPassingModeIR & inOperand0,
                                                                                                                        const GALGAS_objectIR & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_procCallEffectiveParameterListIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procCallEffectiveParameterListIR_2D_element::objectCompare (const GALGAS_procCallEffectiveParameterListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEffectiveParameterPassingMode.objectCompare (inOperand.mAttribute_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mParameter.objectCompare (inOperand.mAttribute_mParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procCallEffectiveParameterListIR_2D_element::isValid (void) const {
  return mAttribute_mEffectiveParameterPassingMode.isValid () && mAttribute_mParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::drop (void) {
  mAttribute_mEffectiveParameterPassingMode.drop () ;
  mAttribute_mParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procCallEffectiveParameterListIR_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @procCallEffectiveParameterListIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procEffectiveParameterPassingModeIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mEffectiveParameterPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEffectiveParameterPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_procCallEffectiveParameterListIR_2D_element::getter_mParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @procCallEffectiveParameterListIR-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ("procCallEffectiveParameterListIR-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procCallEffectiveParameterListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallEffectiveParameterListIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procCallEffectiveParameterListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallEffectiveParameterListIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procCallEffectiveParameterListIR_2D_element GALGAS_procCallEffectiveParameterListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_procCallEffectiveParameterListIR_2D_element result ;
  const GALGAS_procCallEffectiveParameterListIR_2D_element * p = (const GALGAS_procCallEffectiveParameterListIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procCallEffectiveParameterListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallEffectiveParameterListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::GALGAS_accessInAssignmentListAST_2D_element (void) :
mAttribute_mAccess () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::~ GALGAS_accessInAssignmentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element::GALGAS_accessInAssignmentListAST_2D_element (const GALGAS_accessInAssignmentAST & inOperand0) :
mAttribute_mAccess (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element GALGAS_accessInAssignmentListAST_2D_element::constructor_new (const GALGAS_accessInAssignmentAST & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_accessInAssignmentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_accessInAssignmentListAST_2D_element::objectCompare (const GALGAS_accessInAssignmentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAccess.objectCompare (inOperand.mAttribute_mAccess) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_accessInAssignmentListAST_2D_element::isValid (void) const {
  return mAttribute_mAccess.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST_2D_element::drop (void) {
  mAttribute_mAccess.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_accessInAssignmentListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @accessInAssignmentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentAST GALGAS_accessInAssignmentListAST_2D_element::getter_mAccess (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAccess ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @accessInAssignmentListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ("accessInAssignmentListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_accessInAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_accessInAssignmentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_accessInAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_accessInAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_accessInAssignmentListAST_2D_element GALGAS_accessInAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_accessInAssignmentListAST_2D_element result ;
  const GALGAS_accessInAssignmentListAST_2D_element * p = (const GALGAS_accessInAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_accessInAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("accessInAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext_2D_element::GALGAS_routineMapForContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mRoutineLLVMName (),
mAttribute_mIsPublic (),
mAttribute_mModeMap (),
mAttribute_mSignature (),
mAttribute_mRoutineKind (),
mAttribute_mWeak (),
mAttribute_mReturnType (),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (),
mAttribute_mCanAccessProperties (),
mAttribute_mCanMutateProperties () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext_2D_element::~ GALGAS_routineMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext_2D_element::GALGAS_routineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_lstring & inOperand1,
                                                                                const GALGAS_bool & inOperand2,
                                                                                const GALGAS_modeMap & inOperand3,
                                                                                const GALGAS_procedureSignature & inOperand4,
                                                                                const GALGAS_routineKind & inOperand5,
                                                                                const GALGAS_bool & inOperand6,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand7,
                                                                                const GALGAS_bool & inOperand8,
                                                                                const GALGAS_bool & inOperand9,
                                                                                const GALGAS_bool & inOperand10) :
mAttribute_lkey (inOperand0),
mAttribute_mRoutineLLVMName (inOperand1),
mAttribute_mIsPublic (inOperand2),
mAttribute_mModeMap (inOperand3),
mAttribute_mSignature (inOperand4),
mAttribute_mRoutineKind (inOperand5),
mAttribute_mWeak (inOperand6),
mAttribute_mReturnType (inOperand7),
mAttribute_mAppendFileAndLineArgumentForPanicLocation (inOperand8),
mAttribute_mCanAccessProperties (inOperand9),
mAttribute_mCanMutateProperties (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_bool & inOperand2,
                                                                                                const GALGAS_modeMap & inOperand3,
                                                                                                const GALGAS_procedureSignature & inOperand4,
                                                                                                const GALGAS_routineKind & inOperand5,
                                                                                                const GALGAS_bool & inOperand6,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand7,
                                                                                                const GALGAS_bool & inOperand8,
                                                                                                const GALGAS_bool & inOperand9,
                                                                                                const GALGAS_bool & inOperand10 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_routineMapForContext_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_routineMapForContext_2D_element::objectCompare (const GALGAS_routineMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineLLVMName.objectCompare (inOperand.mAttribute_mRoutineLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsPublic.objectCompare (inOperand.mAttribute_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModeMap.objectCompare (inOperand.mAttribute_mModeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRoutineKind.objectCompare (inOperand.mAttribute_mRoutineKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWeak.objectCompare (inOperand.mAttribute_mWeak) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mReturnType.objectCompare (inOperand.mAttribute_mReturnType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAppendFileAndLineArgumentForPanicLocation.objectCompare (inOperand.mAttribute_mAppendFileAndLineArgumentForPanicLocation) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCanAccessProperties.objectCompare (inOperand.mAttribute_mCanAccessProperties) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCanMutateProperties.objectCompare (inOperand.mAttribute_mCanMutateProperties) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_routineMapForContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mRoutineLLVMName.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mModeMap.isValid () && mAttribute_mSignature.isValid () && mAttribute_mRoutineKind.isValid () && mAttribute_mWeak.isValid () && mAttribute_mReturnType.isValid () && mAttribute_mAppendFileAndLineArgumentForPanicLocation.isValid () && mAttribute_mCanAccessProperties.isValid () && mAttribute_mCanMutateProperties.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mRoutineLLVMName.drop () ;
  mAttribute_mIsPublic.drop () ;
  mAttribute_mModeMap.drop () ;
  mAttribute_mSignature.drop () ;
  mAttribute_mRoutineKind.drop () ;
  mAttribute_mWeak.drop () ;
  mAttribute_mReturnType.drop () ;
  mAttribute_mAppendFileAndLineArgumentForPanicLocation.drop () ;
  mAttribute_mCanAccessProperties.drop () ;
  mAttribute_mCanMutateProperties.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_routineMapForContext_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @routineMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineLLVMName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRoutineKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWeak.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mReturnType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAppendFileAndLineArgumentForPanicLocation.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCanAccessProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCanMutateProperties.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_routineMapForContext_2D_element::getter_mRoutineLLVMName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineLLVMName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap GALGAS_routineMapForContext_2D_element::getter_mModeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_routineMapForContext_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineKind GALGAS_routineMapForContext_2D_element::getter_mRoutineKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext_2D_element::getter_mWeak (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWeak ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_routineMapForContext_2D_element::getter_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext_2D_element::getter_mAppendFileAndLineArgumentForPanicLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppendFileAndLineArgumentForPanicLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext_2D_element::getter_mCanAccessProperties (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCanAccessProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_routineMapForContext_2D_element::getter_mCanMutateProperties (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCanMutateProperties ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @routineMapForContext-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineMapForContext_2D_element ("routineMapForContext-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  const GALGAS_routineMapForContext_2D_element * p = (const GALGAS_routineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsPublic (),
mAttribute_mSignature () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::~ GALGAS_guardMapForContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_procedureSignature & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mIsPublic (inOperand1),
mAttribute_mSignature (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guardMapForContext_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_procedureSignature::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_procedureSignature & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guardMapForContext_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guardMapForContext_2D_element::objectCompare (const GALGAS_guardMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsPublic.objectCompare (inOperand.mAttribute_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guardMapForContext_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsPublic.isValid () && mAttribute_mSignature.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsPublic.drop () ;
  mAttribute_mSignature.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guardMapForContext_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @guardMapForContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsPublic.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_guardMapForContext_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_guardMapForContext_2D_element::getter_mIsPublic (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPublic ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature GALGAS_guardMapForContext_2D_element::getter_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @guardMapForContext-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guardMapForContext_2D_element ("guardMapForContext-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  const GALGAS_guardMapForContext_2D_element * p = (const GALGAS_guardMapForContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guardMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (void) :
mAttribute_mFormalArgumentPassingMode (),
mAttribute_mSelector (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::~ GALGAS_procedureSignature_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element::GALGAS_procedureSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2) :
mAttribute_mFormalArgumentPassingMode (inOperand0),
mAttribute_mSelector (inOperand1),
mAttribute_mType (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procedureSignature_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procedureSignature_2D_element::objectCompare (const GALGAS_procedureSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentPassingMode.objectCompare (inOperand.mAttribute_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelector.objectCompare (inOperand.mAttribute_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procedureSignature_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentPassingMode.isValid () && mAttribute_mSelector.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::drop (void) {
  mAttribute_mFormalArgumentPassingMode.drop () ;
  mAttribute_mSelector.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procedureSignature_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @procedureSignature-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procedureSignature_2D_element::getter_mFormalArgumentPassingMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procedureSignature_2D_element::getter_mSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procedureSignature_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @procedureSignature-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procedureSignature_2D_element ("procedureSignature-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procedureSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procedureSignature_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procedureSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procedureSignature_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procedureSignature_2D_element GALGAS_procedureSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procedureSignature_2D_element result ;
  const GALGAS_procedureSignature_2D_element * p = (const GALGAS_procedureSignature_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procedureSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procedureSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mResultType (),
mAttribute_mOperation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                        const GALGAS_infixOperatorDescription & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mResultType (inOperand1),
mAttribute_mOperation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                        const GALGAS_infixOperatorDescription & inOperand2 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_infixOperatorMap_2D_element::objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResultType.objectCompare (inOperand.mAttribute_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOperation.objectCompare (inOperand.mAttribute_mOperation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mResultType.isValid () && mAttribute_mOperation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mResultType.drop () ;
  mAttribute_mOperation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_infixOperatorMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @infixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResultType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOperation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_infixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_infixOperatorMap_2D_element::getter_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorDescription GALGAS_infixOperatorMap_2D_element::getter_mOperation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @infixOperatorMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefixOperatorMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefixOperatorMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @prefixOperatorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefixOperatorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @prefixOperatorMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  const GALGAS_prefixOperatorMap_2D_element * p = (const GALGAS_prefixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_staticStringMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_staticStringMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_staticStringMap_2D_element::objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_staticStringMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @staticStringMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_staticStringMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_staticStringMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @staticStringMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  const GALGAS_staticStringMap_2D_element * p = (const GALGAS_staticStringMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_staticStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_objectIR & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalConstantMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::GALGAS_allowedGuardMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::~ GALGAS_allowedGuardMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element::GALGAS_allowedGuardMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allowedGuardMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allowedGuardMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_allowedGuardMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allowedGuardMap_2D_element::objectCompare (const GALGAS_allowedGuardMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allowedGuardMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allowedGuardMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @allowedGuardMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_allowedGuardMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @allowedGuardMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allowedGuardMap_2D_element ("allowedGuardMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allowedGuardMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allowedGuardMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allowedGuardMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allowedGuardMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap_2D_element GALGAS_allowedGuardMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_allowedGuardMap_2D_element result ;
  const GALGAS_allowedGuardMap_2D_element * p = (const GALGAS_allowedGuardMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allowedGuardMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allowedGuardMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_type (),
mAttribute_executionModeSet (),
mAttribute_allowedRoutineMap (),
mAttribute_allowedGuardMap (),
mAttribute_allowedISRMap (),
mAttribute_allowedTaskMap (),
mAttribute_initialValue (),
mAttribute_isConstant (),
mAttribute_allowedAccessToAll () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::~ GALGAS_globalVariableMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element::GALGAS_globalVariableMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                          const GALGAS_stringset & inOperand2,
                                                                          const GALGAS_allowedRoutineMap & inOperand3,
                                                                          const GALGAS_allowedGuardMap & inOperand4,
                                                                          const GALGAS_allowedISRMap & inOperand5,
                                                                          const GALGAS_allowedTaskMap & inOperand6,
                                                                          const GALGAS_objectIR & inOperand7,
                                                                          const GALGAS_bool & inOperand8,
                                                                          const GALGAS_bool & inOperand9) :
mAttribute_lkey (inOperand0),
mAttribute_type (inOperand1),
mAttribute_executionModeSet (inOperand2),
mAttribute_allowedRoutineMap (inOperand3),
mAttribute_allowedGuardMap (inOperand4),
mAttribute_allowedISRMap (inOperand5),
mAttribute_allowedTaskMap (inOperand6),
mAttribute_initialValue (inOperand7),
mAttribute_isConstant (inOperand8),
mAttribute_allowedAccessToAll (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                          const GALGAS_stringset & inOperand2,
                                                                                          const GALGAS_allowedRoutineMap & inOperand3,
                                                                                          const GALGAS_allowedGuardMap & inOperand4,
                                                                                          const GALGAS_allowedISRMap & inOperand5,
                                                                                          const GALGAS_allowedTaskMap & inOperand6,
                                                                                          const GALGAS_objectIR & inOperand7,
                                                                                          const GALGAS_bool & inOperand8,
                                                                                          const GALGAS_bool & inOperand9 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_globalVariableMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalVariableMap_2D_element::objectCompare (const GALGAS_globalVariableMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_type.objectCompare (inOperand.mAttribute_type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_executionModeSet.objectCompare (inOperand.mAttribute_executionModeSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_allowedRoutineMap.objectCompare (inOperand.mAttribute_allowedRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_allowedGuardMap.objectCompare (inOperand.mAttribute_allowedGuardMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_allowedISRMap.objectCompare (inOperand.mAttribute_allowedISRMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_allowedTaskMap.objectCompare (inOperand.mAttribute_allowedTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_initialValue.objectCompare (inOperand.mAttribute_initialValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_isConstant.objectCompare (inOperand.mAttribute_isConstant) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_allowedAccessToAll.objectCompare (inOperand.mAttribute_allowedAccessToAll) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalVariableMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_type.isValid () && mAttribute_executionModeSet.isValid () && mAttribute_allowedRoutineMap.isValid () && mAttribute_allowedGuardMap.isValid () && mAttribute_allowedISRMap.isValid () && mAttribute_allowedTaskMap.isValid () && mAttribute_initialValue.isValid () && mAttribute_isConstant.isValid () && mAttribute_allowedAccessToAll.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_type.drop () ;
  mAttribute_executionModeSet.drop () ;
  mAttribute_allowedRoutineMap.drop () ;
  mAttribute_allowedGuardMap.drop () ;
  mAttribute_allowedISRMap.drop () ;
  mAttribute_allowedTaskMap.drop () ;
  mAttribute_initialValue.drop () ;
  mAttribute_isConstant.drop () ;
  mAttribute_allowedAccessToAll.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalVariableMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @globalVariableMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_executionModeSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_allowedRoutineMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_allowedGuardMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_allowedISRMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_allowedTaskMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_initialValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_isConstant.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_allowedAccessToAll.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalVariableMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalVariableMap_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_globalVariableMap_2D_element::getter_executionModeSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_executionModeSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedRoutineMap GALGAS_globalVariableMap_2D_element::getter_allowedRoutineMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_allowedRoutineMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedGuardMap GALGAS_globalVariableMap_2D_element::getter_allowedGuardMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_allowedGuardMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedISRMap GALGAS_globalVariableMap_2D_element::getter_allowedISRMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_allowedISRMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allowedTaskMap GALGAS_globalVariableMap_2D_element::getter_allowedTaskMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_allowedTaskMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalVariableMap_2D_element::getter_initialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_initialValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_isConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_isConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_globalVariableMap_2D_element::getter_allowedAccessToAll (UNUSED_LOCATION_ARGS) const {
  return mAttribute_allowedAccessToAll ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @globalVariableMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalVariableMap_2D_element ("globalVariableMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalVariableMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalVariableMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalVariableMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalVariableMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalVariableMap_2D_element GALGAS_globalVariableMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalVariableMap_2D_element result ;
  const GALGAS_globalVariableMap_2D_element * p = (const GALGAS_globalVariableMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalVariableMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalVariableMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::GALGAS_modeMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::~ GALGAS_modeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element::GALGAS_modeMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_modeMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_modeMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_modeMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_modeMap_2D_element::objectCompare (const GALGAS_modeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_modeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_modeMap_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @modeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_modeMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @modeMap-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_modeMap_2D_element ("modeMap-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_modeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_modeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_modeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_modeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_modeMap_2D_element GALGAS_modeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_modeMap_2D_element result ;
  const GALGAS_modeMap_2D_element * p = (const GALGAS_modeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_modeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("modeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::GALGAS_operandList_2D_element (void) :
mAttribute_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::~ GALGAS_operandList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element::GALGAS_operandList_2D_element (const GALGAS_objectIR & inOperand0) :
mAttribute_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element GALGAS_operandList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandList_2D_element::objectCompare (const GALGAS_operandList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOperand.objectCompare (inOperand.mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandList_2D_element::isValid (void) const {
  return mAttribute_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList_2D_element::drop (void) {
  mAttribute_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @operandList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @operandList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandList_2D_element ("operandList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandList_2D_element GALGAS_operandList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_operandList_2D_element result ;
  const GALGAS_operandList_2D_element * p = (const GALGAS_operandList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::~ GALGAS_classConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element::GALGAS_classConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_objectIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_objectIR & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_classConstantMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classConstantMap_2D_element::objectCompare (const GALGAS_classConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classConstantMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @classConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_classConstantMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @classConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classConstantMap_2D_element ("classConstantMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classConstantMap_2D_element GALGAS_classConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classConstantMap_2D_element result ;
  const GALGAS_classConstantMap_2D_element * p = (const GALGAS_classConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::GALGAS_typeList_2D_element (void) :
mAttribute_mActualType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::~ GALGAS_typeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element::GALGAS_typeList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0) :
mAttribute_mActualType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeList_2D_element::objectCompare (const GALGAS_typeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualType.objectCompare (inOperand.mAttribute_mActualType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeList_2D_element::isValid (void) const {
  return mAttribute_mActualType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeList_2D_element::drop (void) {
  mAttribute_mActualType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeList_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @typeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_typeList_2D_element::getter_mActualType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typeList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeList_2D_element ("typeList-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeList_2D_element GALGAS_typeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typeList_2D_element result ;
  const GALGAS_typeList_2D_element * p = (const GALGAS_typeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (void) :
mAttribute_mOperand () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::~ GALGAS_operandIRList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element::GALGAS_operandIRList_2D_element (const GALGAS_objectIR & inOperand0) :
mAttribute_mOperand (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::constructor_new (const GALGAS_objectIR & inOperand0 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_operandIRList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_operandIRList_2D_element::objectCompare (const GALGAS_operandIRList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOperand.objectCompare (inOperand.mAttribute_mOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_operandIRList_2D_element::isValid (void) const {
  return mAttribute_mOperand.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::drop (void) {
  mAttribute_mOperand.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_operandIRList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @operandIRList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOperand.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_operandIRList_2D_element::getter_mOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperand ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @operandIRList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_operandIRList_2D_element ("operandIRList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_operandIRList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_operandIRList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_operandIRList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_operandIRList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_operandIRList_2D_element GALGAS_operandIRList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_operandIRList_2D_element result ;
  const GALGAS_operandIRList_2D_element * p = (const GALGAS_operandIRList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_operandIRList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("operandIRList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mInitValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorValue & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mInitValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_constructorValue & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_constructorMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitValue.objectCompare (inOperand.mAttribute_mInitValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mInitValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mInitValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_constructorMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @constructorMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_constructorMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorValue GALGAS_constructorMap_2D_element::getter_mInitValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @constructorMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (void) :
mAttribute_mTaskName (),
mAttribute_mTaskTypeName (),
mAttribute_mInitialValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::~ GALGAS_globalTaskVariableList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element::GALGAS_globalTaskVariableList_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_objectIR & inOperand2) :
mAttribute_mTaskName (inOperand0),
mAttribute_mTaskTypeName (inOperand1),
mAttribute_mInitialValue (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_objectIR & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalTaskVariableList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalTaskVariableList_2D_element::objectCompare (const GALGAS_globalTaskVariableList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTaskName.objectCompare (inOperand.mAttribute_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTaskTypeName.objectCompare (inOperand.mAttribute_mTaskTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInitialValue.objectCompare (inOperand.mAttribute_mInitialValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalTaskVariableList_2D_element::isValid (void) const {
  return mAttribute_mTaskName.isValid () && mAttribute_mTaskTypeName.isValid () && mAttribute_mInitialValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::drop (void) {
  mAttribute_mTaskName.drop () ;
  mAttribute_mTaskTypeName.drop () ;
  mAttribute_mInitialValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalTaskVariableList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @globalTaskVariableList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTaskName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTaskTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInitialValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_globalTaskVariableList_2D_element::getter_mTaskTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTaskTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalTaskVariableList_2D_element::getter_mInitialValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInitialValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @globalTaskVariableList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ("globalTaskVariableList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalTaskVariableList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalTaskVariableList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalTaskVariableList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalTaskVariableList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalTaskVariableList_2D_element GALGAS_globalTaskVariableList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_globalTaskVariableList_2D_element result ;
  const GALGAS_globalTaskVariableList_2D_element * p = (const GALGAS_globalTaskVariableList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalTaskVariableList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalTaskVariableList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (void) :
mAttribute_mFormalArgumentKind (),
mAttribute_mFormalArgumentType (),
mAttribute_mFormalArgumentName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::~ GALGAS_procFormalArgumentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element::GALGAS_procFormalArgumentListForGeneration_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                              const GALGAS_string & inOperand2) :
mAttribute_mFormalArgumentKind (inOperand0),
mAttribute_mFormalArgumentType (inOperand1),
mAttribute_mFormalArgumentName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::constructor_new (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_procFormalArgumentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_procFormalArgumentListForGeneration_2D_element::objectCompare (const GALGAS_procFormalArgumentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentKind.objectCompare (inOperand.mAttribute_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentType.objectCompare (inOperand.mAttribute_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormalArgumentName.objectCompare (inOperand.mAttribute_mFormalArgumentName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_procFormalArgumentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFormalArgumentKind.isValid () && mAttribute_mFormalArgumentType.isValid () && mAttribute_mFormalArgumentName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::drop (void) {
  mAttribute_mFormalArgumentKind.drop () ;
  mAttribute_mFormalArgumentType.drop () ;
  mAttribute_mFormalArgumentName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_procFormalArgumentListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @procFormalArgumentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentPassingMode GALGAS_procFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_procFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_procFormalArgumentListForGeneration_2D_element::getter_mFormalArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @procFormalArgumentListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ("procFormalArgumentListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_procFormalArgumentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procFormalArgumentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_procFormalArgumentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procFormalArgumentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_procFormalArgumentListForGeneration_2D_element GALGAS_procFormalArgumentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procFormalArgumentListForGeneration_2D_element result ;
  const GALGAS_procFormalArgumentListForGeneration_2D_element * p = (const GALGAS_procFormalArgumentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_procFormalArgumentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procFormalArgumentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (void) :
mAttribute_mVarName (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element::~ GALGAS_allocaList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (const GALGAS_string & inOperand0,
                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mVarName (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_allocaList_2D_element (GALGAS_string::constructor_default (HERE),
                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_allocaList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_allocaList_2D_element::objectCompare (const GALGAS_allocaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mVarName.objectCompare (inOperand.mAttribute_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_allocaList_2D_element::isValid (void) const {
  return mAttribute_mVarName.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList_2D_element::drop (void) {
  mAttribute_mVarName.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_allocaList_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @allocaList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_allocaList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_allocaList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @allocaList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_allocaList_2D_element ("allocaList-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_allocaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_allocaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  const GALGAS_allocaList_2D_element * p = (const GALGAS_allocaList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_allocaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mSourceExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::~ GALGAS_globalConstantMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element::GALGAS_globalConstantMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                              const GALGAS_objectIR & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mSourceExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                              const GALGAS_objectIR & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_globalConstantMapIR_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_globalConstantMapIR_2D_element::objectCompare (const GALGAS_globalConstantMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceExpression.objectCompare (inOperand.mAttribute_mSourceExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_globalConstantMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mSourceExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mSourceExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_globalConstantMapIR_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @globalConstantMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_globalConstantMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_globalConstantMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectIR GALGAS_globalConstantMapIR_2D_element::getter_mSourceExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @globalConstantMapIR-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ("globalConstantMapIR-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_globalConstantMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_globalConstantMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_globalConstantMapIR_2D_element GALGAS_globalConstantMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMapIR_2D_element result ;
  const GALGAS_globalConstantMapIR_2D_element * p = (const GALGAS_globalConstantMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_globalConstantMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::GALGAS_typeMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::~ GALGAS_typeMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element::GALGAS_typeMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_abstractTypeIR & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element GALGAS_typeMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractTypeIR & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_typeMapIR_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeMapIR_2D_element::objectCompare (const GALGAS_typeMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeMapIR_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @typeMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_typeMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractTypeIR GALGAS_typeMapIR_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typeMapIR-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMapIR_2D_element ("typeMapIR-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeMapIR_2D_element GALGAS_typeMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMapIR_2D_element result ;
  const GALGAS_typeMapIR_2D_element * p = (const GALGAS_typeMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mAttribute_lkey (),
mAttribute_mSelfType (),
mAttribute_mGlobalVariableName (),
mAttribute_mAllocaList (),
mAttribute_mInstructionGenerationList (),
mAttribute_mXTR () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_allocaList & inOperand3,
                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                    const GALGAS_bool & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mSelfType (inOperand1),
mAttribute_mGlobalVariableName (inOperand2),
mAttribute_mAllocaList (inOperand3),
mAttribute_mInstructionGenerationList (inOperand4),
mAttribute_mXTR (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_interruptMapIR_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_allocaList::constructor_emptyList (HERE),
                                           GALGAS_instructionListIR::constructor_emptyList (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_allocaList & inOperand3,
                                                                                    const GALGAS_instructionListIR & inOperand4,
                                                                                    const GALGAS_bool & inOperand5 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_interruptMapIR_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_interruptMapIR_2D_element::objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelfType.objectCompare (inOperand.mAttribute_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGlobalVariableName.objectCompare (inOperand.mAttribute_mGlobalVariableName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllocaList.objectCompare (inOperand.mAttribute_mAllocaList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionGenerationList.objectCompare (inOperand.mAttribute_mInstructionGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXTR.objectCompare (inOperand.mAttribute_mXTR) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSelfType.isValid () && mAttribute_mGlobalVariableName.isValid () && mAttribute_mAllocaList.isValid () && mAttribute_mInstructionGenerationList.isValid () && mAttribute_mXTR.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mSelfType.drop () ;
  mAttribute_mGlobalVariableName.drop () ;
  mAttribute_mAllocaList.drop () ;
  mAttribute_mInstructionGenerationList.drop () ;
  mAttribute_mXTR.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_interruptMapIR_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @interruptMapIR-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelfType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGlobalVariableName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllocaList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXTR.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_interruptMapIR_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_interruptMapIR_2D_element::getter_mSelfType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelfType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_interruptMapIR_2D_element::getter_mGlobalVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGlobalVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_allocaList GALGAS_interruptMapIR_2D_element::getter_mAllocaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllocaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_instructionListIR GALGAS_interruptMapIR_2D_element::getter_mInstructionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_interruptMapIR_2D_element::getter_mXTR (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXTR ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @interruptMapIR-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  const GALGAS_interruptMapIR_2D_element * p = (const GALGAS_interruptMapIR_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_interruptMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Extension method '@controlRegisterDeclarationListAST-element controlRegisterType'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_controlRegisterType (const GALGAS_controlRegisterDeclarationListAST_2D_element inObject,
                                          GALGAS_semanticContext & ioArgument_ioContext,
                                          GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRegisterType,
                                          GALGAS_uint & outArgument_outRegisterBitCount,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterBitCount.drop () ; // Release 'out' argument
  outArgument_outRegisterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mRegisterTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 211)) ;
  switch (outArgument_outRegisterType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_7962 = (const cEnumAssociatedValues_typeKind_integer *) (outArgument_outRegisterType.getter_kind (inCompiler COMMA_SOURCE_FILE ("declaration-control-register.galgas", 212)).unsafePointer ()) ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_7962->mAssociatedValue3 ;
      outArgument_outRegisterBitCount = extractedValue_bitCount ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 216)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 216)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 218)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 218)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 220)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 220)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 222)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 222)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 224)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 224)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 226)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 226)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      inCompiler->emitSemanticError (inObject.mAttribute_mRegisterTypeName.getter_location (SOURCE_FILE ("declaration-control-register.galgas", 228)), GALGAS_string ("a register should be an $intXX or an $uintXX")  COMMA_SOURCE_FILE ("declaration-control-register.galgas", 228)) ;
      outArgument_outRegisterBitCount.drop () ; // Release error dropped variable
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@globalVarDeclarationList-element enterInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_globalVarDeclarationList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_variableAnnotationType_7810 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_7810 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 228)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_7810 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 230)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_8057 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-global-variable.galgas", 233)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8115 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 234)) ;
  GALGAS_allocaList var_allocaList_8145 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-global-variable.galgas", 235)) ;
  GALGAS_variableMap var_variableMap_8232 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_8232, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 236)) ;
  }
  GALGAS_objectIR var_expressionResult_8750 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mAttribute_mSourceExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 241)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-global-variable.galgas", 244)), var_variableAnnotationType_7810, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-variable.galgas", 247)), GALGAS_bool (true), var_temporaries_8057, ioArgument_ioGlobalLiteralStringMap, var_variableMap_8232, var_allocaList_8145, var_instructionGenerationList_8115, var_expressionResult_8750, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 240)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_8115.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_8145.getter_length (SOURCE_FILE ("declaration-global-variable.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_8750, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 256)).operator_not (SOURCE_FILE ("declaration-global-variable.galgas", 256)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (inObject.mAttribute_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 257)), GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 257)) ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_variableAnnotationType_7810.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 260)))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = extensionGetter_kind (var_expressionResult_8750, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 260)).getter_isStaticInteger (SOURCE_FILE ("declaration-global-variable.galgas", 260)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (inObject.mAttribute_mVarName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 261)), GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 261)) ;
  }
  GALGAS_objectIR var_result_9138 = function_checkAssignmentCompatibility (var_expressionResult_8750, var_variableAnnotationType_7810, inObject.mAttribute_mVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 263)) ;
  GALGAS_stringset var_executionModes_9347 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-global-variable.galgas", 269)) ;
  GALGAS_allowedRoutineMap var_allowedRoutineMap_9436 = GALGAS_allowedRoutineMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 271)) ;
  cEnumerator_allowedInitList enumerator_9470 (inObject.mAttribute_mAllowedInitList, kEnumeration_up) ;
  while (enumerator_9470.hasCurrentObject ()) {
    ioArgument_ioContext.mAttribute_mInitRoutineMap.method_searchKey (GALGAS_lstring::constructor_new (enumerator_9470.current_mInitPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 273)), enumerator_9470.current_mInitPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 273)) ;
    {
    var_allowedRoutineMap_9436.setter_insertKey (function_initNameForInvocationGraph (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 274)), enumerator_9470.current_mInitPriority (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 274)), enumerator_9470.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 274)) ;
    }
    enumerator_9470.gotoNextObject () ;
  }
  cEnumerator_allowedPanicList enumerator_9765 (inObject.mAttribute_mAllowedPanicList, kEnumeration_up) ;
  while (enumerator_9765.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9765.current_mPanicName (HERE).mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioContext.mAttribute_mPanicSetupRoutinePriorityMap.method_searchSetupKey (GALGAS_lstring::constructor_new (enumerator_9765.current_mPanicPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 280)), enumerator_9765.current_mPanicPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 279)) ;
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_9765.current_mPanicName (HERE).mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        ioArgument_ioContext.mAttribute_mPanicLoopRoutinePriorityMap.method_searchLoopKey (GALGAS_lstring::constructor_new (enumerator_9765.current_mPanicPriority (HERE).mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 285)), enumerator_9765.current_mPanicPriority (HERE).mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 284)) ;
      }else if (kBoolFalse == test_7) {
        inCompiler->emitSemanticError (enumerator_9765.current_mPanicName (HERE).getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 289)), GALGAS_string ("panic routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 289)) ;
      }
    }
    {
    var_allowedRoutineMap_9436.setter_insertKey (function_panicNameForInvocationGraph (enumerator_9765.current_mPanicName (HERE).mAttribute_string, enumerator_9765.current_mPanicPriority (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 292)), enumerator_9765.current_mHasWriteAccess (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 291)) ;
    }
    enumerator_9765.gotoNextObject () ;
  }
  cEnumerator_allowedRoutineList enumerator_10496 (inObject.mAttribute_mAllowedProcList, kEnumeration_up) ;
  while (enumerator_10496.hasCurrentObject ()) {
    GALGAS_lstring var_routineMangledName_10531 ;
    GALGAS_unifiedTypeMap_2D_proxy var_receiverType_10570 ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_10496.current (HERE).mAttribute_mReceiverTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_routineMangledName_10531 = enumerator_10496.current (HERE).mAttribute_mRoutineName ;
      var_receiverType_10570 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 303)) ;
    }else if (kBoolFalse == test_8) {
      var_routineMangledName_10531 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_10496.current (HERE).mAttribute_mReceiverTypeName.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 305)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 305)).add_operation (enumerator_10496.current (HERE).mAttribute_mRoutineName.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 305)), enumerator_10496.current (HERE).mAttribute_mRoutineName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 305)) ;
      var_receiverType_10570 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_10496.current (HERE).mAttribute_mReceiverTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 306)) ;
    }
    GALGAS_bool var_isPublic_11161 ;
    GALGAS_modeMap var_procedureModeMap_11189 ;
    GALGAS_lstring joker_11133 ; // Joker input parameter
    GALGAS_procedureSignature joker_11197_7 ; // Joker input parameter
    GALGAS_routineKind joker_11197_6 ; // Joker input parameter
    GALGAS_bool joker_11197_5 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_11197_4 ; // Joker input parameter
    GALGAS_bool joker_11197_3 ; // Joker input parameter
    GALGAS_bool joker_11197_2 ; // Joker input parameter
    GALGAS_bool joker_11197_1 ; // Joker input parameter
    ioArgument_ioContext.mAttribute_mRoutineMapForContext.method_searchKey (var_routineMangledName_10531, joker_11133, var_isPublic_11161, var_procedureModeMap_11189, joker_11197_7, joker_11197_6, joker_11197_5, joker_11197_4, joker_11197_3, joker_11197_2, joker_11197_1, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 308)) ;
    cEnumerator_modeMap enumerator_11236 (var_procedureModeMap_11189, kEnumeration_up) ;
    while (enumerator_11236.hasCurrentObject ()) {
      var_executionModes_9347.addAssign_operation (enumerator_11236.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 316)) ;
      enumerator_11236.gotoNextObject () ;
    }
    {
    var_allowedRoutineMap_9436.setter_insertKey (var_routineMangledName_10531, enumerator_10496.current (HERE).mAttribute_mHasWriteAccess, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 318)) ;
    }
    enumerator_10496.gotoNextObject () ;
  }
  GALGAS_allowedGuardMap var_allowedGuardMap_11446 = GALGAS_allowedGuardMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 321)) ;
  cEnumerator_allowedGuardList enumerator_11484 (inObject.mAttribute_mAllowedGuardList, kEnumeration_up) ;
  while (enumerator_11484.hasCurrentObject ()) {
    GALGAS_lstring var_guardMangledName_11517 ;
    GALGAS_unifiedTypeMap_2D_proxy var_receiverType_11556 ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_11484.current (HERE).mAttribute_mOptionalTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_guardMangledName_11517 = enumerator_11484.current (HERE).mAttribute_mGuardName ;
      var_receiverType_11556 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-global-variable.galgas", 328)) ;
    }else if (kBoolFalse == test_9) {
      var_guardMangledName_11517 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (enumerator_11484.current (HERE).mAttribute_mOptionalTypeName.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 330)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 330)).add_operation (enumerator_11484.current (HERE).mAttribute_mGuardName.getter_string (SOURCE_FILE ("declaration-global-variable.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 330)), enumerator_11484.current (HERE).mAttribute_mGuardName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 330)) ;
      var_receiverType_11556 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_11484.current (HERE).mAttribute_mOptionalTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 331)) ;
    }
    GALGAS_bool var_isPublic_12086 ;
    GALGAS_procedureSignature joker_12094 ; // Joker input parameter
    ioArgument_ioContext.mAttribute_mGuardMapForContext.method_searchKey (var_guardMangledName_11517, var_isPublic_12086, joker_12094, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 333)) ;
    var_executionModes_9347.addAssign_operation (function_serviceModeName (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 338))  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 338)) ;
    {
    var_allowedGuardMap_11446.setter_insertKey (var_guardMangledName_11517, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 340)) ;
    }
    enumerator_11484.gotoNextObject () ;
  }
  GALGAS_allowedISRMap var_allowedISRMap_12370 = GALGAS_allowedISRMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 343)) ;
  cEnumerator_allowedISRList enumerator_12404 (inObject.mAttribute_mAllowedISRList, kEnumeration_up) ;
  while (enumerator_12404.hasCurrentObject ()) {
    GALGAS_lstring var_name_12420 = function_interruptNameForInvocationGraph (enumerator_12404.current (HERE).mAttribute_mISRName, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 345)) ;
    {
    var_allowedISRMap_12370.setter_insertKey (var_name_12420, enumerator_12404.current (HERE).mAttribute_mHasWriteAccess, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 346)) ;
    }
    const enumGalgasBool test_10 = ioArgument_ioContext.mAttribute_mDefinedInterruptSet.getter_hasKey (enumerator_12404.current (HERE).mAttribute_mISRName.mAttribute_string COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 347)).operator_not (SOURCE_FILE ("declaration-global-variable.galgas", 347)).boolEnum () ;
    if (kBoolTrue == test_10) {
      inCompiler->emitSemanticError (enumerator_12404.current (HERE).mAttribute_mISRName.getter_location (SOURCE_FILE ("declaration-global-variable.galgas", 348)), GALGAS_string ("this isr is not defined")  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 348)) ;
    }
    enumerator_12404.gotoNextObject () ;
  }
  GALGAS_allowedTaskMap var_allowedTaskMap_12743 = GALGAS_allowedTaskMap::constructor_emptyMap (SOURCE_FILE ("declaration-global-variable.galgas", 352)) ;
  cEnumerator_allowedTaskList enumerator_12779 (inObject.mAttribute_mAllowedTaskList, kEnumeration_up) ;
  while (enumerator_12779.hasCurrentObject ()) {
    GALGAS_taskProcedureMap joker_12834 ; // Joker input parameter
    ioArgument_ioContext.mAttribute_mTaskMap.method_searchKey (enumerator_12779.current (HERE).mAttribute_mTaskName, joker_12834, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 354)) ;
    {
    var_allowedTaskMap_12743.setter_insertKey (enumerator_12779.current (HERE).mAttribute_mTaskName, enumerator_12779.current (HERE).mAttribute_mHasWriteAccess, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 355)) ;
    }
    enumerator_12779.gotoNextObject () ;
  }
  {
  ioArgument_ioContext.mAttribute_mGlobalVariableMap.setter_insertKey (inObject.mAttribute_mVarName, extensionGetter_type (var_result_9138, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 360)), var_executionModes_9347, var_allowedRoutineMap_9436, var_allowedGuardMap_11446, var_allowedISRMap_12370, var_allowedTaskMap_12743, var_result_9138, GALGAS_bool (false), inObject.mAttribute_mAllowedAccessToAll, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 358)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@globalVariableMapIR-element generateLLVM'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_globalVariableMapIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (inObject.mAttribute_lkey.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 406)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 406)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(inObject.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 407)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 407)) ;
  GALGAS_string var_initialString_15084 = extensionGetter_llvmName (inObject.mAttribute_mInitialValue, inCompiler COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 408)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_initialString_15084.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("zeroinitializer"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 410)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(var_initialString_15084, inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 412)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-global-variable.galgas", 414)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@moduleListIR-element generateLLVM'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_generateLLVM (const GALGAS_moduleListIR_2D_element inObject,
                                   GALGAS_string & ioArgument_ioLLVMcode,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("@").add_operation (function_llvmNameForGlobalVariable (inObject.mAttribute_mModuleName, inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 245)).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 245)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(inObject.mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 246)).add_operation (GALGAS_string (" {"), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 246)) ;
  cEnumerator_operandIRList enumerator_10384 (inObject.mAttribute_mInitialValueList, kEnumeration_up) ;
  while (enumerator_10384.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_10384.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 248)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 248)).add_operation (extensionGetter_llvmName (enumerator_10384.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("declaration-module.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 248)) ;
    if (enumerator_10384.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 249)) ;
    }
    enumerator_10384.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("declaration-module.galgas", 251)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@taskVarListAST-element enterInContext'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_taskVarListAST_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                     GALGAS_propertyList & ioArgument_ioPropertyList,
                                     GALGAS_propertyMap & ioArgument_ioPropertyMap,
                                     GALGAS_operandIRList & ioArgument_ioInitialValueList,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_variableAnnotationType_7988 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mVarTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_variableAnnotationType_7988 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 222)) ;
  }else if (kBoolFalse == test_0) {
    var_variableAnnotationType_7988 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mVarTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 224)) ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_8241 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("declaration-task.galgas", 227)) ;
  GALGAS_instructionListIR var_instructionGenerationList_8299 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 228)) ;
  GALGAS_allocaList var_allocaList_8329 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 229)) ;
  GALGAS_variableMap var_variableMap_8416 ;
  {
  routine_variableMapWithConstants (ioArgument_ioContext, var_variableMap_8416, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 230)) ;
  }
  GALGAS_objectIR var_expressionResult_8921 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) inObject.mAttribute_mVarInitExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 235)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_string ("compiler").getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 238)), var_variableAnnotationType_7988, ioArgument_ioContext, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 241)), GALGAS_bool (true), var_temporaries_8241, ioArgument_ioGlobalLiteralStringMap, var_variableMap_8416, var_allocaList_8329, var_instructionGenerationList_8299, var_expressionResult_8921, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 234)) ;
  GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, var_instructionGenerationList_8299.getter_length (SOURCE_FILE ("declaration-task.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsStrictSup, var_allocaList_8329.getter_length (SOURCE_FILE ("declaration-task.galgas", 250)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  }
  GALGAS_bool test_2 = test_1 ;
  if (kBoolTrue != test_2.boolEnum ()) {
    test_2 = extensionGetter_isStatic (var_expressionResult_8921, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 250)).operator_not (SOURCE_FILE ("declaration-task.galgas", 250)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (inObject.mAttribute_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 251)), GALGAS_string ("source expression cannot be statically computed")  COMMA_SOURCE_FILE ("declaration-task.galgas", 251)) ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, var_variableAnnotationType_7988.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-task.galgas", 254)))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = extensionGetter_kind (var_expressionResult_8921, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 254)).getter_isStaticInteger (SOURCE_FILE ("declaration-task.galgas", 254)) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    inCompiler->emitSemanticError (inObject.mAttribute_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 255)), GALGAS_string ("cannot infer type")  COMMA_SOURCE_FILE ("declaration-task.galgas", 255)) ;
  }
  GALGAS_objectIR var_result_9319 = function_checkAssignmentCompatibility (var_expressionResult_8921, var_variableAnnotationType_7988, inObject.mAttribute_mVarName.mAttribute_location, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 257)) ;
  const enumGalgasBool test_6 = extensionGetter_type (var_result_9319, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 265)).getter_instantiable (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 265)).operator_not (SOURCE_FILE ("declaration-task.galgas", 265)).boolEnum () ;
  if (kBoolTrue == test_6) {
    inCompiler->emitSemanticError (inObject.mAttribute_mVarName.getter_location (SOURCE_FILE ("declaration-task.galgas", 266)), GALGAS_string ("$").add_operation (extensionGetter_key (var_result_9319, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 266)).add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 266))  COMMA_SOURCE_FILE ("declaration-task.galgas", 266)) ;
  }
  {
  ioArgument_ioPropertyMap.setter_insertKey (inObject.mAttribute_mVarName, GALGAS_bool (false), GALGAS_objectIR::constructor_property (extensionGetter_type (var_result_9319, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 271)), inObject.mAttribute_mVarName, ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("declaration-task.galgas", 271))  COMMA_SOURCE_FILE ("declaration-task.galgas", 271)), ioArgument_ioPropertyList.getter_length (SOURCE_FILE ("declaration-task.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 268)) ;
  }
  ioArgument_ioInitialValueList.addAssign_operation (var_result_9319  COMMA_SOURCE_FILE ("declaration-task.galgas", 274)) ;
  ioArgument_ioPropertyList.addAssign_operation (inObject.mAttribute_mVarName.mAttribute_string, extensionGetter_type (var_result_9319, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 275))  COMMA_SOURCE_FILE ("declaration-task.galgas", 275)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@taskList-element semanticAnalysis'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_taskList_2D_element inObject,
                                       const GALGAS_semanticContext constinArgument_inContext,
                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                       GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint var_stackSize_11354 = inObject.mAttribute_mStackSize.mAttribute_bigint ;
  GALGAS_bool test_0 = GALGAS_bool (kIsStrictInf, var_stackSize_11354.objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 311)))) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = GALGAS_bool (kIsNotEqual, var_stackSize_11354.modulo_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 311)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 311)))) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (inObject.mAttribute_mStackSize.getter_location (SOURCE_FILE ("declaration-task.galgas", 312)), GALGAS_string ("stack size should be a multiple of 8, and >= 64")  COMMA_SOURCE_FILE ("declaration-task.galgas", 312)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_taskType_11595 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, inObject.mAttribute_mTaskName, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 315)) ;
  cEnumerator_functionDeclarationListAST enumerator_11695 (inObject.mAttribute_mTaskProcList, kEnumeration_up) ;
  while (enumerator_11695.hasCurrentObject ()) {
    {
    GALGAS_lstringlist temp_2 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 320)) ;
    temp_2.addAssign_operation (GALGAS_lstring::constructor_new (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 320)), enumerator_11695.current (HERE).mAttribute_mFunctionName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 320))  COMMA_SOURCE_FILE ("declaration-task.galgas", 320)) ;
    routine_routineSemanticAnalysis (var_taskType_11595, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-task.galgas", 319)), temp_2, enumerator_11695.current (HERE).mAttribute_mFunctionName, enumerator_11695.current (HERE).mAttribute_mFunctionFormalArgumentList, enumerator_11695.current (HERE).mAttribute_mFunctionReturnTypeName, enumerator_11695.current (HERE).mAttribute_mFunctionInstructionList, enumerator_11695.current (HERE).mAttribute_mEndOfFunctionDeclaration, GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_noAccess (SOURCE_FILE ("declaration-task.galgas", 331)), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 317)) ;
    }
    enumerator_11695.gotoNextObject () ;
  }
  GALGAS_taskInitSortedListAST var_taskInitSortedListAST_12485 = GALGAS_taskInitSortedListAST::constructor_emptySortedList (SOURCE_FILE ("declaration-task.galgas", 338)) ;
  cEnumerator_taskInitListAST enumerator_12560 (inObject.mAttribute_mTaskInitListAST, kEnumeration_up) ;
  while (enumerator_12560.hasCurrentObject ()) {
    var_taskInitSortedListAST_12485.addAssign_operation (enumerator_12560.current_mTaskInitPriority (HERE), enumerator_12560.current_mTaskInitInstructionList (HERE), enumerator_12560.current_mEndOfTaskInitDeclaration (HERE), enumerator_12560.current_mTaskInitPriority (HERE).mAttribute_bigint  COMMA_SOURCE_FILE ("declaration-task.galgas", 340)) ;
    enumerator_12560.gotoNextObject () ;
  }
  GALGAS_instructionListIR var_initInstructionListIR_12703 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 342)) ;
  GALGAS_allocaList var_initAllocaList_12737 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 343)) ;
  cEnumerator_taskInitSortedListAST enumerator_12843 (var_taskInitSortedListAST_12485, kEnumeration_up) ;
  while (enumerator_12843.hasCurrentObject ()) {
    GALGAS_allocaList var_partialAllocaList_13216 ;
    GALGAS_instructionListIR var_partialInstructionGenerationList_13279 ;
    {
    GALGAS_stringset temp_3 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("declaration-task.galgas", 351)) ;
    temp_3.addAssign_operation (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 351))  COMMA_SOURCE_FILE ("declaration-task.galgas", 351)) ;
    routine_initSemanticAnalysis (constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, var_taskType_11595, enumerator_12843.current_mTaskInitPriority (HERE), temp_3, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 352)), enumerator_12843.current_mTaskInitInstructionList (HERE), enumerator_12843.current_mEndOfTaskInitDeclaration (HERE), var_partialAllocaList_13216, var_partialInstructionGenerationList_13279, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 345)) ;
    }
    var_initInstructionListIR_12703.plusAssign_operation(var_partialInstructionGenerationList_13279, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 358)) ;
    var_initAllocaList_12737.plusAssign_operation(var_partialAllocaList_13216, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 359)) ;
    enumerator_12843.gotoNextObject () ;
  }
  GALGAS_instructionListAST var_taskListInstructionList_13578 = GALGAS_instructionListAST::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 363)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, inObject.mAttribute_mGuardedCommandList.getter_length (SOURCE_FILE ("declaration-task.galgas", 364)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_syncInstructionAST var_syncInstruction_13650 = GALGAS_syncInstructionAST::constructor_new (inObject.mAttribute_mTaskName.mAttribute_location, inObject.mAttribute_mGuardedCommandList, inObject.mAttribute_mTaskName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 365)) ;
    var_taskListInstructionList_13578.addAssign_operation (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-task.galgas", 366)), var_syncInstruction_13650  COMMA_SOURCE_FILE ("declaration-task.galgas", 366)) ;
  }
  {
  GALGAS_lstringlist temp_5 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 371)) ;
  temp_5.addAssign_operation (GALGAS_lstring::constructor_new (function_userModeName (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 371)), inObject.mAttribute_mTaskName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 371))  COMMA_SOURCE_FILE ("declaration-task.galgas", 371)) ;
  routine_routineSemanticAnalysis (var_taskType_11595, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-task.galgas", 370)), temp_5, GALGAS_lstring::constructor_new (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 372)), inObject.mAttribute_mTaskName.mAttribute_location  COMMA_SOURCE_FILE ("declaration-task.galgas", 372)), GALGAS_procFormalArgumentList::constructor_emptyList (SOURCE_FILE ("declaration-task.galgas", 373)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-task.galgas", 374)), var_taskListInstructionList_13578, inObject.mAttribute_mTaskName.mAttribute_location, GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), GALGAS_accessKind::constructor_noAccess (SOURCE_FILE ("declaration-task.galgas", 382)), constinArgument_inContext, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct, inCompiler  COMMA_SOURCE_FILE ("declaration-task.galgas", 368)) ;
  }
  {
  ioArgument_ioIntermediateCodeStruct.mAttribute_mTaskMapIR.setter_insertKey (inObject.mAttribute_mTaskName, var_taskType_11595, inObject.mAttribute_mPriority.mAttribute_bigint, inObject.mAttribute_mStackSize.mAttribute_bigint, var_initAllocaList_12737, var_initInstructionListIR_12703, inCompiler COMMA_SOURCE_FILE ("declaration-task.galgas", 388)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Extension method '@panicClauseListAST-element enterInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_panicClauseListAST_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("setup"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioContext.mAttribute_mPanicSetupRoutinePriorityMap.setter_insertSetupKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 63)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 63)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mAttribute_mPanicClauseName.mAttribute_string.objectCompare (GALGAS_string ("loop"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioContext.mAttribute_mPanicLoopRoutinePriorityMap.setter_insertLoopKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("panic.galgas", 65)), inObject.mAttribute_mLocationPriority  COMMA_SOURCE_FILE ("panic.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("panic.galgas", 65)) ;
      }
    }else if (kBoolFalse == test_1) {
      inCompiler->emitSemanticError (inObject.mAttribute_mPanicClauseName.getter_location (SOURCE_FILE ("panic.galgas", 67)), GALGAS_string ("panic routine name should be \"setup\" or \"loop\"")  COMMA_SOURCE_FILE ("panic.galgas", 67)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@initList-element enterInContext'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterInContext (const GALGAS_initList_2D_element inObject,
                                     GALGAS_semanticContext & ioArgument_ioContext,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioContext.mAttribute_mInitRoutineMap.setter_insertKey (GALGAS_lstring::constructor_new (inObject.mAttribute_mPriority.mAttribute_bigint.getter_string (SOURCE_FILE ("declaration-init.galgas", 76)), inObject.mAttribute_mPriority.mAttribute_location  COMMA_SOURCE_FILE ("declaration-init.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("declaration-init.galgas", 76)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Extension method '@externProcedureDeclarationListAST-element enterExternProcInContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_enterExternProcInContext (const GALGAS_externProcedureDeclarationListAST_2D_element inObject,
                                               GALGAS_semanticContext & ioArgument_ioContext,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procedureSignature var_signature_3397 = GALGAS_procedureSignature::constructor_emptyList (SOURCE_FILE ("declaration-extern-proc.galgas", 76)) ;
  GALGAS_lstring var_routineMangledName_3427 = inObject.mAttribute_mExternProcedureName ;
  var_routineMangledName_3427.mAttribute_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 78)) ;
  cEnumerator_procFormalArgumentList enumerator_3580 (inObject.mAttribute_mProcFormalArgumentList, kEnumeration_up) ;
  while (enumerator_3580.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_3601 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, enumerator_3580.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 80)) ;
    var_signature_3397.addAssign_operation (enumerator_3580.current_mFormalArgumentPassingMode (HERE), enumerator_3580.current_mSelector (HERE).mAttribute_string, var_typeProxy_3601  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 81)) ;
    var_routineMangledName_3427.mAttribute_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_3580.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)).add_operation (enumerator_3580.current_mSelector (HERE).getter_string (SOURCE_FILE ("declaration-extern-proc.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 82)) ;
    enumerator_3580.gotoNextObject () ;
  }
  var_routineMangledName_3427.mAttribute_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 84)) ;
  GALGAS_modeMap var_procedureModeMap_3938 = GALGAS_modeMap::constructor_emptyMap (SOURCE_FILE ("declaration-extern-proc.galgas", 86)) ;
  cEnumerator_lstringlist enumerator_3974 (inObject.mAttribute_mProcedureModeList, kEnumeration_up) ;
  while (enumerator_3974.hasCurrentObject ()) {
    ioArgument_ioContext.mAttribute_mModeMap.method_searchKey (enumerator_3974.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 88)) ;
    {
    var_procedureModeMap_3938.setter_insertKey (enumerator_3974.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 89)) ;
    }
    enumerator_3974.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, inObject.mAttribute_mReturnTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("declaration-extern-proc.galgas", 93)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (ioArgument_ioContext.mAttribute_mTypeMap, inObject.mAttribute_mReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 95)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_4108 = temp_0 ;
  {
  ioArgument_ioContext.mAttribute_mRoutineMapForContext.setter_insertKey (var_routineMangledName_3427, inObject.mAttribute_mRoutineNameForGeneration, GALGAS_bool (true), var_procedureModeMap_3938, var_signature_3397, GALGAS_routineKind::constructor_function (SOURCE_FILE ("declaration-extern-proc.galgas", 103)), GALGAS_bool (false), var_returnType_4108, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-extern-proc.galgas", 97)) ;
  }
}


