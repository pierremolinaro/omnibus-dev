#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST noteExpressionTypesInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_noteExpressionTypesInPrecedenceGraph (const GALGAS_controlRegisterLValueAST inObject,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_controlRegisterLValueAST temp_0 = inObject ;
  switch (temp_0.readProperty_mGroupIndex ().enumValue ()) {
  case GALGAS_registerGroupIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_3582 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (temp_0.readProperty_mGroupIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3492_indexExpression = extractPtr_3582->mAssociatedValue0 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3492_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 93)) ;
    }
    break ;
  }
  const GALGAS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mRegisterIndex ().enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_3740 = (const cEnumAssociatedValues_registerIndexAST_index *) (temp_1.readProperty_mRegisterIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_3650_indexExpression = extractPtr_3740->mAssociatedValue0 ;
      callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((cPtr_expressionAST *) extractedValue_3650_indexExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 98)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST addDependenceEdgeForStaticExpression'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addDependenceEdgeForStaticExpression (const GALGAS_controlRegisterLValueAST inObject,
                                                           const GALGAS_lstring constinArgument_inConstantName,
                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_controlRegisterLValueAST temp_0 = inObject ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inConstantName, temp_0.readProperty_mRegisterGroupName () COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 110)) ;
  }
  const GALGAS_controlRegisterLValueAST temp_1 = inObject ;
  switch (temp_1.readProperty_mGroupIndex ().enumValue ()) {
  case GALGAS_registerGroupIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerGroupIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_4500 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (temp_1.readProperty_mGroupIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_4394_indexExpression = extractPtr_4500->mAssociatedValue0 ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4394_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 114)) ;
    }
    break ;
  }
  const GALGAS_controlRegisterLValueAST temp_2 = inObject ;
  switch (temp_2.readProperty_mRegisterIndex ().enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_4689 = (const cEnumAssociatedValues_registerIndexAST_index *) (temp_2.readProperty_mRegisterIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_4583_indexExpression = extractPtr_4689->mAssociatedValue0 ;
      callExtensionMethod_addDependenceEdgeForStaticExpression ((cPtr_expressionAST *) extractedValue_4583_indexExpression.ptr (), constinArgument_inConstantName, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 119)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@controlRegisterLValueAST controlRegisterLValueSemanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_controlRegisterLValueSemanticAnalysis (const GALGAS_controlRegisterLValueAST inObject,
                                                            const GALGAS_bool constinArgument_inWriteAccess,
                                                            const GALGAS_omnibusType constinArgument_inSelfType,
                                                            const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                                            const GALGAS_semanticContext constinArgument_inContext,
                                                            const GALGAS_mode constinArgument_inMode,
                                                            GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                            GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                                            GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                                            GALGAS_allocaList & ioArgument_ioAllocaList,
                                                            GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                            GALGAS_omnibusType & outArgument_outRegisterType,
                                                            GALGAS_uint & outArgument_outRegisterTypeBitCount,
                                                            GALGAS_sliceMap & outArgument_outSliceMap,
                                                            GALGAS_string & outArgument_outllvmRegisterAddressName,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegisterType.drop () ; // Release 'out' argument
  outArgument_outRegisterTypeBitCount.drop () ; // Release 'out' argument
  outArgument_outSliceMap.drop () ; // Release 'out' argument
  outArgument_outllvmRegisterAddressName.drop () ; // Release 'out' argument
  GALGAS_registerGroupKind var_groupKind_5949 ;
  GALGAS_controlRegisterMap var_controlRegisterMap_5964 ;
  const GALGAS_controlRegisterLValueAST temp_0 = inObject ;
  constinArgument_inContext.readProperty_mControlRegisterGroupMap ().method_searchKey (temp_0.readProperty_mRegisterGroupName (), var_groupKind_5949, var_controlRegisterMap_5964, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 144)) ;
  GALGAS_bool var_readOnly_6119 ;
  GALGAS_bool var_userAccess_6143 ;
  GALGAS_bigint var_addressOffset_6195 ;
  GALGAS_uint var_registerArraySize_6260 ;
  GALGAS_uint var_registerElementSize_6313 ;
  const GALGAS_controlRegisterLValueAST temp_1 = inObject ;
  GALGAS_controlRegisterFieldMap joker_6175 ; // Joker input parameter
  GALGAS_controlRegisterFieldList joker_6213 ; // Joker input parameter
  var_controlRegisterMap_5964.method_searchKey (temp_1.readProperty_mRegisterName (), outArgument_outRegisterType, var_readOnly_6119, var_userAccess_6143, outArgument_outSliceMap, joker_6175, var_addressOffset_6195, joker_6213, outArgument_outRegisterTypeBitCount, var_registerArraySize_6260, var_registerElementSize_6313, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 146)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inWriteAccess.operator_and (var_readOnly_6119 COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 160)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_controlRegisterLValueAST temp_3 = inObject ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray4  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 161)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_bool test_6 = var_userAccess_6143.operator_not (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
      if (kBoolTrue == test_6.boolEnum ()) {
        GALGAS_bool test_7 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        if (kBoolTrue != test_7.boolEnum ()) {
          test_7 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue-control-register.galgas", 163)) ;
        }
        test_6 = test_7 ;
      }
      test_5 = test_6.boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_controlRegisterLValueAST temp_8 = inObject ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("this control register is not accessible in user mode"), fixItArray9  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 164)) ;
      }
    }
  }
  GALGAS_string var_registerAddress_6754 ;
  switch (var_groupKind_5949.enumValue ()) {
  case GALGAS_registerGroupKind::kNotBuilt:
    break ;
  case GALGAS_registerGroupKind::kEnum_single:
    {
      const cEnumAssociatedValues_registerGroupKind_single * extractPtr_7250 = (const cEnumAssociatedValues_registerGroupKind_single *) (var_groupKind_5949.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_6812_baseAddress = extractPtr_7250->mAssociatedValue0 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_controlRegisterLValueAST temp_11 = inObject ;
        test_10 = temp_11.readProperty_mGroupIndex ().getter_isIndex (SOURCE_FILE ("lvalue-control-register.galgas", 170)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_controlRegisterLValueAST temp_12 = inObject ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("subscripting not allowed, group is not an array"), fixItArray13  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 171)) ;
          var_registerAddress_6754.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_controlRegisterLValueAST temp_14 = inObject ;
        const GALGAS_controlRegisterLValueAST temp_15 = inObject ;
        GALGAS_string var_regName_6991 = temp_14.readProperty_mRegisterGroupName ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)).add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 173)) ;
        {
        extensionSetter_appendEnterRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6754, extractedValue_6812_baseAddress, var_addressOffset_6195, var_regName_6991, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 174)) ;
        }
      }
    }
    break ;
  case GALGAS_registerGroupKind::kEnum_arrayGroup:
    {
      const cEnumAssociatedValues_registerGroupKind_arrayGroup * extractPtr_8291 = (const cEnumAssociatedValues_registerGroupKind_arrayGroup *) (var_groupKind_5949.unsafePointer ()) ;
      const GALGAS_lbigintlist extractedValue_7286_baseAddresses = extractPtr_8291->mAssociatedValue0 ;
      const GALGAS_controlRegisterLValueAST temp_16 = inObject ;
      switch (temp_16.readProperty_mGroupIndex ().enumValue ()) {
      case GALGAS_registerGroupIndexAST::kNotBuilt:
        break ;
      case GALGAS_registerGroupIndexAST::kEnum_noIndex:
        {
          const GALGAS_controlRegisterLValueAST temp_17 = inObject ;
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterGroupName ().readProperty_location (), GALGAS_string ("subscripting required, group is an array"), fixItArray18  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 185)) ;
          var_registerAddress_6754.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_registerGroupIndexAST::kEnum_index:
        {
          const cEnumAssociatedValues_registerGroupIndexAST_index * extractPtr_8285 = (const cEnumAssociatedValues_registerGroupIndexAST_index *) (temp_16.readProperty_mGroupIndex ().unsafePointer ()) ;
          const GALGAS_expressionAST extractedValue_7465_indexExpression = extractPtr_8285->mAssociatedValue0 ;
          const GALGAS_location extractedValue_7481_endOfIndex = extractPtr_8285->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_7492_checkIndexExpression = extractPtr_8285->mAssociatedValue2 ;
          GALGAS_objectIR var_groupIndexIR_8035 ;
          {
          routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_7465_indexExpression, extractedValue_7481_endOfIndex, extractedValue_7492_checkIndexExpression, extractedValue_7286_baseAddresses.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 199)).getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 199)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_groupIndexIR_8035, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 187)) ;
          }
          {
          const GALGAS_controlRegisterLValueAST temp_19 = inObject ;
          extensionSetter_appendEnterRegisterGroupSubscriptedAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_registerAddress_6754, temp_19.readProperty_mRegisterGroupName ().readProperty_string (), extractedValue_7286_baseAddresses.getter_count (SOURCE_FILE ("lvalue-control-register.galgas", 208)), var_groupIndexIR_8035, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 204)) ;
          }
        }
        break ;
      }
    }
    break ;
  }
  const GALGAS_controlRegisterLValueAST temp_20 = inObject ;
  switch (temp_20.readProperty_mRegisterIndex ().enumValue ()) {
  case GALGAS_registerIndexAST::kNotBuilt:
    break ;
  case GALGAS_registerIndexAST::kEnum_noIndex:
    {
      enumGalgasBool test_21 = kBoolTrue ;
      if (kBoolTrue == test_21) {
        test_21 = GALGAS_bool (kIsEqual, var_registerArraySize_6260.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_21) {
          outArgument_outllvmRegisterAddressName = var_registerAddress_6754 ;
        }
      }
      if (kBoolFalse == test_21) {
        const GALGAS_controlRegisterLValueAST temp_22 = inObject ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the control register is an array"), fixItArray23  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 219)) ;
        outArgument_outllvmRegisterAddressName.drop () ; // Release error dropped variable
      }
    }
    break ;
  case GALGAS_registerIndexAST::kEnum_index:
    {
      const cEnumAssociatedValues_registerIndexAST_index * extractPtr_9370 = (const cEnumAssociatedValues_registerIndexAST_index *) (temp_20.readProperty_mRegisterIndex ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_8615_indexExpression = extractPtr_9370->mAssociatedValue0 ;
      const GALGAS_location extractedValue_8631_endOfIndex = extractPtr_9370->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_8642_checkIndexExpression = extractPtr_9370->mAssociatedValue2 ;
      GALGAS_objectIR var_indexIR_9148 ;
      {
      routine_handleArraySubscriptNew_3F_self_3F_routineAttributes_3F_context_3F_mode_26_temporary_26_staticEntityMap_26_variableMap_26_alloca_3F__3F__3F__3F_arraySize_3F_elementType_26__21_ (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_8615_indexExpression, extractedValue_8631_endOfIndex, extractedValue_8642_checkIndexExpression, var_registerArraySize_6260.getter_bigint (SOURCE_FILE ("lvalue-control-register.galgas", 234)), outArgument_outRegisterType, ioArgument_ioInstructionGenerationList, var_indexIR_9148, inCompiler  COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 222)) ;
      }
      {
      extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, outArgument_outllvmRegisterAddressName, var_indexIR_9148, var_registerAddress_6754, var_registerElementSize_6313, inCompiler COMMA_SOURCE_FILE ("lvalue-control-register.galgas", 239)) ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR svcDeclarationGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractRoutineIR::method_svcDeclarationGeneration (GALGAS_primitiveAndServiceIRlist & /* ioArgument_ioPrimitiveAndServiceList */,
                                                              GALGAS_sectionIRlist & /* ioArgument_ioSectionList */,
                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_svcDeclarationGeneration (cPtr_abstractRoutineIR * inObject,
                                                   GALGAS_primitiveAndServiceIRlist & io_ioPrimitiveAndServiceList,
                                                   GALGAS_sectionIRlist & io_ioSectionList,
                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    inObject->method_svcDeclarationGeneration  (io_ioPrimitiveAndServiceList, io_ioSectionList, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractRoutineIR llvmCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_llvmCodeGeneration (cPtr_abstractRoutineIR * inObject,
                                             GALGAS_string & io_ioLLVMcode,
                                             const GALGAS_generationContext constin_inGenerationContext,
                                             GALGAS_generationAdds & io_ioGenerationAdds,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    inObject->method_llvmCodeGeneration (io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractRoutineIR enterAccessibleEntities'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractRoutineIR::method_enterAccessibleEntities (GALGAS_stringset & /* ioArgument_ioInvokedRoutineSet */,
                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterAccessibleEntities (cPtr_abstractRoutineIR * inObject,
                                                  GALGAS_stringset & io_ioInvokedRoutineSet,
                                                  GALGAS_uint & io_ioMaxBranchOfOnInstructions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractRoutineIR) ;
    inObject->method_enterAccessibleEntities  (io_ioInvokedRoutineSet, io_ioMaxBranchOfOnInstructions, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @binaryOperationIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binaryOperationIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mOperandType.printNonNullClassInstanceProperties ("mOperandType") ;
    mProperty_mLeft.printNonNullClassInstanceProperties ("mLeft") ;
    mProperty_mOperation.printNonNullClassInstanceProperties ("mOperation") ;
    mProperty_mRight.printNonNullClassInstanceProperties ("mRight") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_binaryOperationIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binaryOperationIR * p = (const cPtr_binaryOperationIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binaryOperationIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperandType.objectCompare (p->mProperty_mOperandType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeft.objectCompare (p->mProperty_mLeft) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperation.objectCompare (p->mProperty_mOperation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRight.objectCompare (p->mProperty_mRight) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_binaryOperationIR::objectCompare (const GALGAS_binaryOperationIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR::GALGAS_binaryOperationIR (const cPtr_binaryOperationIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperationIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::class_func_new (const GALGAS_objectIR & inAttribute_mTarget,
                                                                   const GALGAS_omnibusType & inAttribute_mOperandType,
                                                                   const GALGAS_objectIR & inAttribute_mLeft,
                                                                   const GALGAS_llvmBinaryOperation & inAttribute_mOperation,
                                                                   const GALGAS_objectIR & inAttribute_mRight,
                                                                   const GALGAS_location & inAttribute_mLocation
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mOperandType.isValid () && inAttribute_mLeft.isValid () && inAttribute_mOperation.isValid () && inAttribute_mRight.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_binaryOperationIR (inAttribute_mTarget, inAttribute_mOperandType, inAttribute_mLeft, inAttribute_mOperation, inAttribute_mRight, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setter_setMTarget (GALGAS_objectIR inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setter_setMOperandType (GALGAS_omnibusType inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperandType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setter_setMLeft (GALGAS_objectIR inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLeft = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setter_setMOperation (GALGAS_llvmBinaryOperation inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mOperation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setter_setMRight (GALGAS_objectIR inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mRight = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_binaryOperationIR::setter_setMLocation (GALGAS_location inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    p->mProperty_mLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_binaryOperationIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_binaryOperationIR::readProperty_mOperandType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperandType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_binaryOperationIR::readProperty_mLeft (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLeft ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmBinaryOperation GALGAS_binaryOperationIR::readProperty_mOperation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmBinaryOperation () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mOperation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_binaryOperationIR::readProperty_mRight (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mRight ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_binaryOperationIR::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_binaryOperationIR * p = (cPtr_binaryOperationIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperationIR) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperationIR class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperationIR::cPtr_binaryOperationIR (const GALGAS_objectIR & in_mTarget,
                                                const GALGAS_omnibusType & in_mOperandType,
                                                const GALGAS_objectIR & in_mLeft,
                                                const GALGAS_llvmBinaryOperation & in_mOperation,
                                                const GALGAS_objectIR & in_mRight,
                                                const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mOperandType (in_mOperandType),
mProperty_mLeft (in_mLeft),
mProperty_mOperation (in_mOperation),
mProperty_mRight (in_mRight),
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_binaryOperationIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

void cPtr_binaryOperationIR::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@binaryOperationIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOperandType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLeft.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOperation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRight.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_binaryOperationIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binaryOperationIR (mProperty_mTarget, mProperty_mOperandType, mProperty_mLeft, mProperty_mOperation, mProperty_mRight, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @binaryOperationIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperationIR ("binaryOperationIR",
                                                                         & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperationIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperationIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperationIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperationIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperationIR GALGAS_binaryOperationIR::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperationIR result ;
  const GALGAS_binaryOperationIR * p = (const GALGAS_binaryOperationIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_binaryOperationIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperationIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForOverflowOperation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterCodeForOverflowOperation (const GALGAS_string constinArgument_inOperation,
                                                                   const GALGAS_bigint constinArgument_inPanicCode,
                                                                   GALGAS_string & ioArgument_ioLLVMcode,
                                                                   const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                   GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperationIR temp_0 = this ;
  GALGAS_string var_llvmType_2136 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 85)) ;
  const GALGAS_binaryOperationIR temp_1 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".r = call {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 86)) ;
  const GALGAS_binaryOperationIR temp_2 = this ;
  const GALGAS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" (").add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 87)) ;
  const GALGAS_binaryOperationIR temp_4 = this ;
  const GALGAS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_4.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".hasOvf = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (extensionGetter_llvmName (temp_5.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)).add_operation (GALGAS_string (".r, 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 88)) ;
  GALGAS_string var_labelName_2577 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 89)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 90)) ;
  const GALGAS_binaryOperationIR temp_6 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".hasOvf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2577, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (var_labelName_2577, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)).add_operation (GALGAS_string (".noovf\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 91)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2577.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 92)) ;
  const GALGAS_binaryOperationIR temp_7 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_7.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 93)) ;
  const GALGAS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (temp_8.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 95)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 96)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_2577.add_operation (GALGAS_string (".noovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 97)) ;
  const GALGAS_binaryOperationIR temp_9 = this ;
  const GALGAS_binaryOperationIR temp_10 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_9.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (" = extractvalue {"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (", i1} "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (extensionGetter_llvmName (temp_10.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)).add_operation (GALGAS_string (".r, 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 98)) ;
  ioArgument_ioGenerationAdds.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("{").add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (", i1} @llvm."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (".with.overflow."), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %a, "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (var_llvmType_2136, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100)).add_operation (GALGAS_string (" %b)"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 100))  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForOverflowOperation (cPtr_binaryOperationIR * inObject,
                                                        const GALGAS_string constin_inOperation,
                                                        const GALGAS_bigint constin_inPanicCode,
                                                        GALGAS_string & io_ioLLVMcode,
                                                        const GALGAS_generationContext constin_inGenerationContext,
                                                        GALGAS_generationAdds & io_ioGenerationAdds,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    inObject->method_enterCodeForOverflowOperation  (constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@binaryOperationIR enterCodeForDivisionWithZeroDivisorPanic'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperationIR::method_enterCodeForDivisionWithZeroDivisorPanic (const GALGAS_string constinArgument_inOperation,
                                                                              const GALGAS_bigint constinArgument_inPanicCode,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                              GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_binaryOperationIR temp_0 = this ;
  GALGAS_string var_llvmType_3907 = callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) temp_0.readProperty_mOperandType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 112)) ;
  const GALGAS_binaryOperationIR temp_1 = this ;
  const GALGAS_binaryOperationIR temp_2 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_1.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (".isZero = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (var_llvmType_3907, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (extensionGetter_llvmName (temp_2.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 113)) ;
  GALGAS_string var_labelName_4078 = GALGAS_string ("label.").add_operation (ioArgument_ioGenerationAdds.readProperty_mUniqueIndex ().getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 114)) ;
  ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 115)) ;
  const GALGAS_binaryOperationIR temp_3 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (temp_3.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".isZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_4078, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".divideByZero, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (var_labelName_4078, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)).add_operation (GALGAS_string (".ok\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 116)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4078.add_operation (GALGAS_string (".divideByZero:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 117)) ;
  const GALGAS_binaryOperationIR temp_4 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @").add_operation (function_panicRoutineNameForLocationFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 118)) ;
  const GALGAS_binaryOperationIR temp_5 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicLineLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (temp_5.readProperty_mLocation ().getter_endLine (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 119)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(callExtensionGetter_llvmTypeName ((const cPtr_omnibusType *) constinArgument_inGenerationContext.readProperty_mPanicCodeLLVMType ().ptr (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (constinArgument_inPanicCode.getter_string (SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 120)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 121)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelName_4078.add_operation (GALGAS_string (".ok:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 122)) ;
  const GALGAS_binaryOperationIR temp_6 = this ;
  const GALGAS_binaryOperationIR temp_7 = this ;
  const GALGAS_binaryOperationIR temp_8 = this ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (temp_6.readProperty_mTarget (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (constinArgument_inOperation, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (var_llvmType_3907, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_7.readProperty_mLeft (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (extensionGetter_llvmName (temp_8.readProperty_mRight (), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic (cPtr_binaryOperationIR * inObject,
                                                                   const GALGAS_string constin_inOperation,
                                                                   const GALGAS_bigint constin_inPanicCode,
                                                                   GALGAS_string & io_ioLLVMcode,
                                                                   const GALGAS_generationContext constin_inGenerationContext,
                                                                   GALGAS_generationAdds & io_ioGenerationAdds,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_binaryOperationIR) ;
    inObject->method_enterCodeForDivisionWithZeroDivisorPanic  (constin_inOperation, constin_inPanicCode, io_ioLLVMcode, constin_inGenerationContext, io_ioGenerationAdds, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @storeToUniversalReferenceIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeToUniversalReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mLLVMTargetVarName.printNonNullClassInstanceProperties ("mLLVMTargetVarName") ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_storeToUniversalReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeToUniversalReferenceIR * p = (const cPtr_storeToUniversalReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_storeToUniversalReferenceIR::objectCompare (const GALGAS_storeToUniversalReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR::GALGAS_storeToUniversalReferenceIR (const cPtr_storeToUniversalReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeToUniversalReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::class_func_new (const GALGAS_string & inAttribute_mLLVMTargetVarName,
                                                                                       const GALGAS_omnibusType & inAttribute_mTargetVarType,
                                                                                       const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  if (inAttribute_mLLVMTargetVarName.isValid () && inAttribute_mTargetVarType.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeToUniversalReferenceIR (inAttribute_mLLVMTargetVarName, inAttribute_mTargetVarType, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeToUniversalReferenceIR::setter_setMLLVMTargetVarName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeToUniversalReferenceIR::setter_setMTargetVarType (GALGAS_omnibusType inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeToUniversalReferenceIR::setter_setMSourceValue (GALGAS_objectIR inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeToUniversalReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_storeToUniversalReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeToUniversalReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeToUniversalReferenceIR * p = (cPtr_storeToUniversalReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeToUniversalReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeToUniversalReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeToUniversalReferenceIR::cPtr_storeToUniversalReferenceIR (const GALGAS_string & in_mLLVMTargetVarName,
                                                                    const GALGAS_omnibusType & in_mTargetVarType,
                                                                    const GALGAS_objectIR & in_mSourceValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mLLVMTargetVarName (in_mLLVMTargetVarName),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mSourceValue (in_mSourceValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeToUniversalReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

void cPtr_storeToUniversalReferenceIR::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("[@storeToUniversalReferenceIR:") ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeToUniversalReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeToUniversalReferenceIR (mProperty_mLLVMTargetVarName, mProperty_mTargetVarType, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeToUniversalReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ("storeToUniversalReferenceIR",
                                                                                   & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeToUniversalReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeToUniversalReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeToUniversalReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeToUniversalReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeToUniversalReferenceIR GALGAS_storeToUniversalReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_storeToUniversalReferenceIR result ;
  const GALGAS_storeToUniversalReferenceIR * p = (const GALGAS_storeToUniversalReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeToUniversalReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeToUniversalReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeFromTemporaryReferenceIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeFromTemporaryReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mLLVMTargetVarName.printNonNullClassInstanceProperties ("mLLVMTargetVarName") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_storeFromTemporaryReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeFromTemporaryReferenceIR * p = (const cPtr_storeFromTemporaryReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMTargetVarName.objectCompare (p->mProperty_mLLVMTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_storeFromTemporaryReferenceIR::objectCompare (const GALGAS_storeFromTemporaryReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR::GALGAS_storeFromTemporaryReferenceIR (const cPtr_storeFromTemporaryReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeFromTemporaryReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::class_func_new (const GALGAS_omnibusType & inAttribute_mTargetVarType,
                                                                                           const GALGAS_string & inAttribute_mLLVMTargetVarName,
                                                                                           const GALGAS_objectIR & inAttribute_mSourceValue
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMTargetVarName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeFromTemporaryReferenceIR (inAttribute_mTargetVarType, inAttribute_mLLVMTargetVarName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeFromTemporaryReferenceIR::setter_setMTargetVarType (GALGAS_omnibusType inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeFromTemporaryReferenceIR::setter_setMLLVMTargetVarName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mLLVMTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeFromTemporaryReferenceIR::setter_setMSourceValue (GALGAS_objectIR inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_storeFromTemporaryReferenceIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeFromTemporaryReferenceIR::readProperty_mLLVMTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mLLVMTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeFromTemporaryReferenceIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeFromTemporaryReferenceIR * p = (cPtr_storeFromTemporaryReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeFromTemporaryReferenceIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeFromTemporaryReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeFromTemporaryReferenceIR::cPtr_storeFromTemporaryReferenceIR (const GALGAS_omnibusType & in_mTargetVarType,
                                                                        const GALGAS_string & in_mLLVMTargetVarName,
                                                                        const GALGAS_objectIR & in_mSourceValue
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mLLVMTargetVarName (in_mLLVMTargetVarName),
mProperty_mSourceValue (in_mSourceValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeFromTemporaryReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

void cPtr_storeFromTemporaryReferenceIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@storeFromTemporaryReferenceIR:") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLLVMTargetVarName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeFromTemporaryReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeFromTemporaryReferenceIR (mProperty_mTargetVarType, mProperty_mLLVMTargetVarName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeFromTemporaryReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ("storeFromTemporaryReferenceIR",
                                                                                     & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeFromTemporaryReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeFromTemporaryReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeFromTemporaryReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeFromTemporaryReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeFromTemporaryReferenceIR GALGAS_storeFromTemporaryReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storeFromTemporaryReferenceIR result ;
  const GALGAS_storeFromTemporaryReferenceIR * p = (const GALGAS_storeFromTemporaryReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeFromTemporaryReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeFromTemporaryReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @standaloneRoutineCallIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_standaloneRoutineCallIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mResult.printNonNullClassInstanceProperties ("mResult") ;
    mProperty_mFunctionMangledName.printNonNullClassInstanceProperties ("mFunctionMangledName") ;
    mProperty_mFunctionNameForGeneration.printNonNullClassInstanceProperties ("mFunctionNameForGeneration") ;
    mProperty_mArgumentList.printNonNullClassInstanceProperties ("mArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_standaloneRoutineCallIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_standaloneRoutineCallIR * p = (const cPtr_standaloneRoutineCallIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mResult.objectCompare (p->mProperty_mResult) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionMangledName.objectCompare (p->mProperty_mFunctionMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionNameForGeneration.objectCompare (p->mProperty_mFunctionNameForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_standaloneRoutineCallIR::objectCompare (const GALGAS_standaloneRoutineCallIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR::GALGAS_standaloneRoutineCallIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR::GALGAS_standaloneRoutineCallIR (const cPtr_standaloneRoutineCallIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_standaloneRoutineCallIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::class_func_new (const GALGAS_objectIR & inAttribute_mResult,
                                                                               const GALGAS_lstring & inAttribute_mFunctionMangledName,
                                                                               const GALGAS_string & inAttribute_mFunctionNameForGeneration,
                                                                               const GALGAS_procCallEffectiveParameterListIR & inAttribute_mArgumentList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR result ;
  if (inAttribute_mResult.isValid () && inAttribute_mFunctionMangledName.isValid () && inAttribute_mFunctionNameForGeneration.isValid () && inAttribute_mArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_standaloneRoutineCallIR (inAttribute_mResult, inAttribute_mFunctionMangledName, inAttribute_mFunctionNameForGeneration, inAttribute_mArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setter_setMResult (GALGAS_objectIR inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mResult = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setter_setMFunctionMangledName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mFunctionMangledName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setter_setMFunctionNameForGeneration (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mFunctionNameForGeneration = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_standaloneRoutineCallIR::setter_setMArgumentList (GALGAS_procCallEffectiveParameterListIR inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_standaloneRoutineCallIR::readProperty_mResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mResult ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_standaloneRoutineCallIR::readProperty_mFunctionMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mFunctionMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_standaloneRoutineCallIR::readProperty_mFunctionNameForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mFunctionNameForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallEffectiveParameterListIR GALGAS_standaloneRoutineCallIR::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_procCallEffectiveParameterListIR () ;
  }else{
    cPtr_standaloneRoutineCallIR * p = (cPtr_standaloneRoutineCallIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_standaloneRoutineCallIR) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @standaloneRoutineCallIR class
//--------------------------------------------------------------------------------------------------

cPtr_standaloneRoutineCallIR::cPtr_standaloneRoutineCallIR (const GALGAS_objectIR & in_mResult,
                                                            const GALGAS_lstring & in_mFunctionMangledName,
                                                            const GALGAS_string & in_mFunctionNameForGeneration,
                                                            const GALGAS_procCallEffectiveParameterListIR & in_mArgumentList
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mResult (in_mResult),
mProperty_mFunctionMangledName (in_mFunctionMangledName),
mProperty_mFunctionNameForGeneration (in_mFunctionNameForGeneration),
mProperty_mArgumentList (in_mArgumentList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_standaloneRoutineCallIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

void cPtr_standaloneRoutineCallIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.addString ("[@standaloneRoutineCallIR:") ;
  mProperty_mResult.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFunctionMangledName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFunctionNameForGeneration.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_standaloneRoutineCallIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_standaloneRoutineCallIR (mProperty_mResult, mProperty_mFunctionMangledName, mProperty_mFunctionNameForGeneration, mProperty_mArgumentList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @standaloneRoutineCallIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_standaloneRoutineCallIR ("standaloneRoutineCallIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_standaloneRoutineCallIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_standaloneRoutineCallIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_standaloneRoutineCallIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_standaloneRoutineCallIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_standaloneRoutineCallIR GALGAS_standaloneRoutineCallIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_standaloneRoutineCallIR result ;
  const GALGAS_standaloneRoutineCallIR * p = (const GALGAS_standaloneRoutineCallIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_standaloneRoutineCallIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("standaloneRoutineCallIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @releaseIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_releaseIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mOmnibusName.printNonNullClassInstanceProperties ("mOmnibusName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_releaseIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_releaseIR * p = (const cPtr_releaseIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_releaseIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOmnibusName.objectCompare (p->mProperty_mOmnibusName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_releaseIR::objectCompare (const GALGAS_releaseIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR::GALGAS_releaseIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR::GALGAS_releaseIR (const cPtr_releaseIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_releaseIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR::class_func_new (const GALGAS_omnibusType & inAttribute_mType,
                                                   const GALGAS_lstring & inAttribute_mOmnibusName
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mOmnibusName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_releaseIR (inAttribute_mType, inAttribute_mOmnibusName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_releaseIR::setter_setMType (GALGAS_omnibusType inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_releaseIR::setter_setMOmnibusName (GALGAS_lstring inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    p->mProperty_mOmnibusName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_releaseIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_releaseIR::readProperty_mOmnibusName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_releaseIR * p = (cPtr_releaseIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_releaseIR) ;
    return p->mProperty_mOmnibusName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @releaseIR class
//--------------------------------------------------------------------------------------------------

cPtr_releaseIR::cPtr_releaseIR (const GALGAS_omnibusType & in_mType,
                                const GALGAS_lstring & in_mOmnibusName
                                COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mOmnibusName (in_mOmnibusName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_releaseIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

void cPtr_releaseIR::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.addString ("[@releaseIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOmnibusName.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_releaseIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_releaseIR (mProperty_mType, mProperty_mOmnibusName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @releaseIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_releaseIR ("releaseIR",
                                                                 & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_releaseIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_releaseIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_releaseIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_releaseIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_releaseIR GALGAS_releaseIR::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_releaseIR result ;
  const GALGAS_releaseIR * p = (const GALGAS_releaseIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_releaseIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("releaseIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @storeIndirectVolatileIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_storeIndirectVolatileIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVarType.printNonNullClassInstanceProperties ("mTargetVarType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mSourceValue.printNonNullClassInstanceProperties ("mSourceValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_storeIndirectVolatileIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_storeIndirectVolatileIR * p = (const cPtr_storeIndirectVolatileIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarType.objectCompare (p->mProperty_mTargetVarType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceValue.objectCompare (p->mProperty_mSourceValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_storeIndirectVolatileIR::objectCompare (const GALGAS_storeIndirectVolatileIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR::GALGAS_storeIndirectVolatileIR (const cPtr_storeIndirectVolatileIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_storeIndirectVolatileIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::class_func_new (const GALGAS_omnibusType & inAttribute_mTargetVarType,
                                                                               const GALGAS_string & inAttribute_mLLVMName,
                                                                               const GALGAS_objectIR & inAttribute_mSourceValue
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  if (inAttribute_mTargetVarType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mSourceValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_storeIndirectVolatileIR (inAttribute_mTargetVarType, inAttribute_mLLVMName, inAttribute_mSourceValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeIndirectVolatileIR::setter_setMTargetVarType (GALGAS_omnibusType inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mTargetVarType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeIndirectVolatileIR::setter_setMLLVMName (GALGAS_string inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_storeIndirectVolatileIR::setter_setMSourceValue (GALGAS_objectIR inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    p->mProperty_mSourceValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_storeIndirectVolatileIR::readProperty_mTargetVarType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mTargetVarType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_storeIndirectVolatileIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_storeIndirectVolatileIR::readProperty_mSourceValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_storeIndirectVolatileIR * p = (cPtr_storeIndirectVolatileIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_storeIndirectVolatileIR) ;
    return p->mProperty_mSourceValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @storeIndirectVolatileIR class
//--------------------------------------------------------------------------------------------------

cPtr_storeIndirectVolatileIR::cPtr_storeIndirectVolatileIR (const GALGAS_omnibusType & in_mTargetVarType,
                                                            const GALGAS_string & in_mLLVMName,
                                                            const GALGAS_objectIR & in_mSourceValue
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTargetVarType (in_mTargetVarType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mSourceValue (in_mSourceValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_storeIndirectVolatileIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

void cPtr_storeIndirectVolatileIR::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.addString ("[@storeIndirectVolatileIR:") ;
  mProperty_mTargetVarType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_storeIndirectVolatileIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_storeIndirectVolatileIR (mProperty_mTargetVarType, mProperty_mLLVMName, mProperty_mSourceValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @storeIndirectVolatileIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_storeIndirectVolatileIR ("storeIndirectVolatileIR",
                                                                               & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_storeIndirectVolatileIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storeIndirectVolatileIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_storeIndirectVolatileIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storeIndirectVolatileIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_storeIndirectVolatileIR GALGAS_storeIndirectVolatileIR::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storeIndirectVolatileIR result ;
  const GALGAS_storeIndirectVolatileIR * p = (const GALGAS_storeIndirectVolatileIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_storeIndirectVolatileIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storeIndirectVolatileIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @copyFromReferencesIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_copyFromReferencesIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mTarget.printNonNullClassInstanceProperties ("mTarget") ;
    mProperty_mSourceLLVMName.printNonNullClassInstanceProperties ("mSourceLLVMName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_copyFromReferencesIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_copyFromReferencesIR * p = (const cPtr_copyFromReferencesIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mTarget.objectCompare (p->mProperty_mTarget) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceLLVMName.objectCompare (p->mProperty_mSourceLLVMName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_copyFromReferencesIR::objectCompare (const GALGAS_copyFromReferencesIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR::GALGAS_copyFromReferencesIR (const cPtr_copyFromReferencesIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_copyFromReferencesIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::class_func_new (const GALGAS_LValueRepresentation & inAttribute_mTarget,
                                                                         const GALGAS_string & inAttribute_mSourceLLVMName
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  if (inAttribute_mTarget.isValid () && inAttribute_mSourceLLVMName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_copyFromReferencesIR (inAttribute_mTarget, inAttribute_mSourceLLVMName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_copyFromReferencesIR::setter_setMTarget (GALGAS_LValueRepresentation inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mTarget = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_copyFromReferencesIR::setter_setMSourceLLVMName (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    p->mProperty_mSourceLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_LValueRepresentation GALGAS_copyFromReferencesIR::readProperty_mTarget (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_LValueRepresentation () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mTarget ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_copyFromReferencesIR::readProperty_mSourceLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_copyFromReferencesIR * p = (cPtr_copyFromReferencesIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_copyFromReferencesIR) ;
    return p->mProperty_mSourceLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @copyFromReferencesIR class
//--------------------------------------------------------------------------------------------------

cPtr_copyFromReferencesIR::cPtr_copyFromReferencesIR (const GALGAS_LValueRepresentation & in_mTarget,
                                                      const GALGAS_string & in_mSourceLLVMName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mTarget (in_mTarget),
mProperty_mSourceLLVMName (in_mSourceLLVMName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_copyFromReferencesIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

void cPtr_copyFromReferencesIR::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("[@copyFromReferencesIR:") ;
  mProperty_mTarget.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceLLVMName.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_copyFromReferencesIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_copyFromReferencesIR (mProperty_mTarget, mProperty_mSourceLLVMName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @copyFromReferencesIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_copyFromReferencesIR ("copyFromReferencesIR",
                                                                            & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_copyFromReferencesIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_copyFromReferencesIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_copyFromReferencesIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_copyFromReferencesIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_copyFromReferencesIR GALGAS_copyFromReferencesIR::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_copyFromReferencesIR result ;
  const GALGAS_copyFromReferencesIR * p = (const GALGAS_copyFromReferencesIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_copyFromReferencesIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("copyFromReferencesIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getUniversalPropertyReferenceIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getUniversalPropertyReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mElementLLVMName.printNonNullClassInstanceProperties ("mElementLLVMName") ;
    mProperty_mPropertyIndex.printNonNullClassInstanceProperties ("mPropertyIndex") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_getUniversalPropertyReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getUniversalPropertyReferenceIR * p = (const cPtr_getUniversalPropertyReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyIndex.objectCompare (p->mProperty_mPropertyIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_getUniversalPropertyReferenceIR::objectCompare (const GALGAS_getUniversalPropertyReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR::GALGAS_getUniversalPropertyReferenceIR (const cPtr_getUniversalPropertyReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalPropertyReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::class_func_new (const GALGAS_omnibusType & inAttribute_mType,
                                                                                               const GALGAS_string & inAttribute_mLLVMName,
                                                                                               const GALGAS_string & inAttribute_mElementLLVMName,
                                                                                               const GALGAS_uint & inAttribute_mPropertyIndex,
                                                                                               const GALGAS_string & inAttribute_mPropertyName
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mElementLLVMName.isValid () && inAttribute_mPropertyIndex.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getUniversalPropertyReferenceIR (inAttribute_mType, inAttribute_mLLVMName, inAttribute_mElementLLVMName, inAttribute_mPropertyIndex, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setter_setMType (GALGAS_omnibusType inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setter_setMLLVMName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setter_setMElementLLVMName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setter_setMPropertyIndex (GALGAS_uint inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalPropertyReferenceIR::setter_setMPropertyName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_getUniversalPropertyReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_getUniversalPropertyReferenceIR::readProperty_mPropertyIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalPropertyReferenceIR::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalPropertyReferenceIR * p = (cPtr_getUniversalPropertyReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalPropertyReferenceIR) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalPropertyReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalPropertyReferenceIR::cPtr_getUniversalPropertyReferenceIR (const GALGAS_omnibusType & in_mType,
                                                                            const GALGAS_string & in_mLLVMName,
                                                                            const GALGAS_string & in_mElementLLVMName,
                                                                            const GALGAS_uint & in_mPropertyIndex,
                                                                            const GALGAS_string & in_mPropertyName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mElementLLVMName (in_mElementLLVMName),
mProperty_mPropertyIndex (in_mPropertyIndex),
mProperty_mPropertyName (in_mPropertyName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getUniversalPropertyReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

void cPtr_getUniversalPropertyReferenceIR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@getUniversalPropertyReferenceIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mPropertyIndex.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getUniversalPropertyReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getUniversalPropertyReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementLLVMName, mProperty_mPropertyIndex, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getUniversalPropertyReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ("getUniversalPropertyReferenceIR",
                                                                                       & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalPropertyReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalPropertyReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalPropertyReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalPropertyReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalPropertyReferenceIR GALGAS_getUniversalPropertyReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalPropertyReferenceIR result ;
  const GALGAS_getUniversalPropertyReferenceIR * p = (const GALGAS_getUniversalPropertyReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getUniversalPropertyReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalPropertyReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getUniversalArrayElementReferenceIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getUniversalArrayElementReferenceIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInstructionIR::printNonNullClassInstanceProperties () ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mLLVMName.printNonNullClassInstanceProperties ("mLLVMName") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mElementLLVMName.printNonNullClassInstanceProperties ("mElementLLVMName") ;
    mProperty_mIndexIR.printNonNullClassInstanceProperties ("mIndexIR") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_getUniversalArrayElementReferenceIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_getUniversalArrayElementReferenceIR * p = (const cPtr_getUniversalArrayElementReferenceIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMName.objectCompare (p->mProperty_mLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementLLVMName.objectCompare (p->mProperty_mElementLLVMName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexIR.objectCompare (p->mProperty_mIndexIR) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_getUniversalArrayElementReferenceIR::objectCompare (const GALGAS_getUniversalArrayElementReferenceIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (void) :
GALGAS_abstractInstructionIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR::GALGAS_getUniversalArrayElementReferenceIR (const cPtr_getUniversalArrayElementReferenceIR * inSourcePtr) :
GALGAS_abstractInstructionIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getUniversalArrayElementReferenceIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::class_func_new (const GALGAS_omnibusType & inAttribute_mType,
                                                                                                       const GALGAS_string & inAttribute_mLLVMName,
                                                                                                       const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                                       const GALGAS_string & inAttribute_mElementLLVMName,
                                                                                                       const GALGAS_objectIR & inAttribute_mIndexIR
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  if (inAttribute_mType.isValid () && inAttribute_mLLVMName.isValid () && inAttribute_mElementType.isValid () && inAttribute_mElementLLVMName.isValid () && inAttribute_mIndexIR.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_getUniversalArrayElementReferenceIR (inAttribute_mType, inAttribute_mLLVMName, inAttribute_mElementType, inAttribute_mElementLLVMName, inAttribute_mIndexIR COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setter_setMType (GALGAS_omnibusType inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setter_setMLLVMName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setter_setMElementType (GALGAS_omnibusType inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setter_setMElementLLVMName (GALGAS_string inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mElementLLVMName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_getUniversalArrayElementReferenceIR::setter_setMIndexIR (GALGAS_objectIR inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    p->mProperty_mIndexIR = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_getUniversalArrayElementReferenceIR::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::readProperty_mLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_getUniversalArrayElementReferenceIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_getUniversalArrayElementReferenceIR::readProperty_mElementLLVMName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mElementLLVMName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_objectIR GALGAS_getUniversalArrayElementReferenceIR::readProperty_mIndexIR (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_objectIR () ;
  }else{
    cPtr_getUniversalArrayElementReferenceIR * p = (cPtr_getUniversalArrayElementReferenceIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getUniversalArrayElementReferenceIR) ;
    return p->mProperty_mIndexIR ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getUniversalArrayElementReferenceIR class
//--------------------------------------------------------------------------------------------------

cPtr_getUniversalArrayElementReferenceIR::cPtr_getUniversalArrayElementReferenceIR (const GALGAS_omnibusType & in_mType,
                                                                                    const GALGAS_string & in_mLLVMName,
                                                                                    const GALGAS_omnibusType & in_mElementType,
                                                                                    const GALGAS_string & in_mElementLLVMName,
                                                                                    const GALGAS_objectIR & in_mIndexIR
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractInstructionIR (THERE),
mProperty_mType (in_mType),
mProperty_mLLVMName (in_mLLVMName),
mProperty_mElementType (in_mElementType),
mProperty_mElementLLVMName (in_mElementLLVMName),
mProperty_mIndexIR (in_mIndexIR) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_getUniversalArrayElementReferenceIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

void cPtr_getUniversalArrayElementReferenceIR::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@getUniversalArrayElementReferenceIR:") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLLVMName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElementLLVMName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIndexIR.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_getUniversalArrayElementReferenceIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getUniversalArrayElementReferenceIR (mProperty_mType, mProperty_mLLVMName, mProperty_mElementType, mProperty_mElementLLVMName, mProperty_mIndexIR COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @getUniversalArrayElementReferenceIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ("getUniversalArrayElementReferenceIR",
                                                                                           & kTypeDescriptor_GALGAS_abstractInstructionIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_getUniversalArrayElementReferenceIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getUniversalArrayElementReferenceIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_getUniversalArrayElementReferenceIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_getUniversalArrayElementReferenceIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_getUniversalArrayElementReferenceIR GALGAS_getUniversalArrayElementReferenceIR::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_getUniversalArrayElementReferenceIR result ;
  const GALGAS_getUniversalArrayElementReferenceIR * p = (const GALGAS_getUniversalArrayElementReferenceIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_getUniversalArrayElementReferenceIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getUniversalArrayElementReferenceIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds::GALGAS_generationAdds (void) :
mProperty_mUniqueIndex (),
mProperty_mExternFunctionDeclarationSet (),
mProperty_mStaticEntityMap (),
mProperty_mUsesGuards (),
mProperty_mNeedsDynamicMemoryAllocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds::~ GALGAS_generationAdds (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds::GALGAS_generationAdds (const GALGAS_uint & inOperand0,
                                              const GALGAS_stringset & inOperand1,
                                              const GALGAS_staticEntityMap & inOperand2,
                                              const GALGAS_bool & inOperand3,
                                              const GALGAS_bool & inOperand4) :
mProperty_mUniqueIndex (inOperand0),
mProperty_mExternFunctionDeclarationSet (inOperand1),
mProperty_mStaticEntityMap (inOperand2),
mProperty_mUsesGuards (inOperand3),
mProperty_mNeedsDynamicMemoryAllocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds GALGAS_generationAdds::class_func_new (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_uint in_mUniqueIndex = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_stringset in_mExternFunctionDeclarationSet = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.galgas", 11)) ;
  const GALGAS_staticEntityMap in_mStaticEntityMap = GALGAS_staticEntityMap::class_func_new (inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 12)) ;
  const GALGAS_bool in_mUsesGuards = GALGAS_bool (false) ;
  const GALGAS_bool in_mNeedsDynamicMemoryAllocation = GALGAS_bool (false) ;
  GALGAS_generationAdds result ;
  if (in_mUniqueIndex.isValid () && in_mExternFunctionDeclarationSet.isValid () && in_mStaticEntityMap.isValid () && in_mUsesGuards.isValid () && in_mNeedsDynamicMemoryAllocation.isValid ()) {
    result = GALGAS_generationAdds (in_mUniqueIndex, in_mExternFunctionDeclarationSet, in_mStaticEntityMap, in_mUsesGuards, in_mNeedsDynamicMemoryAllocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_generationAdds::objectCompare (const GALGAS_generationAdds & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mUniqueIndex.objectCompare (inOperand.mProperty_mUniqueIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternFunctionDeclarationSet.objectCompare (inOperand.mProperty_mExternFunctionDeclarationSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticEntityMap.objectCompare (inOperand.mProperty_mStaticEntityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUsesGuards.objectCompare (inOperand.mProperty_mUsesGuards) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsDynamicMemoryAllocation.objectCompare (inOperand.mProperty_mNeedsDynamicMemoryAllocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generationAdds::isValid (void) const {
  return mProperty_mUniqueIndex.isValid () && mProperty_mExternFunctionDeclarationSet.isValid () && mProperty_mStaticEntityMap.isValid () && mProperty_mUsesGuards.isValid () && mProperty_mNeedsDynamicMemoryAllocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationAdds::drop (void) {
  mProperty_mUniqueIndex.drop () ;
  mProperty_mExternFunctionDeclarationSet.drop () ;
  mProperty_mStaticEntityMap.drop () ;
  mProperty_mUsesGuards.drop () ;
  mProperty_mNeedsDynamicMemoryAllocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationAdds::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.addString ("<struct @generationAdds:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mUniqueIndex.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExternFunctionDeclarationSet.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mStaticEntityMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUsesGuards.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNeedsDynamicMemoryAllocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generationAdds generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationAdds ("generationAdds",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generationAdds::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationAdds ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationAdds::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationAdds (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationAdds GALGAS_generationAdds::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_generationAdds result ;
  const GALGAS_generationAdds * p = (const GALGAS_generationAdds *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generationAdds *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationAdds", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext::GALGAS_generationContext (void) :
mProperty_mPanicCodeLLVMType (),
mProperty_mPanicLineLLVMType (),
mProperty_mNopInstructionInLLVM (),
mProperty_mGlobalTaskVariableList (),
mProperty_mAvailableInterruptMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext::~ GALGAS_generationContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext::GALGAS_generationContext (const GALGAS_omnibusType & inOperand0,
                                                    const GALGAS_omnibusType & inOperand1,
                                                    const GALGAS_string & inOperand2,
                                                    const GALGAS_globalTaskVariableList & inOperand3,
                                                    const GALGAS_availableInterruptMap & inOperand4) :
mProperty_mPanicCodeLLVMType (inOperand0),
mProperty_mPanicLineLLVMType (inOperand1),
mProperty_mNopInstructionInLLVM (inOperand2),
mProperty_mGlobalTaskVariableList (inOperand3),
mProperty_mAvailableInterruptMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext GALGAS_generationContext::class_func_new (const GALGAS_omnibusType & in_mPanicCodeLLVMType,
                                                                   const GALGAS_omnibusType & in_mPanicLineLLVMType,
                                                                   const GALGAS_string & in_mNopInstructionInLLVM,
                                                                   const GALGAS_globalTaskVariableList & in_mGlobalTaskVariableList,
                                                                   const GALGAS_availableInterruptMap & in_mAvailableInterruptMap,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  if (in_mPanicCodeLLVMType.isValid () && in_mPanicLineLLVMType.isValid () && in_mNopInstructionInLLVM.isValid () && in_mGlobalTaskVariableList.isValid () && in_mAvailableInterruptMap.isValid ()) {
    result = GALGAS_generationContext (in_mPanicCodeLLVMType, in_mPanicLineLLVMType, in_mNopInstructionInLLVM, in_mGlobalTaskVariableList, in_mAvailableInterruptMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_generationContext::objectCompare (const GALGAS_generationContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeLLVMType.objectCompare (inOperand.mProperty_mPanicCodeLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineLLVMType.objectCompare (inOperand.mProperty_mPanicLineLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNopInstructionInLLVM.objectCompare (inOperand.mProperty_mNopInstructionInLLVM) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generationContext::isValid (void) const {
  return mProperty_mPanicCodeLLVMType.isValid () && mProperty_mPanicLineLLVMType.isValid () && mProperty_mNopInstructionInLLVM.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mAvailableInterruptMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationContext::drop (void) {
  mProperty_mPanicCodeLLVMType.drop () ;
  mProperty_mPanicLineLLVMType.drop () ;
  mProperty_mNopInstructionInLLVM.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationContext::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.addString ("<struct @generationContext:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mPanicCodeLLVMType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPanicLineLLVMType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNopInstructionInLLVM.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @generationContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationContext ("generationContext",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generationContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationContext GALGAS_generationContext::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_generationContext result ;
  const GALGAS_generationContext * p = (const GALGAS_generationContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generationContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ctIntExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ctIntExpressionAST * p = (const cPtr_ctIntExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ctIntExpressionAST::objectCompare (const GALGAS_ctIntExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST::GALGAS_ctIntExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST::GALGAS_ctIntExpressionAST (const cPtr_ctIntExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST::class_func_new (const GALGAS_lbigint & inAttribute_mValue
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ctIntExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctIntExpressionAST::setter_setMValue (GALGAS_lbigint inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_ctIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_ctIntExpressionAST * p = (cPtr_ctIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIntExpressionAST::cPtr_ctIntExpressionAST (const GALGAS_lbigint & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

void cPtr_ctIntExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("[@ctIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctIntExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIntExpressionAST ("ctIntExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIntExpressionAST GALGAS_ctIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ctIntExpressionAST result ;
  const GALGAS_ctIntExpressionAST * p = (const GALGAS_ctIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ctIdentifierExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ctIdentifierExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_ctExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIdentifier.printNonNullClassInstanceProperties ("mIdentifier") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ctIdentifierExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ctIdentifierExpressionAST * p = (const cPtr_ctIdentifierExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIdentifier.objectCompare (p->mProperty_mIdentifier) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ctIdentifierExpressionAST::objectCompare (const GALGAS_ctIdentifierExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST::GALGAS_ctIdentifierExpressionAST (void) :
GALGAS_ctExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST::GALGAS_ctIdentifierExpressionAST (const cPtr_ctIdentifierExpressionAST * inSourcePtr) :
GALGAS_ctExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ctIdentifierExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST::class_func_new (const GALGAS_lstring & inAttribute_mIdentifier
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST result ;
  if (inAttribute_mIdentifier.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ctIdentifierExpressionAST (inAttribute_mIdentifier COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctIdentifierExpressionAST::setter_setMIdentifier (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    p->mProperty_mIdentifier = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ctIdentifierExpressionAST::readProperty_mIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_ctIdentifierExpressionAST * p = (cPtr_ctIdentifierExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ctIdentifierExpressionAST) ;
    return p->mProperty_mIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ctIdentifierExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ctIdentifierExpressionAST::cPtr_ctIdentifierExpressionAST (const GALGAS_lstring & in_mIdentifier
                                                                COMMA_LOCATION_ARGS) :
cPtr_ctExpressionAST (THERE),
mProperty_mIdentifier (in_mIdentifier) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ctIdentifierExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

void cPtr_ctIdentifierExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("[@ctIdentifierExpressionAST:") ;
  mProperty_mIdentifier.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ctIdentifierExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ctIdentifierExpressionAST (mProperty_mIdentifier COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ctIdentifierExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ("ctIdentifierExpressionAST",
                                                                                 & kTypeDescriptor_GALGAS_ctExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctIdentifierExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctIdentifierExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctIdentifierExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctIdentifierExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctIdentifierExpressionAST GALGAS_ctIdentifierExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ctIdentifierExpressionAST result ;
  const GALGAS_ctIdentifierExpressionAST * p = (const GALGAS_ctIdentifierExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctIdentifierExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctIdentifierExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmGenericType reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmGenericType::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mGenericFormalParameterList.printNonNullClassInstanceProperties ("mGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mBitSize.printNonNullClassInstanceProperties ("mBitSize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmGenericType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmGenericType * p = (const cPtr_llvmGenericType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmGenericType) ;
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenericFormalParameterList.objectCompare (p->mProperty_mGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhereClause.objectCompare (p->mProperty_mWhereClause) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitSize.objectCompare (p->mProperty_mBitSize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmGenericType::objectCompare (const GALGAS_llvmGenericType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType::GALGAS_llvmGenericType (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType::GALGAS_llvmGenericType (const cPtr_llvmGenericType * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmGenericType) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType::class_func_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                               const GALGAS_genericFormalParameterList & inAttribute_mGenericFormalParameterList,
                                                               const GALGAS_ctExpressionAST & inAttribute_mWhereClause,
                                                               const GALGAS_bigint & inAttribute_mBitSize
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenericType result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mGenericFormalParameterList.isValid () && inAttribute_mWhereClause.isValid () && inAttribute_mBitSize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmGenericType (inAttribute_mTypeName, inAttribute_mGenericFormalParameterList, inAttribute_mWhereClause, inAttribute_mBitSize COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setter_setMTypeName (GALGAS_lstring inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setter_setMGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setter_setMWhereClause (GALGAS_ctExpressionAST inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmGenericType::setter_setMBitSize (GALGAS_bigint inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    p->mProperty_mBitSize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmGenericType::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmGenericType::readProperty_mGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_llvmGenericType::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_llvmGenericType::readProperty_mBitSize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_llvmGenericType * p = (cPtr_llvmGenericType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmGenericType) ;
    return p->mProperty_mBitSize ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmGenericType class
//--------------------------------------------------------------------------------------------------

cPtr_llvmGenericType::cPtr_llvmGenericType (const GALGAS_lstring & in_mTypeName,
                                            const GALGAS_genericFormalParameterList & in_mGenericFormalParameterList,
                                            const GALGAS_ctExpressionAST & in_mWhereClause,
                                            const GALGAS_bigint & in_mBitSize
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mGenericFormalParameterList (in_mGenericFormalParameterList),
mProperty_mWhereClause (in_mWhereClause),
mProperty_mBitSize (in_mBitSize) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmGenericType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

void cPtr_llvmGenericType::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.addString ("[@llvmGenericType:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitSize.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmGenericType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmGenericType (mProperty_mTypeName, mProperty_mGenericFormalParameterList, mProperty_mWhereClause, mProperty_mBitSize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmGenericType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmGenericType ("llvmGenericType",
                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmGenericType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmGenericType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmGenericType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmGenericType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenericType GALGAS_llvmGenericType::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_llvmGenericType result ;
  const GALGAS_llvmGenericType * p = (const GALGAS_llvmGenericType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmGenericType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmGenericType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmAssignmentOperatorDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmAssignmentOperatorDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mTargetTypeName.printNonNullClassInstanceProperties ("mTargetTypeName") ;
    mProperty_mTargetGenericFormalParameterList.printNonNullClassInstanceProperties ("mTargetGenericFormalParameterList") ;
    mProperty_mSourceVariableName.printNonNullClassInstanceProperties ("mSourceVariableName") ;
    mProperty_mSourceTypeName.printNonNullClassInstanceProperties ("mSourceTypeName") ;
    mProperty_mSourceGenericFormalParameterList.printNonNullClassInstanceProperties ("mSourceGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mLLVMInstructionList.printNonNullClassInstanceProperties ("mLLVMInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmAssignmentOperatorDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmAssignmentOperatorDeclarationAST * p = (const cPtr_llvmAssignmentOperatorDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVariableName.objectCompare (p->mProperty_mTargetVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetTypeName.objectCompare (p->mProperty_mTargetTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetGenericFormalParameterList.objectCompare (p->mProperty_mTargetGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceVariableName.objectCompare (p->mProperty_mSourceVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceTypeName.objectCompare (p->mProperty_mSourceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceGenericFormalParameterList.objectCompare (p->mProperty_mSourceGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhereClause.objectCompare (p->mProperty_mWhereClause) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLLVMInstructionList.objectCompare (p->mProperty_mLLVMInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmAssignmentOperatorDeclarationAST::objectCompare (const GALGAS_llvmAssignmentOperatorDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST::GALGAS_llvmAssignmentOperatorDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST::GALGAS_llvmAssignmentOperatorDeclarationAST (const cPtr_llvmAssignmentOperatorDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                         const GALGAS_lstring & inAttribute_mTargetVariableName,
                                                                                                         const GALGAS_lstring & inAttribute_mTargetTypeName,
                                                                                                         const GALGAS_genericFormalParameterList & inAttribute_mTargetGenericFormalParameterList,
                                                                                                         const GALGAS_lstring & inAttribute_mSourceVariableName,
                                                                                                         const GALGAS_lstring & inAttribute_mSourceTypeName,
                                                                                                         const GALGAS_genericFormalParameterList & inAttribute_mSourceGenericFormalParameterList,
                                                                                                         const GALGAS_ctExpressionAST & inAttribute_mWhereClause,
                                                                                                         const GALGAS_llvmGenerationInstructionList & inAttribute_mLLVMInstructionList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mTargetVariableName.isValid () && inAttribute_mTargetTypeName.isValid () && inAttribute_mTargetGenericFormalParameterList.isValid () && inAttribute_mSourceVariableName.isValid () && inAttribute_mSourceTypeName.isValid () && inAttribute_mSourceGenericFormalParameterList.isValid () && inAttribute_mWhereClause.isValid () && inAttribute_mLLVMInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmAssignmentOperatorDeclarationAST (inAttribute_mOperatorLocation, inAttribute_mTargetVariableName, inAttribute_mTargetTypeName, inAttribute_mTargetGenericFormalParameterList, inAttribute_mSourceVariableName, inAttribute_mSourceTypeName, inAttribute_mSourceGenericFormalParameterList, inAttribute_mWhereClause, inAttribute_mLLVMInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMTargetVariableName (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMTargetTypeName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMTargetGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMSourceVariableName (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMSourceTypeName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMSourceGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMWhereClause (GALGAS_ctExpressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorDeclarationAST::setter_setMLLVMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    p->mProperty_mLLVMInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmAssignmentOperatorDeclarationAST::readProperty_mLLVMInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorDeclarationAST * p = (cPtr_llvmAssignmentOperatorDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorDeclarationAST) ;
    return p->mProperty_mLLVMInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorDeclarationAST::cPtr_llvmAssignmentOperatorDeclarationAST (const GALGAS_location & in_mOperatorLocation,
                                                                                      const GALGAS_lstring & in_mTargetVariableName,
                                                                                      const GALGAS_lstring & in_mTargetTypeName,
                                                                                      const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                                      const GALGAS_lstring & in_mSourceVariableName,
                                                                                      const GALGAS_lstring & in_mSourceTypeName,
                                                                                      const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                                      const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                                      const GALGAS_llvmGenerationInstructionList & in_mLLVMInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mTargetVariableName (in_mTargetVariableName),
mProperty_mTargetTypeName (in_mTargetTypeName),
mProperty_mTargetGenericFormalParameterList (in_mTargetGenericFormalParameterList),
mProperty_mSourceVariableName (in_mSourceVariableName),
mProperty_mSourceTypeName (in_mSourceTypeName),
mProperty_mSourceGenericFormalParameterList (in_mSourceGenericFormalParameterList),
mProperty_mWhereClause (in_mWhereClause),
mProperty_mLLVMInstructionList (in_mLLVMInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmAssignmentOperatorDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

void cPtr_llvmAssignmentOperatorDeclarationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("[@llvmAssignmentOperatorDeclarationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceVariableName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceTypeName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLLVMInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmAssignmentOperatorDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmAssignmentOperatorDeclarationAST (mProperty_mOperatorLocation, mProperty_mTargetVariableName, mProperty_mTargetTypeName, mProperty_mTargetGenericFormalParameterList, mProperty_mSourceVariableName, mProperty_mSourceTypeName, mProperty_mSourceGenericFormalParameterList, mProperty_mWhereClause, mProperty_mLLVMInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ("llvmAssignmentOperatorDeclarationAST",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorDeclarationAST GALGAS_llvmAssignmentOperatorDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorDeclarationAST result ;
  const GALGAS_llvmAssignmentOperatorDeclarationAST * p = (const GALGAS_llvmAssignmentOperatorDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmAssignmentOperatorDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmAssignmentOperatorUsage reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmAssignmentOperatorUsage::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractAssignmentOperatorUsage::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mTargetGenericFormalParameterList.printNonNullClassInstanceProperties ("mTargetGenericFormalParameterList") ;
    mProperty_mSourceTpe.printNonNullClassInstanceProperties ("mSourceTpe") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mSourceGenericFormalParameterList.printNonNullClassInstanceProperties ("mSourceGenericFormalParameterList") ;
    mProperty_mWhereClause.printNonNullClassInstanceProperties ("mWhereClause") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmAssignmentOperatorUsage::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmAssignmentOperatorUsage * p = (const cPtr_llvmAssignmentOperatorUsage *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetGenericFormalParameterList.objectCompare (p->mProperty_mTargetGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceTpe.objectCompare (p->mProperty_mSourceTpe) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceGenericFormalParameterList.objectCompare (p->mProperty_mSourceGenericFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhereClause.objectCompare (p->mProperty_mWhereClause) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmAssignmentOperatorUsage::objectCompare (const GALGAS_llvmAssignmentOperatorUsage & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage::GALGAS_llvmAssignmentOperatorUsage (void) :
GALGAS_abstractAssignmentOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage::GALGAS_llvmAssignmentOperatorUsage (const cPtr_llvmAssignmentOperatorUsage * inSourcePtr) :
GALGAS_abstractAssignmentOperatorUsage (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmAssignmentOperatorUsage) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage::class_func_new (const GALGAS_omnibusType & inAttribute_mTargetType,
                                                                                       const GALGAS_lstring & inAttribute_mTargetVarName,
                                                                                       const GALGAS_genericFormalParameterList & inAttribute_mTargetGenericFormalParameterList,
                                                                                       const GALGAS_omnibusType & inAttribute_mSourceTpe,
                                                                                       const GALGAS_lstring & inAttribute_mSourceVarName,
                                                                                       const GALGAS_genericFormalParameterList & inAttribute_mSourceGenericFormalParameterList,
                                                                                       const GALGAS_ctExpressionAST & inAttribute_mWhereClause,
                                                                                       const GALGAS_llvmGenerationInstructionList & inAttribute_mInstructionList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage result ;
  if (inAttribute_mTargetType.isValid () && inAttribute_mTargetVarName.isValid () && inAttribute_mTargetGenericFormalParameterList.isValid () && inAttribute_mSourceTpe.isValid () && inAttribute_mSourceVarName.isValid () && inAttribute_mSourceGenericFormalParameterList.isValid () && inAttribute_mWhereClause.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmAssignmentOperatorUsage (inAttribute_mTargetType, inAttribute_mTargetVarName, inAttribute_mTargetGenericFormalParameterList, inAttribute_mSourceTpe, inAttribute_mSourceVarName, inAttribute_mSourceGenericFormalParameterList, inAttribute_mWhereClause, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMTargetType (GALGAS_omnibusType inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMTargetVarName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMTargetGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mTargetGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMSourceTpe (GALGAS_omnibusType inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceTpe = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMSourceVarName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMSourceGenericFormalParameterList (GALGAS_genericFormalParameterList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mSourceGenericFormalParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMWhereClause (GALGAS_ctExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mWhereClause = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmAssignmentOperatorUsage::setter_setMInstructionList (GALGAS_llvmGenerationInstructionList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_llvmAssignmentOperatorUsage::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorUsage::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorUsage::readProperty_mTargetGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mTargetGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_llvmAssignmentOperatorUsage::readProperty_mSourceTpe (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceTpe ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmAssignmentOperatorUsage::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericFormalParameterList GALGAS_llvmAssignmentOperatorUsage::readProperty_mSourceGenericFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_genericFormalParameterList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mSourceGenericFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctExpressionAST GALGAS_llvmAssignmentOperatorUsage::readProperty_mWhereClause (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ctExpressionAST () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mWhereClause ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmGenerationInstructionList GALGAS_llvmAssignmentOperatorUsage::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_llvmGenerationInstructionList () ;
  }else{
    cPtr_llvmAssignmentOperatorUsage * p = (cPtr_llvmAssignmentOperatorUsage *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmAssignmentOperatorUsage) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmAssignmentOperatorUsage class
//--------------------------------------------------------------------------------------------------

cPtr_llvmAssignmentOperatorUsage::cPtr_llvmAssignmentOperatorUsage (const GALGAS_omnibusType & in_mTargetType,
                                                                    const GALGAS_lstring & in_mTargetVarName,
                                                                    const GALGAS_genericFormalParameterList & in_mTargetGenericFormalParameterList,
                                                                    const GALGAS_omnibusType & in_mSourceTpe,
                                                                    const GALGAS_lstring & in_mSourceVarName,
                                                                    const GALGAS_genericFormalParameterList & in_mSourceGenericFormalParameterList,
                                                                    const GALGAS_ctExpressionAST & in_mWhereClause,
                                                                    const GALGAS_llvmGenerationInstructionList & in_mInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractAssignmentOperatorUsage (THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mTargetGenericFormalParameterList (in_mTargetGenericFormalParameterList),
mProperty_mSourceTpe (in_mSourceTpe),
mProperty_mSourceVarName (in_mSourceVarName),
mProperty_mSourceGenericFormalParameterList (in_mSourceGenericFormalParameterList),
mProperty_mWhereClause (in_mWhereClause),
mProperty_mInstructionList (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmAssignmentOperatorUsage::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

void cPtr_llvmAssignmentOperatorUsage::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("[@llvmAssignmentOperatorUsage:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceTpe.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceGenericFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhereClause.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmAssignmentOperatorUsage::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmAssignmentOperatorUsage (mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mTargetGenericFormalParameterList, mProperty_mSourceTpe, mProperty_mSourceVarName, mProperty_mSourceGenericFormalParameterList, mProperty_mWhereClause, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmAssignmentOperatorUsage generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ("llvmAssignmentOperatorUsage",
                                                                                   & kTypeDescriptor_GALGAS_abstractAssignmentOperatorUsage) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmAssignmentOperatorUsage::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmAssignmentOperatorUsage ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmAssignmentOperatorUsage::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmAssignmentOperatorUsage (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmAssignmentOperatorUsage GALGAS_llvmAssignmentOperatorUsage::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_llvmAssignmentOperatorUsage result ;
  const GALGAS_llvmAssignmentOperatorUsage * p = (const GALGAS_llvmAssignmentOperatorUsage *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmAssignmentOperatorUsage *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmAssignmentOperatorUsage", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentRoutineIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVarName.printNonNullClassInstanceProperties ("mTargetVarName") ;
    mProperty_mSourceType.printNonNullClassInstanceProperties ("mSourceType") ;
    mProperty_mSourceVarName.printNonNullClassInstanceProperties ("mSourceVarName") ;
    mProperty_mGeneratedInstructions.printNonNullClassInstanceProperties ("mGeneratedInstructions") ;
    mProperty_mAllocaList.printNonNullClassInstanceProperties ("mAllocaList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignmentRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentRoutineIR * p = (const cPtr_assignmentRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetVarName.objectCompare (p->mProperty_mTargetVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceType.objectCompare (p->mProperty_mSourceType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceVarName.objectCompare (p->mProperty_mSourceVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGeneratedInstructions.objectCompare (p->mProperty_mGeneratedInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllocaList.objectCompare (p->mProperty_mAllocaList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentRoutineIR::objectCompare (const GALGAS_assignmentRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR::GALGAS_assignmentRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR::GALGAS_assignmentRoutineIR (const cPtr_assignmentRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR::class_func_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                       const GALGAS_bool & inAttribute_isRequired,
                                                                       const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                       const GALGAS_omnibusType & inAttribute_mTargetType,
                                                                       const GALGAS_string & inAttribute_mTargetVarName,
                                                                       const GALGAS_omnibusType & inAttribute_mSourceType,
                                                                       const GALGAS_string & inAttribute_mSourceVarName,
                                                                       const GALGAS_stringlist & inAttribute_mGeneratedInstructions,
                                                                       const GALGAS_allocaList & inAttribute_mAllocaList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mTargetType.isValid () && inAttribute_mTargetVarName.isValid () && inAttribute_mSourceType.isValid () && inAttribute_mSourceVarName.isValid () && inAttribute_mGeneratedInstructions.isValid () && inAttribute_mAllocaList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mTargetType, inAttribute_mTargetVarName, inAttribute_mSourceType, inAttribute_mSourceVarName, inAttribute_mGeneratedInstructions, inAttribute_mAllocaList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setter_setMTargetType (GALGAS_omnibusType inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setter_setMTargetVarName (GALGAS_string inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mTargetVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setter_setMSourceType (GALGAS_omnibusType inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setter_setMSourceVarName (GALGAS_string inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mSourceVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setter_setMGeneratedInstructions (GALGAS_stringlist inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mGeneratedInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentRoutineIR::setter_setMAllocaList (GALGAS_allocaList inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    p->mProperty_mAllocaList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignmentRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentRoutineIR::readProperty_mTargetVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mTargetVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignmentRoutineIR::readProperty_mSourceType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_assignmentRoutineIR::readProperty_mSourceVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mSourceVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_assignmentRoutineIR::readProperty_mGeneratedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mGeneratedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList GALGAS_assignmentRoutineIR::readProperty_mAllocaList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_allocaList () ;
  }else{
    cPtr_assignmentRoutineIR * p = (cPtr_assignmentRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentRoutineIR) ;
    return p->mProperty_mAllocaList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentRoutineIR::cPtr_assignmentRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                    const GALGAS_bool & in_isRequired,
                                                    const GALGAS_bool & in_warnsIfUnused,
                                                    const GALGAS_omnibusType & in_mTargetType,
                                                    const GALGAS_string & in_mTargetVarName,
                                                    const GALGAS_omnibusType & in_mSourceType,
                                                    const GALGAS_string & in_mSourceVarName,
                                                    const GALGAS_stringlist & in_mGeneratedInstructions,
                                                    const GALGAS_allocaList & in_mAllocaList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mTargetType (in_mTargetType),
mProperty_mTargetVarName (in_mTargetVarName),
mProperty_mSourceType (in_mSourceType),
mProperty_mSourceVarName (in_mSourceVarName),
mProperty_mGeneratedInstructions (in_mGeneratedInstructions),
mProperty_mAllocaList (in_mAllocaList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

void cPtr_assignmentRoutineIR::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.addString ("[@assignmentRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetVarName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceVarName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mGeneratedInstructions.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mAllocaList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType, mProperty_mTargetVarName, mProperty_mSourceType, mProperty_mSourceVarName, mProperty_mGeneratedInstructions, mProperty_mAllocaList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignmentRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentRoutineIR ("assignmentRoutineIR",
                                                                           & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentRoutineIR GALGAS_assignmentRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_assignmentRoutineIR result ;
  const GALGAS_assignmentRoutineIR * p = (const GALGAS_assignmentRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @simpleAssignmentCopyRoutineIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_simpleAssignmentCopyRoutineIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_simpleAssignmentCopyRoutineIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_simpleAssignmentCopyRoutineIR * p = (const cPtr_simpleAssignmentCopyRoutineIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetType.objectCompare (p->mProperty_mTargetType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_simpleAssignmentCopyRoutineIR::objectCompare (const GALGAS_simpleAssignmentCopyRoutineIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR::GALGAS_simpleAssignmentCopyRoutineIR (void) :
GALGAS_abstractRoutineIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR::GALGAS_simpleAssignmentCopyRoutineIR (const cPtr_simpleAssignmentCopyRoutineIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_simpleAssignmentCopyRoutineIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR::class_func_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                           const GALGAS_bool & inAttribute_isRequired,
                                                                                           const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                           const GALGAS_omnibusType & inAttribute_mTargetType
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mTargetType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_simpleAssignmentCopyRoutineIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mTargetType COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_simpleAssignmentCopyRoutineIR::setter_setMTargetType (GALGAS_omnibusType inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    p->mProperty_mTargetType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_simpleAssignmentCopyRoutineIR::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_simpleAssignmentCopyRoutineIR * p = (cPtr_simpleAssignmentCopyRoutineIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_simpleAssignmentCopyRoutineIR) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @simpleAssignmentCopyRoutineIR class
//--------------------------------------------------------------------------------------------------

cPtr_simpleAssignmentCopyRoutineIR::cPtr_simpleAssignmentCopyRoutineIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                        const GALGAS_bool & in_isRequired,
                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                        const GALGAS_omnibusType & in_mTargetType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mTargetType (in_mTargetType) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_simpleAssignmentCopyRoutineIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

void cPtr_simpleAssignmentCopyRoutineIR::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("[@simpleAssignmentCopyRoutineIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_simpleAssignmentCopyRoutineIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_simpleAssignmentCopyRoutineIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mTargetType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @simpleAssignmentCopyRoutineIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ("simpleAssignmentCopyRoutineIR",
                                                                                     & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_simpleAssignmentCopyRoutineIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleAssignmentCopyRoutineIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_simpleAssignmentCopyRoutineIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleAssignmentCopyRoutineIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleAssignmentCopyRoutineIR GALGAS_simpleAssignmentCopyRoutineIR::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_simpleAssignmentCopyRoutineIR result ;
  const GALGAS_simpleAssignmentCopyRoutineIR * p = (const GALGAS_simpleAssignmentCopyRoutineIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_simpleAssignmentCopyRoutineIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleAssignmentCopyRoutineIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @llvmVarInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_llvmVarInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLLVMInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_llvmVarInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_llvmVarInstruction * p = (const cPtr_llvmVarInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mVariableName.objectCompare (p->mProperty_mVariableName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_llvmVarInstruction::objectCompare (const GALGAS_llvmVarInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction::GALGAS_llvmVarInstruction (void) :
GALGAS_abstractLLVMInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction::GALGAS_llvmVarInstruction (const cPtr_llvmVarInstruction * inSourcePtr) :
GALGAS_abstractLLVMInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_llvmVarInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction::class_func_new (const GALGAS_lstring & inAttribute_mVariableName
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_llvmVarInstruction result ;
  if (inAttribute_mVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_llvmVarInstruction (inAttribute_mVariableName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_llvmVarInstruction::setter_setMVariableName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
    p->mProperty_mVariableName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_llvmVarInstruction::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_llvmVarInstruction * p = (cPtr_llvmVarInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_llvmVarInstruction) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @llvmVarInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_llvmVarInstruction::cPtr_llvmVarInstruction (const GALGAS_lstring & in_mVariableName
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractLLVMInstruction (THERE),
mProperty_mVariableName (in_mVariableName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_llvmVarInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction ;
}

void cPtr_llvmVarInstruction::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("[@llvmVarInstruction:") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_llvmVarInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_llvmVarInstruction (mProperty_mVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @llvmVarInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_llvmVarInstruction ("llvmVarInstruction",
                                                                          & kTypeDescriptor_GALGAS_abstractLLVMInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_llvmVarInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_llvmVarInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_llvmVarInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_llvmVarInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_llvmVarInstruction GALGAS_llvmVarInstruction::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_llvmVarInstruction result ;
  const GALGAS_llvmVarInstruction * p = (const GALGAS_llvmVarInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_llvmVarInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("llvmVarInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::class_func_new (const GALGAS_lstring & in_mValue0,
                                                                                     const GALGAS_lstring & in_mValue1,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  if (in_mValue0.isValid () && in_mValue1.isValid ()) {
    result = GALGAS__32_lstringlist_2D_element (in_mValue0, in_mValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mValue_30_.objectCompare (inOperand.mProperty_mValue_30_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue_31_.objectCompare (inOperand.mProperty_mValue_31_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("<struct @2lstringlist-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (void) :
mProperty_mInterruptName (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element::~ GALGAS_interruptionConfigurationList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element::GALGAS_interruptionConfigurationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_mInterruptName (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::class_func_new (const GALGAS_lstring & in_mInterruptName,
                                                                                                                 const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                                 Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  if (in_mInterruptName.isValid () && in_mInterruptionPanicCode.isValid ()) {
    result = GALGAS_interruptionConfigurationList_2D_element (in_mInterruptName, in_mInterruptionPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_interruptionConfigurationList_2D_element::objectCompare (const GALGAS_interruptionConfigurationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInterruptName.objectCompare (inOperand.mProperty_mInterruptName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptionConfigurationList_2D_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList_2D_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptionConfigurationList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("<struct @interruptionConfigurationList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mInterruptName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @interruptionConfigurationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ("interruptionConfigurationList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptionConfigurationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptionConfigurationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptionConfigurationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptionConfigurationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList_2D_element GALGAS_interruptionConfigurationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_interruptionConfigurationList_2D_element result ;
  const GALGAS_interruptionConfigurationList_2D_element * p = (const GALGAS_interruptionConfigurationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptionConfigurationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptionConfigurationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (void) :
mProperty_lkey (),
mProperty_mObjectState (),
mProperty_mObjectShouldBeValuedAtEndOfScope (),
mProperty_mValuedObject () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element::~ GALGAS_flatValuedObjectMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element::GALGAS_flatValuedObjectMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_valuedObjectState & inOperand1,
                                                                              const GALGAS_bool & inOperand2,
                                                                              const GALGAS_valuedObject & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mObjectState (inOperand1),
mProperty_mObjectShouldBeValuedAtEndOfScope (inOperand2),
mProperty_mValuedObject (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_valuedObjectState & in_mObjectState,
                                                                                             const GALGAS_bool & in_mObjectShouldBeValuedAtEndOfScope,
                                                                                             const GALGAS_valuedObject & in_mValuedObject,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  if (in_lkey.isValid () && in_mObjectState.isValid () && in_mObjectShouldBeValuedAtEndOfScope.isValid () && in_mValuedObject.isValid ()) {
    result = GALGAS_flatValuedObjectMap_2D_element (in_lkey, in_mObjectState, in_mObjectShouldBeValuedAtEndOfScope, in_mValuedObject) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_flatValuedObjectMap_2D_element::objectCompare (const GALGAS_flatValuedObjectMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectState.objectCompare (inOperand.mProperty_mObjectState) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectShouldBeValuedAtEndOfScope.objectCompare (inOperand.mProperty_mObjectShouldBeValuedAtEndOfScope) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValuedObject.objectCompare (inOperand.mProperty_mValuedObject) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_flatValuedObjectMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObjectState.isValid () && mProperty_mObjectShouldBeValuedAtEndOfScope.isValid () && mProperty_mValuedObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObjectState.drop () ;
  mProperty_mObjectShouldBeValuedAtEndOfScope.drop () ;
  mProperty_mValuedObject.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_flatValuedObjectMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("<struct @flatValuedObjectMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mObjectState.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mObjectShouldBeValuedAtEndOfScope.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValuedObject.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @flatValuedObjectMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ("flatValuedObjectMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_flatValuedObjectMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_flatValuedObjectMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_flatValuedObjectMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_flatValuedObjectMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_flatValuedObjectMap_2D_element GALGAS_flatValuedObjectMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_flatValuedObjectMap_2D_element result ;
  const GALGAS_flatValuedObjectMap_2D_element * p = (const GALGAS_flatValuedObjectMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_flatValuedObjectMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("flatValuedObjectMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (void) :
mProperty_lkey (),
mProperty_mState () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element::~ GALGAS_referenceStateMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element::GALGAS_referenceStateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_valuedObjectState & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mState (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_valuedObjectState & in_mState,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  if (in_lkey.isValid () && in_mState.isValid ()) {
    result = GALGAS_referenceStateMap_2D_element (in_lkey, in_mState) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_referenceStateMap_2D_element::objectCompare (const GALGAS_referenceStateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mState.objectCompare (inOperand.mProperty_mState) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_referenceStateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mState.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mState.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_referenceStateMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @referenceStateMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mState.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @referenceStateMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_referenceStateMap_2D_element ("referenceStateMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_referenceStateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_referenceStateMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_referenceStateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_referenceStateMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_referenceStateMap_2D_element GALGAS_referenceStateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_referenceStateMap_2D_element result ;
  const GALGAS_referenceStateMap_2D_element * p = (const GALGAS_referenceStateMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_referenceStateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("referenceStateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element::GALGAS_typeConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstantMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element::~ GALGAS_typeConstantMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element::GALGAS_typeConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_constantMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstantMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element GALGAS_typeConstantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_constantMap & in_mConstantMap,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeConstantMap_2D_element result ;
  if (in_lkey.isValid () && in_mConstantMap.isValid ()) {
    result = GALGAS_typeConstantMap_2D_element (in_lkey, in_mConstantMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeConstantMap_2D_element::objectCompare (const GALGAS_typeConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantMap.objectCompare (inOperand.mProperty_mConstantMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstantMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("<struct @typeConstantMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConstantMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeConstantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstantMap_2D_element ("typeConstantMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstantMap_2D_element GALGAS_typeConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeConstantMap_2D_element result ;
  const GALGAS_typeConstantMap_2D_element * p = (const GALGAS_typeConstantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mClassTypeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::~ GALGAS_constantMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element::GALGAS_constantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_bigint & inOperand1,
                                                              const GALGAS_lstring & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mClassTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_bigint & in_mIndex,
                                                                             const GALGAS_lstring & in_mClassTypeName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid () && in_mClassTypeName.isValid ()) {
    result = GALGAS_constantMap_2D_element (in_lkey, in_mIndex, in_mClassTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constantMap_2D_element::objectCompare (const GALGAS_constantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassTypeName.objectCompare (inOperand.mProperty_mClassTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mClassTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mClassTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constantMap_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @constantMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constantMap_2D_element ("constantMap-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constantMap_2D_element GALGAS_constantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_constantMap_2D_element result ;
  const GALGAS_constantMap_2D_element * p = (const GALGAS_constantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element::GALGAS_typeConstructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConstructorMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element::~ GALGAS_typeConstructorMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element::GALGAS_typeConstructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_constructorMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConstructorMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element GALGAS_typeConstructorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_constructorMap & in_mConstructorMap,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeConstructorMap_2D_element result ;
  if (in_lkey.isValid () && in_mConstructorMap.isValid ()) {
    result = GALGAS_typeConstructorMap_2D_element (in_lkey, in_mConstructorMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeConstructorMap_2D_element::objectCompare (const GALGAS_typeConstructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstructorMap.objectCompare (inOperand.mProperty_mConstructorMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeConstructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstructorMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstructorMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeConstructorMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @typeConstructorMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConstructorMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeConstructorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeConstructorMap_2D_element ("typeConstructorMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeConstructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeConstructorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeConstructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeConstructorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeConstructorMap_2D_element GALGAS_typeConstructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typeConstructorMap_2D_element result ;
  const GALGAS_typeConstructorMap_2D_element * p = (const GALGAS_typeConstructorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeConstructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeConstructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (void) :
mProperty_mSelector (),
mProperty_mType (),
mProperty_mFieldIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element::~ GALGAS_constructorSignature_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element::GALGAS_constructorSignature_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_omnibusType & inOperand1,
                                                                                const GALGAS_uint & inOperand2) :
mProperty_mSelector (inOperand0),
mProperty_mType (inOperand1),
mProperty_mFieldIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::class_func_new (const GALGAS_string & in_mSelector,
                                                                                               const GALGAS_omnibusType & in_mType,
                                                                                               const GALGAS_uint & in_mFieldIndex,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  if (in_mSelector.isValid () && in_mType.isValid () && in_mFieldIndex.isValid ()) {
    result = GALGAS_constructorSignature_2D_element (in_mSelector, in_mType, in_mFieldIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constructorSignature_2D_element::objectCompare (const GALGAS_constructorSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldIndex.objectCompare (inOperand.mProperty_mFieldIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorSignature_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mType.isValid () && mProperty_mFieldIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mType.drop () ;
  mProperty_mFieldIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorSignature_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @constructorSignature-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFieldIndex.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorSignature-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorSignature_2D_element ("constructorSignature-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorSignature_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorSignature_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorSignature_2D_element GALGAS_constructorSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_constructorSignature_2D_element result ;
  const GALGAS_constructorSignature_2D_element * p = (const GALGAS_constructorSignature_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSignature (),
mProperty_mInitValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::~ GALGAS_constructorMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element::GALGAS_constructorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_constructorSignature & inOperand1,
                                                                    const GALGAS_constructorValue & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSignature (inOperand1),
mProperty_mInitValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_constructorSignature & in_mSignature,
                                                                                   const GALGAS_constructorValue & in_mInitValue,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  if (in_lkey.isValid () && in_mSignature.isValid () && in_mInitValue.isValid ()) {
    result = GALGAS_constructorMap_2D_element (in_lkey, in_mSignature, in_mInitValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_constructorMap_2D_element::objectCompare (const GALGAS_constructorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitValue.objectCompare (inOperand.mProperty_mInitValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_constructorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignature.isValid () && mProperty_mInitValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mInitValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_constructorMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @constructorMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInitValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @constructorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_constructorMap_2D_element ("constructorMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_constructorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constructorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_constructorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_constructorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_constructorMap_2D_element GALGAS_constructorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_constructorMap_2D_element result ;
  const GALGAS_constructorMap_2D_element * p = (const GALGAS_constructorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_constructorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constructorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element::GALGAS_typePropertyGetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mGetterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element::~ GALGAS_typePropertyGetterMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element::GALGAS_typePropertyGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertyGetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mGetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element GALGAS_typePropertyGetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_propertyGetterMap & in_mGetterMap,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap_2D_element result ;
  if (in_lkey.isValid () && in_mGetterMap.isValid ()) {
    result = GALGAS_typePropertyGetterMap_2D_element (in_lkey, in_mGetterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typePropertyGetterMap_2D_element::objectCompare (const GALGAS_typePropertyGetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGetterMap.objectCompare (inOperand.mProperty_mGetterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typePropertyGetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertyGetterMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @typePropertyGetterMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGetterMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePropertyGetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertyGetterMap_2D_element ("typePropertyGetterMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertyGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertyGetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertyGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertyGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertyGetterMap_2D_element GALGAS_typePropertyGetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typePropertyGetterMap_2D_element result ;
  const GALGAS_typePropertyGetterMap_2D_element * p = (const GALGAS_typePropertyGetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePropertyGetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertyGetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element::GALGAS_propertyGetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element::~ GALGAS_propertyGetterMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element::GALGAS_propertyGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_propertyVisibility & inOperand1,
                                                                          const GALGAS_propertyGetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element GALGAS_propertyGetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_propertyVisibility & in_mVisibility,
                                                                                         const GALGAS_propertyGetterKind & in_mAccess,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterMap_2D_element result ;
  if (in_lkey.isValid () && in_mVisibility.isValid () && in_mAccess.isValid ()) {
    result = GALGAS_propertyGetterMap_2D_element (in_lkey, in_mVisibility, in_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyGetterMap_2D_element::objectCompare (const GALGAS_propertyGetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVisibility.objectCompare (inOperand.mProperty_mVisibility) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGetterMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @propertyGetterMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mVisibility.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ("propertyGetterMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap_2D_element GALGAS_propertyGetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyGetterMap_2D_element result ;
  const GALGAS_propertyGetterMap_2D_element * p = (const GALGAS_propertyGetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element::GALGAS_typePropertySetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSetterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element::~ GALGAS_typePropertySetterMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element::GALGAS_typePropertySetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_propertySetterMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mSetterMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element GALGAS_typePropertySetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_propertySetterMap & in_mSetterMap,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap_2D_element result ;
  if (in_lkey.isValid () && in_mSetterMap.isValid ()) {
    result = GALGAS_typePropertySetterMap_2D_element (in_lkey, in_mSetterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typePropertySetterMap_2D_element::objectCompare (const GALGAS_typePropertySetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSetterMap.objectCompare (inOperand.mProperty_mSetterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typePropertySetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSetterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSetterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typePropertySetterMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @typePropertySetterMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSetterMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePropertySetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePropertySetterMap_2D_element ("typePropertySetterMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePropertySetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePropertySetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePropertySetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePropertySetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePropertySetterMap_2D_element GALGAS_typePropertySetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typePropertySetterMap_2D_element result ;
  const GALGAS_typePropertySetterMap_2D_element * p = (const GALGAS_typePropertySetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePropertySetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePropertySetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element::GALGAS_propertySetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mVisibility (),
mProperty_mAccess () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element::~ GALGAS_propertySetterMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element::GALGAS_propertySetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_propertyVisibility & inOperand1,
                                                                          const GALGAS_propertySetterKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mVisibility (inOperand1),
mProperty_mAccess (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element GALGAS_propertySetterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_propertyVisibility & in_mVisibility,
                                                                                         const GALGAS_propertySetterKind & in_mAccess,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap_2D_element result ;
  if (in_lkey.isValid () && in_mVisibility.isValid () && in_mAccess.isValid ()) {
    result = GALGAS_propertySetterMap_2D_element (in_lkey, in_mVisibility, in_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertySetterMap_2D_element::objectCompare (const GALGAS_propertySetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVisibility.objectCompare (inOperand.mProperty_mVisibility) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccess.objectCompare (inOperand.mProperty_mAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertySetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVisibility.isValid () && mProperty_mAccess.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVisibility.drop () ;
  mProperty_mAccess.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertySetterMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @propertySetterMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mVisibility.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAccess.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertySetterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertySetterMap_2D_element ("propertySetterMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertySetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertySetterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertySetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertySetterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap_2D_element GALGAS_propertySetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertySetterMap_2D_element result ;
  const GALGAS_propertySetterMap_2D_element * p = (const GALGAS_propertySetterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertySetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertySetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (void) :
mProperty_mType (),
mProperty_mOperandIRList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element::~ GALGAS_globalStructuredConstantList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element::GALGAS_globalStructuredConstantList_2D_element (const GALGAS_omnibusType & inOperand0,
                                                                                                const GALGAS_operandIRList & inOperand1) :
mProperty_mType (inOperand0),
mProperty_mOperandIRList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::class_func_new (const GALGAS_omnibusType & in_mType,
                                                                                                               const GALGAS_operandIRList & in_mOperandIRList,
                                                                                                               Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  if (in_mType.isValid () && in_mOperandIRList.isValid ()) {
    result = GALGAS_globalStructuredConstantList_2D_element (in_mType, in_mOperandIRList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_globalStructuredConstantList_2D_element::objectCompare (const GALGAS_globalStructuredConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperandIRList.objectCompare (inOperand.mProperty_mOperandIRList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalStructuredConstantList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mOperandIRList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mOperandIRList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalStructuredConstantList_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @globalStructuredConstantList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOperandIRList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalStructuredConstantList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ("globalStructuredConstantList-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalStructuredConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalStructuredConstantList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalStructuredConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalStructuredConstantList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalStructuredConstantList_2D_element GALGAS_globalStructuredConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_globalStructuredConstantList_2D_element result ;
  const GALGAS_globalStructuredConstantList_2D_element * p = (const GALGAS_globalStructuredConstantList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalStructuredConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalStructuredConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element::~ GALGAS_staticStringMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element::GALGAS_staticStringMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_uint & in_mIndex,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid ()) {
    result = GALGAS_staticStringMap_2D_element (in_lkey, in_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticStringMap_2D_element::objectCompare (const GALGAS_staticStringMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticStringMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticStringMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("<struct @staticStringMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticStringMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticStringMap_2D_element ("staticStringMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticStringMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticStringMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticStringMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticStringMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticStringMap_2D_element GALGAS_staticStringMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticStringMap_2D_element result ;
  const GALGAS_staticStringMap_2D_element * p = (const GALGAS_staticStringMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticStringMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticStringMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element::~ GALGAS_globalConstantMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element::GALGAS_globalConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_objectIR & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_objectIR & in_mValue,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  if (in_lkey.isValid () && in_mValue.isValid ()) {
    result = GALGAS_globalConstantMap_2D_element (in_lkey, in_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_globalConstantMap_2D_element::objectCompare (const GALGAS_globalConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalConstantMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @globalConstantMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalConstantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalConstantMap_2D_element ("globalConstantMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalConstantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalConstantMap_2D_element GALGAS_globalConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_globalConstantMap_2D_element result ;
  const GALGAS_globalConstantMap_2D_element * p = (const GALGAS_globalConstantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInterruptionPanicCode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element::~ GALGAS_availableInterruptMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element::GALGAS_availableInterruptMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_interruptionPanicCode & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInterruptionPanicCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_interruptionPanicCode & in_mInterruptionPanicCode,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  if (in_lkey.isValid () && in_mInterruptionPanicCode.isValid ()) {
    result = GALGAS_availableInterruptMap_2D_element (in_lkey, in_mInterruptionPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_availableInterruptMap_2D_element::objectCompare (const GALGAS_availableInterruptMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInterruptionPanicCode.objectCompare (inOperand.mProperty_mInterruptionPanicCode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_availableInterruptMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInterruptionPanicCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInterruptionPanicCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_availableInterruptMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @availableInterruptMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInterruptionPanicCode.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @availableInterruptMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ("availableInterruptMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_availableInterruptMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_availableInterruptMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_availableInterruptMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_availableInterruptMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_availableInterruptMap_2D_element GALGAS_availableInterruptMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_availableInterruptMap_2D_element result ;
  const GALGAS_availableInterruptMap_2D_element * p = (const GALGAS_availableInterruptMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_availableInterruptMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("availableInterruptMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType (),
mProperty_mPropertyIndexPath () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element::~ GALGAS_arcAssignmentList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element::GALGAS_arcAssignmentList_2D_element (const GALGAS_string & inOperand0,
                                                                          const GALGAS_omnibusType & inOperand1,
                                                                          const GALGAS_uintlist & inOperand2) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1),
mProperty_mPropertyIndexPath (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::class_func_new (const GALGAS_string & in_mPropertyName,
                                                                                         const GALGAS_omnibusType & in_mPropertyType,
                                                                                         const GALGAS_uintlist & in_mPropertyIndexPath,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  if (in_mPropertyName.isValid () && in_mPropertyType.isValid () && in_mPropertyIndexPath.isValid ()) {
    result = GALGAS_arcAssignmentList_2D_element (in_mPropertyName, in_mPropertyType, in_mPropertyIndexPath) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arcAssignmentList_2D_element::objectCompare (const GALGAS_arcAssignmentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyIndexPath.objectCompare (inOperand.mProperty_mPropertyIndexPath) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_arcAssignmentList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () && mProperty_mPropertyIndexPath.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
  mProperty_mPropertyIndexPath.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arcAssignmentList_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @arcAssignmentList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPropertyIndexPath.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arcAssignmentList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ("arcAssignmentList-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arcAssignmentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arcAssignmentList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arcAssignmentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arcAssignmentList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arcAssignmentList_2D_element GALGAS_arcAssignmentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arcAssignmentList_2D_element result ;
  const GALGAS_arcAssignmentList_2D_element * p = (const GALGAS_arcAssignmentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arcAssignmentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arcAssignmentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (void) :
mProperty_lkey (),
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::~ GALGAS_unifiedTypeMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element::GALGAS_unifiedTypeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_unifiedTypeMapElementClass & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mElement (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_unifiedTypeMapElementClass & in_mElement,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  if (in_lkey.isValid () && in_mElement.isValid ()) {
    result = GALGAS_unifiedTypeMap_2D_element (in_lkey, in_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unifiedTypeMap_2D_element::objectCompare (const GALGAS_unifiedTypeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @unifiedTypeMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ("unifiedTypeMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element GALGAS_unifiedTypeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_element result ;
  const GALGAS_unifiedTypeMap_2D_element * p = (const GALGAS_unifiedTypeMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (void) :
mProperty_mConstantName (),
mProperty_mConstantValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element::~ GALGAS_enumerationConstantList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element::GALGAS_enumerationConstantList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bigint & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mConstantValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::class_func_new (const GALGAS_lstring & in_mConstantName,
                                                                                                     const GALGAS_bigint & in_mConstantValue,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  if (in_mConstantName.isValid () && in_mConstantValue.isValid ()) {
    result = GALGAS_enumerationConstantList_2D_element (in_mConstantName, in_mConstantValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumerationConstantList_2D_element::objectCompare (const GALGAS_enumerationConstantList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConstantName.objectCompare (inOperand.mProperty_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConstantValue.objectCompare (inOperand.mProperty_mConstantValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_enumerationConstantList_2D_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mConstantValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList_2D_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mConstantValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationConstantList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @enumerationConstantList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mConstantName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConstantValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumerationConstantList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ("enumerationConstantList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationConstantList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationConstantList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationConstantList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationConstantList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationConstantList_2D_element GALGAS_enumerationConstantList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationConstantList_2D_element result ;
  const GALGAS_enumerationConstantList_2D_element * p = (const GALGAS_enumerationConstantList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationConstantList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationConstantList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element::GALGAS_propertyAttributeList_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element::~ GALGAS_propertyAttributeList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element::GALGAS_propertyAttributeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lbigint & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::class_func_new (const GALGAS_lstring & in_mAttributeName,
                                                                                                 const GALGAS_lbigint & in_mAttributeValue,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  if (in_mAttributeName.isValid () && in_mAttributeValue.isValid ()) {
    result = GALGAS_propertyAttributeList_2D_element (in_mAttributeName, in_mAttributeValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyAttributeList_2D_element::objectCompare (const GALGAS_propertyAttributeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeValue.objectCompare (inOperand.mProperty_mAttributeValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyAttributeList_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAttributeList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @propertyAttributeList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyAttributeList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ("propertyAttributeList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyAttributeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAttributeList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyAttributeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAttributeList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAttributeList_2D_element GALGAS_propertyAttributeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyAttributeList_2D_element result ;
  const GALGAS_propertyAttributeList_2D_element * p = (const GALGAS_propertyAttributeList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyAttributeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAttributeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element::~ GALGAS_propertyList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element::GALGAS_propertyList_2D_element (const GALGAS_string & inOperand0,
                                                                const GALGAS_omnibusType & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::class_func_new (const GALGAS_string & in_mPropertyName,
                                                                               const GALGAS_omnibusType & in_mType,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  if (in_mPropertyName.isValid () && in_mType.isValid ()) {
    result = GALGAS_propertyList_2D_element (in_mPropertyName, in_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyList_2D_element::objectCompare (const GALGAS_propertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyList_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyList_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @propertyList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyList_2D_element ("propertyList-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyList_2D_element GALGAS_propertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_propertyList_2D_element result ;
  const GALGAS_propertyList_2D_element * p = (const GALGAS_propertyList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element::GALGAS_controlRegisterNameListAST_2D_element (void) :
mProperty_mRegisterName (),
mProperty_mControlRegisterKind (),
mProperty_mIsReadOnly (),
mProperty_mRegisterOffset (),
mProperty_mRegisterOffsetLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element::~ GALGAS_controlRegisterNameListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element::GALGAS_controlRegisterNameListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_controlRegisterKind & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_expressionAST & inOperand3,
                                                                                            const GALGAS_location & inOperand4) :
mProperty_mRegisterName (inOperand0),
mProperty_mControlRegisterKind (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mRegisterOffset (inOperand3),
mProperty_mRegisterOffsetLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::class_func_new (const GALGAS_lstring & in_mRegisterName,
                                                                                                           const GALGAS_controlRegisterKind & in_mControlRegisterKind,
                                                                                                           const GALGAS_bool & in_mIsReadOnly,
                                                                                                           const GALGAS_expressionAST & in_mRegisterOffset,
                                                                                                           const GALGAS_location & in_mRegisterOffsetLocation,
                                                                                                           Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  if (in_mRegisterName.isValid () && in_mControlRegisterKind.isValid () && in_mIsReadOnly.isValid () && in_mRegisterOffset.isValid () && in_mRegisterOffsetLocation.isValid ()) {
    result = GALGAS_controlRegisterNameListAST_2D_element (in_mRegisterName, in_mControlRegisterKind, in_mIsReadOnly, in_mRegisterOffset, in_mRegisterOffsetLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterNameListAST_2D_element::objectCompare (const GALGAS_controlRegisterNameListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterName.objectCompare (inOperand.mProperty_mRegisterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterKind.objectCompare (inOperand.mProperty_mControlRegisterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterOffset.objectCompare (inOperand.mProperty_mRegisterOffset) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterOffsetLocation.objectCompare (inOperand.mProperty_mRegisterOffsetLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterNameListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterName.isValid () && mProperty_mControlRegisterKind.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mRegisterOffset.isValid () && mProperty_mRegisterOffsetLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST_2D_element::drop (void) {
  mProperty_mRegisterName.drop () ;
  mProperty_mControlRegisterKind.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mRegisterOffset.drop () ;
  mProperty_mRegisterOffsetLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterNameListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @controlRegisterNameListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mRegisterName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mControlRegisterKind.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterOffset.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterOffsetLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterNameListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ("controlRegisterNameListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterNameListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterNameListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterNameListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterNameListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterNameListAST_2D_element GALGAS_controlRegisterNameListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterNameListAST_2D_element result ;
  const GALGAS_controlRegisterNameListAST_2D_element * p = (const GALGAS_controlRegisterNameListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterNameListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterNameListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (void) :
mProperty_mRegisterGroupName (),
mProperty_mControlRegisterGroupKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::~ GALGAS_registerGroupListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element::GALGAS_registerGroupListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_controlRegisterGroupKindAST & inOperand1) :
mProperty_mRegisterGroupName (inOperand0),
mProperty_mControlRegisterGroupKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::class_func_new (const GALGAS_lstring & in_mRegisterGroupName,
                                                                                               const GALGAS_controlRegisterGroupKindAST & in_mControlRegisterGroupKind,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  if (in_mRegisterGroupName.isValid () && in_mControlRegisterGroupKind.isValid ()) {
    result = GALGAS_registerGroupListAST_2D_element (in_mRegisterGroupName, in_mControlRegisterGroupKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerGroupListAST_2D_element::objectCompare (const GALGAS_registerGroupListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRegisterGroupName.objectCompare (inOperand.mProperty_mRegisterGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupKind.objectCompare (inOperand.mProperty_mControlRegisterGroupKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerGroupListAST_2D_element::isValid (void) const {
  return mProperty_mRegisterGroupName.isValid () && mProperty_mControlRegisterGroupKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::drop (void) {
  mProperty_mRegisterGroupName.drop () ;
  mProperty_mControlRegisterGroupKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerGroupListAST_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @registerGroupListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mRegisterGroupName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mControlRegisterGroupKind.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerGroupListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ("registerGroupListAST-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerGroupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerGroupListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerGroupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerGroupListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerGroupListAST_2D_element GALGAS_registerGroupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_registerGroupListAST_2D_element result ;
  const GALGAS_registerGroupListAST_2D_element * p = (const GALGAS_registerGroupListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerGroupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerGroupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::~ GALGAS_controlRegisterUserAccesMapAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element::GALGAS_controlRegisterUserAccesMapAST_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_controlRegisterUserAccesMapAST_2D_element (in_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterUserAccesMapAST_2D_element::objectCompare (const GALGAS_controlRegisterUserAccesMapAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterUserAccesMapAST_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterUserAccesMapAST_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @controlRegisterUserAccesMapAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterUserAccesMapAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ("controlRegisterUserAccesMapAST-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterUserAccesMapAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterUserAccesMapAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterUserAccesMapAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterUserAccesMapAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterUserAccesMapAST_2D_element GALGAS_controlRegisterUserAccesMapAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterUserAccesMapAST_2D_element result ;
  const GALGAS_controlRegisterUserAccesMapAST_2D_element * p = (const GALGAS_controlRegisterUserAccesMapAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterUserAccesMapAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterUserAccesMapAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::~ GALGAS_controlRegisterFieldMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element::GALGAS_controlRegisterFieldMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_uint & in_mBitIndex,
                                                                                                     const GALGAS_uint & in_mBitCount,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  if (in_lkey.isValid () && in_mBitIndex.isValid () && in_mBitCount.isValid ()) {
    result = GALGAS_controlRegisterFieldMap_2D_element (in_lkey, in_mBitIndex, in_mBitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterFieldMap_2D_element::objectCompare (const GALGAS_controlRegisterFieldMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterFieldMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterFieldMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @controlRegisterFieldMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterFieldMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ("controlRegisterFieldMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterFieldMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterFieldMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterFieldMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterFieldMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterFieldMap_2D_element GALGAS_controlRegisterFieldMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterFieldMap_2D_element result ;
  const GALGAS_controlRegisterFieldMap_2D_element * p = (const GALGAS_controlRegisterFieldMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterFieldMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterFieldMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAccessOperator (),
mProperty_mAccessRightOperand (),
mProperty_mResultType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::~ GALGAS_sliceMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element::GALGAS_sliceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_llvmBinaryOperation & inOperand1,
                                                        const GALGAS_bigint & inOperand2,
                                                        const GALGAS_omnibusType & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mAccessOperator (inOperand1),
mProperty_mAccessRightOperand (inOperand2),
mProperty_mResultType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                       const GALGAS_llvmBinaryOperation & in_mAccessOperator,
                                                                       const GALGAS_bigint & in_mAccessRightOperand,
                                                                       const GALGAS_omnibusType & in_mResultType,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  if (in_lkey.isValid () && in_mAccessOperator.isValid () && in_mAccessRightOperand.isValid () && in_mResultType.isValid ()) {
    result = GALGAS_sliceMap_2D_element (in_lkey, in_mAccessOperator, in_mAccessRightOperand, in_mResultType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sliceMap_2D_element::objectCompare (const GALGAS_sliceMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessOperator.objectCompare (inOperand.mProperty_mAccessOperator) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessRightOperand.objectCompare (inOperand.mProperty_mAccessRightOperand) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAccessOperator.isValid () && mProperty_mAccessRightOperand.isValid () && mProperty_mResultType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAccessOperator.drop () ;
  mProperty_mAccessRightOperand.drop () ;
  mProperty_mResultType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceMap_2D_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.addString ("<struct @sliceMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAccessOperator.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAccessRightOperand.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceMap_2D_element ("sliceMap-element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceMap_2D_element GALGAS_sliceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sliceMap_2D_element result ;
  const GALGAS_sliceMap_2D_element * p = (const GALGAS_sliceMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (void) :
mProperty_lkey (),
mProperty_mType (),
mProperty_mIsReadOnly (),
mProperty_mUserAccess (),
mProperty_mRegisterFieldAccessMap (),
mProperty_mRegisterFieldMap (),
mProperty_mAddressOffset (),
mProperty_mControlRegisterFieldList (),
mProperty_mRegisterBitCount (),
mProperty_mArraySize (),
mProperty_mElementArraySize () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::~ GALGAS_controlRegisterMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element::GALGAS_controlRegisterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_omnibusType & inOperand1,
                                                                            const GALGAS_bool & inOperand2,
                                                                            const GALGAS_bool & inOperand3,
                                                                            const GALGAS_sliceMap & inOperand4,
                                                                            const GALGAS_controlRegisterFieldMap & inOperand5,
                                                                            const GALGAS_bigint & inOperand6,
                                                                            const GALGAS_controlRegisterFieldList & inOperand7,
                                                                            const GALGAS_uint & inOperand8,
                                                                            const GALGAS_uint & inOperand9,
                                                                            const GALGAS_uint & inOperand10) :
mProperty_lkey (inOperand0),
mProperty_mType (inOperand1),
mProperty_mIsReadOnly (inOperand2),
mProperty_mUserAccess (inOperand3),
mProperty_mRegisterFieldAccessMap (inOperand4),
mProperty_mRegisterFieldMap (inOperand5),
mProperty_mAddressOffset (inOperand6),
mProperty_mControlRegisterFieldList (inOperand7),
mProperty_mRegisterBitCount (inOperand8),
mProperty_mArraySize (inOperand9),
mProperty_mElementArraySize (inOperand10) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_omnibusType & in_mType,
                                                                                           const GALGAS_bool & in_mIsReadOnly,
                                                                                           const GALGAS_bool & in_mUserAccess,
                                                                                           const GALGAS_sliceMap & in_mRegisterFieldAccessMap,
                                                                                           const GALGAS_controlRegisterFieldMap & in_mRegisterFieldMap,
                                                                                           const GALGAS_bigint & in_mAddressOffset,
                                                                                           const GALGAS_controlRegisterFieldList & in_mControlRegisterFieldList,
                                                                                           const GALGAS_uint & in_mRegisterBitCount,
                                                                                           const GALGAS_uint & in_mArraySize,
                                                                                           const GALGAS_uint & in_mElementArraySize,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  if (in_lkey.isValid () && in_mType.isValid () && in_mIsReadOnly.isValid () && in_mUserAccess.isValid () && in_mRegisterFieldAccessMap.isValid () && in_mRegisterFieldMap.isValid () && in_mAddressOffset.isValid () && in_mControlRegisterFieldList.isValid () && in_mRegisterBitCount.isValid () && in_mArraySize.isValid () && in_mElementArraySize.isValid ()) {
    result = GALGAS_controlRegisterMap_2D_element (in_lkey, in_mType, in_mIsReadOnly, in_mUserAccess, in_mRegisterFieldAccessMap, in_mRegisterFieldMap, in_mAddressOffset, in_mControlRegisterFieldList, in_mRegisterBitCount, in_mArraySize, in_mElementArraySize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterMap_2D_element::objectCompare (const GALGAS_controlRegisterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsReadOnly.objectCompare (inOperand.mProperty_mIsReadOnly) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUserAccess.objectCompare (inOperand.mProperty_mUserAccess) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldAccessMap.objectCompare (inOperand.mProperty_mRegisterFieldAccessMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterFieldMap.objectCompare (inOperand.mProperty_mRegisterFieldMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAddressOffset.objectCompare (inOperand.mProperty_mAddressOffset) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterFieldList.objectCompare (inOperand.mProperty_mControlRegisterFieldList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterBitCount.objectCompare (inOperand.mProperty_mRegisterBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArraySize.objectCompare (inOperand.mProperty_mArraySize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElementArraySize.objectCompare (inOperand.mProperty_mElementArraySize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mType.isValid () && mProperty_mIsReadOnly.isValid () && mProperty_mUserAccess.isValid () && mProperty_mRegisterFieldAccessMap.isValid () && mProperty_mRegisterFieldMap.isValid () && mProperty_mAddressOffset.isValid () && mProperty_mControlRegisterFieldList.isValid () && mProperty_mRegisterBitCount.isValid () && mProperty_mArraySize.isValid () && mProperty_mElementArraySize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mType.drop () ;
  mProperty_mIsReadOnly.drop () ;
  mProperty_mUserAccess.drop () ;
  mProperty_mRegisterFieldAccessMap.drop () ;
  mProperty_mRegisterFieldMap.drop () ;
  mProperty_mAddressOffset.drop () ;
  mProperty_mControlRegisterFieldList.drop () ;
  mProperty_mRegisterBitCount.drop () ;
  mProperty_mArraySize.drop () ;
  mProperty_mElementArraySize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @controlRegisterMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsReadOnly.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUserAccess.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterFieldAccessMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterFieldMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAddressOffset.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mControlRegisterFieldList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterBitCount.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mArraySize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mElementArraySize.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ("controlRegisterMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterMap_2D_element GALGAS_controlRegisterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterMap_2D_element result ;
  const GALGAS_controlRegisterMap_2D_element * p = (const GALGAS_controlRegisterMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (void) :
mProperty_lkey (),
mProperty_mGroupKind (),
mProperty_mControlRegisterMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::~ GALGAS_controlRegisterGroupMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element::GALGAS_controlRegisterGroupMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_registerGroupKind & inOperand1,
                                                                                      const GALGAS_controlRegisterMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mGroupKind (inOperand1),
mProperty_mControlRegisterMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     const GALGAS_registerGroupKind & in_mGroupKind,
                                                                                                     const GALGAS_controlRegisterMap & in_mControlRegisterMap,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  if (in_lkey.isValid () && in_mGroupKind.isValid () && in_mControlRegisterMap.isValid ()) {
    result = GALGAS_controlRegisterGroupMap_2D_element (in_lkey, in_mGroupKind, in_mControlRegisterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterGroupMap_2D_element::objectCompare (const GALGAS_controlRegisterGroupMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupKind.objectCompare (inOperand.mProperty_mGroupKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterMap.objectCompare (inOperand.mProperty_mControlRegisterMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mGroupKind.isValid () && mProperty_mControlRegisterMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mGroupKind.drop () ;
  mProperty_mControlRegisterMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @controlRegisterGroupMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGroupKind.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mControlRegisterMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ("controlRegisterGroupMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupMap_2D_element GALGAS_controlRegisterGroupMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupMap_2D_element result ;
  const GALGAS_controlRegisterGroupMap_2D_element * p = (const GALGAS_controlRegisterGroupMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::GALGAS_globalSyncInstanceMap_2D_element (void) :
mProperty_lkey (),
mProperty_type (),
mProperty_initialValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::~ GALGAS_globalSyncInstanceMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element::GALGAS_globalSyncInstanceMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_omnibusType & inOperand1,
                                                                                  const GALGAS_objectIR & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_type (inOperand1),
mProperty_initialValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_omnibusType & in_type,
                                                                                                 const GALGAS_objectIR & in_initialValue,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  if (in_lkey.isValid () && in_type.isValid () && in_initialValue.isValid ()) {
    result = GALGAS_globalSyncInstanceMap_2D_element (in_lkey, in_type, in_initialValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_globalSyncInstanceMap_2D_element::objectCompare (const GALGAS_globalSyncInstanceMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_initialValue.objectCompare (inOperand.mProperty_initialValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_globalSyncInstanceMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_type.isValid () && mProperty_initialValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_type.drop () ;
  mProperty_initialValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_globalSyncInstanceMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @globalSyncInstanceMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_initialValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @globalSyncInstanceMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ("globalSyncInstanceMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_globalSyncInstanceMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_globalSyncInstanceMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_globalSyncInstanceMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_globalSyncInstanceMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_globalSyncInstanceMap_2D_element GALGAS_globalSyncInstanceMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_globalSyncInstanceMap_2D_element result ;
  const GALGAS_globalSyncInstanceMap_2D_element * p = (const GALGAS_globalSyncInstanceMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_globalSyncInstanceMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("globalSyncInstanceMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::GALGAS_driverDeclarationListAST_2D_element (void) :
mProperty_mDriver () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::~ GALGAS_driverDeclarationListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element::GALGAS_driverDeclarationListAST_2D_element (const GALGAS_driverDeclarationAST & inOperand0) :
mProperty_mDriver (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::class_func_new (const GALGAS_driverDeclarationAST & in_mDriver,
                                                                                                       Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  if (in_mDriver.isValid ()) {
    result = GALGAS_driverDeclarationListAST_2D_element (in_mDriver) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_driverDeclarationListAST_2D_element::objectCompare (const GALGAS_driverDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDriver.objectCompare (inOperand.mProperty_mDriver) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mDriver.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::drop (void) {
  mProperty_mDriver.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverDeclarationListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("<struct @driverDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mDriver.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ("driverDeclarationListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverDeclarationListAST_2D_element GALGAS_driverDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_driverDeclarationListAST_2D_element result ;
  const GALGAS_driverDeclarationListAST_2D_element * p = (const GALGAS_driverDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::GALGAS_driverInstanciationArgumentListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::~ GALGAS_driverInstanciationArgumentListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element::GALGAS_driverInstanciationArgumentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSelector,
                                                                                                                           const GALGAS_expressionAST & in_mExpression,
                                                                                                                           Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  if (in_mSelector.isValid () && in_mExpression.isValid ()) {
    result = GALGAS_driverInstanciationArgumentListAST_2D_element (in_mSelector, in_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_driverInstanciationArgumentListAST_2D_element::objectCompare (const GALGAS_driverInstanciationArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentListAST_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @driverInstanciationArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ("driverInstanciationArgumentListAST-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentListAST_2D_element GALGAS_driverInstanciationArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentListAST_2D_element result ;
  const GALGAS_driverInstanciationArgumentListAST_2D_element * p = (const GALGAS_driverInstanciationArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::GALGAS_driverInstanciationListAST_2D_element (void) :
mProperty_mDriverName (),
mProperty_mDriverInstanciationArgumentList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::~ GALGAS_driverInstanciationListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element::GALGAS_driverInstanciationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_driverInstanciationArgumentListAST & inOperand1) :
mProperty_mDriverName (inOperand0),
mProperty_mDriverInstanciationArgumentList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::class_func_new (const GALGAS_lstring & in_mDriverName,
                                                                                                           const GALGAS_driverInstanciationArgumentListAST & in_mDriverInstanciationArgumentList,
                                                                                                           Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  if (in_mDriverName.isValid () && in_mDriverInstanciationArgumentList.isValid ()) {
    result = GALGAS_driverInstanciationListAST_2D_element (in_mDriverName, in_mDriverInstanciationArgumentList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_driverInstanciationListAST_2D_element::objectCompare (const GALGAS_driverInstanciationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverInstanciationArgumentList.objectCompare (inOperand.mProperty_mDriverInstanciationArgumentList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationListAST_2D_element::isValid (void) const {
  return mProperty_mDriverName.isValid () && mProperty_mDriverInstanciationArgumentList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::drop (void) {
  mProperty_mDriverName.drop () ;
  mProperty_mDriverInstanciationArgumentList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @driverInstanciationListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDriverInstanciationArgumentList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ("driverInstanciationListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationListAST_2D_element GALGAS_driverInstanciationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationListAST_2D_element result ;
  const GALGAS_driverInstanciationListAST_2D_element * p = (const GALGAS_driverInstanciationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::GALGAS_driverInstanciationArgumentMap_2D_element (void) :
mProperty_lkey (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::~ GALGAS_driverInstanciationArgumentMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element::GALGAS_driverInstanciationArgumentMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_expressionAST & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_expressionAST & in_mExpression,
                                                                                                                   Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  if (in_lkey.isValid () && in_mExpression.isValid ()) {
    result = GALGAS_driverInstanciationArgumentMap_2D_element (in_lkey, in_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_driverInstanciationArgumentMap_2D_element::objectCompare (const GALGAS_driverInstanciationArgumentMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_driverInstanciationArgumentMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_driverInstanciationArgumentMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @driverInstanciationArgumentMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @driverInstanciationArgumentMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ("driverInstanciationArgumentMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_driverInstanciationArgumentMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_driverInstanciationArgumentMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_driverInstanciationArgumentMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_driverInstanciationArgumentMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_driverInstanciationArgumentMap_2D_element GALGAS_driverInstanciationArgumentMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_driverInstanciationArgumentMap_2D_element result ;
  const GALGAS_driverInstanciationArgumentMap_2D_element * p = (const GALGAS_driverInstanciationArgumentMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_driverInstanciationArgumentMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("driverInstanciationArgumentMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::GALGAS_instanciedDriverMap_2D_element (void) :
mProperty_lkey (),
mProperty_mDriverInstanciationArgumentMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::~ GALGAS_instanciedDriverMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element::GALGAS_instanciedDriverMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_driverInstanciationArgumentMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDriverInstanciationArgumentMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_driverInstanciationArgumentMap & in_mDriverInstanciationArgumentMap,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  if (in_lkey.isValid () && in_mDriverInstanciationArgumentMap.isValid ()) {
    result = GALGAS_instanciedDriverMap_2D_element (in_lkey, in_mDriverInstanciationArgumentMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_instanciedDriverMap_2D_element::objectCompare (const GALGAS_instanciedDriverMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverInstanciationArgumentMap.objectCompare (inOperand.mProperty_mDriverInstanciationArgumentMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_instanciedDriverMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDriverInstanciationArgumentMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDriverInstanciationArgumentMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_instanciedDriverMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("<struct @instanciedDriverMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDriverInstanciationArgumentMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @instanciedDriverMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ("instanciedDriverMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_instanciedDriverMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanciedDriverMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_instanciedDriverMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_instanciedDriverMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_instanciedDriverMap_2D_element GALGAS_instanciedDriverMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_instanciedDriverMap_2D_element result ;
  const GALGAS_instanciedDriverMap_2D_element * p = (const GALGAS_instanciedDriverMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_instanciedDriverMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanciedDriverMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element::GALGAS_staticListPropertyListAST_2D_element (void) :
mProperty_mPropertyName (),
mProperty_mPropertyType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element::~ GALGAS_staticListPropertyListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element::GALGAS_staticListPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_staticListPropertyTypeAST & inOperand1) :
mProperty_mPropertyName (inOperand0),
mProperty_mPropertyType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::class_func_new (const GALGAS_lstring & in_mPropertyName,
                                                                                                         const GALGAS_staticListPropertyTypeAST & in_mPropertyType,
                                                                                                         Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  if (in_mPropertyName.isValid () && in_mPropertyType.isValid ()) {
    result = GALGAS_staticListPropertyListAST_2D_element (in_mPropertyName, in_mPropertyType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticListPropertyListAST_2D_element::objectCompare (const GALGAS_staticListPropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyType.objectCompare (inOperand.mProperty_mPropertyType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyName.isValid () && mProperty_mPropertyType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST_2D_element::drop (void) {
  mProperty_mPropertyName.drop () ;
  mProperty_mPropertyType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListPropertyListAST_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.addString ("<struct @staticListPropertyListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListPropertyListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ("staticListPropertyListAST-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListPropertyListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListPropertyListAST_2D_element GALGAS_staticListPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_staticListPropertyListAST_2D_element result ;
  const GALGAS_staticListPropertyListAST_2D_element * p = (const GALGAS_staticListPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (void) :
mProperty_lkey (),
mProperty_mStaticListPropertyList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element::~ GALGAS_staticlistMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element::GALGAS_staticlistMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_propertyList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mStaticListPropertyList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                 const GALGAS_propertyList & in_mStaticListPropertyList,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  if (in_lkey.isValid () && in_mStaticListPropertyList.isValid ()) {
    result = GALGAS_staticlistMap_2D_element (in_lkey, in_mStaticListPropertyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticlistMap_2D_element::objectCompare (const GALGAS_staticlistMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticListPropertyList.objectCompare (inOperand.mProperty_mStaticListPropertyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticlistMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mStaticListPropertyList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mStaticListPropertyList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticlistMap_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("<struct @staticlistMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mStaticListPropertyList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticlistMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticlistMap_2D_element ("staticlistMap-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticlistMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticlistMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticlistMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticlistMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticlistMap_2D_element GALGAS_staticlistMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_staticlistMap_2D_element result ;
  const GALGAS_staticlistMap_2D_element * p = (const GALGAS_staticlistMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticlistMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticlistMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element::GALGAS_staticListInitializationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInitializationList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element::~ GALGAS_staticListInitializationMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element::GALGAS_staticListInitializationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_stringlist & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInitializationList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_stringlist & in_mInitializationList,
                                                                                                             Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  if (in_lkey.isValid () && in_mInitializationList.isValid ()) {
    result = GALGAS_staticListInitializationMap_2D_element (in_lkey, in_mInitializationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticListInitializationMap_2D_element::objectCompare (const GALGAS_staticListInitializationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInitializationList.objectCompare (inOperand.mProperty_mInitializationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInitializationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitializationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitializationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInitializationMap_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @staticListInitializationMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInitializationList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInitializationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ("staticListInitializationMap-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInitializationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInitializationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInitializationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInitializationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInitializationMap_2D_element GALGAS_staticListInitializationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_staticListInitializationMap_2D_element result ;
  const GALGAS_staticListInitializationMap_2D_element * p = (const GALGAS_staticListInitializationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInitializationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInitializationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element::GALGAS_staticListInvokedFunctionSetMap_2D_element (void) :
mProperty_lkey (),
mProperty_mInvokedFunctionSet () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element::~ GALGAS_staticListInvokedFunctionSetMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element::GALGAS_staticListInvokedFunctionSetMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_stringset & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mInvokedFunctionSet (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                     const GALGAS_stringset & in_mInvokedFunctionSet,
                                                                                                                     Compiler * /* inCompiler */
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  if (in_lkey.isValid () && in_mInvokedFunctionSet.isValid ()) {
    result = GALGAS_staticListInvokedFunctionSetMap_2D_element (in_lkey, in_mInvokedFunctionSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_staticListInvokedFunctionSetMap_2D_element::objectCompare (const GALGAS_staticListInvokedFunctionSetMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInvokedFunctionSet.objectCompare (inOperand.mProperty_mInvokedFunctionSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_staticListInvokedFunctionSetMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInvokedFunctionSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInvokedFunctionSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_staticListInvokedFunctionSetMap_2D_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.addString ("<struct @staticListInvokedFunctionSetMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInvokedFunctionSet.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @staticListInvokedFunctionSetMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ("staticListInvokedFunctionSetMap-element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_staticListInvokedFunctionSetMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_staticListInvokedFunctionSetMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_staticListInvokedFunctionSetMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_staticListInvokedFunctionSetMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_staticListInvokedFunctionSetMap_2D_element GALGAS_staticListInvokedFunctionSetMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_staticListInvokedFunctionSetMap_2D_element result ;
  const GALGAS_staticListInvokedFunctionSetMap_2D_element * p = (const GALGAS_staticListInvokedFunctionSetMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_staticListInvokedFunctionSetMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("staticListInvokedFunctionSetMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element::GALGAS_taskListAST_2D_element (void) :
mProperty_mTaskName (),
mProperty_mLowerPriorityTaskList (),
mProperty_mStackSize (),
mProperty_mTaskSetupListAST (),
mProperty_mTaskActivateListAST (),
mProperty_mTaskDeactivateListAST (),
mProperty_mGuardedCommandList (),
mProperty_mEndOfTaskDeclaration (),
mProperty_mAutoStart () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element::~ GALGAS_taskListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element::GALGAS_taskListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstringlist & inOperand1,
                                                              const GALGAS_lbigint & inOperand2,
                                                              const GALGAS_taskSetupListAST & inOperand3,
                                                              const GALGAS_taskSetupListAST & inOperand4,
                                                              const GALGAS_taskSetupListAST & inOperand5,
                                                              const GALGAS_syncInstructionBranchListAST & inOperand6,
                                                              const GALGAS_location & inOperand7,
                                                              const GALGAS_bool & inOperand8) :
mProperty_mTaskName (inOperand0),
mProperty_mLowerPriorityTaskList (inOperand1),
mProperty_mStackSize (inOperand2),
mProperty_mTaskSetupListAST (inOperand3),
mProperty_mTaskActivateListAST (inOperand4),
mProperty_mTaskDeactivateListAST (inOperand5),
mProperty_mGuardedCommandList (inOperand6),
mProperty_mEndOfTaskDeclaration (inOperand7),
mProperty_mAutoStart (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element GALGAS_taskListAST_2D_element::class_func_new (const GALGAS_lstring & in_mTaskName,
                                                                             const GALGAS_lstringlist & in_mLowerPriorityTaskList,
                                                                             const GALGAS_lbigint & in_mStackSize,
                                                                             const GALGAS_taskSetupListAST & in_mTaskSetupListAST,
                                                                             const GALGAS_taskSetupListAST & in_mTaskActivateListAST,
                                                                             const GALGAS_taskSetupListAST & in_mTaskDeactivateListAST,
                                                                             const GALGAS_syncInstructionBranchListAST & in_mGuardedCommandList,
                                                                             const GALGAS_location & in_mEndOfTaskDeclaration,
                                                                             const GALGAS_bool & in_mAutoStart,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskListAST_2D_element result ;
  if (in_mTaskName.isValid () && in_mLowerPriorityTaskList.isValid () && in_mStackSize.isValid () && in_mTaskSetupListAST.isValid () && in_mTaskActivateListAST.isValid () && in_mTaskDeactivateListAST.isValid () && in_mGuardedCommandList.isValid () && in_mEndOfTaskDeclaration.isValid () && in_mAutoStart.isValid ()) {
    result = GALGAS_taskListAST_2D_element (in_mTaskName, in_mLowerPriorityTaskList, in_mStackSize, in_mTaskSetupListAST, in_mTaskActivateListAST, in_mTaskDeactivateListAST, in_mGuardedCommandList, in_mEndOfTaskDeclaration, in_mAutoStart) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_taskListAST_2D_element::objectCompare (const GALGAS_taskListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTaskName.objectCompare (inOperand.mProperty_mTaskName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLowerPriorityTaskList.objectCompare (inOperand.mProperty_mLowerPriorityTaskList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackSize.objectCompare (inOperand.mProperty_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskSetupListAST.objectCompare (inOperand.mProperty_mTaskSetupListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskActivateListAST.objectCompare (inOperand.mProperty_mTaskActivateListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskDeactivateListAST.objectCompare (inOperand.mProperty_mTaskDeactivateListAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardedCommandList.objectCompare (inOperand.mProperty_mGuardedCommandList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfTaskDeclaration.objectCompare (inOperand.mProperty_mEndOfTaskDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoStart.objectCompare (inOperand.mProperty_mAutoStart) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskListAST_2D_element::isValid (void) const {
  return mProperty_mTaskName.isValid () && mProperty_mLowerPriorityTaskList.isValid () && mProperty_mStackSize.isValid () && mProperty_mTaskSetupListAST.isValid () && mProperty_mTaskActivateListAST.isValid () && mProperty_mTaskDeactivateListAST.isValid () && mProperty_mGuardedCommandList.isValid () && mProperty_mEndOfTaskDeclaration.isValid () && mProperty_mAutoStart.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST_2D_element::drop (void) {
  mProperty_mTaskName.drop () ;
  mProperty_mLowerPriorityTaskList.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mTaskSetupListAST.drop () ;
  mProperty_mTaskActivateListAST.drop () ;
  mProperty_mTaskDeactivateListAST.drop () ;
  mProperty_mGuardedCommandList.drop () ;
  mProperty_mEndOfTaskDeclaration.drop () ;
  mProperty_mAutoStart.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskListAST_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @taskListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mTaskName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mLowerPriorityTaskList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskSetupListAST.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskActivateListAST.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskDeactivateListAST.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGuardedCommandList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfTaskDeclaration.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAutoStart.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskListAST_2D_element ("taskListAST-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskListAST_2D_element GALGAS_taskListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_taskListAST_2D_element result ;
  const GALGAS_taskListAST_2D_element * p = (const GALGAS_taskListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element::GALGAS_taskSetupListAST_2D_element (void) :
mProperty_mName (),
mProperty_mDependanceList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element::~ GALGAS_taskSetupListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element::GALGAS_taskSetupListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstringlist & inOperand1) :
mProperty_mName (inOperand0),
mProperty_mDependanceList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::class_func_new (const GALGAS_lstring & in_mName,
                                                                                       const GALGAS_lstringlist & in_mDependanceList,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  if (in_mName.isValid () && in_mDependanceList.isValid ()) {
    result = GALGAS_taskSetupListAST_2D_element (in_mName, in_mDependanceList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_taskSetupListAST_2D_element::objectCompare (const GALGAS_taskSetupListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependanceList.objectCompare (inOperand.mProperty_mDependanceList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskSetupListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mDependanceList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mDependanceList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskSetupListAST_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("<struct @taskSetupListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDependanceList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskSetupListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ("taskSetupListAST-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskSetupListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskSetupListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskSetupListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskSetupListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskSetupListAST_2D_element GALGAS_taskSetupListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_taskSetupListAST_2D_element result ;
  const GALGAS_taskSetupListAST_2D_element * p = (const GALGAS_taskSetupListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskSetupListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskSetupListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element::~ GALGAS_taskMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element::GALGAS_taskMap_2D_element (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_omnibusType & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                     const GALGAS_omnibusType & in_mTaskType,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  if (in_lkey.isValid () && in_mTaskType.isValid ()) {
    result = GALGAS_taskMap_2D_element (in_lkey, in_mTaskType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_taskMap_2D_element::objectCompare (const GALGAS_taskMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskType.objectCompare (inOperand.mProperty_mTaskType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMap_2D_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @taskMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskType.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMap_2D_element ("taskMap-element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMap_2D_element GALGAS_taskMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_taskMap_2D_element result ;
  const GALGAS_taskMap_2D_element * p = (const GALGAS_taskMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mTaskType (),
mProperty_mPriority (),
mProperty_mStackSize (),
mProperty_mSetupOrderedList (),
mProperty_mActivateOrderedList (),
mProperty_mDeactivateOrderedList (),
mProperty_mTaskNameStringIndex (),
mProperty_mActivate () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element::~ GALGAS_taskMapIR_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element::GALGAS_taskMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_omnibusType & inOperand1,
                                                          const GALGAS_uint & inOperand2,
                                                          const GALGAS_bigint & inOperand3,
                                                          const GALGAS_stringlist & inOperand4,
                                                          const GALGAS_stringlist & inOperand5,
                                                          const GALGAS_stringlist & inOperand6,
                                                          const GALGAS_uint & inOperand7,
                                                          const GALGAS_bool & inOperand8) :
mProperty_lkey (inOperand0),
mProperty_mTaskType (inOperand1),
mProperty_mPriority (inOperand2),
mProperty_mStackSize (inOperand3),
mProperty_mSetupOrderedList (inOperand4),
mProperty_mActivateOrderedList (inOperand5),
mProperty_mDeactivateOrderedList (inOperand6),
mProperty_mTaskNameStringIndex (inOperand7),
mProperty_mActivate (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                         const GALGAS_omnibusType & in_mTaskType,
                                                                         const GALGAS_uint & in_mPriority,
                                                                         const GALGAS_bigint & in_mStackSize,
                                                                         const GALGAS_stringlist & in_mSetupOrderedList,
                                                                         const GALGAS_stringlist & in_mActivateOrderedList,
                                                                         const GALGAS_stringlist & in_mDeactivateOrderedList,
                                                                         const GALGAS_uint & in_mTaskNameStringIndex,
                                                                         const GALGAS_bool & in_mActivate,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  if (in_lkey.isValid () && in_mTaskType.isValid () && in_mPriority.isValid () && in_mStackSize.isValid () && in_mSetupOrderedList.isValid () && in_mActivateOrderedList.isValid () && in_mDeactivateOrderedList.isValid () && in_mTaskNameStringIndex.isValid () && in_mActivate.isValid ()) {
    result = GALGAS_taskMapIR_2D_element (in_lkey, in_mTaskType, in_mPriority, in_mStackSize, in_mSetupOrderedList, in_mActivateOrderedList, in_mDeactivateOrderedList, in_mTaskNameStringIndex, in_mActivate) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_taskMapIR_2D_element::objectCompare (const GALGAS_taskMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskType.objectCompare (inOperand.mProperty_mTaskType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPriority.objectCompare (inOperand.mProperty_mPriority) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackSize.objectCompare (inOperand.mProperty_mStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSetupOrderedList.objectCompare (inOperand.mProperty_mSetupOrderedList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActivateOrderedList.objectCompare (inOperand.mProperty_mActivateOrderedList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDeactivateOrderedList.objectCompare (inOperand.mProperty_mDeactivateOrderedList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskNameStringIndex.objectCompare (inOperand.mProperty_mTaskNameStringIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActivate.objectCompare (inOperand.mProperty_mActivate) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_taskMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTaskType.isValid () && mProperty_mPriority.isValid () && mProperty_mStackSize.isValid () && mProperty_mSetupOrderedList.isValid () && mProperty_mActivateOrderedList.isValid () && mProperty_mDeactivateOrderedList.isValid () && mProperty_mTaskNameStringIndex.isValid () && mProperty_mActivate.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTaskType.drop () ;
  mProperty_mPriority.drop () ;
  mProperty_mStackSize.drop () ;
  mProperty_mSetupOrderedList.drop () ;
  mProperty_mActivateOrderedList.drop () ;
  mProperty_mDeactivateOrderedList.drop () ;
  mProperty_mTaskNameStringIndex.drop () ;
  mProperty_mActivate.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_taskMapIR_2D_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.addString ("<struct @taskMapIR-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPriority.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mStackSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSetupOrderedList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mActivateOrderedList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDeactivateOrderedList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskNameStringIndex.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mActivate.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @taskMapIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_taskMapIR_2D_element ("taskMapIR-element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_taskMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_taskMapIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_taskMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_taskMapIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_taskMapIR_2D_element GALGAS_taskMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_taskMapIR_2D_element result ;
  const GALGAS_taskMapIR_2D_element * p = (const GALGAS_taskMapIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_taskMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("taskMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element::GALGAS_routineMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature (),
mProperty_mReturnTypeProxy (),
mProperty_mModeDictionary (),
mProperty_mIsExported (),
mProperty_mFunctionMode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element::~ GALGAS_routineMapForContext_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element::GALGAS_routineMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_bool & inOperand1,
                                                                                const GALGAS_routineTypedSignature & inOperand2,
                                                                                const GALGAS_unifiedTypeMapEntry & inOperand3,
                                                                                const GALGAS_routineLLVMNameDict & inOperand4,
                                                                                const GALGAS_bool & inOperand5,
                                                                                const GALGAS_mode & inOperand6) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mReturnTypeProxy (inOperand3),
mProperty_mModeDictionary (inOperand4),
mProperty_mIsExported (inOperand5),
mProperty_mFunctionMode (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_bool & in_mIsPublic,
                                                                                               const GALGAS_routineTypedSignature & in_mSignature,
                                                                                               const GALGAS_unifiedTypeMapEntry & in_mReturnTypeProxy,
                                                                                               const GALGAS_routineLLVMNameDict & in_mModeDictionary,
                                                                                               const GALGAS_bool & in_mIsExported,
                                                                                               const GALGAS_mode & in_mFunctionMode,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  if (in_lkey.isValid () && in_mIsPublic.isValid () && in_mSignature.isValid () && in_mReturnTypeProxy.isValid () && in_mModeDictionary.isValid () && in_mIsExported.isValid () && in_mFunctionMode.isValid ()) {
    result = GALGAS_routineMapForContext_2D_element (in_lkey, in_mIsPublic, in_mSignature, in_mReturnTypeProxy, in_mModeDictionary, in_mIsExported, in_mFunctionMode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineMapForContext_2D_element::objectCompare (const GALGAS_routineMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReturnTypeProxy.objectCompare (inOperand.mProperty_mReturnTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModeDictionary.objectCompare (inOperand.mProperty_mModeDictionary) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsExported.objectCompare (inOperand.mProperty_mIsExported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionMode.objectCompare (inOperand.mProperty_mFunctionMode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mReturnTypeProxy.isValid () && mProperty_mModeDictionary.isValid () && mProperty_mIsExported.isValid () && mProperty_mFunctionMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mReturnTypeProxy.drop () ;
  mProperty_mModeDictionary.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFunctionMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMapForContext_2D_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @routineMapForContext-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mReturnTypeProxy.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mModeDictionary.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsExported.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFunctionMode.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMapForContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMapForContext_2D_element ("routineMapForContext-element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMapForContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMapForContext_2D_element GALGAS_routineMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineMapForContext_2D_element result ;
  const GALGAS_routineMapForContext_2D_element * p = (const GALGAS_routineMapForContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element::GALGAS_requiredFunctionDeclarationListAST_2D_element (void) :
mProperty_mName (),
mProperty_mExecutionMode (),
mProperty_mIsExported (),
mProperty_mFormalArgumentList (),
mProperty_mEndOfProcLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element::~ GALGAS_requiredFunctionDeclarationListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element::GALGAS_requiredFunctionDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_mode & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_routineFormalArgumentListAST & inOperand3,
                                                                                                            const GALGAS_location & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mExecutionMode (inOperand1),
mProperty_mIsExported (inOperand2),
mProperty_mFormalArgumentList (inOperand3),
mProperty_mEndOfProcLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element GALGAS_requiredFunctionDeclarationListAST_2D_element::class_func_new (const GALGAS_lstring & in_mName,
                                                                                                                           const GALGAS_mode & in_mExecutionMode,
                                                                                                                           const GALGAS_bool & in_mIsExported,
                                                                                                                           const GALGAS_routineFormalArgumentListAST & in_mFormalArgumentList,
                                                                                                                           const GALGAS_location & in_mEndOfProcLocation,
                                                                                                                           Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST_2D_element result ;
  if (in_mName.isValid () && in_mExecutionMode.isValid () && in_mIsExported.isValid () && in_mFormalArgumentList.isValid () && in_mEndOfProcLocation.isValid ()) {
    result = GALGAS_requiredFunctionDeclarationListAST_2D_element (in_mName, in_mExecutionMode, in_mIsExported, in_mFormalArgumentList, in_mEndOfProcLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_requiredFunctionDeclarationListAST_2D_element::objectCompare (const GALGAS_requiredFunctionDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mName.objectCompare (inOperand.mProperty_mName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExecutionMode.objectCompare (inOperand.mProperty_mExecutionMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsExported.objectCompare (inOperand.mProperty_mIsExported) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentList.objectCompare (inOperand.mProperty_mFormalArgumentList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEndOfProcLocation.objectCompare (inOperand.mProperty_mEndOfProcLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_requiredFunctionDeclarationListAST_2D_element::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mExecutionMode.isValid () && mProperty_mIsExported.isValid () && mProperty_mFormalArgumentList.isValid () && mProperty_mEndOfProcLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST_2D_element::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mExecutionMode.drop () ;
  mProperty_mIsExported.drop () ;
  mProperty_mFormalArgumentList.drop () ;
  mProperty_mEndOfProcLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_requiredFunctionDeclarationListAST_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @requiredFunctionDeclarationListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExecutionMode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsExported.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEndOfProcLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @requiredFunctionDeclarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2D_element ("requiredFunctionDeclarationListAST-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_requiredFunctionDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_requiredFunctionDeclarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_requiredFunctionDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_requiredFunctionDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_requiredFunctionDeclarationListAST_2D_element GALGAS_requiredFunctionDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_requiredFunctionDeclarationListAST_2D_element result ;
  const GALGAS_requiredFunctionDeclarationListAST_2D_element * p = (const GALGAS_requiredFunctionDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_requiredFunctionDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("requiredFunctionDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (void) :
mProperty_lkey (),
mProperty_mSelfType (),
mProperty_mDriverName (),
mProperty_mMode () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element::~ GALGAS_interruptMapIR_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element::GALGAS_interruptMapIR_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_omnibusType & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_mode & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSelfType (inOperand1),
mProperty_mDriverName (inOperand2),
mProperty_mMode (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_omnibusType & in_mSelfType,
                                                                                   const GALGAS_string & in_mDriverName,
                                                                                   const GALGAS_mode & in_mMode,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  if (in_lkey.isValid () && in_mSelfType.isValid () && in_mDriverName.isValid () && in_mMode.isValid ()) {
    result = GALGAS_interruptMapIR_2D_element (in_lkey, in_mSelfType, in_mDriverName, in_mMode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_interruptMapIR_2D_element::objectCompare (const GALGAS_interruptMapIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelfType.objectCompare (inOperand.mProperty_mSelfType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDriverName.objectCompare (inOperand.mProperty_mDriverName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMode.objectCompare (inOperand.mProperty_mMode) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_interruptMapIR_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSelfType.isValid () && mProperty_mDriverName.isValid () && mProperty_mMode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSelfType.drop () ;
  mProperty_mDriverName.drop () ;
  mProperty_mMode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_interruptMapIR_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @interruptMapIR-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelfType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDriverName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mMode.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @interruptMapIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_interruptMapIR_2D_element ("interruptMapIR-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_interruptMapIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_interruptMapIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_interruptMapIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_interruptMapIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptMapIR_2D_element GALGAS_interruptMapIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_interruptMapIR_2D_element result ;
  const GALGAS_interruptMapIR_2D_element * p = (const GALGAS_interruptMapIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_interruptMapIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("interruptMapIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (void) :
mProperty_lkey (),
mProperty_mIsPublic (),
mProperty_mSignature (),
mProperty_mUserRoutineLLVMName (),
mProperty_mImplementationRoutineLLVMName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element::~ GALGAS_guardMapForContext_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element::GALGAS_guardMapForContext_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_bool & inOperand1,
                                                                            const GALGAS_routineTypedSignature & inOperand2,
                                                                            const GALGAS_lstring & inOperand3,
                                                                            const GALGAS_lstring & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsPublic (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mUserRoutineLLVMName (inOperand3),
mProperty_mImplementationRoutineLLVMName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_bool & in_mIsPublic,
                                                                                           const GALGAS_routineTypedSignature & in_mSignature,
                                                                                           const GALGAS_lstring & in_mUserRoutineLLVMName,
                                                                                           const GALGAS_lstring & in_mImplementationRoutineLLVMName,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  if (in_lkey.isValid () && in_mIsPublic.isValid () && in_mSignature.isValid () && in_mUserRoutineLLVMName.isValid () && in_mImplementationRoutineLLVMName.isValid ()) {
    result = GALGAS_guardMapForContext_2D_element (in_lkey, in_mIsPublic, in_mSignature, in_mUserRoutineLLVMName, in_mImplementationRoutineLLVMName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_guardMapForContext_2D_element::objectCompare (const GALGAS_guardMapForContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsPublic.objectCompare (inOperand.mProperty_mIsPublic) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignature.objectCompare (inOperand.mProperty_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUserRoutineLLVMName.objectCompare (inOperand.mProperty_mUserRoutineLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImplementationRoutineLLVMName.objectCompare (inOperand.mProperty_mImplementationRoutineLLVMName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_guardMapForContext_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsPublic.isValid () && mProperty_mSignature.isValid () && mProperty_mUserRoutineLLVMName.isValid () && mProperty_mImplementationRoutineLLVMName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsPublic.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mUserRoutineLLVMName.drop () ;
  mProperty_mImplementationRoutineLLVMName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_guardMapForContext_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @guardMapForContext-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsPublic.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUserRoutineLLVMName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mImplementationRoutineLLVMName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @guardMapForContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_guardMapForContext_2D_element ("guardMapForContext-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_guardMapForContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guardMapForContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_guardMapForContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guardMapForContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_guardMapForContext_2D_element GALGAS_guardMapForContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_guardMapForContext_2D_element result ;
  const GALGAS_guardMapForContext_2D_element * p = (const GALGAS_guardMapForContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_guardMapForContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guardMapForContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element::GALGAS_routineFormalArgumentListAST_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element::~ GALGAS_routineFormalArgumentListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element::GALGAS_routineFormalArgumentListAST_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::class_func_new (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                               const GALGAS_lstring & in_mSelector,
                                                                                                               const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                               const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                               Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  if (in_mFormalArgumentPassingMode.isValid () && in_mSelector.isValid () && in_mFormalArgumentTypeName.isValid () && in_mFormalArgumentName.isValid ()) {
    result = GALGAS_routineFormalArgumentListAST_2D_element (in_mFormalArgumentPassingMode, in_mSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineFormalArgumentListAST_2D_element::objectCompare (const GALGAS_routineFormalArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentTypeName.objectCompare (inOperand.mProperty_mFormalArgumentTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineFormalArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListAST_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @routineFormalArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineFormalArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ("routineFormalArgumentListAST-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListAST_2D_element GALGAS_routineFormalArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListAST_2D_element result ;
  const GALGAS_routineFormalArgumentListAST_2D_element * p = (const GALGAS_routineFormalArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineFormalArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (void) :
mProperty_mFormalArgumentPassingMode (),
mProperty_mSelector (),
mProperty_mTypeProxy (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element::~ GALGAS_routineTypedSignature_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element::GALGAS_routineTypedSignature_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_unifiedTypeMapEntry & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3) :
mProperty_mFormalArgumentPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mTypeProxy (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::class_func_new (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentPassingMode,
                                                                                                 const GALGAS_lstring & in_mSelector,
                                                                                                 const GALGAS_unifiedTypeMapEntry & in_mTypeProxy,
                                                                                                 const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  if (in_mFormalArgumentPassingMode.isValid () && in_mSelector.isValid () && in_mTypeProxy.isValid () && in_mFormalArgumentName.isValid ()) {
    result = GALGAS_routineTypedSignature_2D_element (in_mFormalArgumentPassingMode, in_mSelector, in_mTypeProxy, in_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineTypedSignature_2D_element::objectCompare (const GALGAS_routineTypedSignature_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentPassingMode.objectCompare (inOperand.mProperty_mFormalArgumentPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeProxy.objectCompare (inOperand.mProperty_mTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineTypedSignature_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mTypeProxy.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature_2D_element::drop (void) {
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mTypeProxy.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineTypedSignature_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @routineTypedSignature-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypeProxy.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineTypedSignature-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ("routineTypedSignature-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineTypedSignature_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineTypedSignature_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineTypedSignature_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineTypedSignature_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineTypedSignature_2D_element GALGAS_routineTypedSignature_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineTypedSignature_2D_element result ;
  const GALGAS_routineTypedSignature_2D_element * p = (const GALGAS_routineTypedSignature_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineTypedSignature_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineTypedSignature-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (void) :
mProperty_mFormalArgumentKind (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element::~ GALGAS_routineFormalArgumentListIR_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element::GALGAS_routineFormalArgumentListIR_2D_element (const GALGAS_procFormalArgumentPassingMode & inOperand0,
                                                                                              const GALGAS_omnibusType & inOperand1,
                                                                                              const GALGAS_string & inOperand2) :
mProperty_mFormalArgumentKind (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::class_func_new (const GALGAS_procFormalArgumentPassingMode & in_mFormalArgumentKind,
                                                                                                             const GALGAS_omnibusType & in_mFormalArgumentType,
                                                                                                             const GALGAS_string & in_mFormalArgumentName,
                                                                                                             Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  if (in_mFormalArgumentKind.isValid () && in_mFormalArgumentType.isValid () && in_mFormalArgumentName.isValid ()) {
    result = GALGAS_routineFormalArgumentListIR_2D_element (in_mFormalArgumentKind, in_mFormalArgumentType, in_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineFormalArgumentListIR_2D_element::objectCompare (const GALGAS_routineFormalArgumentListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentKind.objectCompare (inOperand.mProperty_mFormalArgumentKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentType.objectCompare (inOperand.mProperty_mFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalArgumentName.objectCompare (inOperand.mProperty_mFormalArgumentName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineFormalArgumentListIR_2D_element::isValid (void) const {
  return mProperty_mFormalArgumentKind.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR_2D_element::drop (void) {
  mProperty_mFormalArgumentKind.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineFormalArgumentListIR_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @routineFormalArgumentListIR-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFormalArgumentKind.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineFormalArgumentListIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ("routineFormalArgumentListIR-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineFormalArgumentListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineFormalArgumentListIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineFormalArgumentListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineFormalArgumentListIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineFormalArgumentListIR_2D_element GALGAS_routineFormalArgumentListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineFormalArgumentListIR_2D_element result ;
  const GALGAS_routineFormalArgumentListIR_2D_element * p = (const GALGAS_routineFormalArgumentListIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineFormalArgumentListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineFormalArgumentListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (void) :
mProperty_mVarLLVMName (),
mProperty_mLLVMType (),
mProperty_mFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element::~ GALGAS_allocaList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element::GALGAS_allocaList_2D_element (const GALGAS_string & inOperand0,
                                                            const GALGAS_omnibusType & inOperand1,
                                                            const GALGAS_bool & inOperand2) :
mProperty_mVarLLVMName (inOperand0),
mProperty_mLLVMType (inOperand1),
mProperty_mFormalInputArgument (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::class_func_new (const GALGAS_string & in_mVarLLVMName,
                                                                           const GALGAS_omnibusType & in_mLLVMType,
                                                                           const GALGAS_bool & in_mFormalInputArgument,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  if (in_mVarLLVMName.isValid () && in_mLLVMType.isValid () && in_mFormalInputArgument.isValid ()) {
    result = GALGAS_allocaList_2D_element (in_mVarLLVMName, in_mLLVMType, in_mFormalInputArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_allocaList_2D_element::objectCompare (const GALGAS_allocaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarLLVMName.objectCompare (inOperand.mProperty_mVarLLVMName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLLVMType.objectCompare (inOperand.mProperty_mLLVMType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormalInputArgument.objectCompare (inOperand.mProperty_mFormalInputArgument) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_allocaList_2D_element::isValid (void) const {
  return mProperty_mVarLLVMName.isValid () && mProperty_mLLVMType.isValid () && mProperty_mFormalInputArgument.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList_2D_element::drop (void) {
  mProperty_mVarLLVMName.drop () ;
  mProperty_mLLVMType.drop () ;
  mProperty_mFormalInputArgument.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_allocaList_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @allocaList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mVarLLVMName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mLLVMType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFormalInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @allocaList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_allocaList_2D_element ("allocaList-element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_allocaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_allocaList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_allocaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_allocaList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_allocaList_2D_element GALGAS_allocaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_allocaList_2D_element result ;
  const GALGAS_allocaList_2D_element * p = (const GALGAS_allocaList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_allocaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("allocaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element::~ GALGAS_panicRoutinePriorityMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element::GALGAS_panicRoutinePriorityMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_panicRoutinePriorityMap_2D_element (in_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_panicRoutinePriorityMap_2D_element::objectCompare (const GALGAS_panicRoutinePriorityMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_panicRoutinePriorityMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_panicRoutinePriorityMap_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @panicRoutinePriorityMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @panicRoutinePriorityMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ("panicRoutinePriorityMap-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_panicRoutinePriorityMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_panicRoutinePriorityMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_panicRoutinePriorityMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_panicRoutinePriorityMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_panicRoutinePriorityMap_2D_element GALGAS_panicRoutinePriorityMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_panicRoutinePriorityMap_2D_element result ;
  const GALGAS_panicRoutinePriorityMap_2D_element * p = (const GALGAS_panicRoutinePriorityMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_panicRoutinePriorityMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("panicRoutinePriorityMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element::GALGAS_implicitConversionToBooleanMap_2D_element (void) :
mProperty_lkey (),
mProperty_mConverter () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element::~ GALGAS_implicitConversionToBooleanMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element::GALGAS_implicitConversionToBooleanMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_abstractImplicitConverterToBoolean & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConverter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element GALGAS_implicitConversionToBooleanMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                   const GALGAS_abstractImplicitConverterToBoolean & in_mConverter,
                                                                                                                   Compiler * /* inCompiler */
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap_2D_element result ;
  if (in_lkey.isValid () && in_mConverter.isValid ()) {
    result = GALGAS_implicitConversionToBooleanMap_2D_element (in_lkey, in_mConverter) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_implicitConversionToBooleanMap_2D_element::objectCompare (const GALGAS_implicitConversionToBooleanMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mConverter.objectCompare (inOperand.mProperty_mConverter) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitConversionToBooleanMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConverter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConverter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitConversionToBooleanMap_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @implicitConversionToBooleanMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mConverter.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @implicitConversionToBooleanMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element ("implicitConversionToBooleanMap-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitConversionToBooleanMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitConversionToBooleanMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitConversionToBooleanMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitConversionToBooleanMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitConversionToBooleanMap_2D_element GALGAS_implicitConversionToBooleanMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_implicitConversionToBooleanMap_2D_element result ;
  const GALGAS_implicitConversionToBooleanMap_2D_element * p = (const GALGAS_implicitConversionToBooleanMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implicitConversionToBooleanMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitConversionToBooleanMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element::~ GALGAS_integerSliceFieldListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element::GALGAS_integerSliceFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_expressionAST & inOperand1,
                                                                                        const GALGAS_location & inOperand2) :
mProperty_mSliceWidth (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSliceWidth,
                                                                                                       const GALGAS_expressionAST & in_mExpression,
                                                                                                       const GALGAS_location & in_mExpressionLocation,
                                                                                                       Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  if (in_mSliceWidth.isValid () && in_mExpression.isValid () && in_mExpressionLocation.isValid ()) {
    result = GALGAS_integerSliceFieldListAST_2D_element (in_mSliceWidth, in_mExpression, in_mExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_integerSliceFieldListAST_2D_element::objectCompare (const GALGAS_integerSliceFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceWidth.objectCompare (inOperand.mProperty_mSliceWidth) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpressionLocation.objectCompare (inOperand.mProperty_mExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_integerSliceFieldListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerSliceFieldListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("<struct @integerSliceFieldListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @integerSliceFieldListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ("integerSliceFieldListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerSliceFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerSliceFieldListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerSliceFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerSliceFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerSliceFieldListAST_2D_element GALGAS_integerSliceFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_integerSliceFieldListAST_2D_element result ;
  const GALGAS_integerSliceFieldListAST_2D_element * p = (const GALGAS_integerSliceFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerSliceFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerSliceFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (void) :
mProperty_mFieldName (),
mProperty_mExpression (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element::~ GALGAS_registerIntegerFieldListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element::GALGAS_registerIntegerFieldListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_expressionAST & inOperand1,
                                                                                              const GALGAS_location & inOperand2) :
mProperty_mFieldName (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::class_func_new (const GALGAS_lstring & in_mFieldName,
                                                                                                             const GALGAS_expressionAST & in_mExpression,
                                                                                                             const GALGAS_location & in_mExpressionLocation,
                                                                                                             Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  if (in_mFieldName.isValid () && in_mExpression.isValid () && in_mExpressionLocation.isValid ()) {
    result = GALGAS_registerIntegerFieldListAST_2D_element (in_mFieldName, in_mExpression, in_mExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_registerIntegerFieldListAST_2D_element::objectCompare (const GALGAS_registerIntegerFieldListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFieldName.objectCompare (inOperand.mProperty_mFieldName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpressionLocation.objectCompare (inOperand.mProperty_mExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_registerIntegerFieldListAST_2D_element::isValid (void) const {
  return mProperty_mFieldName.isValid () && mProperty_mExpression.isValid () && mProperty_mExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST_2D_element::drop (void) {
  mProperty_mFieldName.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_registerIntegerFieldListAST_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @registerIntegerFieldListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFieldName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @registerIntegerFieldListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ("registerIntegerFieldListAST-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_registerIntegerFieldListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerIntegerFieldListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_registerIntegerFieldListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_registerIntegerFieldListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_registerIntegerFieldListAST_2D_element GALGAS_registerIntegerFieldListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_registerIntegerFieldListAST_2D_element result ;
  const GALGAS_registerIntegerFieldListAST_2D_element * p = (const GALGAS_registerIntegerFieldListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_registerIntegerFieldListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerIntegerFieldListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (void) :
mProperty_mSelector (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element::~ GALGAS_functionCallEffectiveParameterListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element::GALGAS_functionCallEffectiveParameterListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_expressionAST & inOperand1) :
mProperty_mSelector (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSelector,
                                                                                                                                 const GALGAS_expressionAST & in_mExpression,
                                                                                                                                 Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  if (in_mSelector.isValid () && in_mExpression.isValid ()) {
    result = GALGAS_functionCallEffectiveParameterListAST_2D_element (in_mSelector, in_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_functionCallEffectiveParameterListAST_2D_element::objectCompare (const GALGAS_functionCallEffectiveParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExpression.objectCompare (inOperand.mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_functionCallEffectiveParameterListAST_2D_element::isValid (void) const {
  return mProperty_mSelector.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST_2D_element::drop (void) {
  mProperty_mSelector.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionCallEffectiveParameterListAST_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @functionCallEffectiveParameterListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionCallEffectiveParameterListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ("functionCallEffectiveParameterListAST-element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionCallEffectiveParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallEffectiveParameterListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionCallEffectiveParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionCallEffectiveParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionCallEffectiveParameterListAST_2D_element GALGAS_functionCallEffectiveParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_functionCallEffectiveParameterListAST_2D_element result ;
  const GALGAS_functionCallEffectiveParameterListAST_2D_element * p = (const GALGAS_functionCallEffectiveParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionCallEffectiveParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallEffectiveParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mResultType (),
mProperty_mOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element::~ GALGAS_infixOperatorMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element::GALGAS_infixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_omnibusType & inOperand1,
                                                                        const GALGAS_omnibusInfixOperatorUsage & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mResultType (inOperand1),
mProperty_mOperatorUsage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                       const GALGAS_omnibusType & in_mResultType,
                                                                                       const GALGAS_omnibusInfixOperatorUsage & in_mOperatorUsage,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  if (in_lkey.isValid () && in_mResultType.isValid () && in_mOperatorUsage.isValid ()) {
    result = GALGAS_infixOperatorMap_2D_element (in_lkey, in_mResultType, in_mOperatorUsage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_infixOperatorMap_2D_element::objectCompare (const GALGAS_infixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperatorUsage.objectCompare (inOperand.mProperty_mOperatorUsage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_infixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mResultType.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_infixOperatorMap_2D_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.addString ("<struct @infixOperatorMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOperatorUsage.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @infixOperatorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ("infixOperatorMap-element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_infixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_infixOperatorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_infixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_infixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_infixOperatorMap_2D_element GALGAS_infixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_infixOperatorMap_2D_element result ;
  const GALGAS_infixOperatorMap_2D_element * p = (const GALGAS_infixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_infixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("infixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mReceiverType (),
mProperty_mResultType (),
mProperty_mOperator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element::~ GALGAS_prefixOperatorMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element::GALGAS_prefixOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_omnibusType & inOperand1,
                                                                          const GALGAS_omnibusType & inOperand2,
                                                                          const GALGAS_prefixOperatorUsage & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mReceiverType (inOperand1),
mProperty_mResultType (inOperand2),
mProperty_mOperator (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         const GALGAS_omnibusType & in_mReceiverType,
                                                                                         const GALGAS_omnibusType & in_mResultType,
                                                                                         const GALGAS_prefixOperatorUsage & in_mOperator,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  if (in_lkey.isValid () && in_mReceiverType.isValid () && in_mResultType.isValid () && in_mOperator.isValid ()) {
    result = GALGAS_prefixOperatorMap_2D_element (in_lkey, in_mReceiverType, in_mResultType, in_mOperator) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prefixOperatorMap_2D_element::objectCompare (const GALGAS_prefixOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mReceiverType.objectCompare (inOperand.mProperty_mReceiverType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResultType.objectCompare (inOperand.mProperty_mResultType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperator.objectCompare (inOperand.mProperty_mOperator) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefixOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReceiverType.isValid () && mProperty_mResultType.isValid () && mProperty_mOperator.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReceiverType.drop () ;
  mProperty_mResultType.drop () ;
  mProperty_mOperator.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefixOperatorMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("<struct @prefixOperatorMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mReceiverType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mResultType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOperator.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefixOperatorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ("prefixOperatorMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefixOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefixOperatorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefixOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefixOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefixOperatorMap_2D_element GALGAS_prefixOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefixOperatorMap_2D_element result ;
  const GALGAS_prefixOperatorMap_2D_element * p = (const GALGAS_prefixOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefixOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefixOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (void) :
mProperty_mSliceWidth (),
mProperty_mSliceKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element::~ GALGAS_sliceAssignmentListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element::GALGAS_sliceAssignmentListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_sliceTargetAST & inOperand1) :
mProperty_mSliceWidth (inOperand0),
mProperty_mSliceKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::class_func_new (const GALGAS_lstring & in_mSliceWidth,
                                                                                                   const GALGAS_sliceTargetAST & in_mSliceKind,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  if (in_mSliceWidth.isValid () && in_mSliceKind.isValid ()) {
    result = GALGAS_sliceAssignmentListAST_2D_element (in_mSliceWidth, in_mSliceKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sliceAssignmentListAST_2D_element::objectCompare (const GALGAS_sliceAssignmentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSliceWidth.objectCompare (inOperand.mProperty_mSliceWidth) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSliceKind.objectCompare (inOperand.mProperty_mSliceKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_sliceAssignmentListAST_2D_element::isValid (void) const {
  return mProperty_mSliceWidth.isValid () && mProperty_mSliceKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST_2D_element::drop (void) {
  mProperty_mSliceWidth.drop () ;
  mProperty_mSliceKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_sliceAssignmentListAST_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("<struct @sliceAssignmentListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mSliceWidth.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSliceKind.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sliceAssignmentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ("sliceAssignmentListAST-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sliceAssignmentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sliceAssignmentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sliceAssignmentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sliceAssignmentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sliceAssignmentListAST_2D_element GALGAS_sliceAssignmentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sliceAssignmentListAST_2D_element result ;
  const GALGAS_sliceAssignmentListAST_2D_element * p = (const GALGAS_sliceAssignmentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sliceAssignmentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sliceAssignmentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (void) :
mProperty_mEffectiveParameterPassingMode (),
mProperty_mSelector (),
mProperty_mParameterType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element::~ GALGAS_procEffectiveParameterList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element::GALGAS_procEffectiveParameterList_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_omnibusType & inOperand2) :
mProperty_mEffectiveParameterPassingMode (inOperand0),
mProperty_mSelector (inOperand1),
mProperty_mParameterType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::class_func_new (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterPassingMode,
                                                                                                           const GALGAS_lstring & in_mSelector,
                                                                                                           const GALGAS_omnibusType & in_mParameterType,
                                                                                                           Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  if (in_mEffectiveParameterPassingMode.isValid () && in_mSelector.isValid () && in_mParameterType.isValid ()) {
    result = GALGAS_procEffectiveParameterList_2D_element (in_mEffectiveParameterPassingMode, in_mSelector, in_mParameterType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_procEffectiveParameterList_2D_element::objectCompare (const GALGAS_procEffectiveParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterPassingMode.objectCompare (inOperand.mProperty_mEffectiveParameterPassingMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterType.objectCompare (inOperand.mProperty_mParameterType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_procEffectiveParameterList_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterPassingMode.isValid () && mProperty_mSelector.isValid () && mProperty_mParameterType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList_2D_element::drop (void) {
  mProperty_mEffectiveParameterPassingMode.drop () ;
  mProperty_mSelector.drop () ;
  mProperty_mParameterType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_procEffectiveParameterList_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @procEffectiveParameterList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mEffectiveParameterPassingMode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procEffectiveParameterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ("procEffectiveParameterList-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procEffectiveParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procEffectiveParameterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procEffectiveParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procEffectiveParameterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procEffectiveParameterList_2D_element GALGAS_procEffectiveParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_procEffectiveParameterList_2D_element result ;
  const GALGAS_procEffectiveParameterList_2D_element * p = (const GALGAS_procEffectiveParameterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procEffectiveParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procEffectiveParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (void) :
mProperty_mEffectiveParameterKind (),
mProperty_mSelector () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element::~ GALGAS_effectiveArgumentListAST_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element::GALGAS_effectiveArgumentListAST_2D_element (const GALGAS_effectiveArgumentPassingModeAST & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1) :
mProperty_mEffectiveParameterKind (inOperand0),
mProperty_mSelector (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::class_func_new (const GALGAS_effectiveArgumentPassingModeAST & in_mEffectiveParameterKind,
                                                                                                       const GALGAS_lstring & in_mSelector,
                                                                                                       Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  if (in_mEffectiveParameterKind.isValid () && in_mSelector.isValid ()) {
    result = GALGAS_effectiveArgumentListAST_2D_element (in_mEffectiveParameterKind, in_mSelector) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_effectiveArgumentListAST_2D_element::objectCompare (const GALGAS_effectiveArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEffectiveParameterKind.objectCompare (inOperand.mProperty_mEffectiveParameterKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelector.objectCompare (inOperand.mProperty_mSelector) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_effectiveArgumentListAST_2D_element::isValid (void) const {
  return mProperty_mEffectiveParameterKind.isValid () && mProperty_mSelector.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST_2D_element::drop (void) {
  mProperty_mEffectiveParameterKind.drop () ;
  mProperty_mSelector.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_effectiveArgumentListAST_2D_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("<struct @effectiveArgumentListAST-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mEffectiveParameterKind.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelector.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @effectiveArgumentListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ("effectiveArgumentListAST-element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_effectiveArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_effectiveArgumentListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_effectiveArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_effectiveArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_effectiveArgumentListAST_2D_element GALGAS_effectiveArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_effectiveArgumentListAST_2D_element result ;
  const GALGAS_effectiveArgumentListAST_2D_element * p = (const GALGAS_effectiveArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_effectiveArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("effectiveArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (void) :
mProperty_mGroupName (),
mProperty_mBaseAddresses () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element::~ GALGAS_controlRegisterGroupArrayList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element::GALGAS_controlRegisterGroupArrayList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lbigintlist & inOperand1) :
mProperty_mGroupName (inOperand0),
mProperty_mBaseAddresses (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::class_func_new (const GALGAS_lstring & in_mGroupName,
                                                                                                                 const GALGAS_lbigintlist & in_mBaseAddresses,
                                                                                                                 Compiler * /* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  if (in_mGroupName.isValid () && in_mBaseAddresses.isValid ()) {
    result = GALGAS_controlRegisterGroupArrayList_2D_element (in_mGroupName, in_mBaseAddresses) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_controlRegisterGroupArrayList_2D_element::objectCompare (const GALGAS_controlRegisterGroupArrayList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBaseAddresses.objectCompare (inOperand.mProperty_mBaseAddresses) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controlRegisterGroupArrayList_2D_element::isValid (void) const {
  return mProperty_mGroupName.isValid () && mProperty_mBaseAddresses.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList_2D_element::drop (void) {
  mProperty_mGroupName.drop () ;
  mProperty_mBaseAddresses.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controlRegisterGroupArrayList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("<struct @controlRegisterGroupArrayList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBaseAddresses.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @controlRegisterGroupArrayList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ("controlRegisterGroupArrayList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controlRegisterGroupArrayList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controlRegisterGroupArrayList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controlRegisterGroupArrayList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controlRegisterGroupArrayList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controlRegisterGroupArrayList_2D_element GALGAS_controlRegisterGroupArrayList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controlRegisterGroupArrayList_2D_element result ;
  const GALGAS_controlRegisterGroupArrayList_2D_element * p = (const GALGAS_controlRegisterGroupArrayList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controlRegisterGroupArrayList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controlRegisterGroupArrayList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (void) :
mProperty_mRoutine () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element::~ GALGAS_routineListIR_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element::GALGAS_routineListIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0) :
mProperty_mRoutine (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::class_func_new (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  if (in_mRoutine.isValid ()) {
    result = GALGAS_routineListIR_2D_element (in_mRoutine) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineListIR_2D_element::objectCompare (const GALGAS_routineListIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutine.objectCompare (inOperand.mProperty_mRoutine) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineListIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineListIR_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("<struct @routineListIR-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineListIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineListIR_2D_element ("routineListIR-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineListIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineListIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineListIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineListIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineListIR_2D_element GALGAS_routineListIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routineListIR_2D_element result ;
  const GALGAS_routineListIR_2D_element * p = (const GALGAS_routineListIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineListIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineListIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (void) :
mProperty_mRoutine (),
mProperty_mAccessibleRoutineSet () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element::~ GALGAS_routineAccessibilityIR_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element::GALGAS_routineAccessibilityIR_2D_element (const GALGAS_abstractRoutineIR & inOperand0,
                                                                                    const GALGAS_stringset & inOperand1) :
mProperty_mRoutine (inOperand0),
mProperty_mAccessibleRoutineSet (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::class_func_new (const GALGAS_abstractRoutineIR & in_mRoutine,
                                                                                                   const GALGAS_stringset & in_mAccessibleRoutineSet,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  if (in_mRoutine.isValid () && in_mAccessibleRoutineSet.isValid ()) {
    result = GALGAS_routineAccessibilityIR_2D_element (in_mRoutine, in_mAccessibleRoutineSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_routineAccessibilityIR_2D_element::objectCompare (const GALGAS_routineAccessibilityIR_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRoutine.objectCompare (inOperand.mProperty_mRoutine) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAccessibleRoutineSet.objectCompare (inOperand.mProperty_mAccessibleRoutineSet) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineAccessibilityIR_2D_element::isValid (void) const {
  return mProperty_mRoutine.isValid () && mProperty_mAccessibleRoutineSet.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR_2D_element::drop (void) {
  mProperty_mRoutine.drop () ;
  mProperty_mAccessibleRoutineSet.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineAccessibilityIR_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("<struct @routineAccessibilityIR-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mRoutine.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAccessibleRoutineSet.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineAccessibilityIR-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ("routineAccessibilityIR-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineAccessibilityIR_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineAccessibilityIR_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineAccessibilityIR_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineAccessibilityIR_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineAccessibilityIR_2D_element GALGAS_routineAccessibilityIR_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_routineAccessibilityIR_2D_element result ;
  const GALGAS_routineAccessibilityIR_2D_element * p = (const GALGAS_routineAccessibilityIR_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineAccessibilityIR_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineAccessibilityIR-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element::GALGAS_ctCheckMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element::~ GALGAS_ctCheckMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element::GALGAS_ctCheckMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  if (in_lkey.isValid ()) {
    result = GALGAS_ctCheckMap_2D_element (in_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctCheckMap_2D_element::objectCompare (const GALGAS_ctCheckMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctCheckMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctCheckMap_2D_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @ctCheckMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctCheckMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctCheckMap_2D_element ("ctCheckMap-element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctCheckMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctCheckMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctCheckMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctCheckMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctCheckMap_2D_element GALGAS_ctCheckMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ctCheckMap_2D_element result ;
  const GALGAS_ctCheckMap_2D_element * p = (const GALGAS_ctCheckMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctCheckMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctCheckMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element::GALGAS_ctMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element::~ GALGAS_ctMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element::GALGAS_ctMap_2D_element (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_bigint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                 const GALGAS_bigint & in_mValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  if (in_lkey.isValid () && in_mValue.isValid ()) {
    result = GALGAS_ctMap_2D_element (in_lkey, in_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ctMap_2D_element::objectCompare (const GALGAS_ctMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ctMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ctMap_2D_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @ctMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ctMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ctMap_2D_element ("ctMap-element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ctMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ctMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ctMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ctMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ctMap_2D_element GALGAS_ctMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ctMap_2D_element result ;
  const GALGAS_ctMap_2D_element * p = (const GALGAS_ctMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ctMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ctMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOperatorUsage () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::~ GALGAS_assignmentOperatorMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element::GALGAS_assignmentOperatorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_abstractAssignmentOperatorUsage & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOperatorUsage (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_abstractAssignmentOperatorUsage & in_mOperatorUsage,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  if (in_lkey.isValid () && in_mOperatorUsage.isValid ()) {
    result = GALGAS_assignmentOperatorMap_2D_element (in_lkey, in_mOperatorUsage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentOperatorMap_2D_element::objectCompare (const GALGAS_assignmentOperatorMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOperatorUsage.objectCompare (inOperand.mProperty_mOperatorUsage) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_assignmentOperatorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOperatorUsage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOperatorUsage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentOperatorMap_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @assignmentOperatorMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOperatorUsage.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentOperatorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ("assignmentOperatorMap-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentOperatorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentOperatorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentOperatorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentOperatorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentOperatorMap_2D_element GALGAS_assignmentOperatorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_assignmentOperatorMap_2D_element result ;
  const GALGAS_assignmentOperatorMap_2D_element * p = (const GALGAS_assignmentOperatorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentOperatorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentOperatorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::~ GALGAS_assignmentGenerationVarMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element::GALGAS_assignmentGenerationVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                           const GALGAS_string & in_mValue,
                                                                                                           Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  if (in_lkey.isValid () && in_mValue.isValid ()) {
    result = GALGAS_assignmentGenerationVarMap_2D_element (in_lkey, in_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentGenerationVarMap_2D_element::objectCompare (const GALGAS_assignmentGenerationVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_assignmentGenerationVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentGenerationVarMap_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.addString ("<struct @assignmentGenerationVarMap-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentGenerationVarMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ("assignmentGenerationVarMap-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentGenerationVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentGenerationVarMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentGenerationVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentGenerationVarMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentGenerationVarMap_2D_element GALGAS_assignmentGenerationVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignmentGenerationVarMap_2D_element result ;
  const GALGAS_assignmentGenerationVarMap_2D_element * p = (const GALGAS_assignmentGenerationVarMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentGenerationVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentGenerationVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_targetParameters::GALGAS_targetParameters (void) :
mProperty_mConfigurationLocation (),
mProperty_mPython_5F_utilityToolList (),
mProperty_mPython_5F_build (),
mProperty_mLinkerScript (),
mProperty_mPointerSize (),
mProperty_mHandleDynamicArray (),
mProperty_mSystemStackSize (),
mProperty_mStackedUserRegisterOnInterruptByteSize (),
mProperty_mNopInstructionStringInLLVM (),
mProperty_mBitbandRegisterBaseAddress (),
mProperty_mBitbandRegisterEndAddress (),
mProperty_mBitbandRegisterRelocationAddress (),
mProperty_mBitbandRegisterOffsetMultiplier (),
mProperty_mBitbandRegisterBitMultiplier (),
mProperty_mSectionHandler (),
mProperty_mSectionPushedRegisterByteSize (),
mProperty_mSectionDispatcherHeader (),
mProperty_mSectionDispatcherEntry (),
mProperty_mSectionDispatcherInvocationFromAnyMode (),
mProperty_mSectionDispatcherInvocationFromUserMode (),
mProperty_m_5F_C_5F_definitionFiles (),
mProperty_m_5F_S_5F_definitionFiles (),
mProperty_m_5F_LL_5F_definitionFiles (),
mProperty_mXtrInterruptHandler (),
mProperty_mUndefinedInterruptHandler (),
mProperty_mServiceHandler (),
mProperty_mServicePushedRegisterByteSize (),
mProperty_mServiceDispatcherEntry (),
mProperty_mServiceDispatcherHeader (),
mProperty_mServiceEntryNoReturnedValue (),
mProperty_mServiceEntryWithReturnValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_targetParameters::~ GALGAS_targetParameters (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_targetParameters::GALGAS_targetParameters (const GALGAS_location & inOperand0,
                                                  const GALGAS__32_lstringlist & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_lstring & inOperand3,
                                                  const GALGAS_uint & inOperand4,
                                                  const GALGAS_bool & inOperand5,
                                                  const GALGAS_lbigint & inOperand6,
                                                  const GALGAS_lbigint & inOperand7,
                                                  const GALGAS_lstring & inOperand8,
                                                  const GALGAS_lbigint & inOperand9,
                                                  const GALGAS_lbigint & inOperand10,
                                                  const GALGAS_lbigint & inOperand11,
                                                  const GALGAS_lbigint & inOperand12,
                                                  const GALGAS_lbigint & inOperand13,
                                                  const GALGAS_lstring & inOperand14,
                                                  const GALGAS_lbigint & inOperand15,
                                                  const GALGAS_lstring & inOperand16,
                                                  const GALGAS_lstring & inOperand17,
                                                  const GALGAS_lstring & inOperand18,
                                                  const GALGAS_lstring & inOperand19,
                                                  const GALGAS_lstringlist & inOperand20,
                                                  const GALGAS_lstringlist & inOperand21,
                                                  const GALGAS_lstringlist & inOperand22,
                                                  const GALGAS_lstring & inOperand23,
                                                  const GALGAS_lstring & inOperand24,
                                                  const GALGAS_lstring & inOperand25,
                                                  const GALGAS_lbigint & inOperand26,
                                                  const GALGAS_lstring & inOperand27,
                                                  const GALGAS_lstring & inOperand28,
                                                  const GALGAS_lstring & inOperand29,
                                                  const GALGAS_lstring & inOperand30) :
mProperty_mConfigurationLocation (inOperand0),
mProperty_mPython_5F_utilityToolList (inOperand1),
mProperty_mPython_5F_build (inOperand2),
mProperty_mLinkerScript (inOperand3),
mProperty_mPointerSize (inOperand4),
mProperty_mHandleDynamicArray (inOperand5),
mProperty_mSystemStackSize (inOperand6),
mProperty_mStackedUserRegisterOnInterruptByteSize (inOperand7),
mProperty_mNopInstructionStringInLLVM (inOperand8),
mProperty_mBitbandRegisterBaseAddress (inOperand9),
mProperty_mBitbandRegisterEndAddress (inOperand10),
mProperty_mBitbandRegisterRelocationAddress (inOperand11),
mProperty_mBitbandRegisterOffsetMultiplier (inOperand12),
mProperty_mBitbandRegisterBitMultiplier (inOperand13),
mProperty_mSectionHandler (inOperand14),
mProperty_mSectionPushedRegisterByteSize (inOperand15),
mProperty_mSectionDispatcherHeader (inOperand16),
mProperty_mSectionDispatcherEntry (inOperand17),
mProperty_mSectionDispatcherInvocationFromAnyMode (inOperand18),
mProperty_mSectionDispatcherInvocationFromUserMode (inOperand19),
mProperty_m_5F_C_5F_definitionFiles (inOperand20),
mProperty_m_5F_S_5F_definitionFiles (inOperand21),
mProperty_m_5F_LL_5F_definitionFiles (inOperand22),
mProperty_mXtrInterruptHandler (inOperand23),
mProperty_mUndefinedInterruptHandler (inOperand24),
mProperty_mServiceHandler (inOperand25),
mProperty_mServicePushedRegisterByteSize (inOperand26),
mProperty_mServiceDispatcherEntry (inOperand27),
mProperty_mServiceDispatcherHeader (inOperand28),
mProperty_mServiceEntryNoReturnedValue (inOperand29),
mProperty_mServiceEntryWithReturnValue (inOperand30) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_targetParameters::class_func_new (const GALGAS_location & in_mConfigurationLocation,
                                                                 const GALGAS__32_lstringlist & in_mPython_utilityToolList,
                                                                 const GALGAS_lstring & in_mPython_build,
                                                                 const GALGAS_lstring & in_mLinkerScript,
                                                                 const GALGAS_uint & in_mPointerSize,
                                                                 const GALGAS_bool & in_mHandleDynamicArray,
                                                                 const GALGAS_lbigint & in_mSystemStackSize,
                                                                 const GALGAS_lbigint & in_mStackedUserRegisterOnInterruptByteSize,
                                                                 const GALGAS_lstring & in_mNopInstructionStringInLLVM,
                                                                 const GALGAS_lbigint & in_mBitbandRegisterBaseAddress,
                                                                 const GALGAS_lbigint & in_mBitbandRegisterEndAddress,
                                                                 const GALGAS_lbigint & in_mBitbandRegisterRelocationAddress,
                                                                 const GALGAS_lbigint & in_mBitbandRegisterOffsetMultiplier,
                                                                 const GALGAS_lbigint & in_mBitbandRegisterBitMultiplier,
                                                                 const GALGAS_lstring & in_mSectionHandler,
                                                                 const GALGAS_lbigint & in_mSectionPushedRegisterByteSize,
                                                                 const GALGAS_lstring & in_mSectionDispatcherHeader,
                                                                 const GALGAS_lstring & in_mSectionDispatcherEntry,
                                                                 const GALGAS_lstring & in_mSectionDispatcherInvocationFromAnyMode,
                                                                 const GALGAS_lstring & in_mSectionDispatcherInvocationFromUserMode,
                                                                 const GALGAS_lstringlist & in_m_C_definitionFiles,
                                                                 const GALGAS_lstringlist & in_m_S_definitionFiles,
                                                                 const GALGAS_lstringlist & in_m_LL_definitionFiles,
                                                                 const GALGAS_lstring & in_mXtrInterruptHandler,
                                                                 const GALGAS_lstring & in_mUndefinedInterruptHandler,
                                                                 const GALGAS_lstring & in_mServiceHandler,
                                                                 const GALGAS_lbigint & in_mServicePushedRegisterByteSize,
                                                                 const GALGAS_lstring & in_mServiceDispatcherEntry,
                                                                 const GALGAS_lstring & in_mServiceDispatcherHeader,
                                                                 const GALGAS_lstring & in_mServiceEntryNoReturnedValue,
                                                                 const GALGAS_lstring & in_mServiceEntryWithReturnValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  if (in_mConfigurationLocation.isValid () && in_mPython_utilityToolList.isValid () && in_mPython_build.isValid () && in_mLinkerScript.isValid () && in_mPointerSize.isValid () && in_mHandleDynamicArray.isValid () && in_mSystemStackSize.isValid () && in_mStackedUserRegisterOnInterruptByteSize.isValid () && in_mNopInstructionStringInLLVM.isValid () && in_mBitbandRegisterBaseAddress.isValid () && in_mBitbandRegisterEndAddress.isValid () && in_mBitbandRegisterRelocationAddress.isValid () && in_mBitbandRegisterOffsetMultiplier.isValid () && in_mBitbandRegisterBitMultiplier.isValid () && in_mSectionHandler.isValid () && in_mSectionPushedRegisterByteSize.isValid () && in_mSectionDispatcherHeader.isValid () && in_mSectionDispatcherEntry.isValid () && in_mSectionDispatcherInvocationFromAnyMode.isValid () && in_mSectionDispatcherInvocationFromUserMode.isValid () && in_m_C_definitionFiles.isValid () && in_m_S_definitionFiles.isValid () && in_m_LL_definitionFiles.isValid () && in_mXtrInterruptHandler.isValid () && in_mUndefinedInterruptHandler.isValid () && in_mServiceHandler.isValid () && in_mServicePushedRegisterByteSize.isValid () && in_mServiceDispatcherEntry.isValid () && in_mServiceDispatcherHeader.isValid () && in_mServiceEntryNoReturnedValue.isValid () && in_mServiceEntryWithReturnValue.isValid ()) {
    result = GALGAS_targetParameters (in_mConfigurationLocation, in_mPython_utilityToolList, in_mPython_build, in_mLinkerScript, in_mPointerSize, in_mHandleDynamicArray, in_mSystemStackSize, in_mStackedUserRegisterOnInterruptByteSize, in_mNopInstructionStringInLLVM, in_mBitbandRegisterBaseAddress, in_mBitbandRegisterEndAddress, in_mBitbandRegisterRelocationAddress, in_mBitbandRegisterOffsetMultiplier, in_mBitbandRegisterBitMultiplier, in_mSectionHandler, in_mSectionPushedRegisterByteSize, in_mSectionDispatcherHeader, in_mSectionDispatcherEntry, in_mSectionDispatcherInvocationFromAnyMode, in_mSectionDispatcherInvocationFromUserMode, in_m_C_definitionFiles, in_m_S_definitionFiles, in_m_LL_definitionFiles, in_mXtrInterruptHandler, in_mUndefinedInterruptHandler, in_mServiceHandler, in_mServicePushedRegisterByteSize, in_mServiceDispatcherEntry, in_mServiceDispatcherHeader, in_mServiceEntryNoReturnedValue, in_mServiceEntryWithReturnValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_targetParameters::objectCompare (const GALGAS_targetParameters & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mConfigurationLocation.objectCompare (inOperand.mProperty_mConfigurationLocation) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_utilityToolList.objectCompare (inOperand.mProperty_mPython_5F_utilityToolList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPython_5F_build.objectCompare (inOperand.mProperty_mPython_5F_build) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLinkerScript.objectCompare (inOperand.mProperty_mLinkerScript) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPointerSize.objectCompare (inOperand.mProperty_mPointerSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleDynamicArray.objectCompare (inOperand.mProperty_mHandleDynamicArray) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSystemStackSize.objectCompare (inOperand.mProperty_mSystemStackSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStackedUserRegisterOnInterruptByteSize.objectCompare (inOperand.mProperty_mStackedUserRegisterOnInterruptByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNopInstructionStringInLLVM.objectCompare (inOperand.mProperty_mNopInstructionStringInLLVM) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBaseAddress.objectCompare (inOperand.mProperty_mBitbandRegisterBaseAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterEndAddress.objectCompare (inOperand.mProperty_mBitbandRegisterEndAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterRelocationAddress.objectCompare (inOperand.mProperty_mBitbandRegisterRelocationAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterOffsetMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterOffsetMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitbandRegisterBitMultiplier.objectCompare (inOperand.mProperty_mBitbandRegisterBitMultiplier) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionHandler.objectCompare (inOperand.mProperty_mSectionHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionPushedRegisterByteSize.objectCompare (inOperand.mProperty_mSectionPushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherHeader.objectCompare (inOperand.mProperty_mSectionDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherEntry.objectCompare (inOperand.mProperty_mSectionDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromAnyMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromAnyMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSectionDispatcherInvocationFromUserMode.objectCompare (inOperand.mProperty_mSectionDispatcherInvocationFromUserMode) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_C_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_C_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_S_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_S_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_LL_5F_definitionFiles.objectCompare (inOperand.mProperty_m_5F_LL_5F_definitionFiles) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXtrInterruptHandler.objectCompare (inOperand.mProperty_mXtrInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUndefinedInterruptHandler.objectCompare (inOperand.mProperty_mUndefinedInterruptHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceHandler.objectCompare (inOperand.mProperty_mServiceHandler) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServicePushedRegisterByteSize.objectCompare (inOperand.mProperty_mServicePushedRegisterByteSize) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherEntry.objectCompare (inOperand.mProperty_mServiceDispatcherEntry) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceDispatcherHeader.objectCompare (inOperand.mProperty_mServiceDispatcherHeader) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryNoReturnedValue.objectCompare (inOperand.mProperty_mServiceEntryNoReturnedValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mServiceEntryWithReturnValue.objectCompare (inOperand.mProperty_mServiceEntryWithReturnValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_targetParameters::isValid (void) const {
  return mProperty_mConfigurationLocation.isValid () && mProperty_mPython_5F_utilityToolList.isValid () && mProperty_mPython_5F_build.isValid () && mProperty_mLinkerScript.isValid () && mProperty_mPointerSize.isValid () && mProperty_mHandleDynamicArray.isValid () && mProperty_mSystemStackSize.isValid () && mProperty_mStackedUserRegisterOnInterruptByteSize.isValid () && mProperty_mNopInstructionStringInLLVM.isValid () && mProperty_mBitbandRegisterBaseAddress.isValid () && mProperty_mBitbandRegisterEndAddress.isValid () && mProperty_mBitbandRegisterRelocationAddress.isValid () && mProperty_mBitbandRegisterOffsetMultiplier.isValid () && mProperty_mBitbandRegisterBitMultiplier.isValid () && mProperty_mSectionHandler.isValid () && mProperty_mSectionPushedRegisterByteSize.isValid () && mProperty_mSectionDispatcherHeader.isValid () && mProperty_mSectionDispatcherEntry.isValid () && mProperty_mSectionDispatcherInvocationFromAnyMode.isValid () && mProperty_mSectionDispatcherInvocationFromUserMode.isValid () && mProperty_m_5F_C_5F_definitionFiles.isValid () && mProperty_m_5F_S_5F_definitionFiles.isValid () && mProperty_m_5F_LL_5F_definitionFiles.isValid () && mProperty_mXtrInterruptHandler.isValid () && mProperty_mUndefinedInterruptHandler.isValid () && mProperty_mServiceHandler.isValid () && mProperty_mServicePushedRegisterByteSize.isValid () && mProperty_mServiceDispatcherEntry.isValid () && mProperty_mServiceDispatcherHeader.isValid () && mProperty_mServiceEntryNoReturnedValue.isValid () && mProperty_mServiceEntryWithReturnValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_targetParameters::drop (void) {
  mProperty_mConfigurationLocation.drop () ;
  mProperty_mPython_5F_utilityToolList.drop () ;
  mProperty_mPython_5F_build.drop () ;
  mProperty_mLinkerScript.drop () ;
  mProperty_mPointerSize.drop () ;
  mProperty_mHandleDynamicArray.drop () ;
  mProperty_mSystemStackSize.drop () ;
  mProperty_mStackedUserRegisterOnInterruptByteSize.drop () ;
  mProperty_mNopInstructionStringInLLVM.drop () ;
  mProperty_mBitbandRegisterBaseAddress.drop () ;
  mProperty_mBitbandRegisterEndAddress.drop () ;
  mProperty_mBitbandRegisterRelocationAddress.drop () ;
  mProperty_mBitbandRegisterOffsetMultiplier.drop () ;
  mProperty_mBitbandRegisterBitMultiplier.drop () ;
  mProperty_mSectionHandler.drop () ;
  mProperty_mSectionPushedRegisterByteSize.drop () ;
  mProperty_mSectionDispatcherHeader.drop () ;
  mProperty_mSectionDispatcherEntry.drop () ;
  mProperty_mSectionDispatcherInvocationFromAnyMode.drop () ;
  mProperty_mSectionDispatcherInvocationFromUserMode.drop () ;
  mProperty_m_5F_C_5F_definitionFiles.drop () ;
  mProperty_m_5F_S_5F_definitionFiles.drop () ;
  mProperty_m_5F_LL_5F_definitionFiles.drop () ;
  mProperty_mXtrInterruptHandler.drop () ;
  mProperty_mUndefinedInterruptHandler.drop () ;
  mProperty_mServiceHandler.drop () ;
  mProperty_mServicePushedRegisterByteSize.drop () ;
  mProperty_mServiceDispatcherEntry.drop () ;
  mProperty_mServiceDispatcherHeader.drop () ;
  mProperty_mServiceEntryNoReturnedValue.drop () ;
  mProperty_mServiceEntryWithReturnValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_targetParameters::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @targetParameters:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mConfigurationLocation.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPython_5F_utilityToolList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPython_5F_build.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mLinkerScript.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPointerSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mHandleDynamicArray.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSystemStackSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mStackedUserRegisterOnInterruptByteSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNopInstructionStringInLLVM.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitbandRegisterBaseAddress.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitbandRegisterEndAddress.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitbandRegisterRelocationAddress.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitbandRegisterOffsetMultiplier.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBitbandRegisterBitMultiplier.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSectionHandler.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSectionPushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSectionDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSectionDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSectionDispatcherInvocationFromAnyMode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSectionDispatcherInvocationFromUserMode.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_m_5F_C_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_m_5F_S_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_m_5F_LL_5F_definitionFiles.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mXtrInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mUndefinedInterruptHandler.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mServiceHandler.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mServicePushedRegisterByteSize.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mServiceDispatcherEntry.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mServiceDispatcherHeader.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mServiceEntryNoReturnedValue.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mServiceEntryWithReturnValue.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @targetParameters generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_targetParameters ("targetParameters",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_targetParameters::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_targetParameters ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_targetParameters::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_targetParameters (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_targetParameters::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_targetParameters result ;
  const GALGAS_targetParameters * p = (const GALGAS_targetParameters *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_targetParameters *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("targetParameters", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @configurationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_configurationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPanicCodeTypeName.printNonNullClassInstanceProperties ("mPanicCodeTypeName") ;
    mProperty_mPanicLineTypeName.printNonNullClassInstanceProperties ("mPanicLineTypeName") ;
    mProperty_mTargetParameters.printNonNullClassInstanceProperties ("mTargetParameters") ;
    mProperty_mInterruptionConfigurationList.printNonNullClassInstanceProperties ("mInterruptionConfigurationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_configurationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_configurationDeclarationAST * p = (const cPtr_configurationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mPanicCodeTypeName.objectCompare (p->mProperty_mPanicCodeTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPanicLineTypeName.objectCompare (p->mProperty_mPanicLineTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetParameters.objectCompare (p->mProperty_mTargetParameters) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInterruptionConfigurationList.objectCompare (p->mProperty_mInterruptionConfigurationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_configurationDeclarationAST::objectCompare (const GALGAS_configurationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST::GALGAS_configurationDeclarationAST (const cPtr_configurationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_configurationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mPanicCodeTypeName,
                                                                                       const GALGAS_lstring & inAttribute_mPanicLineTypeName,
                                                                                       const GALGAS_targetParameters & inAttribute_mTargetParameters,
                                                                                       const GALGAS_interruptionConfigurationList & inAttribute_mInterruptionConfigurationList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  if (inAttribute_mPanicCodeTypeName.isValid () && inAttribute_mPanicLineTypeName.isValid () && inAttribute_mTargetParameters.isValid () && inAttribute_mInterruptionConfigurationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_configurationDeclarationAST (inAttribute_mPanicCodeTypeName, inAttribute_mPanicLineTypeName, inAttribute_mTargetParameters, inAttribute_mInterruptionConfigurationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMPanicCodeTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicCodeTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMPanicLineTypeName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mPanicLineTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMTargetParameters (GALGAS_targetParameters inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mTargetParameters = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_configurationDeclarationAST::setter_setMInterruptionConfigurationList (GALGAS_interruptionConfigurationList inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    p->mProperty_mInterruptionConfigurationList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configurationDeclarationAST::readProperty_mPanicCodeTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicCodeTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_configurationDeclarationAST::readProperty_mPanicLineTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mPanicLineTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_targetParameters GALGAS_configurationDeclarationAST::readProperty_mTargetParameters (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_targetParameters () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mTargetParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_interruptionConfigurationList GALGAS_configurationDeclarationAST::readProperty_mInterruptionConfigurationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_interruptionConfigurationList () ;
  }else{
    cPtr_configurationDeclarationAST * p = (cPtr_configurationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_configurationDeclarationAST) ;
    return p->mProperty_mInterruptionConfigurationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @configurationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_configurationDeclarationAST::cPtr_configurationDeclarationAST (const GALGAS_lstring & in_mPanicCodeTypeName,
                                                                    const GALGAS_lstring & in_mPanicLineTypeName,
                                                                    const GALGAS_targetParameters & in_mTargetParameters,
                                                                    const GALGAS_interruptionConfigurationList & in_mInterruptionConfigurationList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (THERE),
mProperty_mPanicCodeTypeName (in_mPanicCodeTypeName),
mProperty_mPanicLineTypeName (in_mPanicLineTypeName),
mProperty_mTargetParameters (in_mTargetParameters),
mProperty_mInterruptionConfigurationList (in_mInterruptionConfigurationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_configurationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

void cPtr_configurationDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("[@configurationDeclarationAST:") ;
  mProperty_mPanicCodeTypeName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mPanicLineTypeName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInterruptionConfigurationList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_configurationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_configurationDeclarationAST (mProperty_mPanicCodeTypeName, mProperty_mPanicLineTypeName, mProperty_mTargetParameters, mProperty_mInterruptionConfigurationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @configurationDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_configurationDeclarationAST ("configurationDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_configurationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configurationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_configurationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_configurationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_configurationDeclarationAST GALGAS_configurationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_configurationDeclarationAST result ;
  const GALGAS_configurationDeclarationAST * p = (const GALGAS_configurationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_configurationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configurationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mTargetParameters (),
mProperty_mPanicCodeType (),
mProperty_mPanicLineType (),
mProperty_mPanicSetupRoutinePriorityMap (),
mProperty_mPanicLoopRoutinePriorityMap (),
mProperty_mRoutineMap (),
mProperty_mGuardMap (),
mProperty_mControlRegisterGroupMap (),
mProperty_mGlobalConstantMap (),
mProperty_mGlobalSyncInstanceMap (),
mProperty_mStaticListMap (),
mProperty_mRequiredRoutineSet (),
mProperty_mTypeMap (),
mProperty_mTypeConstantMap (),
mProperty_mTypeConstructorMap (),
mProperty_mTypePropertySetterMap (),
mProperty_mTypePropertyGetterMap (),
mProperty_mAvailableInterruptMap (),
mProperty_mInfixOperatorMap (),
mProperty_mPrefixOperatorMap (),
mProperty_mAssignmentOperatorMap (),
mProperty_mImplicitConversionToBooleanMap (),
mProperty_mTaskMap (),
mProperty_mGlobalTaskVariableList (),
mProperty_mValuedObjectMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_targetParameters & inOperand0,
                                                const GALGAS_omnibusType & inOperand1,
                                                const GALGAS_omnibusType & inOperand2,
                                                const GALGAS_panicRoutinePriorityMap & inOperand3,
                                                const GALGAS_panicRoutinePriorityMap & inOperand4,
                                                const GALGAS_routineMapForContext & inOperand5,
                                                const GALGAS_guardMapForContext & inOperand6,
                                                const GALGAS_controlRegisterGroupMap & inOperand7,
                                                const GALGAS_globalConstantMap & inOperand8,
                                                const GALGAS_globalSyncInstanceMap & inOperand9,
                                                const GALGAS_staticlistMap & inOperand10,
                                                const GALGAS_stringset & inOperand11,
                                                const GALGAS_unifiedTypeMap & inOperand12,
                                                const GALGAS_typeConstantMap & inOperand13,
                                                const GALGAS_typeConstructorMap & inOperand14,
                                                const GALGAS_typePropertySetterMap & inOperand15,
                                                const GALGAS_typePropertyGetterMap & inOperand16,
                                                const GALGAS_availableInterruptMap & inOperand17,
                                                const GALGAS_infixOperatorMap & inOperand18,
                                                const GALGAS_prefixOperatorMap & inOperand19,
                                                const GALGAS_assignmentOperatorMap & inOperand20,
                                                const GALGAS_implicitConversionToBooleanMap & inOperand21,
                                                const GALGAS_taskMap & inOperand22,
                                                const GALGAS_globalTaskVariableList & inOperand23,
                                                const GALGAS_universalValuedObjectMap & inOperand24) :
mProperty_mTargetParameters (inOperand0),
mProperty_mPanicCodeType (inOperand1),
mProperty_mPanicLineType (inOperand2),
mProperty_mPanicSetupRoutinePriorityMap (inOperand3),
mProperty_mPanicLoopRoutinePriorityMap (inOperand4),
mProperty_mRoutineMap (inOperand5),
mProperty_mGuardMap (inOperand6),
mProperty_mControlRegisterGroupMap (inOperand7),
mProperty_mGlobalConstantMap (inOperand8),
mProperty_mGlobalSyncInstanceMap (inOperand9),
mProperty_mStaticListMap (inOperand10),
mProperty_mRequiredRoutineSet (inOperand11),
mProperty_mTypeMap (inOperand12),
mProperty_mTypeConstantMap (inOperand13),
mProperty_mTypeConstructorMap (inOperand14),
mProperty_mTypePropertySetterMap (inOperand15),
mProperty_mTypePropertyGetterMap (inOperand16),
mProperty_mAvailableInterruptMap (inOperand17),
mProperty_mInfixOperatorMap (inOperand18),
mProperty_mPrefixOperatorMap (inOperand19),
mProperty_mAssignmentOperatorMap (inOperand20),
mProperty_mImplicitConversionToBooleanMap (inOperand21),
mProperty_mTaskMap (inOperand22),
mProperty_mGlobalTaskVariableList (inOperand23),
mProperty_mValuedObjectMap (inOperand24) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::class_func_new (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_targetParameters in_mTargetParameters = GALGAS_targetParameters::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("context.galgas", 9)), GALGAS__32_lstringlist::class_func_emptyList (SOURCE_FILE ("context.galgas", 10)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 11)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 12)), GALGAS_uint (uint32_t (0U)), GALGAS_bool (false), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 15)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 15)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 15)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 16)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 16)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 17)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 18)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 18)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 19)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 19)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 19)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 20)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 20)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 20)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 21)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 21)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 22)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 22)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 23)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 24)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 24)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 25)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 26)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 27)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 28)), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("context.galgas", 29)), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("context.galgas", 30)), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("context.galgas", 31)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 32)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 33)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 34)), GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("context.galgas", 35)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("context.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 35)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 36)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 37)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 38)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("context.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 8)) ;
  const GALGAS_omnibusType in_mPanicCodeType = GALGAS_omnibusType::class_func_new (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 43)), GALGAS_omnibusTypeAttributes::class_func_none (SOURCE_FILE ("context.galgas", 44)), GALGAS_string ("<<unknown>>"), GALGAS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 46)), GALGAS_string ("<<unknown>>")  COMMA_SOURCE_FILE ("context.galgas", 42)) ;
  const GALGAS_omnibusType in_mPanicLineType = GALGAS_omnibusType::class_func_new (GALGAS_subscript::class_func_noSubscript (SOURCE_FILE ("context.galgas", 50)), GALGAS_omnibusTypeAttributes::class_func_none (SOURCE_FILE ("context.galgas", 51)), GALGAS_string ("<<unknown>>"), GALGAS_typeKind::class_func_void (SOURCE_FILE ("context.galgas", 53)), GALGAS_string ("<<unknown>>")  COMMA_SOURCE_FILE ("context.galgas", 49)) ;
  const GALGAS_panicRoutinePriorityMap in_mPanicSetupRoutinePriorityMap = GALGAS_panicRoutinePriorityMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 56)) ;
  const GALGAS_panicRoutinePriorityMap in_mPanicLoopRoutinePriorityMap = GALGAS_panicRoutinePriorityMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 57)) ;
  const GALGAS_routineMapForContext in_mRoutineMap = GALGAS_routineMapForContext::class_func_emptyMap (SOURCE_FILE ("context.galgas", 59)) ;
  const GALGAS_guardMapForContext in_mGuardMap = GALGAS_guardMapForContext::class_func_emptyMap (SOURCE_FILE ("context.galgas", 60)) ;
  const GALGAS_controlRegisterGroupMap in_mControlRegisterGroupMap = GALGAS_controlRegisterGroupMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 62)) ;
  const GALGAS_globalConstantMap in_mGlobalConstantMap = GALGAS_globalConstantMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 63)) ;
  const GALGAS_globalSyncInstanceMap in_mGlobalSyncInstanceMap = GALGAS_globalSyncInstanceMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 64)) ;
  const GALGAS_staticlistMap in_mStaticListMap = GALGAS_staticlistMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 65)) ;
  const GALGAS_stringset in_mRequiredRoutineSet = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("context.galgas", 67)) ;
  const GALGAS_unifiedTypeMap in_mTypeMap = GALGAS_unifiedTypeMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 70)) ;
  const GALGAS_typeConstantMap in_mTypeConstantMap = GALGAS_typeConstantMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 71)) ;
  const GALGAS_typeConstructorMap in_mTypeConstructorMap = GALGAS_typeConstructorMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 72)) ;
  const GALGAS_typePropertySetterMap in_mTypePropertySetterMap = GALGAS_typePropertySetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 73)) ;
  const GALGAS_typePropertyGetterMap in_mTypePropertyGetterMap = GALGAS_typePropertyGetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 74)) ;
  const GALGAS_availableInterruptMap in_mAvailableInterruptMap = GALGAS_availableInterruptMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 77)) ;
  const GALGAS_infixOperatorMap in_mInfixOperatorMap = GALGAS_infixOperatorMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 80)) ;
  const GALGAS_prefixOperatorMap in_mPrefixOperatorMap = GALGAS_prefixOperatorMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 81)) ;
  const GALGAS_assignmentOperatorMap in_mAssignmentOperatorMap = GALGAS_assignmentOperatorMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 82)) ;
  const GALGAS_implicitConversionToBooleanMap in_mImplicitConversionToBooleanMap = GALGAS_implicitConversionToBooleanMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 84)) ;
  const GALGAS_taskMap in_mTaskMap = GALGAS_taskMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 87)) ;
  const GALGAS_globalTaskVariableList in_mGlobalTaskVariableList = GALGAS_globalTaskVariableList::class_func_emptyList (SOURCE_FILE ("context.galgas", 88)) ;
  const GALGAS_universalValuedObjectMap in_mValuedObjectMap = GALGAS_universalValuedObjectMap::class_func_new (inCompiler  COMMA_SOURCE_FILE ("context.galgas", 91)) ;
  GALGAS_semanticContext result ;
  if (in_mTargetParameters.isValid () && in_mPanicCodeType.isValid () && in_mPanicLineType.isValid () && in_mPanicSetupRoutinePriorityMap.isValid () && in_mPanicLoopRoutinePriorityMap.isValid () && in_mRoutineMap.isValid () && in_mGuardMap.isValid () && in_mControlRegisterGroupMap.isValid () && in_mGlobalConstantMap.isValid () && in_mGlobalSyncInstanceMap.isValid () && in_mStaticListMap.isValid () && in_mRequiredRoutineSet.isValid () && in_mTypeMap.isValid () && in_mTypeConstantMap.isValid () && in_mTypeConstructorMap.isValid () && in_mTypePropertySetterMap.isValid () && in_mTypePropertyGetterMap.isValid () && in_mAvailableInterruptMap.isValid () && in_mInfixOperatorMap.isValid () && in_mPrefixOperatorMap.isValid () && in_mAssignmentOperatorMap.isValid () && in_mImplicitConversionToBooleanMap.isValid () && in_mTaskMap.isValid () && in_mGlobalTaskVariableList.isValid () && in_mValuedObjectMap.isValid ()) {
    result = GALGAS_semanticContext (in_mTargetParameters, in_mPanicCodeType, in_mPanicLineType, in_mPanicSetupRoutinePriorityMap, in_mPanicLoopRoutinePriorityMap, in_mRoutineMap, in_mGuardMap, in_mControlRegisterGroupMap, in_mGlobalConstantMap, in_mGlobalSyncInstanceMap, in_mStaticListMap, in_mRequiredRoutineSet, in_mTypeMap, in_mTypeConstantMap, in_mTypeConstructorMap, in_mTypePropertySetterMap, in_mTypePropertyGetterMap, in_mAvailableInterruptMap, in_mInfixOperatorMap, in_mPrefixOperatorMap, in_mAssignmentOperatorMap, in_mImplicitConversionToBooleanMap, in_mTaskMap, in_mGlobalTaskVariableList, in_mValuedObjectMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetParameters.objectCompare (inOperand.mProperty_mTargetParameters) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicCodeType.objectCompare (inOperand.mProperty_mPanicCodeType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLineType.objectCompare (inOperand.mProperty_mPanicLineType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicSetupRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicSetupRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPanicLoopRoutinePriorityMap.objectCompare (inOperand.mProperty_mPanicLoopRoutinePriorityMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRoutineMap.objectCompare (inOperand.mProperty_mRoutineMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGuardMap.objectCompare (inOperand.mProperty_mGuardMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControlRegisterGroupMap.objectCompare (inOperand.mProperty_mControlRegisterGroupMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalConstantMap.objectCompare (inOperand.mProperty_mGlobalConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalSyncInstanceMap.objectCompare (inOperand.mProperty_mGlobalSyncInstanceMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStaticListMap.objectCompare (inOperand.mProperty_mStaticListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRequiredRoutineSet.objectCompare (inOperand.mProperty_mRequiredRoutineSet) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeMap.objectCompare (inOperand.mProperty_mTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeConstantMap.objectCompare (inOperand.mProperty_mTypeConstantMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypeConstructorMap.objectCompare (inOperand.mProperty_mTypeConstructorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypePropertySetterMap.objectCompare (inOperand.mProperty_mTypePropertySetterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTypePropertyGetterMap.objectCompare (inOperand.mProperty_mTypePropertyGetterMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAvailableInterruptMap.objectCompare (inOperand.mProperty_mAvailableInterruptMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfixOperatorMap.objectCompare (inOperand.mProperty_mInfixOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPrefixOperatorMap.objectCompare (inOperand.mProperty_mPrefixOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssignmentOperatorMap.objectCompare (inOperand.mProperty_mAssignmentOperatorMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mImplicitConversionToBooleanMap.objectCompare (inOperand.mProperty_mImplicitConversionToBooleanMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTaskMap.objectCompare (inOperand.mProperty_mTaskMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGlobalTaskVariableList.objectCompare (inOperand.mProperty_mGlobalTaskVariableList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValuedObjectMap.objectCompare (inOperand.mProperty_mValuedObjectMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mTargetParameters.isValid () && mProperty_mPanicCodeType.isValid () && mProperty_mPanicLineType.isValid () && mProperty_mPanicSetupRoutinePriorityMap.isValid () && mProperty_mPanicLoopRoutinePriorityMap.isValid () && mProperty_mRoutineMap.isValid () && mProperty_mGuardMap.isValid () && mProperty_mControlRegisterGroupMap.isValid () && mProperty_mGlobalConstantMap.isValid () && mProperty_mGlobalSyncInstanceMap.isValid () && mProperty_mStaticListMap.isValid () && mProperty_mRequiredRoutineSet.isValid () && mProperty_mTypeMap.isValid () && mProperty_mTypeConstantMap.isValid () && mProperty_mTypeConstructorMap.isValid () && mProperty_mTypePropertySetterMap.isValid () && mProperty_mTypePropertyGetterMap.isValid () && mProperty_mAvailableInterruptMap.isValid () && mProperty_mInfixOperatorMap.isValid () && mProperty_mPrefixOperatorMap.isValid () && mProperty_mAssignmentOperatorMap.isValid () && mProperty_mImplicitConversionToBooleanMap.isValid () && mProperty_mTaskMap.isValid () && mProperty_mGlobalTaskVariableList.isValid () && mProperty_mValuedObjectMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mTargetParameters.drop () ;
  mProperty_mPanicCodeType.drop () ;
  mProperty_mPanicLineType.drop () ;
  mProperty_mPanicSetupRoutinePriorityMap.drop () ;
  mProperty_mPanicLoopRoutinePriorityMap.drop () ;
  mProperty_mRoutineMap.drop () ;
  mProperty_mGuardMap.drop () ;
  mProperty_mControlRegisterGroupMap.drop () ;
  mProperty_mGlobalConstantMap.drop () ;
  mProperty_mGlobalSyncInstanceMap.drop () ;
  mProperty_mStaticListMap.drop () ;
  mProperty_mRequiredRoutineSet.drop () ;
  mProperty_mTypeMap.drop () ;
  mProperty_mTypeConstantMap.drop () ;
  mProperty_mTypeConstructorMap.drop () ;
  mProperty_mTypePropertySetterMap.drop () ;
  mProperty_mTypePropertyGetterMap.drop () ;
  mProperty_mAvailableInterruptMap.drop () ;
  mProperty_mInfixOperatorMap.drop () ;
  mProperty_mPrefixOperatorMap.drop () ;
  mProperty_mAssignmentOperatorMap.drop () ;
  mProperty_mImplicitConversionToBooleanMap.drop () ;
  mProperty_mTaskMap.drop () ;
  mProperty_mGlobalTaskVariableList.drop () ;
  mProperty_mValuedObjectMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mTargetParameters.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPanicCodeType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPanicLineType.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPanicSetupRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPanicLoopRoutinePriorityMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRoutineMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGuardMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mControlRegisterGroupMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGlobalConstantMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGlobalSyncInstanceMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mStaticListMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRequiredRoutineSet.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypeMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypeConstantMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypeConstructorMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypePropertySetterMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTypePropertyGetterMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAvailableInterruptMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInfixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPrefixOperatorMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAssignmentOperatorMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mImplicitConversionToBooleanMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTaskMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGlobalTaskVariableList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mValuedObjectMap.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertGetter (GALGAS_semanticContext & ioObject,
                                   const GALGAS_lstring constinArgument_inTypeName,
                                   const GALGAS_lstring constinArgument_inGetterName,
                                   const GALGAS_propertyVisibility constinArgument_inVisibility,
                                   const GALGAS_propertyGetterKind constinArgument_inAccess,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertyGetterMap * objectArray_6752 = (cMapElement_typePropertyGetterMap *) ioObject.mProperty_mTypePropertyGetterMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 177)) ;
  if (nullptr != objectArray_6752) {
    macroValidSharedObject (objectArray_6752, cMapElement_typePropertyGetterMap) ;
    {
    objectArray_6752->mProperty_mGetterMap.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 178)) ;
    }
  }else{
    GALGAS_propertyGetterMap var_getterMap_6912 = GALGAS_propertyGetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 180)) ;
    {
    var_getterMap_6912.setter_insertKey (constinArgument_inGetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 181)) ;
    }
    {
    ioObject.mProperty_mTypePropertyGetterMap.setter_insertKey (constinArgument_inTypeName, var_getterMap_6912, inCompiler COMMA_SOURCE_FILE ("context.galgas", 182)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext propertyGetterMap'
//
//--------------------------------------------------------------------------------------------------

GALGAS_propertyGetterMap extensionGetter_propertyGetterMap (const GALGAS_semanticContext & inObject,
                                                            const GALGAS_omnibusType & constinArgument_inType,
                                                            Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGetterMap result_result ; // Returned variable
  const GALGAS_semanticContext temp_0 = inObject ;
  const cMapElement_typePropertyGetterMap * objectArray_7285 = (const cMapElement_typePropertyGetterMap *) temp_0.readProperty_mTypePropertyGetterMap ().readAccessForWithInstruction (constinArgument_inType.readProperty_omnibusTypeDescriptionName ()) ;
  if (nullptr != objectArray_7285) {
      macroValidSharedObject (objectArray_7285, cMapElement_typePropertyGetterMap) ;
    result_result = objectArray_7285->mProperty_mGetterMap ;
  }else{
    result_result = GALGAS_propertyGetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 192)) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext addComputedPropertyGetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addComputedPropertyGetter (GALGAS_semanticContext & ioObject,
                                                const GALGAS_lstring constinArgument_inTypeName,
                                                const GALGAS_string constinArgument_inLLVMBaseTypeName,
                                                const GALGAS_lstring constinArgument_inPropertyName,
                                                const GALGAS_mode constinArgument_inMode,
                                                const GALGAS_propertyVisibility constinArgument_inVisibility,
                                                const GALGAS_unifiedTypeMapEntry constinArgument_inResultTypeProxy,
                                                GALGAS_lstring & outArgument_outRoutineLLVMName,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineLLVMName.drop () ; // Release 'out' argument
  GALGAS_propertyGetterMap var_getterMap_7937 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_semanticContext temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mTypePropertyGetterMap ().getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("context.galgas", 208)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_semanticContext temp_2 = ioObject ;
      temp_2.readProperty_mTypePropertyGetterMap ().method_searchKey (constinArgument_inTypeName, var_getterMap_7937, inCompiler COMMA_SOURCE_FILE ("context.galgas", 209)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_getterMap_7937 = GALGAS_propertyGetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 211)) ;
  }
  outArgument_outRoutineLLVMName = GALGAS_lstring::class_func_new (function_getterLLVMName (constinArgument_inLLVMBaseTypeName, constinArgument_inPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 213)), constinArgument_inPropertyName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("context.galgas", 213)) ;
  GALGAS_routineLLVMNameDict var_modeDictionary_8218 = extensionGetter_routineLLVMDictionaryForFunction (constinArgument_inMode, outArgument_outRoutineLLVMName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("context.galgas", 214)) ;
  {
  var_getterMap_7937.setter_insertKey (constinArgument_inPropertyName, constinArgument_inVisibility, GALGAS_propertyGetterKind::class_func_computedProperty (constinArgument_inResultTypeProxy, var_modeDictionary_8218  COMMA_SOURCE_FILE ("context.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("context.galgas", 215)) ;
  }
  {
  ioObject.mProperty_mTypePropertyGetterMap.setter_insertOrReplace (constinArgument_inTypeName, var_getterMap_7937 COMMA_SOURCE_FILE ("context.galgas", 220)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticContext insertPropertySetter'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertPropertySetter (GALGAS_semanticContext & ioObject,
                                           const GALGAS_lstring constinArgument_inTypeName,
                                           const GALGAS_lstring constinArgument_inSetterName,
                                           const GALGAS_propertyVisibility constinArgument_inVisibility,
                                           const GALGAS_propertySetterKind constinArgument_inAccess,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cMapElement_typePropertySetterMap * objectArray_10335 = (cMapElement_typePropertySetterMap *) ioObject.mProperty_mTypePropertySetterMap.readWriteAccessForWithInstruction (inCompiler, constinArgument_inTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("context.galgas", 264)) ;
  if (nullptr != objectArray_10335) {
    macroValidSharedObject (objectArray_10335, cMapElement_typePropertySetterMap) ;
    {
    objectArray_10335->mProperty_mSetterMap.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 265)) ;
    }
  }else{
    GALGAS_propertySetterMap var_setterMap_10495 = GALGAS_propertySetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 267)) ;
    {
    var_setterMap_10495.setter_insertKey (constinArgument_inSetterName, constinArgument_inVisibility, constinArgument_inAccess, inCompiler COMMA_SOURCE_FILE ("context.galgas", 268)) ;
    }
    {
    ioObject.mProperty_mTypePropertySetterMap.setter_insertKey (constinArgument_inTypeName, var_setterMap_10495, inCompiler COMMA_SOURCE_FILE ("context.galgas", 269)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext propertySetterMap'
//
//--------------------------------------------------------------------------------------------------

GALGAS_propertySetterMap extensionGetter_propertySetterMap (const GALGAS_semanticContext & inObject,
                                                            const GALGAS_omnibusType & constinArgument_inType,
                                                            Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertySetterMap result_result ; // Returned variable
  const GALGAS_semanticContext temp_0 = inObject ;
  const cMapElement_typePropertySetterMap * objectArray_10868 = (const cMapElement_typePropertySetterMap *) temp_0.readProperty_mTypePropertySetterMap ().readAccessForWithInstruction (constinArgument_inType.readProperty_omnibusTypeDescriptionName ()) ;
  if (nullptr != objectArray_10868) {
      macroValidSharedObject (objectArray_10868, cMapElement_typePropertySetterMap) ;
    result_result = objectArray_10868->mProperty_mSetterMap ;
  }else{
    result_result = GALGAS_propertySetterMap::class_func_emptyMap (SOURCE_FILE ("context.galgas", 279)) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@semanticContext booleanType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType extensionGetter_booleanType (const GALGAS_semanticContext & inObject,
                                                const GALGAS_location &,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_omnibusType result_result ; // Returned variable
  const GALGAS_semanticContext temp_0 = inObject ;
  extensionMethod_searchType (temp_0.readProperty_mTypeMap (), function_boolTypeName (inCompiler COMMA_SOURCE_FILE ("context.galgas", 361)).getter_nowhere (SOURCE_FILE ("context.galgas", 361)), result_result, inCompiler COMMA_SOURCE_FILE ("context.galgas", 361)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @assignRepeatedValueToFixedSizeArrayElementsFunctionIR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractRoutineIR::printNonNullClassInstanceProperties () ;
    mProperty_mFixedSizeArrayType.printNonNullClassInstanceProperties ("mFixedSizeArrayType") ;
    mProperty_mElementType.printNonNullClassInstanceProperties ("mElementType") ;
    mProperty_mArraySize.printNonNullClassInstanceProperties ("mArraySize") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
  if (kOperandEqual == result) {
    result = mProperty_mRoutineMangledName.objectCompare (p->mProperty_mRoutineMangledName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_isRequired.objectCompare (p->mProperty_isRequired) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warnsIfUnused.objectCompare (p->mProperty_warnsIfUnused) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixedSizeArrayType.objectCompare (p->mProperty_mFixedSizeArrayType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementType.objectCompare (p->mProperty_mElementType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArraySize.objectCompare (p->mProperty_mArraySize) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::objectCompare (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (void) :
GALGAS_abstractRoutineIR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * inSourcePtr) :
GALGAS_abstractRoutineIR (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::class_func_new (const GALGAS_lstring & inAttribute_mRoutineMangledName,
                                                                                                                                           const GALGAS_bool & inAttribute_isRequired,
                                                                                                                                           const GALGAS_bool & inAttribute_warnsIfUnused,
                                                                                                                                           const GALGAS_omnibusType & inAttribute_mFixedSizeArrayType,
                                                                                                                                           const GALGAS_omnibusType & inAttribute_mElementType,
                                                                                                                                           const GALGAS_uint & inAttribute_mArraySize
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  if (inAttribute_mRoutineMangledName.isValid () && inAttribute_isRequired.isValid () && inAttribute_warnsIfUnused.isValid () && inAttribute_mFixedSizeArrayType.isValid () && inAttribute_mElementType.isValid () && inAttribute_mArraySize.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (inAttribute_mRoutineMangledName, inAttribute_isRequired, inAttribute_warnsIfUnused, inAttribute_mFixedSizeArrayType, inAttribute_mElementType, inAttribute_mArraySize COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setter_setMFixedSizeArrayType (GALGAS_omnibusType inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mFixedSizeArrayType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setter_setMElementType (GALGAS_omnibusType inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mElementType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::setter_setMArraySize (GALGAS_uint inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    p->mProperty_mArraySize = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mFixedSizeArrayType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mFixedSizeArrayType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_omnibusType GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mElementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_omnibusType () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mElementType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::readProperty_mArraySize (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR) ;
    return p->mProperty_mArraySize ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignRepeatedValueToFixedSizeArrayElementsFunctionIR class
//--------------------------------------------------------------------------------------------------

cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (const GALGAS_lstring & in_mRoutineMangledName,
                                                                                                                        const GALGAS_bool & in_isRequired,
                                                                                                                        const GALGAS_bool & in_warnsIfUnused,
                                                                                                                        const GALGAS_omnibusType & in_mFixedSizeArrayType,
                                                                                                                        const GALGAS_omnibusType & in_mElementType,
                                                                                                                        const GALGAS_uint & in_mArraySize
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractRoutineIR (in_mRoutineMangledName, in_isRequired, in_warnsIfUnused COMMA_THERE),
mProperty_mFixedSizeArrayType (in_mFixedSizeArrayType),
mProperty_mElementType (in_mElementType),
mProperty_mArraySize (in_mArraySize) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

void cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.addString ("[@assignRepeatedValueToFixedSizeArrayElementsFunctionIR:") ;
  mProperty_mRoutineMangledName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_isRequired.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_warnsIfUnused.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFixedSizeArrayType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElementType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mArraySize.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (mProperty_mRoutineMangledName, mProperty_isRequired, mProperty_warnsIfUnused, mProperty_mFixedSizeArrayType, mProperty_mElementType, mProperty_mArraySize COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignRepeatedValueToFixedSizeArrayElementsFunctionIR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR",
                                                                                                             & kTypeDescriptor_GALGAS_abstractRoutineIR) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR result ;
  const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR * p = (const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignRepeatedValueToFixedSizeArrayElementsFunctionIR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignRepeatedValueToFixedSizeArrayElementsFunctionIR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@structurePropertyListAST-element enterPropertyInContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterPropertyInContext (const GALGAS_structurePropertyListAST_2D_element inObject,
                                             GALGAS_semanticContext & ioArgument_ioContext,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             const GALGAS_lstring constinArgument_inReceiverTypeName,
                                             const GALGAS_lstring constinArgument_inOmnibusTypeSpecificName,
                                             const GALGAS_string constinArgument_inReceiverLLVMBaseTypeName,
                                             GALGAS_decoratedRegularRoutineList & ioArgument_ioDecoratedRoutineList,
                                             GALGAS_propertyList & ioArgument_ioPropertyList,
                                             GALGAS_sortedOperandIRList & ioArgument_sortedOperandIRList,
                                             GALGAS_constructorSignature & ioArgument_constructorSignature,
                                             GALGAS_string & ioArgument_ioConstructorKey,
                                             GALGAS_bool & ioArgument_canBeCopied,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint var_explicitAlignment_12306 = GALGAS_lbigint::class_func_new (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 339)) ;
  GALGAS_bool var_alignmentDefined_12352 = GALGAS_bool (false) ;
  const GALGAS_structurePropertyListAST_2D_element temp_0 = inObject ;
  cEnumerator_propertyAttributeList enumerator_12394 (temp_0.readProperty_mPropertyAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12394.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_12394.current_mAttributeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("align"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_12394.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("only the @align attribute is allowed here"), fixItArray2  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 343)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_alignmentDefined_12352.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_12394.current_mAttributeName (HERE).readProperty_location (), GALGAS_string ("@align attribute already defined"), fixItArray4  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 345)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsNotEqual, enumerator_12394.current_mAttributeValue (HERE).readProperty_bigint ().objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).left_shift_operation (enumerator_12394.current_mAttributeValue (HERE).readProperty_bigint ().substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)).getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("type-structure-declaration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 348)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_12394.current_mAttributeValue (HERE).readProperty_location (), GALGAS_string ("alignment should be a power of 2"), fixItArray6  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 349)) ;
          }
        }
        if (kBoolFalse == test_5) {
          var_explicitAlignment_12306 = enumerator_12394.current_mAttributeValue (HERE) ;
          var_alignmentDefined_12352 = GALGAS_bool (true) ;
        }
      }
    }
    enumerator_12394.gotoNextObject () ;
  }
  const GALGAS_structurePropertyListAST_2D_element temp_7 = inObject ;
  GALGAS_omnibusType temp_8 ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, temp_7.readProperty_mPropertyTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = function_voidType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 358)) ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_structurePropertyListAST_2D_element temp_10 = inObject ;
    temp_8 = extensionGetter_type (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_10.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 359)) ;
  }
  GALGAS_omnibusType var_optionalPropertyType_12977 = temp_8 ;
  const GALGAS_structurePropertyListAST_2D_element temp_11 = inObject ;
  switch (temp_11.readProperty_mPropertyKind ().enumValue ()) {
  case GALGAS_propertyKindAST::kNotBuilt:
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedConstantProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty * extractPtr_14193 = (const cEnumAssociatedValues_propertyKindAST_initializedConstantProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_13229_initExpression = extractPtr_14193->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_13516 ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_12 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_13 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_13229_initExpression, temp_12.readProperty_mPropertyName ().readProperty_location (), temp_13.readProperty_mPropertyTypeName (), var_expressionIR_13516, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 364)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_13556 ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_12977.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas", 373)))).boolEnum () ;
        if (kBoolTrue == test_14) {
          var_actualPropertyType_13556 = var_optionalPropertyType_12977 ;
        }
      }
      if (kBoolFalse == test_14) {
        var_actualPropertyType_13556 = extensionGetter_type (var_expressionIR_13516, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 376)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_13556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 378)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 378)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_structurePropertyListAST_2D_element temp_16 = inObject ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_13556.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)), fixItArray17  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 379)) ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_13556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 381)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 381)).boolEnum () ;
        if (kBoolTrue == test_18) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      {
      const GALGAS_structurePropertyListAST_2D_element temp_19 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_20 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_19.readProperty_mPropertyName (), temp_20.readProperty_mVisibility (), GALGAS_propertyGetterKind::class_func_constantProperty (extensionGetter_withType (var_expressionIR_13516, var_actualPropertyType_13556, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 384)) ;
      }
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_initializedStoredProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty * extractPtr_15876 = (const cEnumAssociatedValues_propertyKindAST_initializedStoredProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_expressionAST extractedValue_14229_initExpression = extractPtr_15876->mAssociatedValue0 ;
      GALGAS_objectIR var_expressionIR_14516 ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_21 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_22 = inObject ;
      routine_computeStaticExpression_26_context_26_staticEntityMap_3F_expression_3F_errorLocation_3F_optionalContextualTypeName_21_result (ioArgument_ioContext, ioArgument_ioStaticEntityMap, extractedValue_14229_initExpression, temp_21.readProperty_mPropertyName ().readProperty_location (), temp_22.readProperty_mPropertyTypeName (), var_expressionIR_14516, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 391)) ;
      }
      GALGAS_omnibusType var_actualPropertyType_14556 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = GALGAS_bool (kIsNotEqual, var_optionalPropertyType_12977.readProperty_kind ().objectCompare (GALGAS_typeKind::class_func_void (SOURCE_FILE ("type-structure-declaration.galgas", 400)))).boolEnum () ;
        if (kBoolTrue == test_23) {
          var_actualPropertyType_14556 = var_optionalPropertyType_12977 ;
        }
      }
      if (kBoolFalse == test_23) {
        var_actualPropertyType_14556 = extensionGetter_type (var_expressionIR_14516, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 403)) ;
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_actualPropertyType_14556.readProperty_kind ().getter_isCompileTimeBool (SOURCE_FILE ("type-structure-declaration.galgas", 405)).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_actualPropertyType_14556 = function_boolType (inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 406)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_actualPropertyType_14556.readProperty_kind ().getter_isCompileTimeInteger (SOURCE_FILE ("type-structure-declaration.galgas", 407)).boolEnum () ;
          if (kBoolTrue == test_25) {
            const GALGAS_structurePropertyListAST_2D_element temp_26 = inObject ;
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (temp_26.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("$").add_operation (var_actualPropertyType_14556.readProperty_omnibusTypeDescriptionName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)).add_operation (GALGAS_string (" type is a compile time type, and is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 409)), fixItArray27  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 408)) ;
          }
        }
        if (kBoolFalse == test_25) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_actualPropertyType_14556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 410)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 410)).boolEnum () ;
            if (kBoolTrue == test_28) {
              const GALGAS_structurePropertyListAST_2D_element temp_29 = inObject ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (temp_29.readProperty_mPropertyName ().readProperty_location (), var_actualPropertyType_14556.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)), fixItArray30  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 411)) ;
            }
          }
        }
      }
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        test_31 = callExtensionGetter_copyable ((const cPtr_omnibusType *) var_actualPropertyType_14556.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 413)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 413)).boolEnum () ;
        if (kBoolTrue == test_31) {
          ioArgument_canBeCopied = GALGAS_bool (false) ;
        }
      }
      GALGAS_uint var_propertyIndex_15298 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 416)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_32 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_32.readProperty_mPropertyName ().readProperty_string (), var_actualPropertyType_14556  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 417)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_33 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_34 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_33.readProperty_mPropertyName (), temp_34.readProperty_mVisibility (), GALGAS_propertyGetterKind::class_func_storedProperty (var_actualPropertyType_14556, var_propertyIndex_15298  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 418)) ;
      }
      {
      const GALGAS_structurePropertyListAST_2D_element temp_35 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_36 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_35.readProperty_mPropertyName (), temp_36.readProperty_mVisibility (), GALGAS_propertySetterKind::class_func_storedProperty (var_actualPropertyType_14556, var_propertyIndex_15298  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 424)) ;
      }
      ioArgument_sortedOperandIRList.addAssign_operation (extensionGetter_withType (var_expressionIR_14516, var_actualPropertyType_14556, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)), var_propertyIndex_15298  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 430)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedStoredProperty:
    {
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 432)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 432)).boolEnum () ;
        if (kBoolTrue == test_37) {
          const GALGAS_structurePropertyListAST_2D_element temp_38 = inObject ;
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)), fixItArray39  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 433)) ;
        }
      }
      GALGAS_uint var_propertyIndex_16106 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 435)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_40 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_40.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 436)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_41 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_42 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_41.readProperty_mPropertyName (), temp_42.readProperty_mVisibility (), GALGAS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12977, var_propertyIndex_16106  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 437)) ;
      }
      {
      const GALGAS_structurePropertyListAST_2D_element temp_43 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_44 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_43.readProperty_mPropertyName (), temp_44.readProperty_mVisibility (), GALGAS_propertySetterKind::class_func_storedProperty (var_optionalPropertyType_12977, var_propertyIndex_16106  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 443)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_45 = inObject ;
      ioArgument_constructorSignature.addAssign_operation (temp_45.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977, var_propertyIndex_16106  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 449)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_46 = inObject ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (temp_46.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 450)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_uninitializedConstantProperty:
    {
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 452)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 452)).boolEnum () ;
        if (kBoolTrue == test_47) {
          const GALGAS_structurePropertyListAST_2D_element temp_48 = inObject ;
          TC_Array <C_FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (temp_48.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)), fixItArray49  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 453)) ;
        }
      }
      GALGAS_uint var_propertyIndex_16976 = ioArgument_ioPropertyList.getter_count (SOURCE_FILE ("type-structure-declaration.galgas", 455)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_50 = inObject ;
      ioArgument_ioPropertyList.addAssign_operation (temp_50.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 456)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_51 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_52 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_51.readProperty_mPropertyName (), temp_52.readProperty_mVisibility (), GALGAS_propertyGetterKind::class_func_storedProperty (var_optionalPropertyType_12977, var_propertyIndex_16976  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 457)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_53 = inObject ;
      ioArgument_constructorSignature.addAssign_operation (temp_53.readProperty_mPropertyName ().readProperty_string (), var_optionalPropertyType_12977, var_propertyIndex_16976  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 463)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_54 = inObject ;
      ioArgument_ioConstructorKey.plusAssign_operation(GALGAS_string ("!").add_operation (temp_54.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 464)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_readOnlyComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty * extractPtr_18683 = (const cEnumAssociatedValues_propertyKindAST_readOnlyComputedProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_17469_instructionList = extractPtr_18683->mAssociatedValue0 ;
      const GALGAS_location extractedValue_17485_endOfInstructionList = extractPtr_18683->mAssociatedValue1 ;
      enumGalgasBool test_55 = kBoolTrue ;
      if (kBoolTrue == test_55) {
        test_55 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 466)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 466)).boolEnum () ;
        if (kBoolTrue == test_55) {
          const GALGAS_structurePropertyListAST_2D_element temp_56 = inObject ;
          TC_Array <C_FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)), fixItArray57  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 467)) ;
        }
      }
      const GALGAS_structurePropertyListAST_2D_element temp_58 = inObject ;
      GALGAS_string var_llvmRoutineName_17688 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_58.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 469)) ;
      GALGAS_routineLLVMNameDict var_modeDictionary_17779 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 470)), var_llvmRoutineName_17688, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 470)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_59 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_60 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_61 = inObject ;
      extensionSetter_insertGetter (ioArgument_ioContext, constinArgument_inOmnibusTypeSpecificName, temp_59.readProperty_mPropertyName (), temp_60.readProperty_mVisibility (), GALGAS_propertyGetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_61.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 476)), var_modeDictionary_17779  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 471)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_62 = inObject ;
      GALGAS_lstring var_functionLLVMName_18154 = GALGAS_lstring::class_func_new (var_llvmRoutineName_17688, temp_62.readProperty_mPropertyName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 480)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_63 = inObject ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 486)), GALGAS_bool (false), GALGAS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas", 488)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::class_func_none (SOURCE_FILE ("type-structure-declaration.galgas", 491)), var_functionLLVMName_18154, GALGAS_routineFormalArgumentListAST::class_func_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 493)), GALGAS_bool (false), extractedValue_17469_instructionList, extractedValue_17485_endOfInstructionList, temp_63.readProperty_mPropertyTypeName ()  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 484)) ;
    }
    break ;
  case GALGAS_propertyKindAST::kEnum_writeComputedProperty:
    {
      const cEnumAssociatedValues_propertyKindAST_writeComputedProperty * extractPtr_20456 = (const cEnumAssociatedValues_propertyKindAST_writeComputedProperty *) (temp_11.readProperty_mPropertyKind ().unsafePointer ()) ;
      const GALGAS_instructionListAST extractedValue_18731_writeInstructionList = extractPtr_20456->mAssociatedValue0 ;
      const GALGAS_location extractedValue_18752_endOfWriteInstructionList = extractPtr_20456->mAssociatedValue1 ;
      enumGalgasBool test_64 = kBoolTrue ;
      if (kBoolTrue == test_64) {
        test_64 = callExtensionGetter_instanciable ((const cPtr_omnibusType *) var_optionalPropertyType_12977.ptr (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 499)).operator_not (SOURCE_FILE ("type-structure-declaration.galgas", 499)).boolEnum () ;
        if (kBoolTrue == test_64) {
          const GALGAS_structurePropertyListAST_2D_element temp_65 = inObject ;
          TC_Array <C_FixItDescription> fixItArray66 ;
          inCompiler->emitSemanticError (temp_65.readProperty_mPropertyName ().readProperty_location (), var_optionalPropertyType_12977.readProperty_omnibusTypeDescriptionName ().add_operation (GALGAS_string (" type is not instanciable"), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)), fixItArray66  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 500)) ;
        }
      }
      const GALGAS_structurePropertyListAST_2D_element temp_67 = inObject ;
      GALGAS_string var_llvmGetterRoutineName_18960 = function_getterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_67.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 502)) ;
      GALGAS_routineLLVMNameDict var_getterModeDictionary_19057 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 503)), var_llvmGetterRoutineName_18960, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 503)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_68 = inObject ;
      GALGAS_string var_llvmSetterRoutineName_19160 = function_setterLLVMName (constinArgument_inReceiverLLVMBaseTypeName, temp_68.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 504)) ;
      GALGAS_routineLLVMNameDict var_setterModeDictionary_19257 = extensionGetter_routineLLVMDictionaryForFunction (GALGAS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 505)), var_llvmSetterRoutineName_19160, inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 505)) ;
      {
      const GALGAS_structurePropertyListAST_2D_element temp_69 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_70 = inObject ;
      const GALGAS_structurePropertyListAST_2D_element temp_71 = inObject ;
      extensionSetter_insertPropertySetter (ioArgument_ioContext, constinArgument_inReceiverTypeName, temp_69.readProperty_mPropertyName (), temp_70.readProperty_mVisibility (), GALGAS_propertySetterKind::class_func_computedProperty (extensionGetter_searchKey (ioArgument_ioContext.readProperty_mTypeMap (), temp_71.readProperty_mPropertyTypeName (), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 511)), var_getterModeDictionary_19057, var_setterModeDictionary_19257  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 506)) ;
      }
      const GALGAS_structurePropertyListAST_2D_element temp_72 = inObject ;
      GALGAS_lstring var_functionLLVMName_19694 = GALGAS_lstring::class_func_new (var_llvmSetterRoutineName_19160, temp_72.readProperty_mPropertyName ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 516)) ;
      GALGAS_routineFormalArgumentListAST temp_73 = GALGAS_routineFormalArgumentListAST::class_func_emptyList (SOURCE_FILE ("type-structure-declaration.galgas", 524)) ;
      const GALGAS_structurePropertyListAST_2D_element temp_74 = inObject ;
      temp_73.addAssign_operation (GALGAS_procFormalArgumentPassingMode::class_func_input (SOURCE_FILE ("type-structure-declaration.galgas", 521)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 522)), temp_74.readProperty_mPropertyTypeName (), GALGAS_lstring::class_func_new (GALGAS_string ("newValue"), extractedValue_18752_endOfWriteInstructionList, inCompiler  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 524))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 524)) ;
      GALGAS_routineFormalArgumentListAST var_formalArgumentList_19836 = temp_73 ;
      ioArgument_ioDecoratedRoutineList.addAssign_operation (constinArgument_inReceiverTypeName, GALGAS_mode::class_func_anyMode (SOURCE_FILE ("type-structure-declaration.galgas", 528)), GALGAS_bool (false), GALGAS_routineKind::class_func_function (SOURCE_FILE ("type-structure-declaration.galgas", 530)), GALGAS_bool (false), GALGAS_bool (false), GALGAS_routineAttributes::class_func_mutatingRoutine (SOURCE_FILE ("type-structure-declaration.galgas", 533)), var_functionLLVMName_19694, var_formalArgumentList_19836, GALGAS_bool (false), extractedValue_18731_writeInstructionList, extractedValue_18752_endOfWriteInstructionList, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-structure-declaration.galgas", 539))  COMMA_SOURCE_FILE ("type-structure-declaration.galgas", 526)) ;
    }
    break ;
  }
}


