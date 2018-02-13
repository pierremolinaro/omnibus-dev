#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-11.h"


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
  extensionMethod_instructionListLLVMCode (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 194)) ;
  GALGAS_string var_labelOtherwise_8154 = GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).add_operation (GALGAS_string (".otherwise"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  switch ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (extensionGetter_llvmName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %").add_operation (var_labelOtherwise_8154, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)).add_operation (GALGAS_string (" [\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 198)) ;
  cEnumerator_switchCaseListIR enumerator_8404 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8355 ((uint32_t) 0) ;
  while (enumerator_8404.hasCurrentObject ()) {
    cEnumerator_uintlist enumerator_8467 (enumerator_8404.current_mCaseIdentifierIndexes (HERE), kENUMERATION_UP) ;
    while (enumerator_8467.hasCurrentObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("    ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mSwitchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)).add_operation (enumerator_8467.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", label %switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (index_8355.getter_string (SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
      enumerator_8467.gotoNextObject () ;
    }
    enumerator_8404.gotoNextObject () ;
    index_8355.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 199)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ]\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
  cEnumerator_switchCaseListIR enumerator_8750 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  GALGAS_uint index_8707 ((uint32_t) 0) ;
  while (enumerator_8750.hasCurrentObject ()) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("switch.").add_operation (object->mProperty_mLabelIndex.getter_string (SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (GALGAS_string (".branch."), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (index_8707.getter_string (SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 208)) ;
    extensionMethod_instructionListLLVMCode (enumerator_8750.current_mCaseInstructionList (HERE), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelOtherwise_8154, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 210)) ;
    enumerator_8750.gotoNextObject () ;
    index_8707.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelOtherwise_8154.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
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
  extensionMethod_enterAccessibleEntities (object->mProperty_mSwitchExpressionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 222)) ;
  cEnumerator_switchCaseListIR enumerator_9497 (object->mProperty_mCaseGenerationList, kENUMERATION_UP) ;
  while (enumerator_9497.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_9497.current_mCaseInstructionList (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)) ;
    enumerator_9497.gotoNextObject () ;
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
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inCurrentMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
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
  GALGAS_objectIR var_indexResult_1326 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 25)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_1326, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 21)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_1326, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 35)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_1326.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 39)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_1558 ;
    GALGAS_PLMType joker_1526_1 ; // Joker input parameter
    var_indexResult_1326.method_literalInteger (joker_1526_1, var_indexValue_1558, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 40)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_1558.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 41)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_1558.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 42)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 42)) ;
      outArgument_outIndexIR.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outIndexIR = GALGAS_objectIR::constructor_literalInteger (constinArgument_inElementType, var_indexValue_1558  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 44)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_1326, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 46)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 47)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_2092 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_1326, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_2092, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 48)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_2092 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 54)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 55)) ;
        }
      }
      outArgument_outIndexIR = var_indexResult_1326 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 60)) ;
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
                                   const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                   const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                   const GALGAS_semanticContext constinArgument_inContext,
                                   const GALGAS_mode constinArgument_inCurrentMode,
                                   GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_allocaList & ioArgument_ioAllocaList,
                                   const GALGAS_expressionAST constinArgument_inIndexExpression,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   const GALGAS_bigint constinArgument_inArraySize,
                                   const GALGAS_PLMType constinArgument_inElementType,
                                   GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                   GALGAS_objectIR & ioArgument_ioObjectPtr,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectIR var_indexResult_3720 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) constinArgument_inIndexExpression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, function_voidType (inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 88)), constinArgument_inContext, constinArgument_inCurrentMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_indexResult_3720, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 84)) ;
  {
  extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_indexResult_3720, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 98)) ;
  }
  const enumGalgasBool test_0 = var_indexResult_3720.getter_isLiteralInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 102)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bigint var_indexValue_3952 ;
    GALGAS_PLMType joker_3920_1 ; // Joker input parameter
    var_indexResult_3720.method_literalInteger (joker_3920_1, var_indexValue_3952, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 103)) ;
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictInf, var_indexValue_3952.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 104)))) ;
    if (kBoolTrue != test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsSupOrEqual, var_indexValue_3952.objectCompare (constinArgument_inArraySize)) ;
    }
    const enumGalgasBool test_2 = test_1.boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("static index should be positive and < ").add_operation (constinArgument_inArraySize.getter_string (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)), fixItArray3  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 105)) ;
      ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_llvmName_4174 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4174, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 107)) ;
      }
      GALGAS_objectIR var_result_4192 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4174  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 108)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4192, ioArgument_ioObjectPtr, var_indexResult_3720, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 109)) ;
      }
      ioArgument_ioObjectPtr = var_result_4192 ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_4 = extensionGetter_type (var_indexResult_3720, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)).getter_kind (HERE).getter_isInteger (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_bool var_generatePanicInstruction_4703 ;
        {
        extensionSetter_testArrayIndex (ioArgument_ioInstructionGenerationList, var_indexResult_3720, constinArgument_inErrorLocation, constinArgument_inArraySize, var_generatePanicInstruction_4703, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 118)) ;
        }
        GALGAS_bool test_6 = var_generatePanicInstruction_4703 ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = constinArgument_inRoutineAttributes.getter_panicAllowed (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)).operator_not (SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 124)) ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index computation can generate panic"), fixItArray8  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 125)) ;
          ioArgument_ioObjectPtr.drop () ; // Release error dropped variable
        }
      }
      GALGAS_string var_llvmName_4947 ;
      {
      extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_4947, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 128)) ;
      }
      GALGAS_objectIR var_result_4965 = GALGAS_objectIR::constructor_reference (constinArgument_inElementType, var_llvmName_4947  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 129)) ;
      {
      extensionSetter_appendGetArrayElementReference (ioArgument_ioInstructionGenerationList, var_result_4965, ioArgument_ioObjectPtr, var_indexResult_3720, inCompiler COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 130)) ;
      }
      ioArgument_ioObjectPtr = var_result_4965 ;
    }else if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("index expression is not an integer"), fixItArray9  COMMA_SOURCE_FILE ("subscript-in-assignment-and-expression.galgas", 137)) ;
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
                                             const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                             const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                             const GALGAS_semanticContext constinArgument_inContext,
                                             const GALGAS_mode constinArgument_inMode,
                                             GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                             GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                             GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                             GALGAS_allocaList & ioArgument_ioAllocaList,
                                             GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                             const GALGAS_lstring constinArgument_inRegisterGroupName,
                                             const GALGAS_controlRegisterMap constinArgument_inControlRegisterMap,
                                             const GALGAS_LValueKindAST constinArgument_inKind,
                                             GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inKind.getter_isRegister (SOURCE_FILE ("lvalue.galgas", 245)).operator_not (SOURCE_FILE ("lvalue.galgas", 245)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRegisterGroupName.getter_location (SOURCE_FILE ("lvalue.galgas", 246)), GALGAS_string ("the \":\" access is reserved for control register"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 246)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_lstring var_registerName_9980 ;
    GALGAS_registerIndexAST var_registerIndex_10005 ;
    constinArgument_inKind.method_register (var_registerName_9980, var_registerIndex_10005, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 248)) ;
    GALGAS_PLMType var_inRegisterType_10097 ;
    GALGAS_bool var_readOnly_10123 ;
    GALGAS_bool var_userAccess_10151 ;
    GALGAS_sliceMap var_inRegisterSliceMap_10198 ;
    GALGAS_controlRegisterFieldMap var_mRegisterFieldMap_10259 ;
    GALGAS_controlRegisterGroupKind var_controlRegisterGroupKind_10321 ;
    GALGAS_controlRegisterFieldList var_mControlRegisterFieldList_10391 ;
    GALGAS_uint var_mRegisterBitCount_10454 ;
    GALGAS_uint var_inRegisterArraySize_10491 ;
    GALGAS_uint var_inRegisterElementSize_10550 ;
    constinArgument_inControlRegisterMap.method_searchKey (var_registerName_9980, var_inRegisterType_10097, var_readOnly_10123, var_userAccess_10151, var_inRegisterSliceMap_10198, var_mRegisterFieldMap_10259, var_controlRegisterGroupKind_10321, var_mControlRegisterFieldList_10391, var_mRegisterBitCount_10454, var_inRegisterArraySize_10491, var_inRegisterElementSize_10550, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 249)) ;
    switch (var_controlRegisterGroupKind_10321.enumValue ()) {
    case GALGAS_controlRegisterGroupKind::kNotBuilt:
      break ;
    case GALGAS_controlRegisterGroupKind::kEnum_single:
      {
        const cEnumAssociatedValues_controlRegisterGroupKind_single * extractPtr_12850 = (const cEnumAssociatedValues_controlRegisterGroupKind_single *) (var_controlRegisterGroupKind_10321.unsafePointer ()) ;
        const GALGAS_bigint extractedValue_registerAddress = extractPtr_12850->mAssociatedValue0 ;
        const enumGalgasBool test_2 = var_readOnly_10123.boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_registerName_9980.getter_location (SOURCE_FILE ("lvalue.galgas", 265)), GALGAS_string ("this control register cannot be modified (declared with @ro attribute)"), fixItArray3  COMMA_SOURCE_FILE ("lvalue.galgas", 265)) ;
          outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_2) {
          GALGAS_bool test_4 = var_userAccess_10151.operator_not (SOURCE_FILE ("lvalue.galgas", 267)) ;
          if (kBoolTrue == test_4.boolEnum ()) {
            GALGAS_bool test_5 = constinArgument_inMode.getter_isUserMode (SOURCE_FILE ("lvalue.galgas", 267)) ;
            if (kBoolTrue != test_5.boolEnum ()) {
              test_5 = constinArgument_inMode.getter_isAnyMode (SOURCE_FILE ("lvalue.galgas", 267)) ;
            }
            test_4 = test_5 ;
          }
          const enumGalgasBool test_6 = test_4.boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_registerName_9980.getter_location (SOURCE_FILE ("lvalue.galgas", 268)), GALGAS_string ("this control register is not accessible in user mode"), fixItArray7  COMMA_SOURCE_FILE ("lvalue.galgas", 268)) ;
            outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = var_registerIndex_10005.getter_isNoIndex (SOURCE_FILE ("lvalue.galgas", 269)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_inRegisterArraySize_10491.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_9) {
                outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (var_inRegisterType_10097, extractedValue_registerAddress.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 271))  COMMA_SOURCE_FILE ("lvalue.galgas", 271)) ;
              }else if (kBoolFalse == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (var_registerName_9980.getter_location (SOURCE_FILE ("lvalue.galgas", 273)), GALGAS_string ("the control register is an array"), fixItArray10  COMMA_SOURCE_FILE ("lvalue.galgas", 273)) ;
                outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
              }
            }else if (kBoolFalse == test_8) {
              GALGAS_expressionAST var_indexExpression_11485 ;
              GALGAS_location var_endOfIndex_11512 ;
              var_registerIndex_10005.method_index (var_indexExpression_11485, var_endOfIndex_11512, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 276)) ;
              GALGAS_objectIR var_indexIR_12109 ;
              {
              routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, var_indexExpression_11485, var_endOfIndex_11512, var_inRegisterArraySize_10491.getter_bigint (SOURCE_FILE ("lvalue.galgas", 289)), var_inRegisterType_10097, ioArgument_ioInstructionGenerationList, var_indexIR_12109, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 277)) ;
              }
              const enumGalgasBool test_11 = var_indexIR_12109.getter_isLiteralInteger (SOURCE_FILE ("lvalue.galgas", 294)).boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_bigint var_idx_12259 ;
                GALGAS_PLMType joker_12234_1 ; // Joker input parameter
                var_indexIR_12109.method_literalInteger (joker_12234_1, var_idx_12259, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 295)) ;
                GALGAS_bigint var_addr_12280 = extractedValue_registerAddress.add_operation (var_idx_12259.multiply_operation (var_inRegisterElementSize_10550.getter_bigint (SOURCE_FILE ("lvalue.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 296)) ;
                outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileAbsoluteReference (var_inRegisterType_10097, var_addr_12280.getter_uint (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 297))  COMMA_SOURCE_FILE ("lvalue.galgas", 297)) ;
              }else if (kBoolFalse == test_11) {
                GALGAS_string var_llvmName_12506 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_12506, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 299)) ;
                }
                {
                extensionSetter_appendComputeSubscriptedVolatileRegisterAddress (ioArgument_ioInstructionGenerationList, var_llvmName_12506, var_indexIR_12109, extractedValue_registerAddress, var_inRegisterElementSize_10550, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 300)) ;
                }
                outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_volatileIndirectReference (var_inRegisterType_10097, var_llvmName_12506  COMMA_SOURCE_FILE ("lvalue.galgas", 306)) ;
              }
            }
          }
        }
      }
      break ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeVariableInLValue'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeVariableInLValue (const GALGAS_PLMType constinArgument_inSelfType,
                                      const GALGAS_bool constinArgument_inIsReadAccess,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      const GALGAS_mode constinArgument_inMode,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                      GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                      const GALGAS_lstring constinArgument_inVariableName,
                                      const GALGAS_string constinArgument_inLLVMName,
                                      const GALGAS_PLMType constinArgument_inVariableType,
                                      const GALGAS_LValueKindAST constinArgument_inKind,
                                      GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = constinArgument_inKind.getter_isRegular (SOURCE_FILE ("lvalue.galgas", 333)).operator_not (SOURCE_FILE ("lvalue.galgas", 333)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inVariableName.getter_location (SOURCE_FILE ("lvalue.galgas", 334)), GALGAS_string ("the \":\" access is reserved for control register"), fixItArray1  COMMA_SOURCE_FILE ("lvalue.galgas", 334)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_accessInAssignmentListAST var_accessList_13993 ;
    constinArgument_inKind.method_regular (var_accessList_13993, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 336)) ;
    GALGAS_PLMType var_currentType_14014 = constinArgument_inVariableType ;
    GALGAS_string var_currentLLVMName_14055 = constinArgument_inLLVMName ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_accessList_13993.getter_length (SOURCE_FILE ("lvalue.galgas", 339)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const enumGalgasBool test_3 = constinArgument_inIsReadAccess.boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        GALGAS_objectIR joker_14210 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_14210, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 341)) ;
        }
      }else if (kBoolFalse == test_3) {
        {
        GALGAS_objectIR joker_14300 ; // Joker input parameter
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_14300, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 343)) ;
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = constinArgument_inIsReadAccess.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        GALGAS_objectIR joker_14426 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_14426, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 347)) ;
        }
      }else if (kBoolFalse == test_4) {
        {
        GALGAS_objectIR joker_14520 ; // Joker input parameter
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, constinArgument_inVariableName, joker_14520, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 349)) ;
        }
      }
      cEnumerator_accessInAssignmentListAST enumerator_14565 (var_accessList_13993, kENUMERATION_UP) ;
      while (enumerator_14565.hasCurrentObject ()) {
        switch (enumerator_14565.current_mAccess (HERE).enumValue ()) {
        case GALGAS_accessInAssignmentAST::kNotBuilt:
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_property:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_15835 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_14565.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_propertyName = extractPtr_15835->mAssociatedValue0 ;
            GALGAS_propertyMap var_propertyMap_14818 = var_currentType_14014.getter_propertyMap (HERE) ;
            GALGAS_propertyAccessKind var_propertyAccess_14934 ;
            GALGAS_bool joker_14893 ; // Joker input parameter
            var_propertyMap_14818.method_searchKey (extractedValue_propertyName, joker_14893, var_propertyAccess_14934, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 357)) ;
            switch (var_propertyAccess_14934.enumValue ()) {
            case GALGAS_propertyAccessKind::kNotBuilt:
              break ;
            case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
              {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 360)), GALGAS_string ("a method cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 360)) ;
                var_currentType_14014.drop () ; // Release error dropped variable
                var_currentLLVMName_14055.drop () ; // Release error dropped variable
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_singleton:
              {
                const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_15236 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_14934.unsafePointer ()) ;
                const GALGAS_objectIR extractedValue_object = extractPtr_15236->mAssociatedValue0 ;
                var_currentType_14014 = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 362)) ;
                var_currentLLVMName_14055 = extensionGetter_llvmName (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 363)) ;
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_constantProperty:
              {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 365)), GALGAS_string ("a constant property cannot be written"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 365)) ;
                var_currentType_14014.drop () ; // Release error dropped variable
                var_currentLLVMName_14055.drop () ; // Release error dropped variable
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_indexed:
              {
                const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_15821 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_14934.unsafePointer ()) ;
                const GALGAS_PLMType extractedValue_propertyType = extractPtr_15821->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_index = extractPtr_15821->mAssociatedValue1 ;
                GALGAS_string var_newLLVMvariable_15504 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_15504, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 367)) ;
                }
                {
                extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_14014, var_currentLLVMName_14055, var_newLLVMvariable_15504, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 368)) ;
                }
                var_currentType_14014 = extractedValue_propertyType ;
                var_currentLLVMName_14055 = var_newLLVMvariable_15504 ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_17222 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_14565.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_17222->mAssociatedValue0 ;
            const GALGAS_location extractedValue_endOfIndex = extractPtr_17222->mAssociatedValue1 ;
            const enumGalgasBool test_7 = var_currentType_14014.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 379)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_PLMType var_elementType_16034 ;
              GALGAS_bigint var_arraySize_16062 ;
              var_currentType_14014.getter_kind (HERE).method_arrayType (var_elementType_16034, var_arraySize_16062, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 380)) ;
              GALGAS_objectIR var_indexIR_16709 ;
              {
              routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_16062, var_elementType_16034, ioArgument_ioInstructionGenerationList, var_indexIR_16709, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 381)) ;
              }
              GALGAS_string var_newLLVMvariable_16786 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_16786, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 398)) ;
              }
              {
              extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_14014, var_currentLLVMName_14055, var_elementType_16034, var_newLLVMvariable_16786, var_indexIR_16709, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 399)) ;
              }
              var_currentType_14014 = var_elementType_16034 ;
              var_currentLLVMName_14055 = var_newLLVMvariable_16786 ;
            }else if (kBoolFalse == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 409)) ;
              var_currentType_14014.drop () ; // Release error dropped variable
              var_currentLLVMName_14055.drop () ; // Release error dropped variable
            }
          }
          break ;
        }
        enumerator_14565.gotoNextObject () ;
      }
    }
    outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_14014, var_currentLLVMName_14055  COMMA_SOURCE_FILE ("lvalue.galgas", 414)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeSelfAssignmentTarget'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSelfAssignmentTarget (const GALGAS_PLMType constinArgument_inSelfType,
                                          const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                          const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
                                          const GALGAS_semanticContext constinArgument_inContext,
                                          const GALGAS_mode constinArgument_inMode,
                                          GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                          GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                          GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                          GALGAS_allocaList & ioArgument_ioAllocaList,
                                          GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                          const GALGAS_location constinArgument_inSelfLocation,
                                          const GALGAS_LValueKindAST constinArgument_inKind,
                                          GALGAS_LValueRepresentation & outArgument_outInternalRepresentation,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInternalRepresentation.drop () ; // Release 'out' argument
  GALGAS_bool test_0 = constinArgument_inSelfType.getter_kind (HERE).getter_isStructure (SOURCE_FILE ("lvalue.galgas", 435)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = constinArgument_inSelfType.getter_kind (HERE).getter_isSyncTool (SOURCE_FILE ("lvalue.galgas", 435)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("lvalue.galgas", 435)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray2  COMMA_SOURCE_FILE ("lvalue.galgas", 436)) ;
    outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = constinArgument_inKind.getter_isRegular (SOURCE_FILE ("lvalue.galgas", 437)).operator_not (SOURCE_FILE ("lvalue.galgas", 437)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inSelfLocation, GALGAS_string ("'self' is not available in this context"), fixItArray4  COMMA_SOURCE_FILE ("lvalue.galgas", 438)) ;
      outArgument_outInternalRepresentation.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      GALGAS_accessInAssignmentListAST var_accessList_18511 ;
      constinArgument_inKind.method_regular (var_accessList_18511, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 440)) ;
      GALGAS_PLMType var_currentType_18532 = constinArgument_inSelfType ;
      GALGAS_string var_currentLLVMName_18569 = function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 442)) ;
      cEnumerator_accessInAssignmentListAST enumerator_18621 (var_accessList_18511, kENUMERATION_UP) ;
      while (enumerator_18621.hasCurrentObject ()) {
        switch (enumerator_18621.current_mAccess (HERE).enumValue ()) {
        case GALGAS_accessInAssignmentAST::kNotBuilt:
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_property:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_property * extractPtr_19702 = (const cEnumAssociatedValues_accessInAssignmentAST_property *) (enumerator_18621.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_propertyName = extractPtr_19702->mAssociatedValue0 ;
            GALGAS_propertyMap var_propertyMap_18727 = var_currentType_18532.getter_propertyMap (HERE) ;
            GALGAS_propertyAccessKind var_propertyAccess_18841 ;
            GALGAS_bool joker_18800 ; // Joker input parameter
            var_propertyMap_18727.method_searchKey (extractedValue_propertyName, joker_18800, var_propertyAccess_18841, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 447)) ;
            switch (var_propertyAccess_18841.enumValue ()) {
            case GALGAS_propertyAccessKind::kNotBuilt:
              break ;
            case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
              {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 450)), GALGAS_string ("a method cannot be written"), fixItArray5  COMMA_SOURCE_FILE ("lvalue.galgas", 450)) ;
                var_currentType_18532.drop () ; // Release error dropped variable
                var_currentLLVMName_18569.drop () ; // Release error dropped variable
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_constantProperty:
              {
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("lvalue.galgas", 452)), GALGAS_string ("a constant property cannot be written"), fixItArray6  COMMA_SOURCE_FILE ("lvalue.galgas", 452)) ;
                var_currentType_18532.drop () ; // Release error dropped variable
                var_currentLLVMName_18569.drop () ; // Release error dropped variable
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_singleton:
              {
                const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_19269 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_18841.unsafePointer ()) ;
                const GALGAS_objectIR extractedValue_object = extractPtr_19269->mAssociatedValue0 ;
                var_currentType_18532 = extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 454)) ;
                var_currentLLVMName_18569 = extensionGetter_llvmName (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 455)) ;
              }
              break ;
            case GALGAS_propertyAccessKind::kEnum_indexed:
              {
                const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_19690 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_18841.unsafePointer ()) ;
                const GALGAS_PLMType extractedValue_propertyType = extractPtr_19690->mAssociatedValue0 ;
                const GALGAS_uint extractedValue_index = extractPtr_19690->mAssociatedValue1 ;
                GALGAS_string var_newLLVMvariable_19391 ;
                {
                extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_19391, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 457)) ;
                }
                {
                extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, var_currentType_18532, var_currentLLVMName_18569, var_newLLVMvariable_19391, extractedValue_index, extractedValue_propertyName.getter_string (SOURCE_FILE ("lvalue.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 458)) ;
                }
                var_currentType_18532 = extractedValue_propertyType ;
                var_currentLLVMName_18569 = var_newLLVMvariable_19391 ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_accessInAssignmentAST::kEnum_arrayAccess:
          {
            const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess * extractPtr_21023 = (const cEnumAssociatedValues_accessInAssignmentAST_arrayAccess *) (enumerator_18621.current_mAccess (HERE).unsafePointer ()) ;
            const GALGAS_expressionAST extractedValue_indexExpression = extractPtr_21023->mAssociatedValue0 ;
            const GALGAS_location extractedValue_endOfIndex = extractPtr_21023->mAssociatedValue1 ;
            const enumGalgasBool test_7 = var_currentType_18532.getter_kind (HERE).getter_isArrayType (SOURCE_FILE ("lvalue.galgas", 469)).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_PLMType var_elementType_19895 ;
              GALGAS_bigint var_arraySize_19923 ;
              var_currentType_18532.getter_kind (HERE).method_arrayType (var_elementType_19895, var_arraySize_19923, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 470)) ;
              GALGAS_objectIR var_indexIR_20538 ;
              {
              routine_handleArraySubscriptNew (constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, extractedValue_indexExpression, extractedValue_endOfIndex, var_arraySize_19923, var_elementType_19895, ioArgument_ioInstructionGenerationList, var_indexIR_20538, inCompiler  COMMA_SOURCE_FILE ("lvalue.galgas", 471)) ;
              }
              GALGAS_string var_newLLVMvariable_20611 ;
              {
              extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_newLLVMvariable_20611, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 488)) ;
              }
              {
              extensionSetter_appendGetUniversalArrayElementReference (ioArgument_ioInstructionGenerationList, var_currentType_18532, var_currentLLVMName_18569, var_elementType_19895, var_newLLVMvariable_20611, var_indexIR_20538, inCompiler COMMA_SOURCE_FILE ("lvalue.galgas", 489)) ;
              }
              var_currentType_18532 = var_elementType_19895 ;
              var_currentLLVMName_18569 = var_newLLVMvariable_20611 ;
            }else if (kBoolFalse == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_endOfIndex, GALGAS_string ("cannot subscript, not an array"), fixItArray8  COMMA_SOURCE_FILE ("lvalue.galgas", 499)) ;
              var_currentType_18532.drop () ; // Release error dropped variable
              var_currentLLVMName_18569.drop () ; // Release error dropped variable
            }
          }
          break ;
        }
        enumerator_18621.gotoNextObject () ;
      }
      outArgument_outInternalRepresentation = GALGAS_LValueRepresentation::constructor_universalReference (var_currentType_18532, var_currentLLVMName_18569  COMMA_SOURCE_FILE ("lvalue.galgas", 503)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'analyzeEffectiveParameters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeEffectiveParameters (const GALGAS_PLMType constinArgument_inSelfType,
                                         const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                         const GALGAS_routineTypedSignature constinArgument_inFormalSignature,
                                         const GALGAS_effectiveArgumentListAST constinArgument_inEffectiveParameterList,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         const GALGAS_lstring constinArgument_inCallerNameForInvocationGraph,
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
  GALGAS_procEffectiveParameterList var_parameterList_4650 = GALGAS_procEffectiveParameterList::constructor_emptyList (SOURCE_FILE ("effective-parameters.galgas", 112)) ;
  cEnumerator_routineTypedSignature enumerator_4693 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
  cEnumerator_effectiveArgumentListAST enumerator_4736 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_4693.hasCurrentObject () && enumerator_4736.hasCurrentObject ()) {
    switch (enumerator_4736.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType * extractPtr_5525 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_inputWithType *) (enumerator_4736.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_bool extractedValue_constant = extractPtr_5525->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_5525->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_name = extractPtr_5525->mAssociatedValue2 ;
        GALGAS_PLMType temp_0 ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          temp_0 = enumerator_4693.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 117)) ;
        }else if (kBoolFalse == test_1) {
          temp_0 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("effective-parameters.galgas", 119)).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 119)) ;
        }
        GALGAS_PLMType var_type_4874 = temp_0 ;
        const enumGalgasBool test_2 = extractedValue_constant.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, extractedValue_name, GALGAS_bool (false), var_type_4874, extractedValue_name, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 122)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, extractedValue_name, var_type_4874, extractedValue_name, GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("effective-parameters.galgas", 124)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 124)) ;
          }
        }
        ioArgument_ioAllocaList.addAssign_operation (function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 126)), var_type_4874, GALGAS_bool (true)  COMMA_SOURCE_FILE ("effective-parameters.galgas", 126)) ;
        var_parameterList_4650.addAssign_operation (enumerator_4736.current_mEffectiveParameterKind (HERE), enumerator_4736.current_mSelector (HERE), var_type_4874  COMMA_SOURCE_FILE ("effective-parameters.galgas", 127)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 129)), GALGAS_objectIR::constructor_reference (var_type_4874, function_llvmNameForLocalVariable (extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 130))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 130))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 128)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_input:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input * extractPtr_6258 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_input *) (enumerator_4736.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_6258->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_5635 ;
        {
        extensionSetter_searchValuedObjectForWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_5635, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 132)) ;
        }
        var_parameterList_4650.addAssign_operation (enumerator_4736.current_mEffectiveParameterKind (HERE), enumerator_4736.current_mSelector (HERE), extensionGetter_type (var_objectIR_5635, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 142))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 142)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_input (SOURCE_FILE ("effective-parameters.galgas", 144)), GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_5635, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 146)), extensionGetter_llvmName (var_objectIR_5635, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 147)).getter_nowhere (SOURCE_FILE ("effective-parameters.galgas", 147)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 147))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 145))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 143)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output * extractPtr_7353 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_output *) (enumerator_4736.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_7353->mAssociatedValue0 ;
        const GALGAS_location extractedValue_endOfExp = extractPtr_7353->mAssociatedValue1 ;
        GALGAS_objectIR var_expressionResult_6854 ;
        callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) extractedValue_expression.ptr (), constinArgument_inSelfType, constinArgument_inRoutineAttributes, constinArgument_inCallerNameForInvocationGraph, enumerator_4693.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 154)), constinArgument_inContext, constinArgument_inRequiredMode, ioArgument_ioTemporaries, ioArgument_ioStaticEntityMap, ioArgument_ioUniversalMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_expressionResult_6854, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 150)) ;
        {
        extensionSetter_appendLoadWhenReference (ioArgument_ioInstructionGenerationList, ioArgument_ioTemporaries, var_expressionResult_6854, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 164)) ;
        }
        GALGAS_objectIR var_result_7001 = function_checkAssignmentCompatibility (var_expressionResult_6854, enumerator_4693.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 170)), extractedValue_endOfExp, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 168)) ;
        var_parameterList_4650.addAssign_operation (enumerator_4736.current_mEffectiveParameterKind (HERE), enumerator_4736.current_mSelector (HERE), enumerator_4693.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 174))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 174)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_output (SOURCE_FILE ("effective-parameters.galgas", 175)), var_result_7001  COMMA_SOURCE_FILE ("effective-parameters.galgas", 175)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInput:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput * extractPtr_8007 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInput *) (enumerator_4736.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_8007->mAssociatedValue0 ;
        GALGAS_objectIR var_objectIR_7473 ;
        {
        extensionSetter_searchValuedObjectForReadWriteAccess (ioArgument_ioUniversalMap, extractedValue_name, var_objectIR_7473, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 177)) ;
        }
        var_parameterList_4650.addAssign_operation (enumerator_4736.current_mEffectiveParameterKind (HERE), enumerator_4736.current_mSelector (HERE), extensionGetter_type (var_objectIR_7473, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 184))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 184)) ;
        GALGAS_objectIR var_argumentIR_7845 = GALGAS_objectIR::constructor_reference (extensionGetter_type (var_objectIR_7473, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 186)), extensionGetter_llvmName (var_objectIR_7473, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 187))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 185)) ;
        ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 189)), var_argumentIR_7845  COMMA_SOURCE_FILE ("effective-parameters.galgas", 189)) ;
      }
      break ;
    case GALGAS_effectiveArgumentPassingModeAST::kEnum_outputInputSelfVariable:
      {
        const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable * extractPtr_9147 = (const cEnumAssociatedValues_effectiveArgumentPassingModeAST_outputInputSelfVariable *) (enumerator_4736.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_name = extractPtr_9147->mAssociatedValue0 ;
        GALGAS_propertyAccessKind var_propertyAccess_8147 ;
        GALGAS_bool joker_8106 ; // Joker input parameter
        constinArgument_inSelfType.getter_propertyMap (HERE).method_searchKey (extractedValue_name, joker_8106, var_propertyAccess_8147, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 191)) ;
        switch (var_propertyAccess_8147.enumValue ()) {
        case GALGAS_propertyAccessKind::kNotBuilt:
          break ;
        case GALGAS_propertyAccessKind::kEnum_nonVirtualMethod:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a method cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("effective-parameters.galgas", 194)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_singleton:
          {
            const cEnumAssociatedValues_propertyAccessKind_singleton * extractPtr_8485 = (const cEnumAssociatedValues_propertyAccessKind_singleton *) (var_propertyAccess_8147.unsafePointer ()) ;
            const GALGAS_objectIR extractedValue_object = extractPtr_8485->mAssociatedValue0 ;
            var_parameterList_4650.addAssign_operation (enumerator_4736.current_mEffectiveParameterKind (HERE), enumerator_4736.current_mSelector (HERE), extensionGetter_type (extractedValue_object, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 196))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 196)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 197)), extractedValue_object  COMMA_SOURCE_FILE ("effective-parameters.galgas", 197)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_constantProperty:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("a constant property cannot be used here"), fixItArray4  COMMA_SOURCE_FILE ("effective-parameters.galgas", 199)) ;
          }
          break ;
        case GALGAS_propertyAccessKind::kEnum_indexed:
          {
            const cEnumAssociatedValues_propertyAccessKind_indexed * extractPtr_9137 = (const cEnumAssociatedValues_propertyAccessKind_indexed *) (var_propertyAccess_8147.unsafePointer ()) ;
            const GALGAS_PLMType extractedValue_propertyType = extractPtr_9137->mAssociatedValue0 ;
            const GALGAS_uint extractedValue_propertyIndex = extractPtr_9137->mAssociatedValue1 ;
            GALGAS_string var_property_5F_llvmName_8721 ;
            {
            extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_property_5F_llvmName_8721, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 201)) ;
            }
            {
            extensionSetter_appendGetUniversalPropertyReference (ioArgument_ioInstructionGenerationList, constinArgument_inSelfType, function_llvmNameForSelf (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 204)), var_property_5F_llvmName_8721, extractedValue_propertyIndex, extractedValue_name.getter_string (SOURCE_FILE ("effective-parameters.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 202)) ;
            }
            var_parameterList_4650.addAssign_operation (enumerator_4736.current_mEffectiveParameterKind (HERE), enumerator_4736.current_mSelector (HERE), extractedValue_propertyType  COMMA_SOURCE_FILE ("effective-parameters.galgas", 209)) ;
            ioArgument_ioEffectiveParameterListIR.addAssign_operation (GALGAS_procEffectiveParameterPassingModeIR::constructor_outputInput (SOURCE_FILE ("effective-parameters.galgas", 210)), GALGAS_objectIR::constructor_reference (extractedValue_propertyType, var_property_5F_llvmName_8721  COMMA_SOURCE_FILE ("effective-parameters.galgas", 210))  COMMA_SOURCE_FILE ("effective-parameters.galgas", 210)) ;
          }
          break ;
        }
      }
      break ;
    }
    enumerator_4693.gotoNextObject () ;
    enumerator_4736.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 215)).objectCompare (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 215)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this routine requires ").add_operation (constinArgument_inFormalSignature.getter_length (SOURCE_FILE ("effective-parameters.galgas", 216)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 216)).add_operation (GALGAS_string (" argument(s), this call names "), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 216)).add_operation (constinArgument_inEffectiveParameterList.getter_length (SOURCE_FILE ("effective-parameters.galgas", 217)).getter_string (SOURCE_FILE ("effective-parameters.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 216)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 217)), fixItArray6  COMMA_SOURCE_FILE ("effective-parameters.galgas", 216)) ;
  }else if (kBoolFalse == test_5) {
    cEnumerator_routineTypedSignature enumerator_9483 (constinArgument_inFormalSignature, kENUMERATION_UP) ;
    cEnumerator_procEffectiveParameterList enumerator_9512 (var_parameterList_4650, kENUMERATION_UP) ;
    while (enumerator_9483.hasCurrentObject () && enumerator_9512.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_9483.current_mTypeProxy (HERE).getter_type (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 220)).getter_plmOriginalTypeName (HERE).objectCompare (enumerator_9512.current_mParameterType (HERE).getter_plmOriginalTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9512.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 221)), GALGAS_string ("the actual parameter type is $").add_operation (enumerator_9512.current_mParameterType (HERE).getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)).add_operation (GALGAS_string (", and is incompatible with the formal type $"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)).add_operation (enumerator_9483.current_mTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 222)), fixItArray8  COMMA_SOURCE_FILE ("effective-parameters.galgas", 221)) ;
      }
      GALGAS_string var_requiredPassingMode_9855 = extensionGetter_requiredActualPassingModeForSelector (enumerator_9483.current_mFormalArgumentPassingMode (HERE), enumerator_9483.current_mSelector (HERE).getter_string (SOURCE_FILE ("effective-parameters.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 224)) ;
      GALGAS_string var_testedPassingMode_9976 = extensionGetter_passingModeForActualSelector (enumerator_9512.current_mEffectiveParameterPassingMode (HERE), enumerator_9512.current_mSelector (HERE), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 225)) ;
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, var_requiredPassingMode_9855.objectCompare (var_testedPassingMode_9976)).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_9512.current_mSelector (HERE).getter_location (SOURCE_FILE ("effective-parameters.galgas", 227)), GALGAS_string ("the required selector is '").add_operation (var_requiredPassingMode_9855, inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)), fixItArray10  COMMA_SOURCE_FILE ("effective-parameters.galgas", 227)) ;
      }
      enumerator_9483.gotoNextObject () ;
      enumerator_9512.gotoNextObject () ;
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 102)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 102)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 102)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 104)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_4590 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_4590.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_formalPassingModeString (enumerator_4590.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)).add_operation (enumerator_4590.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 106)) ;
    enumerator_4590.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 108)) ;
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
    temp_0 = GALGAS_lstring::constructor_new (constinArgument_inReceiverTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 120)).add_operation (constinArgument_inRoutineName.getter_string (SOURCE_FILE ("context-routines.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 120)), constinArgument_inRoutineName.getter_location (HERE)  COMMA_SOURCE_FILE ("context-routines.galgas", 120)) ;
  }
  result_result = temp_0 ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("("), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 122)) ;
  cEnumerator_effectiveArgumentListAST enumerator_5302 (constinArgument_inEffectiveParameterList, kENUMERATION_UP) ;
  while (enumerator_5302.hasCurrentObject ()) {
    result_result.mProperty_string.plusAssign_operation(extensionGetter_matchingFormalArgument (enumerator_5302.current_mEffectiveParameterKind (HERE), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)).add_operation (enumerator_5302.current_mSelector (HERE).getter_string (SOURCE_FILE ("context-routines.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("context-routines.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 124)) ;
    enumerator_5302.gotoNextObject () ;
  }
  result_result.mProperty_string.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("context-routines.galgas", 126)) ;
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
  outArgument_outSignature = GALGAS_routineTypedSignature::constructor_emptyList (SOURCE_FILE ("context-routines.galgas", 135)) ;
  cEnumerator_routineFormalArgumentListAST enumerator_5835 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_5835.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_typeProxy_5926 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, enumerator_5835.current_mFormalArgumentTypeName (HERE), var_typeProxy_5926 COMMA_SOURCE_FILE ("context-routines.galgas", 137)) ;
    }
    outArgument_outSignature.addAssign_operation (enumerator_5835.current_mFormalArgumentPassingMode (HERE), enumerator_5835.current_mSelector (HERE), var_typeProxy_5926  COMMA_SOURCE_FILE ("context-routines.galgas", 138)) ;
    enumerator_5835.gotoNextObject () ;
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
  GALGAS_semanticTypePrecedenceGraph var_precedenceGraph_1976 = GALGAS_semanticTypePrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("ordered-declaration-list.galgas", 35)) ;
  cEnumerator_declarationListAST enumerator_2028 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_2028.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((const cPtr_abstractDeclarationAST *) enumerator_2028.current_mDeclaration (HERE).ptr (), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 37)) ;
    enumerator_2028.gotoNextObject () ;
  }
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 39)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mExternProcListAST (HERE), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 40)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 41)) ;
  extensionMethod_noteTypesInPrecedenceGraph (constinArgument_inAST.getter_mTaskListAST (HERE), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 42)) ;
  cEnumerator_stringlist enumerator_2547 (var_precedenceGraph_1976.getter_undefinedNodeKeyList (SOURCE_FILE ("ordered-declaration-list.galgas", 44)), kENUMERATION_UP) ;
  while (enumerator_2547.hasCurrentObject ()) {
    GALGAS_stringlist var_split_2564 = enumerator_2547.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("int") COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 45)) ;
    GALGAS_bool test_0 = GALGAS_bool (kIsEqual, var_split_2564.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 46)).objectCompare (GALGAS_uint ((uint32_t) 2U))) ;
    if (kBoolTrue == test_0.boolEnum ()) {
      test_0 = var_split_2564.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 46)).getter_isDecimalUnsignedNumber (SOURCE_FILE ("ordered-declaration-list.galgas", 46)) ;
    }
    const enumGalgasBool test_1 = test_0.boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_split_2564.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)).objectCompare (function_llvmTypeStringFromPLMname (GALGAS_string ("u"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 47)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_uint var_n_2787 = var_split_2564.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 48)) ;
        GALGAS_integerDeclarationAST var_declaration_2862 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (false), var_n_2787  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 49)) ;
        callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_2862.ptr (), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 50)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_split_2564.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)).objectCompare (function_llvmTypeStringFromPLMname (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 51)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_uint var_n_3057 = var_split_2564.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 52)) ;
          GALGAS_integerDeclarationAST var_declaration_3132 = GALGAS_integerDeclarationAST::constructor_new (GALGAS_bool (true), var_n_3057  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 53)) ;
          callExtensionMethod_enterInPrecedenceGraph ((const cPtr_integerDeclarationAST *) var_declaration_3132.ptr (), var_precedenceGraph_1976, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 54)) ;
        }
      }
    }
    enumerator_2547.gotoNextObject () ;
  }
  GALGAS_bool test_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("ordered-declaration-list.galgas", 59)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_4.boolEnum ()) {
    test_4 = GALGAS_bool (gOption_plm_5F_options_writeDeclarationDependencyGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_5 = test_4.boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_s_3444 = var_precedenceGraph_1976.getter_graphviz (SOURCE_FILE ("ordered-declaration-list.galgas", 60)) ;
    GALGAS_string var_filePath_3490 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependency.dot"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 61)) ;
    GALGAS_bool joker_3588 ; // Joker input parameter
    var_s_3444.method_writeToFileWhenDifferentContents (var_filePath_3490, joker_3588, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 62)) ;
  }
  outArgument_outDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("ordered-declaration-list.galgas", 65)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_precedenceGraph_1976.getter_undefinedNodeCount (SOURCE_FILE ("ordered-declaration-list.galgas", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    cEnumerator_lstringlist enumerator_3810 (var_precedenceGraph_1976.getter_undefinedNodeReferenceList (SOURCE_FILE ("ordered-declaration-list.galgas", 67)), kENUMERATION_UP) ;
    while (enumerator_3810.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (enumerator_3810.current_mValue (HERE).getter_location (SOURCE_FILE ("ordered-declaration-list.galgas", 68)), enumerator_3810.current_mValue (HERE).getter_string (HERE).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)), fixItArray7  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 68)) ;
      enumerator_3810.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_6) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_4024 ;
    GALGAS_lstringlist joker_3957 ; // Joker input parameter
    GALGAS_lstringlist joker_4032 ; // Joker input parameter
    var_precedenceGraph_1976.method_topologicalSort (outArgument_outDeclarationListAST, joker_3957, var_unsortedSemanticDeclarationListAST_4024, joker_4032, inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 71)) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_4024.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_string var_s_4111 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_4024.getter_length (SOURCE_FILE ("ordered-declaration-list.galgas", 79)).getter_string (SOURCE_FILE ("ordered-declaration-list.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 78)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 79)) ;
      cEnumerator_declarationListAST enumerator_4326 (var_unsortedSemanticDeclarationListAST_4024, kENUMERATION_UP) ;
      while (enumerator_4326.hasCurrentObject ()) {
        var_s_4111.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4326.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 82)) ;
        enumerator_4326.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_4111, fixItArray9  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 84)) ;
      cEnumerator_declarationListAST enumerator_4498 (var_unsortedSemanticDeclarationListAST_4024, kENUMERATION_UP) ;
      while (enumerator_4498.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_abstractDeclarationAST *) enumerator_4498.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)), GALGAS_string ("the ").add_operation (callExtensionGetter_keyRepresentationForErrorSignaling ((const cPtr_abstractDeclarationAST *) enumerator_4498.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)).add_operation (GALGAS_string (" is declared here"), inCompiler COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)), fixItArray10  COMMA_SOURCE_FILE ("ordered-declaration-list.galgas", 86)) ;
        enumerator_4498.gotoNextObject () ;
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
                                   GALGAS_staticEntityMap & ioArgument_ioStaticEntityMap,
                                   GALGAS_staticListInitializationMap & ioArgument_ioStaticListValueMap,
                                   GALGAS_semanticContext & outArgument_outSemanticContext,
                                   GALGAS_subprogramInvocationGraph & outArgument_outSubprogramInvocationGraph,
                                   GALGAS_declarationDecorationList & outArgument_outDecoratedDeclarationList,
                                   GALGAS_globalVariableIRList & outArgument_outGlobalVariableIRList,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticContext.drop () ; // Release 'out' argument
  outArgument_outSubprogramInvocationGraph.drop () ; // Release 'out' argument
  outArgument_outDecoratedDeclarationList.drop () ; // Release 'out' argument
  outArgument_outGlobalVariableIRList.drop () ; // Release 'out' argument
  outArgument_outSemanticContext = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("context.galgas", 178)) ;
  outArgument_outDecoratedDeclarationList = GALGAS_declarationDecorationList::constructor_emptyList (SOURCE_FILE ("context.galgas", 179)) ;
  extensionMethod_enterInContext (constinArgument_inAST.getter_mISRDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 181)) ;
  extensionMethod_enterFunctionInContext (constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 182)) ;
  extensionMethod_enterExternProcInContext (constinArgument_inAST.getter_mExternProcListAST (HERE), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 187)) ;
  extensionMethod_enterSystemRoutineInContext (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), GALGAS_string::makeEmptyString (), outArgument_outSemanticContext, inCompiler COMMA_SOURCE_FILE ("context.galgas", 188)) ;
  outArgument_outSubprogramInvocationGraph = GALGAS_subprogramInvocationGraph::constructor_emptyGraph (SOURCE_FILE ("context.galgas", 190)) ;
  outArgument_outGlobalVariableIRList = GALGAS_globalVariableIRList::constructor_emptySortedList (SOURCE_FILE ("context.galgas", 191)) ;
  cEnumerator_declarationListAST enumerator_8019 (constinArgument_inAST.getter_mDeclarationListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_8019.hasCurrentObject ()) {
    callExtensionMethod_enterInContext ((const cPtr_abstractDeclarationAST *) enumerator_8019.current_mDeclaration (HERE).ptr (), constinArgument_inAST.getter_mStandAloneFunctionDeclarationListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outSubprogramInvocationGraph, ioArgument_ioStaticListValueMap, ioArgument_ioStaticEntityMap, outArgument_outGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 193)) ;
    enumerator_8019.gotoNextObject () ;
  }
  {
  routine_buildGlobalConstantMapHTMLFile (outArgument_outSemanticContext.getter_mGlobalConstantMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 204)) ;
  }
  {
  routine_buildTypeMapHTMLFile (outArgument_outSemanticContext.getter_mTypeMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 209)) ;
  }
  {
  routine_buildControlRegisterMapHTMLFile (outArgument_outSemanticContext.getter_mControlRegisterGroupMap (HERE), constinArgument_inSourceFile, inCompiler  COMMA_SOURCE_FILE ("context.galgas", 214)) ;
  }
  extensionMethod_enterInContext (constinArgument_inAST.getter_mTaskListAST (HERE), outArgument_outSemanticContext, outArgument_outDecoratedDeclarationList, outArgument_outSubprogramInvocationGraph, ioArgument_ioStaticEntityMap, outArgument_outGlobalVariableIRList, inCompiler COMMA_SOURCE_FILE ("context.galgas", 219)) ;
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
  result_result = GALGAS_string ("{").add_operation (constinArgument_inLeftTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 231)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("context.galgas", 231)).add_operation (constinArgument_inRightTypeName, inCompiler COMMA_SOURCE_FILE ("context.galgas", 231)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("context.galgas", 231)).getter_nowhere (SOURCE_FILE ("context.galgas", 231)) ;
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
//                                            Function 'staticIntegerType'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_PLMType function_staticIntegerType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 46)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 47)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 48)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 49)), GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 50)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 50)) COMMA_SOURCE_FILE ("types.galgas", 50)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 51)), GALGAS_typeKind::constructor_staticInteger (SOURCE_FILE ("types.galgas", 52)), function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 53))  COMMA_SOURCE_FILE ("types.galgas", 45)) ;
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

GALGAS_PLMType function_literalStringType (C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_PLMType result_result ; // Returned variable
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 61)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 62)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 63)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 64)), GALGAS_PLMTypeAttributes::constructor_instanciable (SOURCE_FILE ("types.galgas", 65)).operator_or (GALGAS_PLMTypeAttributes::constructor_equatable (SOURCE_FILE ("types.galgas", 65)) COMMA_SOURCE_FILE ("types.galgas", 65)).operator_or (GALGAS_PLMTypeAttributes::constructor_copyable (SOURCE_FILE ("types.galgas", 65)) COMMA_SOURCE_FILE ("types.galgas", 65)).operator_or (GALGAS_PLMTypeAttributes::constructor_generateAssignmentRoutine (SOURCE_FILE ("types.galgas", 65)) COMMA_SOURCE_FILE ("types.galgas", 65)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 66)), GALGAS_typeKind::constructor_literalString (SOURCE_FILE ("types.galgas", 67)), function_staticStringTypeName (inCompiler COMMA_SOURCE_FILE ("types.galgas", 68))  COMMA_SOURCE_FILE ("types.galgas", 60)) ;
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
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 76)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 77)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 78)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 79)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 80)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_void (SOURCE_FILE ("types.galgas", 82)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 75)) ;
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
  result_result = GALGAS_PLMType::constructor_new (GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 91)), GALGAS_classConstantMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 92)), GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("types.galgas", 93)), GALGAS_guardMapForContext::constructor_emptyMap (SOURCE_FILE ("types.galgas", 94)), GALGAS_PLMTypeAttributes::constructor_none (SOURCE_FILE ("types.galgas", 95)), GALGAS_string::makeEmptyString (), GALGAS_typeKind::constructor_function (constinArgument_inDescriptor  COMMA_SOURCE_FILE ("types.galgas", 97)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("types.galgas", 90)) ;
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
  GALGAS_string var_typeDumpFilePath_16118 = constinArgument_inSourceFile.getter_string (HERE).add_operation (GALGAS_string (".types.html"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 420)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_plm_5F_options_emitTypeMap.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_stringset var_firstLetterSet_16235 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("types.galgas", 422)) ;
    cEnumerator_unifiedTypeMap enumerator_16264 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_16264.hasCurrentObject ()) {
      var_firstLetterSet_16235.addAssign_operation (enumerator_16264.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 424)).getter_string (SOURCE_FILE ("types.galgas", 424))  COMMA_SOURCE_FILE ("types.galgas", 424)) ;
      enumerator_16264.gotoNextObject () ;
    }
    GALGAS_string var_tableOfTypeString_16372 = GALGAS_string::makeEmptyString () ;
    GALGAS_char var_currentFirstLetter_16406 = GALGAS_char (TO_UNICODE (32)) ;
    cEnumerator_unifiedTypeMap enumerator_16442 (inArgument_inTypeMap, kENUMERATION_UP) ;
    while (enumerator_16442.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_16406.objectCompare (enumerator_16442.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 429)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_currentFirstLetter_16406 = enumerator_16442.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("types.galgas", 430)) ;
        var_tableOfTypeString_16372.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_16406.getter_uint (SOURCE_FILE ("types.galgas", 431)).getter_string (SOURCE_FILE ("types.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 431)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 431)).add_operation (var_currentFirstLetter_16406.getter_string (SOURCE_FILE ("types.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("types.galgas", 431)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 431)) ;
      }
      var_tableOfTypeString_16372.plusAssign_operation(function_linkForHTMLTypeMap (enumerator_16442.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("types.galgas", 433)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("types.galgas", 433)) ;
      enumerator_16442.gotoNextObject () ;
    }
    GALGAS_string var_typeDumpString_16835 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_dump (inCompiler, constinArgument_inSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("types.galgas", 436)), inArgument_inTypeMap, var_firstLetterSet_16235, var_tableOfTypeString_16372 COMMA_SOURCE_FILE ("types.galgas", 435))) ;
    GALGAS_bool joker_17065 ; // Joker input parameter
    var_typeDumpString_16835.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_16118, joker_17065, inCompiler COMMA_SOURCE_FILE ("types.galgas", 441)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_16118, inCompiler COMMA_SOURCE_FILE ("types.galgas", 443)) ;
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
  result_result = GALGAS_string ("<a class=\"header_link\" href=\"#").add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 462)).add_operation (GALGAS_string ("\">"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 462)).add_operation (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("types.galgas", 462)).add_operation (GALGAS_string ("</a>"), inCompiler COMMA_SOURCE_FILE ("types.galgas", 462)) ;
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
    const enumGalgasBool test_1 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isVoid (SOURCE_FILE ("semantic-analysis.galgas", 17)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = constinArgument_inSourceValue ;
    }else if (kBoolFalse == test_1) {
      GALGAS_bool test_2 = var_sourceType_876.getter_kind (HERE).getter_isStaticInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).getter_isInteger (SOURCE_FILE ("semantic-analysis.galgas", 19)) ;
      }
      const enumGalgasBool test_3 = test_2.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_bigint var_value_1219 ;
        GALGAS_PLMType joker_1200_1 ; // Joker input parameter
        constinArgument_inSourceValue.method_literalInteger (joker_1200_1, var_value_1219, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 20)) ;
        GALGAS_bigint var_minTarget_1288 ;
        GALGAS_bigint var_maxTarget_1307 ;
        GALGAS_bool joker_1309_2 ; // Joker input parameter
        GALGAS_uint joker_1309_1 ; // Joker input parameter
        constinArgument_inOptionalTargetAnnotationType.getter_kind (HERE).method_integer (var_minTarget_1288, var_maxTarget_1307, joker_1309_2, joker_1309_1, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 21)) ;
        GALGAS_bool test_4 = GALGAS_bool (kIsStrictInf, var_value_1219.objectCompare (var_minTarget_1288)) ;
        if (kBoolTrue != test_4.boolEnum ()) {
          test_4 = GALGAS_bool (kIsStrictInf, var_maxTarget_1307.objectCompare (var_value_1219)) ;
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
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("object of type $").add_operation (constinArgument_inOptionalTargetAnnotationType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (GALGAS_string (" cannot be assigned from expression of type $"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 29)).add_operation (extensionGetter_plmOriginalTypeName (constinArgument_inSourceValue, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 30)), fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 28)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_8 = constinArgument_inStaticTypeAllowed.operator_not (SOURCE_FILE ("semantic-analysis.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_8) {
    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extensionGetter_plmOriginalTypeName (result_result, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)).objectCompare (function_staticIntegerTypeName (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 34)))).boolEnum () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 72)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 73)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3403 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3403, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 75)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_llvmValue (constinArgument_inType, var_llvmName_3403  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 76)) ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 87)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outTempVariable = GALGAS_objectIR::constructor_void (SOURCE_FILE ("semantic-analysis.galgas", 88)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_llvmName_3843 ;
    {
    extensionSetter_newTempLLVMVar (ioArgument_ioTemporaries, var_llvmName_3843, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 90)) ;
    }
    outArgument_outTempVariable = GALGAS_objectIR::constructor_reference (constinArgument_inType, var_llvmName_3843  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 91)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'semanticAnalysis'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysis (const GALGAS_string constinArgument_inSourceFile,
                               const GALGAS_ast constinArgument_inAST,
                               const GALGAS_declarationDecorationList constinArgument_inDecoratedDeclarationList,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               GALGAS_subprogramInvocationGraph inArgument_inSubprogramInvocationGraph,
                               const GALGAS_location constinArgument_inEndOfSourceFile,
                               const GALGAS_staticEntityMap constinArgument_inStaticEntityMap,
                               GALGAS_intermediateCodeStruct & outArgument_outIntermediateCodeStruct,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outIntermediateCodeStruct.drop () ; // Release 'out' argument
  outArgument_outIntermediateCodeStruct = GALGAS_intermediateCodeStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 107)) ;
  outArgument_outIntermediateCodeStruct.mProperty_mTargetParameters = constinArgument_inSemanticContext.getter_mTargetParameters (HERE) ;
  outArgument_outIntermediateCodeStruct.mProperty_mStaticEntityMap = constinArgument_inStaticEntityMap ;
  outArgument_outIntermediateCodeStruct.mProperty_mGlobalTaskVariableList = constinArgument_inSemanticContext.getter_mGlobalTaskVariableList (HERE) ;
  cEnumerator_requiredProcedureDeclarationListAST enumerator_4834 (constinArgument_inAST.getter_mRequiredProcListAST (HERE), kENUMERATION_UP) ;
  while (enumerator_4834.hasCurrentObject ()) {
    GALGAS_lstring var_procedureMangledName_4866 = function_routineMangledNameFromAST (GALGAS_string::makeEmptyString (), enumerator_4834.current (HERE).getter_mName (HERE), enumerator_4834.current (HERE).getter_mFormalArgumentList (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 112)) ;
    outArgument_outIntermediateCodeStruct.mProperty_mRequiredProcedureSet.addAssign_operation (var_procedureMangledName_4866.getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 113)) ;
    enumerator_4834.gotoNextObject () ;
  }
  GALGAS_semanticTemporariesStruct var_temporaries_5091 = GALGAS_semanticTemporariesStruct::constructor_default (SOURCE_FILE ("semantic-analysis.galgas", 116)) ;
  var_temporaries_5091.mProperty_mSubprogramInvocationGraph = inArgument_inSubprogramInvocationGraph ;
  cEnumerator_declarationDecorationList enumerator_5223 (constinArgument_inDecoratedDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5223.hasCurrentObject ()) {
    callExtensionMethod_semanticAnalysis ((const cPtr_abstractDecoratedDeclaration *) enumerator_5223.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext, var_temporaries_5091, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 119)) ;
    enumerator_5223.gotoNextObject () ;
  }
  extensionMethod_systemRoutineSemanticAnalysis (constinArgument_inAST.getter_mStandAloneSystemRoutineListAST (HERE), function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 126)), constinArgument_inSemanticContext, var_temporaries_5091, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 125)) ;
  extensionMethod_externProcedureSemanticAnalysis (constinArgument_inAST.getter_mExternProcListAST (HERE), constinArgument_inSemanticContext, var_temporaries_5091, outArgument_outIntermediateCodeStruct, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 131)) ;
  {
  routine_checkRequiredProcedures (constinArgument_inAST, constinArgument_inSemanticContext, constinArgument_inEndOfSourceFile, inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 137)) ;
  }
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (gOption_plm_5F_options_writeRoutineInvocationGraphFile.getter_value ()) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_s_6075 = var_temporaries_5091.getter_mSubprogramInvocationGraph (HERE).getter_graphviz (SOURCE_FILE ("semantic-analysis.galgas", 144)) ;
    GALGAS_string var_filePath_6144 = constinArgument_inSourceFile.getter_stringByDeletingPathExtension (SOURCE_FILE ("semantic-analysis.galgas", 145)).add_operation (GALGAS_string (".routineInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 145)) ;
    GALGAS_bool joker_6270 ; // Joker input parameter
    var_s_6075.method_writeToFileWhenDifferentContents (var_filePath_6144, joker_6270, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 146)) ;
  }
  GALGAS_bool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semantic-analysis.galgas", 149)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_2.boolEnum ()) {
    test_2 = GALGAS_bool (gOption_plm_5F_options_doNotDetectRecursiveCalls.getter_value ()).operator_not (SOURCE_FILE ("semantic-analysis.galgas", 149)) ;
  }
  const enumGalgasBool test_3 = test_2.boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_stringlist var_undefinedNodeKeyList_6439 = var_temporaries_5091.getter_mSubprogramInvocationGraph (HERE).getter_undefinedNodeKeyList (SOURCE_FILE ("semantic-analysis.galgas", 150)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_undefinedNodeKeyList_6439.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_string var_s_6563 = GALGAS_string ("subprogram invocation graph error, undefined nodes:") ;
      cEnumerator_stringlist enumerator_6661 (var_undefinedNodeKeyList_6439, kENUMERATION_UP) ;
      while (enumerator_6661.hasCurrentObject ()) {
        var_s_6563.plusAssign_operation(GALGAS_string ("\n"
          " - ").add_operation (enumerator_6661.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 154)) ;
        enumerator_6661.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6563, fixItArray5  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 156)) ;
    }else if (kBoolFalse == test_4) {
      GALGAS_lstringlist var_unsortedInformationList_6868 ;
      GALGAS_lstringlist var_unsortedLKeyList_6912 ;
      var_temporaries_5091.getter_mSubprogramInvocationGraph (HERE).method_circularities (var_unsortedInformationList_6868, var_unsortedLKeyList_6912 COMMA_SOURCE_FILE ("semantic-analysis.galgas", 158)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_unsortedLKeyList_6912.getter_length (SOURCE_FILE ("semantic-analysis.galgas", 162)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string var_s_6978 = GALGAS_string ("the following routines are recursive:") ;
        cEnumerator_lstringlist enumerator_7058 (var_unsortedLKeyList_6912, kENUMERATION_UP) ;
        while (enumerator_7058.hasCurrentObject ()) {
          var_s_6978.plusAssign_operation(GALGAS_string ("\n"
            " - ").add_operation (enumerator_7058.current_mValue (HERE).getter_string (SOURCE_FILE ("semantic-analysis.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 165)) ;
          enumerator_7058.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfSourceFile, var_s_6978, fixItArray7  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 167)) ;
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
                                   GALGAS_universalValuedObjectMap & ioArgument_ioUniversalMap,
                                   GALGAS_routineFormalArgumentListIR & ioArgument_ioFormalArguments,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_routineFormalArgumentListAST enumerator_1222 (constinArgument_inFormalArgumentPassingMode, kENUMERATION_UP) ;
  while (enumerator_1222.hasCurrentObject ()) {
    GALGAS_PLMType var_typeProxy_1243 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), enumerator_1222.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 26)) ;
    ioArgument_ioFormalArguments.addAssign_operation (enumerator_1222.current_mFormalArgumentPassingMode (HERE), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 27)) ;
    switch (enumerator_1222.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_procFormalArgumentPassingMode::kNotBuilt:
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_input:
      {
        {
        extensionSetter_insertLocalConstant (ioArgument_ioUniversalMap, enumerator_1222.current_mFormalArgumentName (HERE), GALGAS_bool (true), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 30)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_inputOutput:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_1222.current_mFormalArgumentName (HERE), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_hasUnreadValue (SOURCE_FILE ("semantic-routines.galgas", 32)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 32)) ;
        }
      }
      break ;
    case GALGAS_procFormalArgumentPassingMode::kEnum_output:
      {
        {
        extensionSetter_insertLocalVariable (ioArgument_ioUniversalMap, enumerator_1222.current_mFormalArgumentName (HERE), var_typeProxy_1243, enumerator_1222.current_mFormalArgumentName (HERE), GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 34)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 34)) ;
        }
      }
      break ;
    }
    enumerator_1222.gotoNextObject () ;
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
                                      const GALGAS_location constinArgument_inEndOfRoutineDeclaration,
                                      const GALGAS_routineAttributes constinArgument_inRoutineAttributes,
                                      const GALGAS_bool constinArgument_inWarnIfUnused,
                                      const GALGAS_bool constinArgument_inGlobalFunction,
                                      const GALGAS_semanticContext constinArgument_inContext,
                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                      GALGAS_intermediateCodeStruct & ioArgument_ioIntermediateCodeStruct,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioTemporaries.mProperty_mTemporaryIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inSelfType.getter_kind (HERE).objectCompare (GALGAS_typeKind::constructor_void (SOURCE_FILE ("semantic-routines.galgas", 61)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = function_llvmTypeStringFromPLMname (constinArgument_inSelfType.getter_plmOriginalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 61)) ;
  }
  GALGAS_lstring var_routineMangledName_2767 = function_routineMangledNameFromAST (temp_0, constinArgument_inRoutineName, constinArgument_inRoutineFormalArgumentList, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 60)) ;
  GALGAS_universalValuedObjectMap var_universalMap_3000 = constinArgument_inContext.getter_mValuedObjectMap (HERE) ;
  {
  extensionSetter_openOverrideForSelectBlock (var_universalMap_3000, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 67)) ;
  }
  {
  extensionSetter_openBranch (var_universalMap_3000, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 68)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_lstring var_resultVarName_3167 = GALGAS_lstring::constructor_new (function_functionResultVariableName (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 70)), constinArgument_inReturnTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("semantic-routines.galgas", 70)) ;
    GALGAS_PLMType var_resultType_3261 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 71)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 71)) ;
    {
    extensionSetter_insertLocalVariable (var_universalMap_3000, var_resultVarName_3167, var_resultType_3261, var_resultVarName_3167, GALGAS_valuedObjectState::constructor_noValue (SOURCE_FILE ("semantic-routines.galgas", 72)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 72)) ;
    }
  }
  GALGAS_routineFormalArgumentListIR var_formalArguments_3524 = GALGAS_routineFormalArgumentListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 75)) ;
  {
  routine_enterFormalArguments (constinArgument_inContext, constinArgument_inRoutineFormalArgumentList, var_universalMap_3000, var_formalArguments_3524, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 76)) ;
  }
  const enumGalgasBool test_3 = ioArgument_ioTemporaries.getter_mSubprogramInvocationGraph (HERE).getter_isNodeDefined (var_routineMangledName_2767.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 83)).operator_not (SOURCE_FILE ("semantic-routines.galgas", 83)).boolEnum () ;
  if (kBoolTrue == test_3) {
    {
    ioArgument_ioTemporaries.mProperty_mSubprogramInvocationGraph.setter_addNode (var_routineMangledName_2767, var_routineMangledName_2767, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 84)) ;
    }
  }
  GALGAS_allocaList var_allocaList_3967 = GALGAS_allocaList::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 90)) ;
  GALGAS_instructionListIR var_instructionGenerationList_4019 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("semantic-routines.galgas", 91)) ;
  extensionMethod_analyzeRoutineInstructionList (constinArgument_inRoutineInstructionList, constinArgument_inSelfType, constinArgument_inRoutineAttributes, var_routineMangledName_2767, constinArgument_inContext, constinArgument_inRoutineMode, ioArgument_ioTemporaries, ioArgument_ioIntermediateCodeStruct.mProperty_mStaticEntityMap, var_universalMap_3000, var_allocaList_3967, var_instructionGenerationList_4019, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 92)) ;
  extensionMethod_checkLocalVariableFinalState (var_universalMap_3000, var_instructionGenerationList_4019, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 105)) ;
  {
  extensionSetter_closeBranch (var_universalMap_3000, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 106)) ;
  }
  {
  extensionSetter_closeOverride (var_universalMap_3000, constinArgument_inEndOfRoutineDeclaration, inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 107)) ;
  }
  GALGAS_PLMType temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inReturnTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = function_voidType (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 110)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.getter_mTypeMap (HERE), constinArgument_inReturnTypeName, inCompiler  COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)).getter_type (inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 112)) ;
  }
  GALGAS_PLMType var_returnType_4700 = temp_4 ;
  {
  ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR.setter_insertKey (var_routineMangledName_2767, constinArgument_inSelfType, var_routineMangledName_2767, var_formalArguments_3524, var_allocaList_3967, var_instructionGenerationList_4019, ioArgument_ioIntermediateCodeStruct.getter_mRequiredProcedureSet (HERE).getter_hasKey (var_routineMangledName_2767.getter_string (HERE) COMMA_SOURCE_FILE ("semantic-routines.galgas", 121)), constinArgument_inWarnIfUnused, constinArgument_inGlobalFunction, constinArgument_inRoutineKind, var_returnType_4700, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semantic-routines.galgas", 114)) ;
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
  result_result = GALGAS_string (" nounwind minsize optsize ") ;
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
//                                        Function 'llvmTypeStringFromPLMname'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmTypeStringFromPLMname (const GALGAS_string & constinArgument_inName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("type.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 18)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmTypeStringFromPLMname [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmTypeStringFromPLMname (C_Compiler * inCompiler,
                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                          const GALGAS_location & /* inErrorLocation */
                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmTypeStringFromPLMname (operand0,
                                             inCompiler
                                             COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmTypeStringFromPLMname ("llvmTypeStringFromPLMname",
                                                                           functionWithGenericHeader_llvmTypeStringFromPLMname,
                                                                           & kTypeDescriptor_GALGAS_string,
                                                                           1,
                                                                           functionArgs_llvmTypeStringFromPLMname) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmTypeNameFromPLMname'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmTypeNameFromPLMname (const GALGAS_lstring & constinArgument_inName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (function_llvmTypeStringFromPLMname (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 24)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmTypeNameFromPLMname [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmTypeNameFromPLMname (C_Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmTypeNameFromPLMname (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmTypeNameFromPLMname ("llvmTypeNameFromPLMname",
                                                                         functionWithGenericHeader_llvmTypeNameFromPLMname,
                                                                         & kTypeDescriptor_GALGAS_lstring,
                                                                         1,
                                                                         functionArgs_llvmTypeNameFromPLMname) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Function 'registerGroupNameFromPLMname'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_registerGroupNameFromPLMname (const GALGAS_lstring & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("registers ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 30)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 30)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_registerGroupNameFromPLMname [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_registerGroupNameFromPLMname (C_Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_registerGroupNameFromPLMname (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_registerGroupNameFromPLMname ("registerGroupNameFromPLMname",
                                                                              functionWithGenericHeader_registerGroupNameFromPLMname,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_registerGroupNameFromPLMname) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'llvmDriverStringFromName'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmDriverStringFromName (const GALGAS_string & constinArgument_inDriverName,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_inDriverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = constinArgument_inDriverName ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("driver.").add_operation (constinArgument_inDriverName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 41)) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmDriverStringFromName [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmDriverStringFromName (C_Compiler * inCompiler,
                                                                         const cObjectArray & inEffectiveParameterArray,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmDriverStringFromName (operand0,
                                            inCompiler
                                            COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmDriverStringFromName ("llvmDriverStringFromName",
                                                                          functionWithGenericHeader_llvmDriverStringFromName,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          1,
                                                                          functionArgs_llvmDriverStringFromName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Function 'llvmDriverNameFromName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmDriverNameFromName (const GALGAS_lstring & constinArgument_inDriverName,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (function_llvmDriverStringFromName (constinArgument_inDriverName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 48)), constinArgument_inDriverName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 48)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmDriverNameFromName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmDriverNameFromName (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_llvmDriverNameFromName (operand0,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmDriverNameFromName ("llvmDriverNameFromName",
                                                                        functionWithGenericHeader_llvmDriverNameFromName,
                                                                        & kTypeDescriptor_GALGAS_lstring,
                                                                        1,
                                                                        functionArgs_llvmDriverNameFromName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Function 'initNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_initNameForInvocationGraph (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                    const GALGAS_location & constinArgument_inLocation,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("init ").add_operation (constinArgument_inReceiverTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 56)), constinArgument_inLocation  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 56)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_initNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_initNameForInvocationGraph (C_Compiler * inCompiler,
                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_location operand1 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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
//                                       Function 'setupNameForInvocationGraph'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_setupNameForInvocationGraph (const GALGAS_string & constinArgument_inReceiverTypeName,
                                                     const GALGAS_lbigint & constinArgument_inPriority,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  GALGAS_string var_s_2644 = GALGAS_string ("setup ").add_operation (constinArgument_inReceiverTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 62)) ;
  var_s_2644.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 63)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2644, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 64)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_setupNameForInvocationGraph [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_lbigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_setupNameForInvocationGraph (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_lbigint operand1 = GALGAS_lbigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_setupNameForInvocationGraph (operand0,
                                               operand1,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_setupNameForInvocationGraph ("setupNameForInvocationGraph",
                                                                             functionWithGenericHeader_setupNameForInvocationGraph,
                                                                             & kTypeDescriptor_GALGAS_lstring,
                                                                             2,
                                                                             functionArgs_setupNameForInvocationGraph) ;

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
  GALGAS_string var_s_2974 = GALGAS_string ("panic ").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)).add_operation (constinArgument_inPriority.getter_bigint (HERE).getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 70)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_2974, constinArgument_inPriority.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 71)) ;
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
  result_result = GALGAS_string ("@string.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 79)) ;
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
  result_result = GALGAS_string ("@str.array.").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 85)) ;
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
  result_result = GALGAS_string ("func.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 119)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 119)) ;
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
  GALGAS_string var_s_5269 = GALGAS_string ("interrupt ").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 127)) ;
  result_result = GALGAS_lstring::constructor_new (var_s_5269, constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 128)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("interrupt.service.").add_operation (constinArgument_inName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 134)), constinArgument_inName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 134)) ;
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
//                                       Function 'llvmNameForSectionInterrupt'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForSectionInterrupt (const GALGAS_string & constinArgument_inName,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("interrupt.section.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 140)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForSectionInterrupt [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForSectionInterrupt (C_Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForSectionInterrupt (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForSectionInterrupt ("llvmNameForSectionInterrupt",
                                                                             functionWithGenericHeader_llvmNameForSectionInterrupt,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_llvmNameForSectionInterrupt) ;

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
      result_result = function_llvmNameForPrimitiveCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 150)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 152)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionCall (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 154)) ;
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
      result_result = function_llvmNameForPrimitiveImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 165)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_service:
    {
      result_result = function_llvmNameForServiceImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 167)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_section:
    {
      result_result = function_llvmNameForSectionImplementation (constinArgument_inName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 169)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_function:
    {
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (constinArgument_inName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 171)), GALGAS_string ("INTERNAL ERROR"), fixItArray0  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 171)) ;
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
  result_result = GALGAS_string ("primitive.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 180)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 180)) ;
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
  result_result = GALGAS_string ("primitive.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 186)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 186)) ;
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
  result_result = GALGAS_string ("service.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 194)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 194)) ;
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
  result_result = GALGAS_string ("service.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 200)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 200)) ;
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
  result_result = GALGAS_string ("section.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 208)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 208)) ;
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
  result_result = GALGAS_string ("section.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 214)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 214)) ;
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
  result_result = GALGAS_string ("guard.call.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 228)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 228)) ;
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
  result_result = GALGAS_string ("guard.implementation.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 234)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 234)) ;
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
  result_result = GALGAS_string ("guard.wait.for.change") ;
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
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("var.").add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 248)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 248)) ;
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
  result_result = GALGAS_string ("@gvar.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 260)) ;
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
//                                      Function 'llvmNameForGlobalSyncInstance'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForGlobalSyncInstance (const GALGAS_string & constinArgument_inName,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("@gsync.").add_operation (constinArgument_inName.getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 266)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForGlobalSyncInstance [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForGlobalSyncInstance (C_Compiler * inCompiler,
                                                                              const cObjectArray & inEffectiveParameterArray,
                                                                              const GALGAS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_llvmNameForGlobalSyncInstance (operand0,
                                                 inCompiler
                                                 COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForGlobalSyncInstance ("llvmNameForGlobalSyncInstance",
                                                                               functionWithGenericHeader_llvmNameForGlobalSyncInstance,
                                                                               & kTypeDescriptor_GALGAS_string,
                                                                               1,
                                                                               functionArgs_llvmNameForGlobalSyncInstance) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'instantiableAttribute'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_instantiableAttribute (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("instantiable") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_instantiableAttribute = false ;
static GALGAS_string gOnceFunctionResult_instantiableAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_instantiableAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_instantiableAttribute) {
    gOnceFunctionResult_instantiableAttribute = onceFunction_instantiableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_instantiableAttribute = true ;
  }
  return gOnceFunctionResult_instantiableAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_instantiableAttribute (void) {
  gOnceFunctionResult_instantiableAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_instantiableAttribute (NULL,
                                                                   releaseOnceFunctionResult_instantiableAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_instantiableAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_instantiableAttribute (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_instantiableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_instantiableAttribute ("instantiableAttribute",
                                                                       functionWithGenericHeader_instantiableAttribute,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_instantiableAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Once function 'copyableAttribute'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_copyableAttribute (C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("copyable") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_copyableAttribute = false ;
static GALGAS_string gOnceFunctionResult_copyableAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_copyableAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_copyableAttribute) {
    gOnceFunctionResult_copyableAttribute = onceFunction_copyableAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_copyableAttribute = true ;
  }
  return gOnceFunctionResult_copyableAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_copyableAttribute (void) {
  gOnceFunctionResult_copyableAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_copyableAttribute (NULL,
                                                               releaseOnceFunctionResult_copyableAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_copyableAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_copyableAttribute (C_Compiler * inCompiler,
                                                                  const cObjectArray & /* inEffectiveParameterArray */,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  return function_copyableAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_copyableAttribute ("copyableAttribute",
                                                                   functionWithGenericHeader_copyableAttribute,
                                                                   & kTypeDescriptor_GALGAS_string,
                                                                   0,
                                                                   functionArgs_copyableAttribute) ;

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
//                                            Once function 'safeAttribute'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_safeAttribute (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("safe") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_safeAttribute = false ;
static GALGAS_string gOnceFunctionResult_safeAttribute ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_safeAttribute (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_safeAttribute) {
    gOnceFunctionResult_safeAttribute = onceFunction_safeAttribute (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_safeAttribute = true ;
  }
  return gOnceFunctionResult_safeAttribute ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_safeAttribute (void) {
  gOnceFunctionResult_safeAttribute.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_safeAttribute (NULL,
                                                           releaseOnceFunctionResult_safeAttribute) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_safeAttribute [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_safeAttribute (C_Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GALGAS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_safeAttribute (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_safeAttribute ("safeAttribute",
                                                               functionWithGenericHeader_safeAttribute,
                                                               & kTypeDescriptor_GALGAS_string,
                                                               0,
                                                               functionArgs_safeAttribute) ;

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
//                                      Once function 'userAttributeForRegister'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_userAttributeForRegister (C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("user") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_userAttributeForRegister = false ;
static GALGAS_string gOnceFunctionResult_userAttributeForRegister ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_userAttributeForRegister (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_userAttributeForRegister) {
    gOnceFunctionResult_userAttributeForRegister = onceFunction_userAttributeForRegister (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_userAttributeForRegister = true ;
  }
  return gOnceFunctionResult_userAttributeForRegister ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_userAttributeForRegister (void) {
  gOnceFunctionResult_userAttributeForRegister.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_userAttributeForRegister (NULL,
                                                                      releaseOnceFunctionResult_userAttributeForRegister) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_userAttributeForRegister [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_userAttributeForRegister (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_userAttributeForRegister (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_userAttributeForRegister ("userAttributeForRegister",
                                                                          functionWithGenericHeader_userAttributeForRegister,
                                                                          & kTypeDescriptor_GALGAS_string,
                                                                          0,
                                                                          functionArgs_userAttributeForRegister) ;

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
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.stack.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 324)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 324)) ;
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
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.init.").add_operation (constinArgument_inTaskTypeName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 330)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 330)) ;
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
  result_result = GALGAS_string ("%").add_operation (GALGAS_string ("task.stack.address.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 336)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 336)) ;
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
  result_result = GALGAS_string ("@").add_operation (GALGAS_string ("task.main.").add_operation (constinArgument_inTaskName, inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 342)).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 342)) ;
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
//                                     Once function 'llvmNameForTaskLoopFunction'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskLoopFunction (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("task.loop") ;
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
//                                   Once function 'llvmNameForTaskAutoBlockService'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_llvmNameForTaskAutoBlockService (C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("xtr.auto.block") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_llvmNameForTaskAutoBlockService = false ;
static GALGAS_string gOnceFunctionResult_llvmNameForTaskAutoBlockService ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_llvmNameForTaskAutoBlockService (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_llvmNameForTaskAutoBlockService) {
    gOnceFunctionResult_llvmNameForTaskAutoBlockService = onceFunction_llvmNameForTaskAutoBlockService (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_llvmNameForTaskAutoBlockService = true ;
  }
  return gOnceFunctionResult_llvmNameForTaskAutoBlockService ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_llvmNameForTaskAutoBlockService (void) {
  gOnceFunctionResult_llvmNameForTaskAutoBlockService.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_llvmNameForTaskAutoBlockService (NULL,
                                                                             releaseOnceFunctionResult_llvmNameForTaskAutoBlockService) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_llvmNameForTaskAutoBlockService [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_llvmNameForTaskAutoBlockService (C_Compiler * inCompiler,
                                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  return function_llvmNameForTaskAutoBlockService (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_llvmNameForTaskAutoBlockService ("llvmNameForTaskAutoBlockService",
                                                                                 functionWithGenericHeader_llvmNameForTaskAutoBlockService,
                                                                                 & kTypeDescriptor_GALGAS_string,
                                                                                 0,
                                                                                 functionArgs_llvmNameForTaskAutoBlockService) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'memoryAllocSectionName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_memoryAllocSectionName (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.alloc") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_memoryAllocSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryAllocSectionName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_memoryAllocSectionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryAllocSectionName) {
    gOnceFunctionResult_memoryAllocSectionName = onceFunction_memoryAllocSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryAllocSectionName = true ;
  }
  return gOnceFunctionResult_memoryAllocSectionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_memoryAllocSectionName (void) {
  gOnceFunctionResult_memoryAllocSectionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_memoryAllocSectionName (NULL,
                                                                    releaseOnceFunctionResult_memoryAllocSectionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_memoryAllocSectionName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_memoryAllocSectionName (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_memoryAllocSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_memoryAllocSectionName ("memoryAllocSectionName",
                                                                        functionWithGenericHeader_memoryAllocSectionName,
                                                                        & kTypeDescriptor_GALGAS_string,
                                                                        0,
                                                                        functionArgs_memoryAllocSectionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Once function 'memoryFreeSectionName'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string onceFunction_memoryFreeSectionName (C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("heap.memory.free") ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_memoryFreeSectionName = false ;
static GALGAS_string gOnceFunctionResult_memoryFreeSectionName ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_memoryFreeSectionName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_memoryFreeSectionName) {
    gOnceFunctionResult_memoryFreeSectionName = onceFunction_memoryFreeSectionName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_memoryFreeSectionName = true ;
  }
  return gOnceFunctionResult_memoryFreeSectionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_memoryFreeSectionName (void) {
  gOnceFunctionResult_memoryFreeSectionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_memoryFreeSectionName (NULL,
                                                                   releaseOnceFunctionResult_memoryFreeSectionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_memoryFreeSectionName [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_memoryFreeSectionName (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_memoryFreeSectionName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_memoryFreeSectionName ("memoryFreeSectionName",
                                                                       functionWithGenericHeader_memoryFreeSectionName,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_memoryFreeSectionName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Function 'plmNameForStaticListType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_plmNameForStaticListType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist.").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 375)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 375))  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 375)) ;
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
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("staticlist.element.").add_operation (constinArgument_inStaticListName.getter_string (SOURCE_FILE ("generated-code-prefixes.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 381)), constinArgument_inStaticListName.getter_location (SOURCE_FILE ("generated-code-prefixes.galgas", 381))  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 381)) ;
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
//                                     Function 'llvmNameForStaticListElementType'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring function_llvmNameForStaticListElementType (const GALGAS_lstring & constinArgument_inStaticListName,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::constructor_new (GALGAS_string ("static.list.element.type.").add_operation (constinArgument_inStaticListName.getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("generated-code-prefixes.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 387)), constinArgument_inStaticListName.getter_location (HERE)  COMMA_SOURCE_FILE ("generated-code-prefixes.galgas", 387)) ;
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
  GALGAS_bool var_sourceIsUnsigned_756 ;
  GALGAS_bigint joker_723_2 ; // Joker input parameter
  GALGAS_bigint joker_723_1 ; // Joker input parameter
  GALGAS_uint joker_758_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).getter_kind (HERE).method_integer (joker_723_2, joker_723_1, var_sourceIsUnsigned_756, joker_758_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned_756.boolEnum () ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 31)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 32)) ;
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
//                           Overriding extension method '@boolToUIntIR llvmInstructionCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolToUIntIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolToUIntIR * object = (const cPtr_boolToUIntIR *) inObject ;
  macroValidSharedObject (object, cPtr_boolToUIntIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mUIntResult, inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mBoolSource, inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (extensionGetter_llvmName (object->mProperty_mBoolSource, inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 24)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mUIntResult, inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-bool-to-uint.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolToUIntIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_boolToUIntIR.mSlotID,
                                            extensionMethod_boolToUIntIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolToUIntIR_llvmInstructionCode (defineExtensionMethod_boolToUIntIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@boolToUIntIR enterAccessibleEntities'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolToUIntIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                  GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                  GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolToUIntIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_boolToUIntIR.mSlotID,
                                                extensionMethod_boolToUIntIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolToUIntIR_enterAccessibleEntities (defineExtensionMethod_boolToUIntIR_enterAccessibleEntities, NULL) ;

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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 26)).add_operation (object->mProperty_mShiftAmount.getter_string (SOURCE_FILE ("intermediate-shift-left.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)) ;
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
//                       Overriding extension method '@logicalRightShiftIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_logicalRightShiftIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logicalRightShiftIR * object = (const cPtr_logicalRightShiftIR *) inObject ;
  macroValidSharedObject (object, cPtr_logicalRightShiftIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("lshr ").add_operation (extensionGetter_llvmTypeName (object->mProperty_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (object->mProperty_mShiftAmount.getter_string (SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-logical-shift-right.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logicalRightShiftIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_logicalRightShiftIR.mSlotID,
                                            extensionMethod_logicalRightShiftIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logicalRightShiftIR_llvmInstructionCode (defineExtensionMethod_logicalRightShiftIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@logicalRightShiftIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_logicalRightShiftIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_logicalRightShiftIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_logicalRightShiftIR.mSlotID,
                                                extensionMethod_logicalRightShiftIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logicalRightShiftIR_enterAccessibleEntities (defineExtensionMethod_logicalRightShiftIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_5137 = extensionGetter_llvmTypeName (object->mProperty_mOperandType, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 138)) ;
  switch (object->mProperty_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)) ;
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
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (var_llvmType_5137, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (extensionGetter_llvmName (object->mProperty_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (extensionGetter_llvmName (object->mProperty_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 265)) ;
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
  GALGAS_uint var_bitCount_1334 ;
  GALGAS_bigint joker_1309_3 ; // Joker input parameter
  GALGAS_bigint joker_1309_2 ; // Joker input parameter
  GALGAS_bool joker_1309_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)).getter_kind (HERE).method_integer (joker_1309_3, joker_1309_2, joker_1309_1, var_bitCount_1334, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1334.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_980, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)) ;
  }
  GALGAS_string var_llvmType_1566 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)) ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1334.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_980 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_902, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (object->mProperty_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (object->mProperty_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (var_registerSubscriptedAddr_1143, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (var_registerOffsetName_902, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (object->mProperty_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (var_registerSubscriptedPtr_1062, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (var_registerSubscriptedAddr_1143, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (var_llvmType_1566, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 46)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 46)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 46)).add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (var_llvmType_1566, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (var_llvmType_1566, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 47)).add_operation (var_registerSubscriptedPtr_1062, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 48)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)) ;
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
  GALGAS_uint var_bitCount_1303 ;
  GALGAS_bigint joker_1278_3 ; // Joker input parameter
  GALGAS_bigint joker_1278_2 ; // Joker input parameter
  GALGAS_bool joker_1278_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 32)).getter_kind (HERE).method_integer (joker_1278_3, joker_1278_2, joker_1278_1, var_bitCount_1303, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 32)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1303.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_1020, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 35)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 34)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1303.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_1020 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 39)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 39)).add_operation (object->mProperty_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)).add_operation (object->mProperty_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterAddressValueName_1112, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)).add_operation (object->mProperty_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)).add_operation (object->mProperty_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 41)) ;
  GALGAS_string var_llvmType_1946 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 43)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (var_scriptedRegisterAddressValueName_1112, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)).add_operation (var_llvmType_1946, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 45)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-control-register-address-with-subscript.galgas", 44)) ;
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
  GALGAS_uint var_bitCount_1236 ;
  GALGAS_bigint joker_1211_3 ; // Joker input parameter
  GALGAS_bigint joker_1211_2 ; // Joker input parameter
  GALGAS_bool joker_1211_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)).getter_kind (HERE).method_integer (joker_1211_3, joker_1211_2, joker_1211_1, var_bitCount_1236, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 31)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1236.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_957, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 34)).add_operation (GALGAS_string (" to i32 ; extend index to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-compute-subscripted-volatile-register-address.galgas", 33)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1236.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
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
//                   Overriding extension method '@storeToUniversalReferenceIR llvmInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeToUniversalReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_string & ioArgument_ioLLVMcode,
                                                                             const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                             GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeToUniversalReferenceIR * object = (const cPtr_storeToUniversalReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeToUniversalReferenceIR) ;
  GALGAS_string var_llvmType_831 = extensionGetter_llvmTypeName (object->mProperty_mTargetVarType, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 25)) ;
  switch (object->mProperty_mSourceValue.enumValue ()) {
  case GALGAS_objectIR::kNotBuilt:
    break ;
  case GALGAS_objectIR::kEnum_void:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode void >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 28)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_null:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)).add_operation (GALGAS_string (" null, "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 30)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_reference:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("<< ERROR @storeToUniversalReferenceIR llvmInstructionCode reference >>\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 32)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmValue:
    {
      const cEnumAssociatedValues_objectIR_llvmValue * extractPtr_1373 = (const cEnumAssociatedValues_objectIR_llvmValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_string extractedValue_llvmName = extractPtr_1373->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (extractedValue_llvmName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 34)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_literalInteger:
    {
      const cEnumAssociatedValues_objectIR_literalInteger * extractPtr_1524 = (const cEnumAssociatedValues_objectIR_literalInteger *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_bigint extractedValue_value = extractPtr_1524->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (extractedValue_value.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 36)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmStructureValue:
    {
      const cEnumAssociatedValues_objectIR_llvmStructureValue * extractPtr_2065 = (const cEnumAssociatedValues_objectIR_llvmStructureValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_sortedOperandIRList extractedValue_operands = extractPtr_2065->mAssociatedValue1 ;
      cEnumerator_sortedOperandIRList enumerator_1620 (extractedValue_operands, kENUMERATION_UP) ;
      while (enumerator_1620.hasCurrentObject ()) {
        GALGAS_string var_tempVar_1641 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 39)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 40)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_1641, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)).add_operation (enumerator_1620.current_mIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 41)) ;
        GALGAS_string var_valueType_1922 = extensionGetter_llvmTypeName (enumerator_1620.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 43)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_1922, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (extensionGetter_llvmName (enumerator_1620.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (var_valueType_1922, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (var_tempVar_1641, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 44)) ;
        enumerator_1620.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedDynamicValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue * extractPtr_3762 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedDynamicValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_3762->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_3762->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_value = extractPtr_3762->mAssociatedValue2 ;
      GALGAS_string var_indexVarName_2143 = GALGAS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 47)) ;
      GALGAS_string var_nextIndexVarName_2212 = GALGAS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 48)) ;
      GALGAS_string var_ptrVarName_2280 = GALGAS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 49)) ;
      GALGAS_string var_loopTestName_2351 = GALGAS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 50)) ;
      GALGAS_string var_startLabel_2422 = GALGAS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 51)) ;
      GALGAS_string var_loopLabel_2490 = GALGAS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 52)) ;
      GALGAS_string var_exitLabel_2557 = GALGAS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 53)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 54)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_2422, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 55)).add_operation (GALGAS_string (" ;--- Assign static array from repeated dynamic value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 55)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_2422.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 56)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_loopLabel_2490, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 57)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 57)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_2490.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 58)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_indexVarName_2143, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (GALGAS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (var_startLabel_2422, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (GALGAS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (var_nextIndexVarName_2212, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (var_loopLabel_2490, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 59)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptrVarName_2280, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (var_indexVarName_2143, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 60)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @plm.assign.").add_operation (extensionGetter_type (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).getter_plmOriginalTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (var_ptrVarName_2280, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (extensionGetter_llvmName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 62)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextIndexVarName_2212, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)).add_operation (var_indexVarName_2143, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 64)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loopTestName_2351, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GALGAS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (var_nextIndexVarName_2212, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 65)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_loopTestName_2351, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (var_loopLabel_2490, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (var_exitLabel_2557, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 66)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabel_2557.add_operation (GALGAS_string (":\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 67)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayRepeatedStaticValue:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue * extractPtr_5358 = (const cEnumAssociatedValues_objectIR_llvmArrayRepeatedStaticValue *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_PLMType extractedValue_type = extractPtr_5358->mAssociatedValue0 ;
      const GALGAS_uint extractedValue_size = extractPtr_5358->mAssociatedValue1 ;
      const GALGAS_objectIR extractedValue_value = extractPtr_5358->mAssociatedValue2 ;
      GALGAS_string var_indexVarName_3841 = GALGAS_string ("%index.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 69)) ;
      GALGAS_string var_nextIndexVarName_3910 = GALGAS_string ("%index.next.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 70)) ;
      GALGAS_string var_ptrVarName_3978 = GALGAS_string ("%element.ptr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 71)) ;
      GALGAS_string var_loopTestName_4049 = GALGAS_string ("%continue.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 72)) ;
      GALGAS_string var_startLabel_4120 = GALGAS_string ("assign.start.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 73)) ;
      GALGAS_string var_loopLabel_4188 = GALGAS_string ("assign.loop.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 74)) ;
      GALGAS_string var_exitLabel_4255 = GALGAS_string ("assign.exit.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 75)) ;
      ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 76)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_4120, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 77)).add_operation (GALGAS_string (" ;--- Assign static array from repeated static value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 77)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_4120.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 78)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_loopLabel_4188, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 79)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_4188.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 80)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_indexVarName_3841, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (GALGAS_string (" = phi i32 [0, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (var_startLabel_4120, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (GALGAS_string ("], ["), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (var_nextIndexVarName_3910, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (var_loopLabel_4188, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 81)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_ptrVarName_3978, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)).add_operation (extensionGetter_llvmTypeName (extractedValue_type, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)).add_operation (var_indexVarName_3841, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 82)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (extensionGetter_llvmName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (extensionGetter_llvmTypeName (extractedValue_value, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (var_ptrVarName_3978, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 84)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextIndexVarName_3910, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)).add_operation (var_indexVarName_3841, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 85)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loopTestName_4049, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)).add_operation (GALGAS_string (" = icmp ult i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)).add_operation (var_nextIndexVarName_3910, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)).add_operation (extractedValue_size.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 86)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_loopTestName_4049, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (var_loopLabel_4188, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (var_exitLabel_4255, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 87)) ;
      ioArgument_ioLLVMcode.plusAssign_operation(var_exitLabel_4255.add_operation (GALGAS_string (":\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 88)) ;
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayStaticValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayStaticValues * extractPtr_5965 = (const cEnumAssociatedValues_objectIR_llvmArrayStaticValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_5965->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Assign static array from static value\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 90)) ;
      cEnumerator_operandIRList enumerator_5512 (extractedValue_operands, kENUMERATION_UP) ;
      GALGAS_uint index_5492 ((uint32_t) 0) ;
      while (enumerator_5512.hasCurrentObject ()) {
        GALGAS_string var_tempVar_5541 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 92)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 93)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_5541, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (index_5492.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 94)) ;
        GALGAS_string var_valueType_5822 = extensionGetter_llvmTypeName (enumerator_5512.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 96)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_5822, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (extensionGetter_llvmName (enumerator_5512.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (var_valueType_5822, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (var_tempVar_5541, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 97)) ;
        enumerator_5512.gotoNextObject () ;
        index_5492.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 91)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_llvmArrayDynamicValues:
    {
      const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues * extractPtr_6846 = (const cEnumAssociatedValues_objectIR_llvmArrayDynamicValues *) (object->mProperty_mSourceValue.unsafePointer ()) ;
      const GALGAS_operandIRList extractedValue_operands = extractPtr_6846->mAssociatedValue1 ;
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--- Assign static array from dynamic values\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 100)) ;
      cEnumerator_operandIRList enumerator_6120 (extractedValue_operands, kENUMERATION_UP) ;
      GALGAS_uint index_6100 ((uint32_t) 0) ;
      while (enumerator_6120.hasCurrentObject ()) {
        GALGAS_string var_tempVar_6149 = GALGAS_string ("%temp.addr.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 102)) ;
        ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 103)) ;
        ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_tempVar_6149, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)).add_operation (index_6100.getter_string (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 104)) ;
        GALGAS_string var_valueType_6430 = extensionGetter_llvmTypeName (enumerator_6120.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 106)) ;
        const enumGalgasBool test_0 = extensionGetter_isStatic (enumerator_6120.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 107)).boolEnum () ;
        if (kBoolTrue == test_0) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_valueType_6430, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (extensionGetter_llvmName (enumerator_6120.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (var_valueType_6430, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (var_tempVar_6149, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 108)) ;
        }else if (kBoolFalse == test_0) {
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @plm.assign.").add_operation (extensionGetter_type (enumerator_6120.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)).getter_plmOriginalTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)).add_operation (var_valueType_6430, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (var_tempVar_6149, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (var_valueType_6430, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (extensionGetter_llvmName (enumerator_6120.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 110)) ;
        }
        enumerator_6120.gotoNextObject () ;
        index_6100.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 101)) ;
      }
    }
    break ;
  case GALGAS_objectIR::kEnum_literalString:
    {
    }
    break ;
  case GALGAS_objectIR::kEnum_zero:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (extensionGetter_llvmName (object->mProperty_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (var_llvmType_831, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (object->mProperty_mLLVMTargetVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-to-universal-reference.galgas", 116)) ;
    }
    break ;
  }
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
//                     Overriding extension method '@standaloneRoutineCallIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneRoutineCallIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallIR * object = (const cPtr_standaloneRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallIR) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 19)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_void (SOURCE_FILE ("intermediate-static-routine-call.galgas", 20)))).boolEnum () ;
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
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 42)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_1779 (object->mProperty_mArgumentList, kENUMERATION_UP) ;
  while (enumerator_1779.hasCurrentObject ()) {
    switch (enumerator_1779.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1779.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)).add_operation (extensionGetter_llvmName (enumerator_1779.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 46)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1779.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 48)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 48)).add_operation (extensionGetter_llvmName (enumerator_1779.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 48)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_1779.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)).add_operation (extensionGetter_llvmName (enumerator_1779.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 50)) ;
      }
      break ;
    }
    if (enumerator_1779.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 53)) ;
    }
    enumerator_1779.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneRoutineCallIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_standaloneRoutineCallIR.mSlotID,
                                            extensionMethod_standaloneRoutineCallIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneRoutineCallIR_llvmInstructionCode (defineExtensionMethod_standaloneRoutineCallIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@standaloneRoutineCallIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_standaloneRoutineCallIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                             GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_standaloneRoutineCallIR * object = (const cPtr_standaloneRoutineCallIR *) inObject ;
  macroValidSharedObject (object, cPtr_standaloneRoutineCallIR) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mProperty_mGlobalVariableSet.addAssign_operation (object->mProperty_mGlobalVariableName  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 65)) ;
  }
  ioArgument_ioAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (object->mProperty_mFunctionMangledName.getter_string (HERE)  COMMA_SOURCE_FILE ("intermediate-static-routine-call.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_standaloneRoutineCallIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_standaloneRoutineCallIR.mSlotID,
                                                extensionMethod_standaloneRoutineCallIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_standaloneRoutineCallIR_enterAccessibleEntities (defineExtensionMethod_standaloneRoutineCallIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mResult.objectCompare (GALGAS_objectIR::constructor_void (SOURCE_FILE ("intermediate-indirect-routine-call.galgas", 25)))).boolEnum () ;
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
//                            Overriding extension method '@releaseIR llvmInstructionCode'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_releaseIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                           GALGAS_string & ioArgument_ioLLVMcode,
                                                           const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                           GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_releaseIR * object = (const cPtr_releaseIR *) inObject ;
  macroValidSharedObject (object, cPtr_releaseIR) ;
  extensionMethod_generateRelease (object->mProperty_mType, object->mProperty_mPLMName.getter_string (SOURCE_FILE ("intermediate-release.galgas", 20)), ioArgument_ioLLVMcode, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-release.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_releaseIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_releaseIR.mSlotID,
                                            extensionMethod_releaseIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_releaseIR_llvmInstructionCode (defineExtensionMethod_releaseIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@releaseIR enterAccessibleEntities'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_releaseIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                               GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                               GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_releaseIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_releaseIR.mSlotID,
                                                extensionMethod_releaseIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_releaseIR_enterAccessibleEntities (defineExtensionMethod_releaseIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_2542 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 61)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @plm.assign.").add_operation (object->mProperty_mType.getter_plmOriginalTypeName (HERE).getter_assemblerRepresentation (SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)).add_operation (var_llvmType_2542, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (object->mProperty_mTargetLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (var_llvmType_2542, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string ("* "), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (object->mProperty_mSourceLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-copy-from-references.galgas", 62)) ;
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
  GALGAS_string var_llvmType_959 = extensionGetter_llvmTypeName (object->mProperty_mType, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (object->mProperty_mElementLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 30)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_959.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (var_llvmType_959, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)).add_operation (object->mProperty_mPropertyIndex.getter_string (SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (object->mProperty_mPropertyName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-property-reference.galgas", 32)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_964.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (var_llvmType_964, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (object->mProperty_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (", i32 0, "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mIndexIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (extensionGetter_llvmName (object->mProperty_mIndexIR, inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-universal-array-element-reference.galgas", 31)) ;
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
  GALGAS_string var_llvmType_786 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mProperty_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_786.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (var_llvmType_786, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (", i32 0, "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (extensionGetter_llvmTypeName (object->mProperty_mElement, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)).add_operation (extensionGetter_llvmName (object->mProperty_mElement, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; Element of index ").add_operation (extensionGetter_llvmName (object->mProperty_mElement, inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-array-element-reference.galgas", 28)) ;
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
  GALGAS_uint var_staticStringIndex_1066 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, object->mProperty_mErrorLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)), var_staticStringIndex_1066, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  }
  GALGAS_bigint var_max_1117 ;
  GALGAS_bool var_isUnsigned_1142 ;
  GALGAS_bigint joker_1102_1 ; // Joker input parameter
  GALGAS_uint joker_1144_1 ; // Joker input parameter
  extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).getter_kind (HERE).method_integer (joker_1102_1, var_max_1117, var_isUnsigned_1142, joker_1144_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
  const enumGalgasBool test_0 = var_isUnsigned_1142.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 34)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_testToZero_1231 = GALGAS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
    GALGAS_string var_testToZeroOk_1306 = GALGAS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
    GALGAS_string var_testToZeroFailure_1388 = GALGAS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 37)) ;
    ioArgument_ioGenerationAdds.mProperty_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToZero_1231, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToZero_1231, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroOk_1306, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroFailure_1388, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroFailure_1388.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_1066.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 46)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroOk_1306.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_max_1117.objectCompare (object->mProperty_mSize)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_testToSize_2267 = GALGAS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
    GALGAS_string var_testToSizeOk_2342 = GALGAS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
    GALGAS_string var_testToSizeFailure_2424 = GALGAS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.getter_mUniqueIndex (HERE).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToSize_2267, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)) ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = var_isUnsigned_1142.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("ult") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("slt") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_2, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (extensionGetter_llvmName (object->mProperty_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (object->mProperty_mSize.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToSize_2267, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeOk_2342, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeFailure_2424, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeFailure_2424.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_1066.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (object->mProperty_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 64)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeOk_2342.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)) ;
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
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mProperty_mStaticEntityMap, object->mProperty_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_lastPathComponent (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)), var_staticStringIndex_983, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 27)) ;
  }
  GALGAS_string var_llvmType_1002 = extensionGetter_llvmTypeName (extensionGetter_type (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)) ;
  GALGAS_string var_llvmSourceName_1055 = extensionGetter_llvmName (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 32)) ;
  GALGAS_string var_llvmLabelName_1096 = extensionGetter_name (object->mProperty_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (".isOk = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmType_1002, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (object->mProperty_mUpperBoundPlusOne.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".isOk, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmLabelName_1096.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise.panic.").add_operation (var_staticStringIndex_983.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicLineLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (object->mProperty_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (constinArgument_inGenerationContext.getter_mPanicCodeLLVMType (HERE), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (object->mProperty_mPanicCode.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)) ;
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
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mStaticEntityMap (HERE).getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 49)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)).add_operation (GALGAS_string (" static strings\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 49)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGlobalConstantMap (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 50)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)).add_operation (GALGAS_string (" global constants\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 50)) ;
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 51)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)).add_operation (GALGAS_string (" routine(s)\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 51)) ;
          cEnumerator_routineMapIR enumerator_2831 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE), kENUMERATION_UP) ;
          while (enumerator_2831.hasCurrentObject ()) {
            var_s_2450.plusAssign_operation(GALGAS_string ("   - ").add_operation (enumerator_2831.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("code-optimisation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 53)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 53)) ;
            enumerator_2831.gotoNextObject () ;
          }
          var_s_2450.plusAssign_operation(GALGAS_string ("  ").add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 55)).getter_string (SOURCE_FILE ("code-optimisation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 55)).add_operation (GALGAS_string (" guards\n"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 55)) ;
          inCompiler->printMessage (var_s_2450  COMMA_SOURCE_FILE ("code-optimisation.galgas", 56)) ;
        }
        GALGAS_accessibleEntities var_accessibleEntities_3195 ;
        {
        routine_suppressInaccessibleSubprograms (ioArgument_ioIntermediateCodeStruct, var_accessibleEntities_3195, var_optimizing_2173, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 59)) ;
        }
        GALGAS_globalConstantMapIR var_globalConstantMap_3303 = GALGAS_globalConstantMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 65)) ;
        cEnumerator_globalConstantMapIR enumerator_3372 (ioArgument_ioIntermediateCodeStruct.getter_mGlobalConstantMap (HERE), kENUMERATION_UP) ;
        while (enumerator_3372.hasCurrentObject ()) {
          const enumGalgasBool test_1 = var_accessibleEntities_3195.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_3372.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 67)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            var_globalConstantMap_3303.setter_insertKey (enumerator_3372.current (HERE).getter_lkey (HERE), enumerator_3372.current (HERE).getter_mType (HERE), enumerator_3372.current (HERE).getter_mSourceExpression (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 68)) ;
            }
          }else if (kBoolFalse == test_1) {
            var_optimizing_2173 = GALGAS_bool (true) ;
          }
          enumerator_3372.gotoNextObject () ;
        }
        ioArgument_ioIntermediateCodeStruct.mProperty_mGlobalConstantMap = var_globalConstantMap_3303 ;
      }
    }
  }
  cEnumerator_routineMapIR enumerator_3747 (var_initialProcedureMap_2035, kENUMERATION_UP) ;
  while (enumerator_3747.hasCurrentObject ()) {
    GALGAS_bool test_2 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_hasKey (enumerator_3747.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 77)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 77)) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = enumerator_3747.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_3 = test_2.boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticWarning (enumerator_3747.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 78)), GALGAS_string ("unused procedure; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 78)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 78)), fixItArray4  COMMA_SOURCE_FILE ("code-optimisation.galgas", 78)) ;
    }
    enumerator_3747.gotoNextObject () ;
  }
  cEnumerator_guardMapIR enumerator_4031 (var_initialGuardMap_2098, kENUMERATION_UP) ;
  while (enumerator_4031.hasCurrentObject ()) {
    GALGAS_bool test_5 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_hasKey (enumerator_4031.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 83)).operator_not (SOURCE_FILE ("code-optimisation.galgas", 83)) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = enumerator_4031.current_mWarnIfUnused (HERE) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (enumerator_4031.current_lkey (HERE).getter_location (SOURCE_FILE ("code-optimisation.galgas", 84)), GALGAS_string ("unused guard; use @").add_operation (function_noUnusedWarningAttribute (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 84)).add_operation (GALGAS_string (" attribute for removing this warning"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 84)), fixItArray7  COMMA_SOURCE_FILE ("code-optimisation.galgas", 84)) ;
    }
    enumerator_4031.gotoNextObject () ;
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
  outArgument_outAccessibleEntities = GALGAS_accessibleEntities::constructor_default (SOURCE_FILE ("code-optimisation.galgas", 96)) ;
  GALGAS_routineMapIR var_accessibleProcedureMap_4639 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 97)) ;
  GALGAS_routineMapIR var_nonExploredProcedureMap_4684 = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 98)) ;
  GALGAS_guardMapIR var_accessibleGuardMap_4722 = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 99)) ;
  GALGAS_guardMapIR var_nonExploredGuardMap_4761 = ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE) ;
  cEnumerator_routineMapIR enumerator_4890 (ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_4890.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_4890.current (HERE).getter_mIsRequired (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_accessibleProcedureMap_4639.setter_insertKey (enumerator_4890.current (HERE).getter_lkey (HERE), enumerator_4890.current (HERE).getter_mReceiverType (HERE), enumerator_4890.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_4890.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_4890.current (HERE).getter_mAllocaList (HERE), enumerator_4890.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_4890.current (HERE).getter_mIsRequired (HERE), enumerator_4890.current (HERE).getter_mWarnIfUnused (HERE), enumerator_4890.current (HERE).getter_mGlobal (HERE), enumerator_4890.current (HERE).getter_mKind (HERE), enumerator_4890.current (HERE).getter_mReturnType (HERE), enumerator_4890.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 104)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_4890.current (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 118)) ;
      outArgument_outAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (enumerator_4890.current (HERE).getter_mRoutineNameForGeneration (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("code-optimisation.galgas", 119)) ;
    }else if (kBoolFalse == test_0) {
      {
      var_nonExploredProcedureMap_4684.setter_insertKey (enumerator_4890.current (HERE).getter_lkey (HERE), enumerator_4890.current (HERE).getter_mReceiverType (HERE), enumerator_4890.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_4890.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_4890.current (HERE).getter_mAllocaList (HERE), enumerator_4890.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_4890.current (HERE).getter_mIsRequired (HERE), enumerator_4890.current (HERE).getter_mWarnIfUnused (HERE), enumerator_4890.current (HERE).getter_mGlobal (HERE), enumerator_4890.current (HERE).getter_mKind (HERE), enumerator_4890.current (HERE).getter_mReturnType (HERE), enumerator_4890.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 121)) ;
      }
    }
    enumerator_4890.gotoNextObject () ;
  }
  cEnumerator_bootListIR enumerator_6236 (ioArgument_ioIntermediateCodeStruct.getter_mBootList (HERE), kENUMERATION_UP) ;
  while (enumerator_6236.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_6236.current (HERE).getter_mInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 139)) ;
    enumerator_6236.gotoNextObject () ;
  }
  cEnumerator_initListIR enumerator_6443 (ioArgument_ioIntermediateCodeStruct.getter_mInitList (HERE), kENUMERATION_UP) ;
  while (enumerator_6443.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_6443.current (HERE).getter_mInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 145)) ;
    enumerator_6443.gotoNextObject () ;
  }
  cEnumerator_taskMapIR enumerator_6679 (ioArgument_ioIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_6679.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_6679.current (HERE).getter_mInitInstructionListIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 152)) ;
    GALGAS_string var_loopName_6852 = function_llvmTypeNameFromPLMname (enumerator_6679.current (HERE).getter_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 156)).getter_string (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 156)).add_operation (function_llvmNameForTaskLoopFunction (inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 156)).add_operation (GALGAS_string ("()"), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 156)) ;
    outArgument_outAccessibleEntities.mProperty_mRoutineSet.addAssign_operation (var_loopName_6852  COMMA_SOURCE_FILE ("code-optimisation.galgas", 157)) ;
    enumerator_6679.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-optimisation.galgas", 160)).boolEnum () ;
  if (kBoolTrue == test_1) {
    cEnumerator_instructionListSortedListIR enumerator_7193 (ioArgument_ioIntermediateCodeStruct.getter_mPanicSetupInstructionListIR (HERE), kENUMERATION_UP) ;
    while (enumerator_7193.hasCurrentObject ()) {
      extensionMethod_enterAccessibleEntities (enumerator_7193.current_mInstructionList (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 162)) ;
      enumerator_7193.gotoNextObject () ;
    }
    cEnumerator_instructionListSortedListIR enumerator_7437 (ioArgument_ioIntermediateCodeStruct.getter_mPanicLoopInstructionListIR (HERE), kENUMERATION_UP) ;
    while (enumerator_7437.hasCurrentObject ()) {
      extensionMethod_enterAccessibleEntities (enumerator_7437.current_mInstructionList (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 168)) ;
      enumerator_7437.gotoNextObject () ;
    }
  }
  extensionMethod_enterAccessibleEntities (ioArgument_ioIntermediateCodeStruct.getter_mInterruptMapIR (HERE), outArgument_outAccessibleEntities, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 175)) ;
  GALGAS_bool var_continues_7815 = GALGAS_bool (true) ;
  GALGAS_uint var_bound_7834 = ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 181)).add_operation (ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).getter_count (SOURCE_FILE ("code-optimisation.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 181)) ;
  if (var_bound_7834.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 182)).isValid ()) {
    uint32_t variant_7937 = var_bound_7834.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 182)).uintValue () ;
    bool loop_7937 = true ;
    while (loop_7937) {
      loop_7937 = var_continues_7815.isValid () ;
      if (loop_7937) {
        loop_7937 = var_continues_7815.boolValue () ;
      }
      if (loop_7937 && (0 == variant_7937)) {
        loop_7937 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("code-optimisation.galgas", 182)) ;
      }
      if (loop_7937) {
        variant_7937 -- ;
        var_continues_7815 = GALGAS_bool (false) ;
        {
        routine_exploreProcs (var_accessibleProcedureMap_4639, outArgument_outAccessibleEntities, var_nonExploredProcedureMap_4684, var_continues_7815, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 184)) ;
        }
        {
        routine_exploreGuards (var_accessibleGuardMap_4722, outArgument_outAccessibleEntities, var_nonExploredGuardMap_4761, var_continues_7815, ioArgument_ioIntermediateCodeStruct.mProperty_mMaxBranchOfOnInstructions, inCompiler  COMMA_SOURCE_FILE ("code-optimisation.galgas", 191)) ;
        }
      }
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.getter_mRoutineMapIR (HERE).objectCompare (var_accessibleProcedureMap_4639)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mRoutineMapIR = var_accessibleProcedureMap_4639 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, ioArgument_ioIntermediateCodeStruct.getter_mGuardMapIR (HERE).objectCompare (var_accessibleGuardMap_4722)).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mGuardMapIR = var_accessibleGuardMap_4722 ;
    ioArgument_ioOptimizing = GALGAS_bool (true) ;
  }
  GALGAS_staticListInvokedFunctionSetMap var_currentStaticArrayMap_8792 = GALGAS_staticListInvokedFunctionSetMap::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 208)) ;
  cEnumerator_staticListInvokedFunctionSetMap enumerator_8886 (ioArgument_ioIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE), kENUMERATION_UP) ;
  while (enumerator_8886.hasCurrentObject ()) {
    const enumGalgasBool test_4 = outArgument_outAccessibleEntities.getter_mGlobalVariableSet (HERE).getter_hasKey (enumerator_8886.current_lkey (HERE).getter_string (SOURCE_FILE ("code-optimisation.galgas", 210)) COMMA_SOURCE_FILE ("code-optimisation.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      var_currentStaticArrayMap_8792.setter_insertKey (enumerator_8886.current_lkey (HERE), enumerator_8886.current_mInvokedFunctionSet (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 211)) ;
      }
    }
    enumerator_8886.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_currentStaticArrayMap_8792.objectCompare (ioArgument_ioIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioIntermediateCodeStruct.mProperty_mStaticArrayMapForIntermediate = var_currentStaticArrayMap_8792 ;
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
  GALGAS_routineMapIR var_exNonExploredProcedureMap_9657 = ioArgument_ioNonExploredProcedureMap ;
  ioArgument_ioNonExploredProcedureMap = GALGAS_routineMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 230)) ;
  cEnumerator_routineMapIR enumerator_9763 (var_exNonExploredProcedureMap_9657, kENUMERATION_UP) ;
  while (enumerator_9763.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.getter_mRoutineSet (HERE).getter_hasKey (enumerator_9763.current (HERE).getter_mRoutineNameForGeneration (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 232)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleProcedureMap.setter_insertKey (enumerator_9763.current (HERE).getter_lkey (HERE), enumerator_9763.current (HERE).getter_mReceiverType (HERE), enumerator_9763.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_9763.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_9763.current (HERE).getter_mAllocaList (HERE), enumerator_9763.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_9763.current (HERE).getter_mIsRequired (HERE), enumerator_9763.current (HERE).getter_mWarnIfUnused (HERE), enumerator_9763.current (HERE).getter_mGlobal (HERE), enumerator_9763.current (HERE).getter_mKind (HERE), enumerator_9763.current (HERE).getter_mReturnType (HERE), enumerator_9763.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 233)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_9763.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 247)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredProcedureMap.setter_insertKey (enumerator_9763.current (HERE).getter_lkey (HERE), enumerator_9763.current (HERE).getter_mReceiverType (HERE), enumerator_9763.current (HERE).getter_mRoutineNameForGeneration (HERE), enumerator_9763.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_9763.current (HERE).getter_mAllocaList (HERE), enumerator_9763.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_9763.current (HERE).getter_mIsRequired (HERE), enumerator_9763.current (HERE).getter_mWarnIfUnused (HERE), enumerator_9763.current (HERE).getter_mGlobal (HERE), enumerator_9763.current (HERE).getter_mKind (HERE), enumerator_9763.current (HERE).getter_mReturnType (HERE), enumerator_9763.current (HERE).getter_mAppendFileAndLineArgumentForPanicLocation (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 250)) ;
      }
    }
    enumerator_9763.gotoNextObject () ;
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
  GALGAS_guardMapIR var_exNonExploredGuardMap_11407 = ioArgument_ioNonExploredGuardMap ;
  ioArgument_ioNonExploredGuardMap = GALGAS_guardMapIR::constructor_emptyMap (SOURCE_FILE ("code-optimisation.galgas", 278)) ;
  cEnumerator_guardMapIR enumerator_11497 (var_exNonExploredGuardMap_11407, kENUMERATION_UP) ;
  while (enumerator_11497.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioAccessibleEntities.getter_mGuardSet (HERE).getter_hasKey (enumerator_11497.current (HERE).getter_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-optimisation.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioAccessibleGuardMap.setter_insertKey (enumerator_11497.current (HERE).getter_lkey (HERE), enumerator_11497.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_11497.current (HERE).getter_mReceiverType (HERE), enumerator_11497.current (HERE).getter_mGuardKindGenerationIR (HERE), enumerator_11497.current (HERE).getter_mAllocaList (HERE), enumerator_11497.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_11497.current (HERE).getter_mWarnIfUnused (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 281)) ;
      }
      extensionMethod_enterAccessibleEntities (enumerator_11497.current (HERE), ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 290)) ;
      ioArgument_ioContinueExploreRoutines = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioNonExploredGuardMap.setter_insertKey (enumerator_11497.current (HERE).getter_lkey (HERE), enumerator_11497.current (HERE).getter_mFormalArgumentListForGeneration (HERE), enumerator_11497.current (HERE).getter_mReceiverType (HERE), enumerator_11497.current (HERE).getter_mGuardKindGenerationIR (HERE), enumerator_11497.current (HERE).getter_mAllocaList (HERE), enumerator_11497.current (HERE).getter_mInstructionGenerationList (HERE), enumerator_11497.current (HERE).getter_mWarnIfUnused (HERE), inCompiler COMMA_SOURCE_FILE ("code-optimisation.galgas", 293)) ;
      }
    }
    enumerator_11497.gotoNextObject () ;
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
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 62)) ;
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
  result_outTitle = function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 68)) ;
  result_outTitle.plusAssign_operation(GALGAS_string (";    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 69)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 69)) ;
  result_outTitle.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 70)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 70)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("---------------------------------------------*\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 77)) ;
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
  result_outTitle = function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 83)) ;
  result_outTitle.plusAssign_operation(GALGAS_string ("@    ").add_operation (constinArgument_inTitle.getter_stringByRightPadding (GALGAS_uint ((uint32_t) 114U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("code-generation.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 84)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 84)) ;
  result_outTitle.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 85)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 85)) ;
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
                             const GALGAS_globalVariableIRList constinArgument_inGlobalVariableIRList,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_homeDir_4939 = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("code-generation.galgas", 105)).add_operation (GALGAS_string ("/plm-products/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 105)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("no-panic") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string var_productDirectory_5054 = var_homeDir_4939.add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 107)).add_operation (constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.galgas", 109)).getter_stringByReplacingStringByString (GALGAS_string ("/"), GALGAS_string ("+"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 108)) ;
  GALGAS_string var_sourceDirectory_5267 = var_productDirectory_5054.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 110)) ;
  var_sourceDirectory_5267.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 111)) ;
  {
  routine_generateTarget (constinArgument_inCurrentDirectory, var_productDirectory_5054, constinArgument_inTargetName, constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 113)) ;
  }
  {
  routine_generateCodeFiles (constinArgument_inCurrentDirectory, var_productDirectory_5054, constinArgument_inEndOfSourceFileLocation, constinArgument_inIntermediateCodeStruct, constinArgument_inTypeMap, constinArgument_inTargetName, constinArgument_inPanicCodeType, constinArgument_inPanicLineType, constinArgument_inAvailableInterruptMap, constinArgument_inStaticListValueMap, constinArgument_inSourceFileAbsolutePathSet, constinArgument_inTargetParameters, constinArgument_inGlobalVariableIRList, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 120)) ;
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
                                const GALGAS_globalVariableIRList constinArgument_inGlobalVariableIRList,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationAdds var_generationAdds_7371 = GALGAS_generationAdds::constructor_default (SOURCE_FILE ("code-generation.galgas", 164)) ;
  var_generationAdds_7371.mProperty_mStaticEntityMap = constinArgument_inIntermediateCodeStruct.getter_mStaticEntityMap (HERE) ;
  GALGAS_generationContext var_generationContext_7503 = GALGAS_generationContext::constructor_new (constinArgument_inPanicCodeType.getter_type (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 167)), constinArgument_inPanicLineType.getter_type (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 168)), constinArgument_inTargetParameters.getter_mNopInstructionStringInLLVM (HERE).getter_string (HERE), constinArgument_inIntermediateCodeStruct.getter_mGlobalTaskVariableList (HERE), constinArgument_inAvailableInterruptMap  COMMA_SOURCE_FILE ("code-generation.galgas", 166)) ;
  GALGAS_string var_sourceDirectory_7736 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 173)) ;
  const enumGalgasBool test_0 = constinArgument_inTargetParameters.getter_mHandleDynamicArray (HERE).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @arc.retain (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 176)) ;
    var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @arc.release (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
    var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("%ptrtype @arc.insulate (%ptrtype %inPtr)")  COMMA_SOURCE_FILE ("code-generation.galgas", 178)) ;
    GALGAS_string var_insertFunction_8196 = GALGAS_string ("%ptrtype @arc.insert.at.index ").add_operation (GALGAS_string ("(%ptrtype %inPointer, i32 %inIndex, i32 %inElementSize, %ptrtype* %outElementPtr)"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 179)) ;
    var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (var_insertFunction_8196  COMMA_SOURCE_FILE ("code-generation.galgas", 181)) ;
    var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i32 @arc.length (%ptrtype %inPointer)")  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
  }
  GALGAS_string var_asCode_8595 = function_asTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 185)) ;
  GALGAS_string var_asFileContents_8659 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_8727 (constinArgument_inTargetParameters.getter_m_5F_S_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_8727.hasCurrentObject ()) {
    var_asFileContents_8659.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 190)).add_operation (enumerator_8727.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 188)) ;
    enumerator_8727.gotoNextObject () ;
  }
  GALGAS_string var_x_8882 = var_asFileContents_8659.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 193)) ;
  var_asCode_8595.plusAssign_operation(var_x_8882.getter_stringByReplacingStringByString (GALGAS_string ("!ISR!"), function_llvmNameForSectionInterrupt (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 194)) ;
  var_asCode_8595.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 195)) ;
  GALGAS_string var_llvmCode_9165 = function_llvmTitleComment (GALGAS_string ("Target specific code"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 197)) ;
  GALGAS_string var_targetLLVMcode_9231 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_9300 (constinArgument_inTargetParameters.getter_m_5F_LL_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_9300.hasCurrentObject ()) {
    var_targetLLVMcode_9231.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)).add_operation (enumerator_9300.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 200)) ;
    enumerator_9300.gotoNextObject () ;
  }
  var_llvmCode_9165.plusAssign_operation(var_targetLLVMcode_9231.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 205)) ;
  var_llvmCode_9165.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 206)) ;
  {
  routine_declareLLVMTypes (constinArgument_inTypeMap, var_llvmCode_9165, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 208)) ;
  }
  var_llvmCode_9165.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global variables"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 210)) ;
  cEnumerator_globalVariableIRList enumerator_9848 (constinArgument_inGlobalVariableIRList, kENUMERATION_UP) ;
  while (enumerator_9848.hasCurrentObject ()) {
    var_llvmCode_9165.plusAssign_operation(enumerator_9848.current_mLLVMVariable (HERE).add_operation (GALGAS_string (" = internal global "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)).add_operation (extensionGetter_llvmTypeName (enumerator_9848.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 212)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)).add_operation (extensionGetter_llvmValue (enumerator_9848.current_mExpression (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)).add_operation (GALGAS_string (", align "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 213)).add_operation (enumerator_9848.current_mAlignment (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 212)) ;
    enumerator_9848.gotoNextObject () ;
  }
  var_llvmCode_9165.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
  cEnumerator_driverListIR enumerator_10146 (constinArgument_inIntermediateCodeStruct.getter_mDriverList (HERE), kENUMERATION_UP) ;
  const bool bool_1 = true ;
  if (enumerator_10146.hasCurrentObject () && bool_1) {
    var_llvmCode_9165.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Drivers"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 219)) ;
    while (enumerator_10146.hasCurrentObject () && bool_1) {
      extensionMethod_generateLLVM (enumerator_10146.current (HERE), var_llvmCode_9165, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
      enumerator_10146.gotoNextObject () ;
    }
    var_llvmCode_9165.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 221)) ;
  }
  cEnumerator_globalSyncInstanceMapIR enumerator_10413 (constinArgument_inIntermediateCodeStruct.getter_mGlobalSyncInstanceMap (HERE), kENUMERATION_UP) ;
  const bool bool_2 = true ;
  if (enumerator_10413.hasCurrentObject () && bool_2) {
    var_llvmCode_9165.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global synchronization tool instances"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 225)) ;
    while (enumerator_10413.hasCurrentObject () && bool_2) {
      extensionMethod_generateLLVM (enumerator_10413.current (HERE), var_llvmCode_9165, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 226)) ;
      enumerator_10413.gotoNextObject () ;
    }
    var_llvmCode_9165.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 227)) ;
  }
  extensionMethod_generateLLVMForStaticLists (constinArgument_inStaticListValueMap, constinArgument_inIntermediateCodeStruct.getter_mStaticArrayMapForIntermediate (HERE), var_llvmCode_9165, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 230)) ;
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.getter_mBootList (HERE), var_llvmCode_9165, var_generationContext_7503, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 232)) ;
  cEnumerator_generationListIR enumerator_11056 (constinArgument_inIntermediateCodeStruct.getter_mGenerationListIR (HERE), kENUMERATION_UP) ;
  while (enumerator_11056.hasCurrentObject ()) {
    callExtensionMethod_generateLLVMcode ((const cPtr_abstractGenerationIR *) enumerator_11056.current_mGeneration (HERE).ptr (), var_llvmCode_9165, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 235)) ;
    enumerator_11056.gotoNextObject () ;
  }
  extensionMethod_generateLLVMinitCode (constinArgument_inIntermediateCodeStruct.getter_mInitList (HERE), var_llvmCode_9165, constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_generationContext_7503, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 238)) ;
  extensionMethod_llvmCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_llvmCode_9165, var_asCode_8595, var_generationContext_7503, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 245)) ;
  GALGAS_string var_undefinedInterruptString_11596 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 249)).add_operation (constinArgument_inTargetParameters.getter_mUndefinedInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 247)) ;
  GALGAS_string var_XTRInterruptHandlerString_11773 = function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 253)).add_operation (constinArgument_inTargetParameters.getter_mXtrInterruptHandler (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 251)) ;
  extensionMethod_interruptCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), var_llvmCode_9165, var_asCode_8595, var_undefinedInterruptString_11596, var_XTRInterruptHandlerString_11773, var_generationContext_7503, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 255)) ;
  extensionMethod_llvmPrototypeGeneration (constinArgument_inIntermediateCodeStruct.getter_mExternProcedureMapIR (HERE), var_llvmCode_9165, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 264)) ;
  GALGAS_primitiveAndServiceIRlist var_primitiveAndServiceList_12317 = GALGAS_primitiveAndServiceIRlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 265)) ;
  const enumGalgasBool test_3 = var_generationAdds_7371.getter_mUsesGuards (HERE).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_string var_waitForGuardChange_12442 = function_waitForGuardChangeFunctionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 268)) ;
    var_primitiveAndServiceList_12317.addAssign_operation (function_llvmNameForServiceCall (var_waitForGuardChange_12442, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 270)), function_llvmNameForServiceImplementation (var_waitForGuardChange_12442, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 271)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("code-generation.galgas", 269)) ;
    var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("i1 @").add_operation (function_llvmNameForServiceCall (var_waitForGuardChange_12442, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 274)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 274))  COMMA_SOURCE_FILE ("code-generation.galgas", 273)) ;
  }
  GALGAS_sectionIRlist var_sectionIRlist_12872 = GALGAS_sectionIRlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 277)) ;
  extensionMethod_svcDeclarationGeneration (constinArgument_inIntermediateCodeStruct.getter_mRoutineMapIR (HERE), var_primitiveAndServiceList_12317, var_sectionIRlist_12872, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 278)) ;
  extensionMethod_guardCodeGeneration (constinArgument_inIntermediateCodeStruct.getter_mGuardMapIR (HERE), var_llvmCode_9165, var_sectionIRlist_12872, var_generationContext_7503, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 284)) ;
  extensionMethod_generateCode (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), var_llvmCode_9165, var_generationContext_7503, var_generationAdds_7371, var_primitiveAndServiceList_12317, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 291)) ;
  {
  routine_generatePrimitiveAndServiceDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), var_asCode_8595, var_primitiveAndServiceList_12317, constinArgument_inTargetParameters, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 298)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 306)).boolEnum () ;
  if (kBoolTrue == test_4) {
    var_sectionIRlist_12872.addAssign_operation (function_llvmNameForSectionCall (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 308)), function_llvmNameForSectionImplementation (function_panicRoutineName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 309)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("code-generation.galgas", 307)) ;
    {
    routine_generatePanicCode (var_llvmCode_9165, constinArgument_inSourceFileAbsolutePathSet, var_generationContext_7503, var_generationAdds_7371, constinArgument_inIntermediateCodeStruct.getter_mPanicSetupInstructionListIR (HERE), constinArgument_inIntermediateCodeStruct.getter_mPanicLoopInstructionListIR (HERE), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 311)) ;
    }
  }
  const enumGalgasBool test_5 = var_generationAdds_7371.getter_mNeedsDynamicMemoryAllocation (HERE).boolEnum () ;
  if (kBoolTrue == test_5) {
    var_sectionIRlist_12872.addAssign_operation (function_llvmNameForSectionCall (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 323)), function_llvmNameForSectionImplementation (function_memoryAllocSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 324)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("code-generation.galgas", 322)) ;
    var_sectionIRlist_12872.addAssign_operation (function_llvmNameForSectionCall (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 327)), function_llvmNameForSectionImplementation (function_memoryFreeSectionName (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 328)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("code-generation.galgas", 326)) ;
  }
  {
  routine_generateSectionDispatcher (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE), constinArgument_inTargetParameters, var_asCode_8595, var_sectionIRlist_12872, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 331)) ;
  }
  GALGAS_lstringlist var_keyList_14997 = constinArgument_inTypeMap.getter_allKeyList (SOURCE_FILE ("code-generation.galgas", 339)) ;
  cEnumerator_lstringlist enumerator_15045 (var_keyList_14997, kENUMERATION_UP) ;
  while (enumerator_15045.hasCurrentObject ()) {
    GALGAS_PLMType var_type_15098 ;
    GALGAS_uint joker_15106 ; // Joker input parameter
    constinArgument_inTypeMap.method_searchKey (enumerator_15045.current_mValue (HERE), var_type_15098, joker_15106, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 341)) ;
    extensionMethod_generateCopyRoutine (var_type_15098, var_llvmCode_9165, var_generationAdds_7371, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 342)) ;
    enumerator_15045.gotoNextObject () ;
  }
  var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @copy.byte.array (i8* %dest, i8* %src, i32 %byteCount)")  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
  var_generationAdds_7371.mProperty_mExternFunctionDeclarationSet.addAssign_operation (GALGAS_string ("void @copy.word.array (i32* %dest, i32* %src, i32 %wordCount)")  COMMA_SOURCE_FILE ("code-generation.galgas", 346)) ;
  var_llvmCode_9165.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("LLVM extern functions"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 347)) ;
  cEnumerator_stringset enumerator_15588 (var_generationAdds_7371.getter_mExternFunctionDeclarationSet (HERE), kENUMERATION_UP) ;
  while (enumerator_15588.hasCurrentObject ()) {
    var_llvmCode_9165.plusAssign_operation(GALGAS_string ("declare ").add_operation (enumerator_15588.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 349)) ;
    enumerator_15588.gotoNextObject () ;
  }
  var_llvmCode_9165.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 351)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_generationAdds_7371.getter_mStaticEntityMap (HERE).getter_mStaticStringMap (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 353)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    var_llvmCode_9165.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Static strings"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 354)) ;
    cEnumerator_staticStringMap enumerator_15899 (var_generationAdds_7371.getter_mStaticEntityMap (HERE).getter_mStaticStringMap (HERE), kENUMERATION_UP) ;
    while (enumerator_15899.hasCurrentObject ()) {
      GALGAS_string var_lgStr_15918 = enumerator_15899.current_lkey (HERE).getter_string (HERE).getter_utf_38_Length (SOURCE_FILE ("code-generation.galgas", 356)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 356)).getter_string (SOURCE_FILE ("code-generation.galgas", 356)) ;
      var_llvmCode_9165.plusAssign_operation(function_literalCharacterArrayName (enumerator_15899.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 357)).add_operation (GALGAS_string (" = private unnamed_addr constant ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 357)) ;
      var_llvmCode_9165.plusAssign_operation(var_lgStr_15918.add_operation (GALGAS_string (" x i8] c\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)).add_operation (enumerator_15899.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)).add_operation (GALGAS_string ("\\00\", align 1\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 358)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 358)) ;
      var_llvmCode_9165.plusAssign_operation(function_literalStringName (enumerator_15899.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 359)).add_operation (GALGAS_string (" = private constant i8* getelementptr inbounds (["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 359)) ;
      var_llvmCode_9165.plusAssign_operation(var_lgStr_15918.add_operation (GALGAS_string (" x i8], ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)).add_operation (var_lgStr_15918, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)).add_operation (GALGAS_string (" x i8]* "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 360)) ;
      var_llvmCode_9165.plusAssign_operation(function_literalCharacterArrayName (enumerator_15899.current_mIndex (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)).add_operation (GALGAS_string (", i32 0, i32 0), align 4\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 361)) ;
      enumerator_15899.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_generationAdds_7371.getter_mStaticEntityMap (HERE).getter_mGlobalStructuredConstantList (HERE).getter_length (SOURCE_FILE ("code-generation.galgas", 365)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    var_llvmCode_9165.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("Global structured constants"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 366)) ;
    cEnumerator_globalStructuredConstantList enumerator_16684 (var_generationAdds_7371.getter_mStaticEntityMap (HERE).getter_mGlobalStructuredConstantList (HERE), kENUMERATION_UP) ;
    GALGAS_uint index_16616 ((uint32_t) 0) ;
    while (enumerator_16684.hasCurrentObject ()) {
      var_llvmCode_9165.plusAssign_operation(GALGAS_string ("@gconst.").add_operation (index_16616.getter_string (SOURCE_FILE ("code-generation.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)).add_operation (GALGAS_string (" = private unnamed_addr constant "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)).add_operation (extensionGetter_llvmTypeName (enumerator_16684.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 368)) ;
      var_llvmCode_9165.plusAssign_operation(GALGAS_string (" ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 369)) ;
      cEnumerator_operandIRList enumerator_16843 (enumerator_16684.current_mOperandIRList (HERE), kENUMERATION_UP) ;
      while (enumerator_16843.hasCurrentObject ()) {
        var_llvmCode_9165.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_16843.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 371)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 371)).add_operation (extensionGetter_llvmName (enumerator_16843.current_mOperand (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 371)) ;
        if (enumerator_16843.hasNextObject ()) {
          var_llvmCode_9165.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 372)) ;
        }
        enumerator_16843.gotoNextObject () ;
      }
      var_llvmCode_9165.plusAssign_operation(GALGAS_string ("]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 374)) ;
      enumerator_16684.gotoNextObject () ;
      index_16616.increment_operation (inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 367)) ;
    }
    var_llvmCode_9165.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 376)) ;
  }
  var_llvmCode_9165.plusAssign_operation(function_llvmSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 379)) ;
  GALGAS_bool joker_17190 ; // Joker input parameter
  var_llvmCode_9165.method_writeToFileWhenDifferentContents (var_sourceDirectory_7736.add_operation (GALGAS_string ("/src.ll"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)), joker_17190, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 380)) ;
  var_asCode_8595.plusAssign_operation(function_asSeparatorLine (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 382)) ;
  GALGAS_bool joker_17361 ; // Joker input parameter
  var_asCode_8595.method_writeToFileWhenDifferentContents (var_sourceDirectory_7736.add_operation (GALGAS_string ("/src.s"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)), joker_17361, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 383)) ;
  GALGAS_string var_cCode_17432 = GALGAS_string::makeEmptyString () ;
  cEnumerator_lstringlist enumerator_17500 (constinArgument_inTargetParameters.getter_m_5F_C_5F_definitionFiles (HERE), kENUMERATION_UP) ;
  while (enumerator_17500.hasCurrentObject ()) {
    var_cCode_17432.plusAssign_operation(function_getTargetTextFile (constinArgument_inCurrentDirectory, constinArgument_inTargetName.getter_string (HERE).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 389)).add_operation (enumerator_17500.current_mValue (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 387)) ;
    enumerator_17500.gotoNextObject () ;
  }
  GALGAS_string var_s_31__17647 = var_cCode_17432.getter_stringByReplacingStringByString (GALGAS_string ("!TASKCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE).getter_count (SOURCE_FILE ("code-generation.galgas", 392)).getter_string (SOURCE_FILE ("code-generation.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 392)) ;
  GALGAS_string var_s_32__17767 = var_s_31__17647.getter_stringByReplacingStringByString (GALGAS_string ("!GUARDCOUNT!"), constinArgument_inIntermediateCodeStruct.getter_mMaxBranchOfOnInstructions (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 393)) ;
  GALGAS_string var_s_33__17893 = var_s_32__17767.getter_stringByReplacingStringByString (GALGAS_string ("!FUNC!"), function_llvmNameForFunction (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 394)) ;
  GALGAS_string var_s_34__17978 = var_s_33__17893.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICEIMPLEMENTATION!"), function_llvmNameForServiceImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 395)) ;
  GALGAS_string var_s_35__18093 = var_s_34__17978.getter_stringByReplacingStringByString (GALGAS_string ("!SERVICECALL!"), function_llvmNameForServiceCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 396)) ;
  GALGAS_string var_s_36__18188 = var_s_35__18093.getter_stringByReplacingStringByString (GALGAS_string ("!SECTIONIMPLEMENTATION!"), function_llvmNameForSectionImplementation (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 397)) ;
  GALGAS_string var_s_37__18303 = var_s_36__18188.getter_stringByReplacingStringByString (GALGAS_string ("!SECTIONCALL!"), function_llvmNameForSectionCall (GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 398)) ;
  GALGAS_bool joker_18458 ; // Joker input parameter
  var_s_37__18303.method_writeToFileWhenDifferentContents (var_sourceDirectory_7736.add_operation (GALGAS_string ("/src.c"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 399)), joker_18458, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 399)) ;
  GALGAS_string var_json_18551 = GALGAS_string ("{\n") ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"system-stack-size\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSystemStackSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 403)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"stacked-register-size-on-user-stack\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mStackedUserRegisterOnInterruptByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 404)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 404)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"service-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mServicePushedRegisterByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 406)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 406)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"section-stack-needs\" : ").add_operation (constinArgument_inIntermediateCodeStruct.getter_mTargetParameters (HERE).getter_mSectionPushedRegisterByteSize (HERE).getter_bigint (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 407)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 407)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"tasks\" : {"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 409)) ;
  cEnumerator_taskMapIR enumerator_19215 (constinArgument_inIntermediateCodeStruct.getter_mTaskMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_19215.hasCurrentObject ()) {
    var_json_18551.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (enumerator_19215.current (HERE).getter_lkey (HERE).getter_string (HERE).getter_assemblerRepresentation (SOURCE_FILE ("code-generation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 411)).add_operation (GALGAS_string ("\" : "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 411)).add_operation (enumerator_19215.current (HERE).getter_mStackSize (HERE).getter_string (SOURCE_FILE ("code-generation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 411)) ;
    if (enumerator_19215.hasNextObject ()) {
      var_json_18551.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 412)) ;
    }
    enumerator_19215.gotoNextObject () ;
  }
  var_json_18551.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 414)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  },\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 415)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"services\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 417)) ;
  cEnumerator_primitiveAndServiceIRlist enumerator_19477 (var_primitiveAndServiceList_12317, kENUMERATION_UP) ;
  const bool bool_8 = true ;
  if (enumerator_19477.hasCurrentObject () && bool_8) {
    while (enumerator_19477.hasCurrentObject () && bool_8) {
      var_json_18551.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_19477.current_mImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 419)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 419)) ;
      enumerator_19477.gotoNextObject () ;
      if (enumerator_19477.hasCurrentObject () && bool_8) {
        var_json_18551.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 420)) ;
      }
    }
    var_json_18551.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 421)) ;
  }
  var_json_18551.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 423)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"sections\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 425)) ;
  cEnumerator_sectionIRlist enumerator_19702 (var_sectionIRlist_12872, kENUMERATION_UP) ;
  const bool bool_9 = true ;
  if (enumerator_19702.hasCurrentObject () && bool_9) {
    while (enumerator_19702.hasCurrentObject () && bool_9) {
      var_json_18551.plusAssign_operation(GALGAS_string ("\n"
        "    \"").add_operation (enumerator_19702.current_mSectionImplementationName (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 427)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 427)) ;
      enumerator_19702.gotoNextObject () ;
      if (enumerator_19702.hasCurrentObject () && bool_9) {
        var_json_18551.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 428)) ;
      }
    }
    var_json_18551.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 429)) ;
  }
  var_json_18551.plusAssign_operation(GALGAS_string ("  ],\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 431)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("  \"isr\" : ["), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 433)) ;
  GALGAS_bool var_first_19878 = GALGAS_bool (true) ;
  cEnumerator_interruptMapIR enumerator_19960 (constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE), kENUMERATION_UP) ;
  while (enumerator_19960.hasCurrentObject ()) {
    const enumGalgasBool test_10 = var_first_19878.boolEnum () ;
    if (kBoolTrue == test_10) {
      var_first_19878 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_10) {
      var_json_18551.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 439)) ;
    }
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_19960.current_mMode (HERE).objectCompare (GALGAS_mode::constructor_serviceMode (SOURCE_FILE ("code-generation.galgas", 441)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = function_llvmNameForServiceInterrupt (enumerator_19960.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 442)).getter_string (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = function_llvmNameForSectionInterrupt (enumerator_19960.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 444)) ;
    }
    GALGAS_string var_interruptImplementationName_20072 = temp_11 ;
    var_json_18551.plusAssign_operation(GALGAS_string ("\n"
      "    \"").add_operation (var_interruptImplementationName_20072, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 446)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 446)) ;
    enumerator_19960.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (gOption_plm_5F_options_noPanicGeneration.getter_value ()).operator_not (SOURCE_FILE ("code-generation.galgas", 448)).boolEnum () ;
  if (kBoolTrue == test_13) {
    cEnumerator_availableInterruptMap enumerator_20414 (constinArgument_inAvailableInterruptMap, kENUMERATION_UP) ;
    while (enumerator_20414.hasCurrentObject ()) {
      const enumGalgasBool test_14 = constinArgument_inIntermediateCodeStruct.getter_mInterruptMapIR (HERE).getter_hasKey (enumerator_20414.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("code-generation.galgas", 450)).operator_not (SOURCE_FILE ("code-generation.galgas", 450)).boolEnum () ;
      if (kBoolTrue == test_14) {
        switch (enumerator_20414.current_mInterruptionPanicCode (HERE).enumValue ()) {
        case GALGAS_interruptionPanicCode::kNotBuilt:
          break ;
        case GALGAS_interruptionPanicCode::kEnum_noCode:
          {
          }
          break ;
        case GALGAS_interruptionPanicCode::kEnum_code:
          {
            const enumGalgasBool test_15 = var_first_19878.boolEnum () ;
            if (kBoolTrue == test_15) {
              var_first_19878 = GALGAS_bool (false) ;
            }else if (kBoolFalse == test_15) {
              var_json_18551.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 457)) ;
            }
            var_json_18551.plusAssign_operation(GALGAS_string ("\n"
              "    \"").add_operation (function_llvmNameForSectionInterrupt (enumerator_20414.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 459)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 459)) ;
          }
          break ;
        }
      }
      enumerator_20414.gotoNextObject () ;
    }
  }
  var_json_18551.plusAssign_operation(GALGAS_string ("\n"
    "  ]\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 464)) ;
  var_json_18551.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 466)) ;
  GALGAS_bool joker_20927 ; // Joker input parameter
  var_json_18551.method_writeToFileWhenDifferentContents (var_sourceDirectory_7736.add_operation (GALGAS_string ("/provided-stacks.json"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 467)), joker_20927, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 467)) ;
  const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("code-generation.galgas", 469)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_string temp_17 ;
    const enumGalgasBool test_18 = GALGAS_bool (gOption_plm_5F_option_5F_not_5F_appearing_5F_in_5F_cocoa_performFlashing.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = GALGAS_string ("run") ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string ("build") ;
    }
    GALGAS_string var_script_21045 = temp_17 ;
    GALGAS_string var_fullScript_21162 = GALGAS_string ("python ").add_operation (constinArgument_inProductDirectory, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 471)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 471)).add_operation (var_script_21045, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 471)).add_operation (GALGAS_string (".py"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 471)) ;
    GALGAS_sint var_result_21235 = var_fullScript_21162.getter_system (SOURCE_FILE ("code-generation.galgas", 472)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, var_result_21235.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
    if (kBoolTrue == test_19) {
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (constinArgument_inEndOfSourceFileLocation, GALGAS_string ("error during LLVM compilation or flashing"), fixItArray20  COMMA_SOURCE_FILE ("code-generation.galgas", 474)) ;
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
  GALGAS_orderedTypeList var_orderedTypeList_21840 = GALGAS_orderedTypeList::constructor_emptySortedList (SOURCE_FILE ("code-generation.galgas", 492)) ;
  cEnumerator_unifiedTypeMap enumerator_21879 (constinArgument_inTypeMap, kENUMERATION_UP) ;
  while (enumerator_21879.hasCurrentObject ()) {
    var_orderedTypeList_21840.addAssign_operation (enumerator_21879.current_type (HERE), enumerator_21879.current_index (HERE)  COMMA_SOURCE_FILE ("code-generation.galgas", 494)) ;
    enumerator_21879.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmTitleComment (GALGAS_string ("User Defined Types"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 497)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("%ptrtype = type i8* ; Generic pointer type for dynamic objects\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 498)) ;
  cEnumerator_orderedTypeList enumerator_22180 (var_orderedTypeList_21840, kENUMERATION_UP) ;
  while (enumerator_22180.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_22180.current_mType (HERE).getter_plmOriginalTypeName (HERE).objectCompare (enumerator_22180.current_mType (HERE).getter_plmAliasedTypeName (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      switch (enumerator_22180.current_mType (HERE).getter_kind (HERE).enumValue ()) {
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
          const cEnumAssociatedValues_typeKind_structure * extractPtr_22619 = (const cEnumAssociatedValues_typeKind_structure *) (enumerator_22180.current_mType (HERE).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_propertyList extractedValue_propertyList = extractPtr_22619->mAssociatedValue0 ;
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22180.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 507)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 507)) ;
          cEnumerator_propertyList enumerator_22494 (extractedValue_propertyList, kENUMERATION_UP) ;
          while (enumerator_22494.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22494.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 509)) ;
            if (enumerator_22494.hasNextObject ()) {
              ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 510)) ;
            }
            enumerator_22494.gotoNextObject () ;
          }
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 512)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_syncTool:
        {
          const cEnumAssociatedValues_typeKind_syncTool * extractPtr_22868 = (const cEnumAssociatedValues_typeKind_syncTool *) (enumerator_22180.current_mType (HERE).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_propertyList extractedValue_propertyList = extractPtr_22868->mAssociatedValue0 ;
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22180.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 514)).add_operation (GALGAS_string (" = type {"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 514)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 514)) ;
          cEnumerator_propertyList enumerator_22743 (extractedValue_propertyList, kENUMERATION_UP) ;
          while (enumerator_22743.hasCurrentObject ()) {
            ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22743.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 516)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 516)) ;
            if (enumerator_22743.hasNextObject ()) {
              ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 517)) ;
            }
            enumerator_22743.gotoNextObject () ;
          }
          ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 519)) ;
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
          const cEnumAssociatedValues_typeKind_arrayType * extractPtr_23108 = (const cEnumAssociatedValues_typeKind_arrayType *) (enumerator_22180.current_mType (HERE).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_elementType = extractPtr_23108->mAssociatedValue0 ;
          const GALGAS_bigint extractedValue_arraySize = extractPtr_23108->mAssociatedValue1 ;
          ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_22180.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)).add_operation (GALGAS_string (" = type ["), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)).add_operation (extractedValue_arraySize.getter_string (SOURCE_FILE ("code-generation.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)).add_operation (GALGAS_string (" x "), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)).add_operation (extensionGetter_llvmTypeName (extractedValue_elementType, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 524)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_dynamicArrayType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_function:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_pointer:
        {
          const cEnumAssociatedValues_typeKind_pointer * extractPtr_23207 = (const cEnumAssociatedValues_typeKind_pointer *) (enumerator_22180.current_mType (HERE).getter_kind (HERE).unsafePointer ()) ;
          const GALGAS_PLMType extractedValue_pointee = extractPtr_23207->mAssociatedValue0 ;
        }
        break ;
      }
    }
    enumerator_22180.gotoNextObject () ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 531)) ;
}


