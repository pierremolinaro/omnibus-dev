#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-11.h"


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
  GALGAS_uint var_branchCount_24647 = object->mAttribute_mOnInstructionBranchListIR.getter_length (SOURCE_FILE ("instruction-sync.galgas", 558)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxBranchOfOnInstructions.objectCompare (var_branchCount_24647)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioMaxBranchOfOnInstructions = var_branchCount_24647 ;
  }
  cEnumerator_syncInstructionBranchListIR enumerator_24832 (object->mAttribute_mOnInstructionBranchListIR, kEnumeration_up) ;
  while (enumerator_24832.hasCurrentObject ()) {
    extensionMethod_enterAccessibleEntities (enumerator_24832.current (HERE).mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 563)) ;
    switch (enumerator_24832.current (HERE).mAttribute_mGuardedCommand.enumValue ()) {
    case GALGAS_guardedCommandIR::kNotBuilt:
      break ;
    case GALGAS_guardedCommandIR::kEnum_synchronization:
      {
        const cEnumAssociatedValues_guardedCommandIR_synchronization * extractPtr_25386 = (const cEnumAssociatedValues_guardedCommandIR_synchronization *) (enumerator_24832.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_25386->mAssociatedValue1 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_25386->mAssociatedValue2 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_25386->mAssociatedValue3 ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 566)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 567)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 569)) ;
        }
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_booleanGuard:
      {
        const cEnumAssociatedValues_guardedCommandIR_booleanGuard * extractPtr_25553 = (const cEnumAssociatedValues_guardedCommandIR_booleanGuard *) (enumerator_24832.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_25553->mAssociatedValue1 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 572)) ;
      }
      break ;
    case GALGAS_guardedCommandIR::kEnum_boolAndSync:
      {
        const cEnumAssociatedValues_guardedCommandIR_boolAndSync * extractPtr_26088 = (const cEnumAssociatedValues_guardedCommandIR_boolAndSync *) (enumerator_24832.current (HERE).mAttribute_mGuardedCommand.unsafePointer ()) ;
        const GALGAS_instructionListIR extractedValue_instructionGenerationList = extractPtr_26088->mAssociatedValue1 ;
        const GALGAS_string extractedValue_guardMangledName = extractPtr_26088->mAssociatedValue3 ;
        const GALGAS_string extractedValue_optionalReceiverName = extractPtr_26088->mAssociatedValue4 ;
        const GALGAS_instructionListIR extractedValue_guardInstructionGenerationList = extractPtr_26088->mAssociatedValue5 ;
        extensionMethod_enterAccessibleEntities (extractedValue_instructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 574)) ;
        extensionMethod_enterAccessibleEntities (extractedValue_guardInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-sync.galgas", 575)) ;
        ioArgument_ioAccessibleEntities.mAttribute_mGuardSet.addAssign_operation (extractedValue_guardMangledName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 576)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionalReceiverName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (extractedValue_optionalReceiverName  COMMA_SOURCE_FILE ("instruction-sync.galgas", 578)) ;
        }
      }
      break ;
    }
    enumerator_24832.gotoNextObject () ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mWhileInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 65)) ;
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
                                                         const GALGAS_stringset constinArgument_inModeSet,
                                                         const GALGAS_bool constinArgument_inAllowPanic,
                                                         GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                         GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                         GALGAS_allocaList & ioArgument_ioAllocaList,
                                                         GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_whileInstructionAST * object = (const cPtr_whileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_whileInstructionAST) ;
  GALGAS_instructionListIR var_testInstructionGenerationList_4022 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 87)) ;
  GALGAS_objectIR var_testValue_4565 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mTestExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-while.galgas", 93)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_testInstructionGenerationList_4022, var_testValue_4565, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 88)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_kind (var_testValue_4565, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 105)).objectCompare (GALGAS_typeKind::constructor_boolean (SOURCE_FILE ("instruction-while.galgas", 105)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type is '").add_operation (extensionGetter_key (var_testValue_4565, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106)).add_operation (GALGAS_string ("', it should be boolean"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 106))  COMMA_SOURCE_FILE ("instruction-while.galgas", 106)) ;
  }
  const enumGalgasBool test_1 = extensionGetter_isStatic (var_testValue_4565, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 108)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_test_5F_expression, GALGAS_string ("test expression type should not be static")  COMMA_SOURCE_FILE ("instruction-while.galgas", 109)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4941 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-while.galgas", 112)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 113)) ;
  }
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mWhileInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_while_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_4941, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 114)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_while_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 129)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_whileInstructionIR::constructor_new (object->mAttribute_mEndOf_5F_test_5F_expression.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 132)), var_testInstructionGenerationList_4022, var_testValue_4565, var_instructionGenerationList_4941  COMMA_SOURCE_FILE ("instruction-while.galgas", 131))  COMMA_SOURCE_FILE ("instruction-while.galgas", 131)) ;
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
  GALGAS_string var_labelTest_6715 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 157)) ;
  GALGAS_string var_labelLoop_6766 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 158)) ;
  GALGAS_string var_labelEnd_6816 = GALGAS_string ("while.").add_operation (object->mAttribute_mLabelIndex.getter_string (SOURCE_FILE ("instruction-while.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6715, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 160)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelTest_6715.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 161)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mTestExpression, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (var_labelLoop_6766, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (var_labelEnd_6816, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelLoop_6766.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 164)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionGenerationList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 165)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_labelTest_6715, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 166)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 166)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_labelEnd_6816.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-while.galgas", 167)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mTestInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 176)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionGenerationList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-while.galgas", 177)) ;
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
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 49)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 50)) ;
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
                                                       const GALGAS_stringset constinArgument_inModeSet,
                                                       const GALGAS_bool constinArgument_inAllowPanic,
                                                       GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                       GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                       GALGAS_allocaList & ioArgument_ioAllocaList,
                                                       GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  GALGAS_objectIR var_iteratedExpressionResult_4068 ;
  callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mIteratedExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 77)), constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_iteratedExpressionResult_4068, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_iteratedElementType_4151 = extensionGetter_type (var_iteratedExpressionResult_4068, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 89)).getter_enumerationType (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_iteratedElementType_4151.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-for-in-do.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, GALGAS_string ("this object is not enumerable")  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 91)) ;
  }
  GALGAS_lstring var_enumeratedVarLLVMName_4363 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-do.galgas", 94))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 94)) ;
  ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 95)) ;
  ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_4363.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 96)), var_iteratedElementType_4151  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 96)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 98)) ;
  }
  {
  ioArgument_ioVariableMap.setter_insertUsedConstant (object->mAttribute_mVarName, var_iteratedElementType_4151, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_iteratedElementType_4151, var_enumeratedVarLLVMName_4363  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 103)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 99)) ;
  }
  GALGAS_instructionListIR var_instructionGenerationList_4955 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-do.galgas", 107)) ;
  extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_4955, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 108)) ;
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 123)) ;
  }
  ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forInstructionIR::constructor_new (var_enumeratedVarLLVMName_4363.getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 126)), var_iteratedElementType_4151, object->mAttribute_mEndOf_5F_iteratedExpression_5F_instruction, var_iteratedExpressionResult_4068, var_instructionGenerationList_4955  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 125))  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 125)) ;
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
//                         Overriding extension method '@forInstructionIR llvmInstructionCode'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                  GALGAS_string & ioArgument_ioLLVMcode,
                                                                  const GALGAS_generationContext constinArgument_inGenerationContext,
                                                                  GALGAS_generationAdds & ioArgument_ioGenerationAdds,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  GALGAS_string var_startLabel_6698 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 153)) ;
  GALGAS_string var_testLabel_6762 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 154)) ;
  GALGAS_string var_loopLabel_6825 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 155)) ;
  GALGAS_string var_endLabel_6887 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 156)) ;
  GALGAS_string var_ptrVar_6947 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)).add_operation (GALGAS_string (".ptr"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 157)) ;
  GALGAS_string var_currentVar_7013 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).getter_string (SOURCE_FILE ("instruction-for-in-do.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)).add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 158)) ;
  GALGAS_string var_elementTypeName_7085 = object->mAttribute_mElementType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 159)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_6698, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 162)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_6698.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 163)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_6762, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 164)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_6762.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 167)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_6947, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (" = phi i8* ["), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (extensionGetter_llvmName (object->mAttribute_mExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 168)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_6698.add_operation (GALGAS_string ("], [%"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (var_ptrVar_6947, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string (".next, %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (var_loopLabel_6825, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 169)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_7013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (GALGAS_string (" = load i8, i8* %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (var_ptrVar_6947, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 170)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_currentVar_7013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).add_operation (GALGAS_string (".nul = icmp eq i8 %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).add_operation (var_currentVar_7013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 171)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 %").add_operation (var_currentVar_7013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string (".nul, label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (var_endLabel_6887, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (var_loopLabel_6825, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 172)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_6825.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 175)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_elementTypeName_7085, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (GALGAS_string (" %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (var_currentVar_7013, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 176)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName_7085.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 177)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 178)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  %").add_operation (var_ptrVar_6947, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)).add_operation (GALGAS_string (".next = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)).add_operation (var_elementTypeName_7085, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 179)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_elementTypeName_7085.add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)).add_operation (var_ptrVar_6947, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)).add_operation (GALGAS_string (", i32 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 180)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_6762, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 181)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_6887.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                            extensionMethod_forInstructionIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_llvmInstructionCode (defineExtensionMethod_forInstructionIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@forInstructionIR enterAccessibleEntities'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_forInstructionIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                      GALGAS_uint & ioArgument_ioMaxBranchOfOnInstructions,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionIR * object = (const cPtr_forInstructionIR *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionIR) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-do.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_forInstructionIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_forInstructionIR.mSlotID,
                                                extensionMethod_forInstructionIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_forInstructionIR_enterAccessibleEntities (defineExtensionMethod_forInstructionIR_enterAccessibleEntities, NULL) ;

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_typeName_2766 = GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)), object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 60)) ;
    {
    ioArgument_ioGraph.setter_noteNode (var_typeName_2766 COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 61)) ;
    }
  }
  extensionMethod_noteInstructionListTypesInPrecedenceGraph (object->mAttribute_mDoInstructionList, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 63)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 64)) ;
  callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 65)) ;
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
                                                                      const GALGAS_stringset constinArgument_inModeSet,
                                                                      const GALGAS_bool constinArgument_inAllowPanic,
                                                                      GALGAS_semanticTemporariesStruct & ioArgument_ioTemporaries,
                                                                      GALGAS_staticStringMap & ioArgument_ioGlobalLiteralStringMap,
                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                      GALGAS_allocaList & ioArgument_ioAllocaList,
                                                                      GALGAS_instructionListIR & ioArgument_ioInstructionGenerationList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forLowerUpperBoundInstructionAST * object = (const cPtr_forLowerUpperBoundInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forLowerUpperBoundInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_4193 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 87)) ;
  switch (var_type_4193.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolean:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)), GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 90)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_arrayType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)), GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 92)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumeration:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_literalString:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)), GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 95)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_opaque:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)), GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_staticInteger:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)), GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 99)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structure:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)), GALGAS_string ("an integer type is required here")  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 101)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integer:
    {
      const cEnumAssociatedValues_typeKind_integer * extractPtr_8105 = (const cEnumAssociatedValues_typeKind_integer *) (var_type_4193.getter_kind (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 88)).unsafePointer ()) ;
      const GALGAS_bigint extractedValue_min = extractPtr_8105->mAssociatedValue0 ;
      const GALGAS_bigint extractedValue_max = extractPtr_8105->mAssociatedValue1 ;
      const GALGAS_bool extractedValue_unsigned = extractPtr_8105->mAssociatedValue2 ;
      const GALGAS_uint extractedValue_bitCount = extractPtr_8105->mAssociatedValue3 ;
      GALGAS_objectIR var_lowerBoundExpressionResult_5490 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mLowerBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4193, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_lowerBoundExpressionResult_5490, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 104)) ;
      GALGAS_objectIR var_upperBoundExpressionResult_6084 ;
      callExtensionMethod_analyzeExpression ((const cPtr_expressionAST *) object->mAttribute_mUpperBoundExpression.ptr (), constinArgument_inSelfType, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, var_type_4193, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_upperBoundExpressionResult_6084, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 120)) ;
      GALGAS_objectIR var_lowerBound_6139 = function_checkAssignmentCompatibility (var_lowerBoundExpressionResult_5490, var_type_4193, object->mAttribute_mEndOf_5F_lowerBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 137)) ;
      GALGAS_objectIR var_upperBound_6363 = function_checkAssignmentCompatibility (var_upperBoundExpressionResult_6084, var_type_4193, object->mAttribute_mEndOf_5F_upperBoundExpression_5F_instruction, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 143)) ;
      GALGAS_lstring var_enumeratedVarLLVMName_6605 = GALGAS_lstring::constructor_new (object->mAttribute_mVarName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)).add_operation (ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)), object->mAttribute_mVarName.getter_location (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 150)) ;
      ioArgument_ioTemporaries.mAttribute_mTemporaryIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 151)) ;
      ioArgument_ioAllocaList.addAssign_operation (var_enumeratedVarLLVMName_6605.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)), var_type_4193  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 152)) ;
      {
      ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 154)) ;
      }
      {
      ioArgument_ioVariableMap.setter_insertUsedConstant (object->mAttribute_mVarName, var_type_4193, GALGAS_bool (true), GALGAS_objectIR::constructor_localVariableReference (var_type_4193, var_enumeratedVarLLVMName_6605  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 159)), GALGAS_bool (true), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 155)) ;
      }
      GALGAS_instructionListIR var_instructionGenerationList_7178 = GALGAS_instructionListIR::constructor_emptyList (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 163)) ;
      extensionMethod_analyzeBranchInstructionList (object->mAttribute_mDoInstructionList, constinArgument_inSelfType, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, object->mAttribute_mEndOf_5F_do_5F_instruction, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, var_instructionGenerationList_7178, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 164)) ;
      {
      ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_do_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 179)) ;
      }
      ioArgument_ioInstructionGenerationList.addAssign_operation (GALGAS_forLowerUpperBoundInstructionIR::constructor_new (var_enumeratedVarLLVMName_6605.getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 182)), var_type_4193, extractedValue_unsigned, object->mAttribute_mEndOf_5F_do_5F_instruction, var_lowerBound_6139, var_upperBound_6363, var_instructionGenerationList_7178  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 181))  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 181)) ;
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
  GALGAS_string var_llvmType_9182 = object->mAttribute_mType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 217)) ;
  GALGAS_string var_llvmVarName_9223 = function_llvmNameForLocalVariable (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 218)) ;
  GALGAS_string var_testLabel_9278 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)).add_operation (GALGAS_string (".test"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 219)) ;
  GALGAS_string var_loopLabel_9341 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)).add_operation (GALGAS_string (".loop"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 220)) ;
  GALGAS_string var_endLabel_9403 = GALGAS_string ("for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)).add_operation (GALGAS_string (".end"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 221)) ;
  GALGAS_string var_testResult_9467 = GALGAS_string ("%for.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)).getter_string (SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)).add_operation (GALGAS_string (".test.result"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 222)) ;
  GALGAS_string var_loadedVarName_9542 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".loaded"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 223)) ;
  GALGAS_string var_currentVarName_9620 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".current"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 224)) ;
  GALGAS_string var_nextVarName_9696 = GALGAS_string ("%").add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVarName.add_operation (GALGAS_string (".next"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 225)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (extensionGetter_llvmName (object->mAttribute_mLowerExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (var_llvmVarName_9223, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 227)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9278, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 228)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_testLabel_9278.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 230)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_loadedVarName_9542, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (var_llvmVarName_9223, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 231)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testResult_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 232)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mUnsigned.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ult") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("slt") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 233)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (var_loadedVarName_9542, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (extensionGetter_llvmName (object->mAttribute_mUpperExpressionResult, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 234)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testResult_9467, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_loopLabel_9341, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (var_endLabel_9403, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 235)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_loopLabel_9341.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 237)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 238)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_currentVarName_9620, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (var_llvmVarName_9223, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 239)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_nextVarName_9696, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (var_currentVarName_9620, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)).add_operation (GALGAS_string (", 1\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 240)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store ").add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_nextVarName_9696, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmType_9182, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (var_llvmVarName_9223, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 241)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_testLabel_9278, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 242)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_endLabel_9403.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 244)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("instruction-for-in-lower-upper-bounds.galgas", 253)) ;
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
//               Overriding extension method '@callInstructionAST noteInstructionTypesInPrecedenceGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph (const cPtr_instructionAST * inObject,
                                                                                      GALGAS_semanticTypePrecedenceGraph & ioArgument_ioGraph,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_callInstructionAST * object = (const cPtr_callInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_callInstructionAST) ;
  extensionMethod_noteInstructionTypesInPrecedenceGraph (object->mAttribute_mAssignmentTargetAST, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 41)) ;
  cEnumerator_effectiveParameterListAST enumerator_2376 (object->mAttribute_mArguments, kEnumeration_up) ;
  while (enumerator_2376.hasCurrentObject ()) {
    switch (enumerator_2376.current_mEffectiveParameterKind (HERE).enumValue ()) {
    case GALGAS_effectiveParameterPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_input:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_inputWithType:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType * extractPtr_2601 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_inputWithType *) (enumerator_2376.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_2601->mAssociatedValue1 ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, extractedValue_typeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("$").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-procedure-call.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 47)), extractedValue_typeName.mAttribute_location  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 47)) COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 47)) ;
          }
        }
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_output:
      {
        const cEnumAssociatedValues_effectiveParameterPassingModeAST_output * extractPtr_2694 = (const cEnumAssociatedValues_effectiveParameterPassingModeAST_output *) (enumerator_2376.current_mEffectiveParameterKind (HERE).unsafePointer ()) ;
        const GALGAS_expressionAST extractedValue_expression = extractPtr_2694->mAssociatedValue0 ;
        callExtensionMethod_noteExpressionTypesInPrecedenceGraph ((const cPtr_expressionAST *) extractedValue_expression.ptr (), ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 49)) ;
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInput:
      {
      }
      break ;
    case GALGAS_effectiveParameterPassingModeAST::kEnum_outputInputSelfVariable:
      {
      }
      break ;
    }
    enumerator_2376.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph (void) {
  enterExtensionMethod_noteInstructionTypesInPrecedenceGraph (kTypeDescriptor_GALGAS_callInstructionAST.mSlotID,
                                                              extensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph (defineExtensionMethod_callInstructionAST_noteInstructionTypesInPrecedenceGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@callInstructionAST analyze'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_callInstructionAST_analyze (const cPtr_instructionAST * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inSelfType,
                                                        const GALGAS_bool constinArgument_inRoutineCanMutateProperties,
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
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_callInstructionAST * object = (const cPtr_callInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_callInstructionAST) ;
  GALGAS_objectIR var_currentObject_5268 ;
  GALGAS_string var_globalVariableReceiverName_5331 ;
  extensionMethod_analyzeAssignmentTarget (object->mAttribute_mAssignmentTargetAST, constinArgument_inSelfType, GALGAS_targetAccessKind::constructor_readWrite (SOURCE_FILE ("instruction-procedure-call.galgas", 99)), constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, ioArgument_ioInstructionGenerationList, var_currentObject_5268, var_globalVariableReceiverName_5331, inCompiler COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 97)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_6020 ;
  {
  routine_handleFunctionCallInExpression (constinArgument_inSelfType, var_globalVariableReceiverName_5331, constinArgument_inRoutineCanMutateProperties, constinArgument_inDirectAccessToPropertiesAllowed, GALGAS_bool (false), constinArgument_inCallerNameForInvocationGraph, constinArgument_inContext, constinArgument_inModeSet, constinArgument_inAllowPanic, ioArgument_ioTemporaries, ioArgument_ioGlobalLiteralStringMap, ioArgument_ioVariableMap, ioArgument_ioAllocaList, object->mAttribute_mArguments, object->mAttribute_mEndOfArguments, ioArgument_ioInstructionGenerationList, var_currentObject_5268, var_returnedType_6020, inCompiler  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 115)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_returnedType_6020.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-procedure-call.galgas", 135)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfArguments, GALGAS_string ("the function cannot be called in instruction: lost return value")  COMMA_SOURCE_FILE ("instruction-procedure-call.galgas", 136)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_callInstructionAST_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_callInstructionAST.mSlotID,
                                extensionMethod_callInstructionAST_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_callInstructionAST_analyze (defineExtensionMethod_callInstructionAST_analyze, NULL) ;

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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 213)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, extensionGetter_type (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 214)).objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semantic-analysis.galgas", 214)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("call void"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 215)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)).add_operation (GALGAS_string (" = call "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 217)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" @"), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 219)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_routineKindIR::kNotBuilt:
    break ;
  case GALGAS_routineKindIR::kEnum_function:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForFunction (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 221)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 222)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_serviceInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForServiceImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 223)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 224)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_sectionInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForSectionImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 225)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorUserMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveCall (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 226)) ;
    }
    break ;
  case GALGAS_routineKindIR::kEnum_primitiveInProcessorPrivilegedMode:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForPrimitiveImplementation (object->mAttribute_mFunctionNameForGeneration.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 227)) ;
    }
    break ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 229)) ;
  cEnumerator_procCallEffectiveParameterListIR enumerator_9254 (object->mAttribute_mArgumentList, kEnumeration_up) ;
  while (enumerator_9254.hasCurrentObject ()) {
    switch (enumerator_9254.current_mEffectiveParameterPassingMode (HERE).enumValue ()) {
    case GALGAS_procEffectiveParameterPassingModeIR::kNotBuilt:
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_input:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9254.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)).add_operation (extensionGetter_llvmName (enumerator_9254.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 233)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_output:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9254.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)).add_operation (extensionGetter_llvmName (enumerator_9254.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 235)) ;
      }
      break ;
    case GALGAS_procEffectiveParameterPassingModeIR::kEnum_outputInput:
      {
        ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (enumerator_9254.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)).add_operation (extensionGetter_llvmName (enumerator_9254.current_mParameter (HERE), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 237)) ;
      }
      break ;
    }
    if (enumerator_9254.hasNextObject ()) {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 240)) ;
    }
    enumerator_9254.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mGlobalVariableName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVariableName  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 252)) ;
  }
  ioArgument_ioAccessibleEntities.mAttribute_mRoutineSet.addAssign_operation (object->mAttribute_mFunctionMangledName.mAttribute_string  COMMA_SOURCE_FILE ("semantic-analysis.galgas", 254)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 23)) ;
  GALGAS_bool var_sourceIsUnsigned_761 ;
  GALGAS_bigint joker_722 ; // Joker input parameter
  GALGAS_bigint joker_729 ; // Joker input parameter
  GALGAS_uint joker_763_1 ; // Joker input parameter
  extensionGetter_kind (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)).method_integer (joker_722, joker_729, var_sourceIsUnsigned_761, joker_763_1, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 24)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = var_sourceIsUnsigned_761.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("zext") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("sext") ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(temp_0, inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_llvmTypeName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-extend.galgas", 26)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)).add_operation (GALGAS_string (" = trunc "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_llvmTypeName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-trunc.galgas", 24)) ;
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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mResult, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("shl ").add_operation (extensionGetter_llvmTypeName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (object->mAttribute_mShiftAmount.getter_string (SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-shift-left.galgas", 28)) ;
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
  GALGAS_string var_llvmType_4989 = object->mAttribute_mOperandType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 136)) ;
  switch (object->mAttribute_mOperation.enumValue ()) {
  case GALGAS_llvmBinaryOperation::kNotBuilt:
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_addNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" = add "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 139)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_subNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" = sub "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 141)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_mulNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" = mul "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 143)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" = udiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 145)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" = sdiv "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 147)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" = urem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 149)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremNoOVF:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" = srem "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 151)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uaddOVF:
    {
      const GALGAS_binaryOperationIR temp_0 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_0.ptr (), GALGAS_string ("uadd"), function_panicCodeForUnsignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 155)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 153)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_saddOVF:
    {
      const GALGAS_binaryOperationIR temp_1 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_1.ptr (), GALGAS_string ("sadd"), function_panicCodeForSignedAdditionOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 163)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 161)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_usubOVF:
    {
      const GALGAS_binaryOperationIR temp_2 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_2.ptr (), GALGAS_string ("usub"), function_panicCodeForUnsignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 171)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 169)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ssubOVF:
    {
      const GALGAS_binaryOperationIR temp_3 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_3.ptr (), GALGAS_string ("ssub"), function_panicCodeForSignedSubtractOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 179)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 177)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_umulOVF:
    {
      const GALGAS_binaryOperationIR temp_4 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_4.ptr (), GALGAS_string ("umul"), function_panicCodeForUnsignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 187)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 185)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_smulOVF:
    {
      const GALGAS_binaryOperationIR temp_5 = object ;
      callExtensionMethod_enterCodeForOverflowOperation ((const cPtr_binaryOperationIR *) temp_5.ptr (), GALGAS_string ("smul"), function_panicCodeForSignedMultiplicationOverflow (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 195)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 193)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_udivOVF:
    {
      const GALGAS_binaryOperationIR temp_6 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_6.ptr (), GALGAS_string ("udiv"), function_panicCodeForUnsignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 203)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 201)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sdivOVF:
    {
      const GALGAS_binaryOperationIR temp_7 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_7.ptr (), GALGAS_string ("sdiv"), function_panicCodeForSignedDivisionByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 211)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 209)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_uremOVF:
    {
      const GALGAS_binaryOperationIR temp_8 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_8.ptr (), GALGAS_string ("urem"), function_panicCodeForUnsignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 219)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 217)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_sremOVF:
    {
      const GALGAS_binaryOperationIR temp_9 = object ;
      callExtensionMethod_enterCodeForDivisionWithZeroDivisorPanic ((const cPtr_binaryOperationIR *) temp_9.ptr (), GALGAS_string ("srem"), function_panicCodeForSignedRemainderByZero (inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 227)), ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 225)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_and:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" = and "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 233)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ior:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" = or "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 235)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_xor:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" = xor "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 237)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_shl:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" = shl "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 239)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_ashr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" = ashr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 241)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_lshr:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" = lshr "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 243)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_eq:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" = icmp eq "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 245)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ne:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" = icmp ne "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 247)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ult:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 249)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ule:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" = icmp ule "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 251)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_ugt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" = icmp ugt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 253)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_uge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" = icmp uge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 255)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_slt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" = icmp slt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 257)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sle:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" = icmp sle "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 259)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sgt:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" = icmp sgt "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 261)) ;
    }
    break ;
  case GALGAS_llvmBinaryOperation::kEnum_icmp_5F_sge:
    {
      ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (var_llvmType_4989, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mAttribute_mLeft, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (extensionGetter_llvmName (object->mAttribute_mRight, inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("intermediate-binary-operation.galgas", 263)) ;
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
  extensionMethod_enterAccessibleEntities (object->mAttribute_mLeftInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 38)) ;
  extensionMethod_enterAccessibleEntities (object->mAttribute_mRightInstructionList, ioArgument_ioAccessibleEntities, ioArgument_ioMaxBranchOfOnInstructions, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 39)) ;
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
  GALGAS_string var_startLabel_1750 = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)).add_operation (GALGAS_string (".start"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 49)) ;
  GALGAS_string var_trueLabel_1815 = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)).add_operation (GALGAS_string (".true"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 50)) ;
  GALGAS_string var_falseLabel_1880 = GALGAS_string ("and.").add_operation (object->mAttribute_mLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).getter_string (SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)).add_operation (GALGAS_string (".false"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 51)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_startLabel_1750, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 52)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_startLabel_1750.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 53)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mLeftInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 54)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (extensionGetter_llvmName (object->mAttribute_mLeftOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_trueLabel_1815, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (var_falseLabel_1880, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 55)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_trueLabel_1815.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 56)) ;
  extensionMethod_instructionListLLVMCode (object->mAttribute_mRightInstructionList, ioArgument_ioLLVMcode, constinArgument_inGenerationContext, ioArgument_ioGenerationAdds, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 57)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br label %").add_operation (var_falseLabel_1880, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 58)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_falseLabel_1880.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 59)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (" = phi i1 ["), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (extensionGetter_llvmName (object->mAttribute_mRightOperand, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string (", %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_trueLabel_1815, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("], [false, %"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (var_startLabel_1750, inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-short-circuit-and.galgas", 60)) ;
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
  GALGAS_string var_registerOffsetName_942 = GALGAS_string ("%register.subscript.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 27)) ;
  GALGAS_string var_registerIndexName_1023 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 28)) ;
  GALGAS_string var_scriptedRegisterAddressValueName_1115 = GALGAS_string ("%register.address.value.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 29)) ;
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 31)) ;
  GALGAS_uint var_bitCount_1419 ;
  GALGAS_bigint joker_1376 ; // Joker input parameter
  GALGAS_bigint joker_1383 ; // Joker input parameter
  GALGAS_bool joker_1395 ; // Joker input parameter
  extensionGetter_kind (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)).method_integer (joker_1376, joker_1383, joker_1395, var_bitCount_1419, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 33)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_1419.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_1023, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)).add_operation (extensionGetter_llvmName (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 35)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_1419.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_1023 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 38)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 38)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 39)).add_operation (object->mAttribute_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (object->mAttribute_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterAddressValueName_1115, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (var_registerOffsetName_942, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 41)) ;
  GALGAS_string var_llvmType_2024 = extensionGetter_type (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 43)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (var_scriptedRegisterAddressValueName_1115, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)).add_operation (var_llvmType_2024, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 44)) ;
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
  GALGAS_string var_registerOffsetName_3543 = GALGAS_string ("%register.subscript.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 83)) ;
  GALGAS_string var_registerIndexName_3624 = GALGAS_string ("%register.index.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 84)) ;
  GALGAS_string var_scriptedRegisterAddressValueName_3716 = GALGAS_string ("%register.address.value.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 85)) ;
  GALGAS_string var_scriptedRegisterAddressName_3811 = GALGAS_string ("%register.address.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 86)) ;
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 87)) ;
  GALGAS_uint var_bitCount_4019 ;
  GALGAS_bigint joker_3976 ; // Joker input parameter
  GALGAS_bigint joker_3983 ; // Joker input parameter
  GALGAS_bool joker_3995 ; // Joker input parameter
  extensionGetter_kind (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 89)).method_integer (joker_3976, joker_3983, joker_3995, var_bitCount_4019, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 89)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_bitCount_4019.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerIndexName_3624, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 91)).add_operation (GALGAS_string (" = zext "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 91)).add_operation (extensionGetter_llvmTypeName (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 91)).add_operation (extensionGetter_llvmName (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 92)).add_operation (GALGAS_string (" to i32\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 91)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, var_bitCount_4019.objectCompare (GALGAS_uint ((uint32_t) 32U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = var_registerIndexName_3624 ;
  }else if (kBoolFalse == test_2) {
    temp_1 = extensionGetter_llvmName (object->mAttribute_mIndexResult, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 95)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_registerOffsetName_3543, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 94)).add_operation (GALGAS_string (" = mul i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 94)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 94)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 95)).add_operation (object->mAttribute_mElementArraySize.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 96)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 96)).add_operation (object->mAttribute_mElementArraySize.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 96)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 94)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterAddressValueName_3716, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 97)).add_operation (GALGAS_string (" = add i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 97)).add_operation (var_registerOffsetName_3543, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 97)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 97)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 98)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 98)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 98)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 97)) ;
  GALGAS_string var_llvmType_4624 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 99)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_scriptedRegisterAddressName_3811, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 100)).add_operation (GALGAS_string (" = inttoptr i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 100)).add_operation (var_scriptedRegisterAddressValueName_3716, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 100)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 100)).add_operation (var_llvmType_4624, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 101)).add_operation (GALGAS_string (" *\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 100)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)).add_operation (var_llvmType_4624, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)).add_operation (var_llvmType_4624, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)).add_operation (var_scriptedRegisterAddressName_3811, inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-control-register-with-subscript.galgas", 102)) ;
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
  GALGAS_string var_llvmType_709 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (" = load volatile "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (var_llvmType_709, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (var_llvmType_709, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (GALGAS_string (" * inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)).add_operation (object->mAttribute_mRegisterAddress.getter_string (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (var_llvmType_709, inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (object->mAttribute_mRegisterAddress.getter_hexString (SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-volatile-register.galgas", 24)) ;
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
//                       Overriding extension method '@loadGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                      GALGAS_string & ioArgument_ioLLVMcode,
                                                                      const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                      GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  GALGAS_string var_llvmType_797 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_797.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (var_llvmType_797, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadGlobalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                            extensionMethod_loadGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_llvmInstructionCode (defineExtensionMethod_loadGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                          GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                          GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadGlobalVariableIR * object = (const cPtr_loadGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mVariableName  COMMA_SOURCE_FILE ("intermediate-load-global-variable.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadGlobalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadGlobalVariableIR.mSlotID,
                                                extensionMethod_loadGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadGlobalVariableIR_enterAccessibleEntities (defineExtensionMethod_loadGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@loadLocalVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadLocalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadLocalVariableIR * object = (const cPtr_loadLocalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadLocalVariableIR) ;
  GALGAS_string var_llvmType_782 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 26)) ;
  const enumGalgasBool test_0 = object->mAttribute_mVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 28)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_782.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (var_llvmType_782, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mVariableName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadLocalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                            extensionMethod_loadLocalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_llvmInstructionCode (defineExtensionMethod_loadLocalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@loadLocalVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadLocalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                         GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadLocalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadLocalVariableIR.mSlotID,
                                                extensionMethod_loadLocalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadLocalVariableIR_enterAccessibleEntities (defineExtensionMethod_loadLocalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@loadFromTemporaryReferenceIR llvmInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadFromTemporaryReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                              GALGAS_string & ioArgument_ioLLVMcode,
                                                                              const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                              GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadFromTemporaryReferenceIR * object = (const cPtr_loadFromTemporaryReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadFromTemporaryReferenceIR) ;
  GALGAS_string var_llvmType_2249 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 66)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 67)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 67)) ;
  const enumGalgasBool test_0 = object->mAttribute_mVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 69)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_2249.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 71)).add_operation (var_llvmType_2249, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 71)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 71)).add_operation (object->mAttribute_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-local-variable.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadFromTemporaryReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadFromTemporaryReferenceIR.mSlotID,
                                            extensionMethod_loadFromTemporaryReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadFromTemporaryReferenceIR_llvmInstructionCode (defineExtensionMethod_loadFromTemporaryReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@loadFromTemporaryReferenceIR enterAccessibleEntities'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadFromTemporaryReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                  GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                  GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadFromTemporaryReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadFromTemporaryReferenceIR.mSlotID,
                                                extensionMethod_loadFromTemporaryReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadFromTemporaryReferenceIR_enterAccessibleEntities (defineExtensionMethod_loadFromTemporaryReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@loadTaskVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadTaskVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                    GALGAS_string & ioArgument_ioLLVMcode,
                                                                    const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                    GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadTaskVariableIR * object = (const cPtr_loadTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadTaskVariableIR) ;
  GALGAS_string var_llvmType_777 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_777.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (var_llvmType_777, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (function_llvmNameForTaskVariable (object->mAttribute_mTaskName, object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadTaskVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadTaskVariableIR.mSlotID,
                                            extensionMethod_loadTaskVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadTaskVariableIR_llvmInstructionCode (defineExtensionMethod_loadTaskVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@loadTaskVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadTaskVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                        GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadTaskVariableIR * object = (const cPtr_loadTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadTaskVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mTaskVariableSet.addAssign_operation (object->mAttribute_mTaskName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36)).add_operation (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36))  COMMA_SOURCE_FILE ("intermediate-load-task-variable.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadTaskVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadTaskVariableIR.mSlotID,
                                                extensionMethod_loadTaskVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadTaskVariableIR_enterAccessibleEntities (defineExtensionMethod_loadTaskVariableIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_806 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store volatile ").add_operation (var_llvmType_806, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (var_llvmType_806, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (GALGAS_string (" * inttoptr (i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)).add_operation (object->mAttribute_mAddress.getter_string (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (var_llvmType_806, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (GALGAS_string ("*) ; "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (object->mAttribute_mAddress.getter_hexString (SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-volatile-register.galgas", 26)) ;
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
//                     Overriding extension method '@storeVolatileIndirectIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeVolatileIndirectIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeVolatileIndirectIR * object = (const cPtr_storeVolatileIndirectIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeVolatileIndirectIR) ;
  GALGAS_string var_llvmType_841 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store volatile ").add_operation (var_llvmType_841, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)).add_operation (var_llvmType_841, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)).add_operation (object->mAttribute_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-volatile-register-indirect.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeVolatileIndirectIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeVolatileIndirectIR.mSlotID,
                                            extensionMethod_storeVolatileIndirectIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIndirectIR_llvmInstructionCode (defineExtensionMethod_storeVolatileIndirectIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@storeVolatileIndirectIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeVolatileIndirectIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeVolatileIndirectIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeVolatileIndirectIR.mSlotID,
                                                extensionMethod_storeVolatileIndirectIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeVolatileIndirectIR_enterAccessibleEntities (defineExtensionMethod_storeVolatileIndirectIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@storeGlobalVariableIR llvmInstructionCode'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeGlobalVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                       GALGAS_string & ioArgument_ioLLVMcode,
                                                                       const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                       GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  GALGAS_string var_llvmType_909 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 28)) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 30)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_909.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (var_llvmType_909, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (function_llvmNameForGlobalVariable (object->mAttribute_mGlobalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeGlobalVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                            extensionMethod_storeGlobalVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_llvmInstructionCode (defineExtensionMethod_storeGlobalVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@storeGlobalVariableIR enterAccessibleEntities'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeGlobalVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                           GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                           GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeGlobalVariableIR * object = (const cPtr_storeGlobalVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeGlobalVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mGlobalVariableSet.addAssign_operation (object->mAttribute_mGlobalVarName  COMMA_SOURCE_FILE ("intermediate-store-global-variable.galgas", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeGlobalVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeGlobalVariableIR.mSlotID,
                                                extensionMethod_storeGlobalVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeGlobalVariableIR_enterAccessibleEntities (defineExtensionMethod_storeGlobalVariableIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@storeTaskVariableIR llvmInstructionCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeTaskVariableIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                     GALGAS_string & ioArgument_ioLLVMcode,
                                                                     const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                     GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeTaskVariableIR * object = (const cPtr_storeTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeTaskVariableIR) ;
  GALGAS_string var_llvmType_872 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_872.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (var_llvmType_872, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(function_llvmNameForTaskVariable (object->mAttribute_mTaskName, object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeTaskVariableIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_storeTaskVariableIR.mSlotID,
                                            extensionMethod_storeTaskVariableIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeTaskVariableIR_llvmInstructionCode (defineExtensionMethod_storeTaskVariableIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@storeTaskVariableIR enterAccessibleEntities'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_storeTaskVariableIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_accessibleEntities & ioArgument_ioAccessibleEntities,
                                                                         GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_storeTaskVariableIR * object = (const cPtr_storeTaskVariableIR *) inObject ;
  macroValidSharedObject (object, cPtr_storeTaskVariableIR) ;
  ioArgument_ioAccessibleEntities.mAttribute_mTaskVariableSet.addAssign_operation (object->mAttribute_mTaskName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 39)).add_operation (object->mAttribute_mVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 39))  COMMA_SOURCE_FILE ("intermediate-store-task-variable.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_storeTaskVariableIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_storeTaskVariableIR.mSlotID,
                                                extensionMethod_storeTaskVariableIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_storeTaskVariableIR_enterAccessibleEntities (defineExtensionMethod_storeTaskVariableIR_enterAccessibleEntities, NULL) ;

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
  GALGAS_string var_llvmType_833 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 25)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 26)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_833.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (var_llvmType_833, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (function_llvmNameForLocalVariable (object->mAttribute_mLocalVarName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 27)) ;
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
  GALGAS_string var_llvmType_2477 = object->mAttribute_mTargetVarType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 66)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  store "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 67)) ;
  const enumGalgasBool test_0 = object->mAttribute_mVolatile.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("volatile "), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 69)) ;
  }
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_2477.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)).add_operation (extensionGetter_llvmName (object->mAttribute_mSourceValue, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)).add_operation (var_llvmType_2477, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)).add_operation (GALGAS_string (" * %"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)).add_operation (object->mAttribute_mLLVMName, inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("intermediate-store-local-variable.galgas", 71)) ;
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
//                     Overriding extension method '@loadStructureConstantIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadStructureConstantIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                         GALGAS_string & ioArgument_ioLLVMcode,
                                                                         const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                         GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loadStructureConstantIR * object = (const cPtr_loadStructureConstantIR *) inObject ;
  macroValidSharedObject (object, cPtr_loadStructureConstantIR) ;
  GALGAS_string var_llvmType_732 = extensionGetter_llvmTypeName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 23)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)).add_operation (GALGAS_string (" = load "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 24)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_732.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (var_llvmType_732, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (GALGAS_string (" * @"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (object->mAttribute_mTypeName, inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)).add_operation (GALGAS_string (".init\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("intermediate-load-structure-constant.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadStructureConstantIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_loadStructureConstantIR.mSlotID,
                                            extensionMethod_loadStructureConstantIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadStructureConstantIR_llvmInstructionCode (defineExtensionMethod_loadStructureConstantIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@loadStructureConstantIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_loadStructureConstantIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                             GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                             GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_loadStructureConstantIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_loadStructureConstantIR.mSlotID,
                                                extensionMethod_loadStructureConstantIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loadStructureConstantIR_enterAccessibleEntities (defineExtensionMethod_loadStructureConstantIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@getPropertyReferenceIR llvmInstructionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getPropertyReferenceIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                        GALGAS_string & ioArgument_ioLLVMcode,
                                                                        const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                        GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getPropertyReferenceIR * object = (const cPtr_getPropertyReferenceIR *) inObject ;
  macroValidSharedObject (object, cPtr_getPropertyReferenceIR) ;
  GALGAS_string var_llvmType_839 = extensionGetter_type (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 28)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_839.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)).add_operation (var_llvmType_839, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)).add_operation (extensionGetter_llvmName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)).add_operation (GALGAS_string (", i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)).add_operation (object->mAttribute_mPropertyIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (object->mAttribute_mPLMname, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getPropertyReferenceIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getPropertyReferenceIR.mSlotID,
                                            extensionMethod_getPropertyReferenceIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getPropertyReferenceIR_llvmInstructionCode (defineExtensionMethod_getPropertyReferenceIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@getPropertyReferenceIR enterAccessibleEntities'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getPropertyReferenceIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                            GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                            GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getPropertyReferenceIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getPropertyReferenceIR.mSlotID,
                                                extensionMethod_getPropertyReferenceIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getPropertyReferenceIR_enterAccessibleEntities (defineExtensionMethod_getPropertyReferenceIR_enterAccessibleEntities, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@getPropertyReferenceFromSelfIR llvmInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getPropertyReferenceFromSelfIR_llvmInstructionCode (const cPtr_abstractInstructionIR * inObject,
                                                                                GALGAS_string & ioArgument_ioLLVMcode,
                                                                                const GALGAS_generationContext /* constinArgument_inGenerationContext */,
                                                                                GALGAS_generationAdds & /* ioArgument_ioGenerationAdds */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getPropertyReferenceFromSelfIR * object = (const cPtr_getPropertyReferenceFromSelfIR *) inObject ;
  macroValidSharedObject (object, cPtr_getPropertyReferenceFromSelfIR) ;
  GALGAS_string var_llvmType_1108 = object->mAttribute_mSelfType.getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 31)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTarget, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)).add_operation (GALGAS_string (" = getelementptr inbounds "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 32)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmType_1108.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (var_llvmType_1108, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (GALGAS_string (" * %self, i32 0, i32 "), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)).add_operation (object->mAttribute_mPropertyIndex.getter_string (SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ; ").add_operation (object->mAttribute_mPropertyName, inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-get-element-ptr-from-self.galgas", 34)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getPropertyReferenceFromSelfIR_llvmInstructionCode (void) {
  enterExtensionMethod_llvmInstructionCode (kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR.mSlotID,
                                            extensionMethod_getPropertyReferenceFromSelfIR_llvmInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getPropertyReferenceFromSelfIR_llvmInstructionCode (defineExtensionMethod_getPropertyReferenceFromSelfIR_llvmInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@getPropertyReferenceFromSelfIR enterAccessibleEntities'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_getPropertyReferenceFromSelfIR_enterAccessibleEntities (const cPtr_abstractInstructionIR * /* inObject */,
                                                                                    GALGAS_accessibleEntities & /* ioArgument_ioAccessibleEntities */,
                                                                                    GALGAS_uint & /* ioArgument_ioMaxBranchOfOnInstructions */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getPropertyReferenceFromSelfIR_enterAccessibleEntities (void) {
  enterExtensionMethod_enterAccessibleEntities (kTypeDescriptor_GALGAS_getPropertyReferenceFromSelfIR.mSlotID,
                                                extensionMethod_getPropertyReferenceFromSelfIR_enterAccessibleEntities) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getPropertyReferenceFromSelfIR_enterAccessibleEntities (defineExtensionMethod_getPropertyReferenceFromSelfIR_enterAccessibleEntities, NULL) ;

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
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_llvmName (object->mAttribute_mTargetValue, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)).add_operation (GALGAS_string (" = select "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 27)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_type (object->mAttribute_m_5F_if_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (extensionGetter_llvmName (object->mAttribute_m_5F_if_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 28)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_type (object->mAttribute_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (extensionGetter_llvmName (object->mAttribute_m_5F_then_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 29)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(extensionGetter_type (object->mAttribute_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (extensionGetter_llvmName (object->mAttribute_m_5F_else_5F_variable, inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)), inCompiler  COMMA_SOURCE_FILE ("intermediate-select-instruction.galgas", 30)) ;
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
  GALGAS_uint var_staticStringIndex_1064 ;
  {
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mErrorLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_lastPathComponent (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-test-array-index.galgas", 29)), var_staticStringIndex_1064, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 28)) ;
  }
  GALGAS_bigint var_max_1120 ;
  GALGAS_bool var_isUnsigned_1145 ;
  GALGAS_bigint joker_1106 ; // Joker input parameter
  GALGAS_uint joker_1147_1 ; // Joker input parameter
  extensionGetter_type (object->mAttribute_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).getter_kind (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)).method_integer (joker_1106, var_max_1120, var_isUnsigned_1145, joker_1147_1, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 32)) ;
  const enumGalgasBool test_0 = var_isUnsigned_1145.operator_not (SOURCE_FILE ("intermediate-test-array-index.galgas", 34)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_testToZero_1234 = GALGAS_string ("%test.index.zero.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 35)) ;
    GALGAS_string var_testToZeroOk_1309 = GALGAS_string ("test.index.zero.ok.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 36)) ;
    GALGAS_string var_testToZeroFailure_1391 = GALGAS_string ("test.index.zero.fails.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 37)) ;
    ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 38)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToZero_1234, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" = icmp sge "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_type (object->mAttribute_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (extensionGetter_llvmName (object->mAttribute_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)).add_operation (GALGAS_string (", 0\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 39)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToZero_1234, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroOk_1309, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (var_testToZeroFailure_1391, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 40)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroFailure_1391.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 42)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_1064.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 43)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (object->mAttribute_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 44)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (function_panicCodeForNegativeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 45)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 46)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToZeroOk_1309.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 48)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsSupOrEqual, var_max_1120.objectCompare (object->mAttribute_mSize)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_string var_testToSize_2240 = GALGAS_string ("%test.index.size.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 52)) ;
    GALGAS_string var_testToSizeOk_2315 = GALGAS_string ("test.index.size.ok.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 53)) ;
    GALGAS_string var_testToSizeFailure_2397 = GALGAS_string ("test.index.size.fails.").add_operation (ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 54)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testToSize_2240, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)).add_operation (GALGAS_string (" = icmp "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 55)) ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = var_isUnsigned_1145.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("ult") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("slt") ;
    }
    ioArgument_ioLLVMcode.plusAssign_operation(temp_2, inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 56)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_type (object->mAttribute_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (extensionGetter_llvmName (object->mAttribute_mIndex, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (object->mAttribute_mSize.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 57)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_testToSize_2240, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeOk_2315, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string (", label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (var_testToSizeFailure_2397, inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 58)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeFailure_2397.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 60)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_1064.getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 61)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (object->mAttribute_mErrorLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 62)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (function_panicCodeForTooLargeArrayIndex (inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).getter_string (SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)).add_operation (GALGAS_string (") noreturn \n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 63)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  unreachable\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 64)) ;
    ioArgument_ioLLVMcode.plusAssign_operation(var_testToSizeOk_2315.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 66)) ;
  }
  ioArgument_ioGenerationAdds.mAttribute_mUniqueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("intermediate-test-array-index.galgas", 69)) ;
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
  extensionSetter_findOrAddStaticString (ioArgument_ioGenerationAdds.mAttribute_mStaticStringMap, object->mAttribute_mLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_lastPathComponent (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)).getter_stringByDeletingPathExtension (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 28)), var_staticStringIndex_983, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 27)) ;
  }
  GALGAS_string var_llvmType_1002 = extensionGetter_type (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)).getter_llvmTypeName (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 31)) ;
  GALGAS_string var_llvmSourceName_1055 = extensionGetter_llvmName (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 32)) ;
  GALGAS_string var_llvmLabelName_1096 = extensionGetter_name (object->mAttribute_mSource, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 33)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (".isOk = icmp ult "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmType_1002, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (object->mAttribute_mUpperBoundPlusOne.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 34)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  br i1 ").add_operation (var_llvmSourceName_1055, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".isOk, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ovf, label %"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (var_llvmLabelName_1096, inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)).add_operation (GALGAS_string (".ok\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 35)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(var_llvmLabelName_1096.add_operation (GALGAS_string (".ovf:\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 36)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string ("  call void @raise_panic.").add_operation (var_staticStringIndex_983.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 37)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicLineLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (object->mAttribute_mLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 38)) ;
  ioArgument_ioLLVMcode.plusAssign_operation(constinArgument_inGenerationContext.mAttribute_mPanicCodeLLVMType.add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (object->mAttribute_mPanicCode.getter_string (SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("intermediate-upper-bound-check.galgas", 39)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mSourceLocation.getter_isNowhere (SOURCE_FILE ("intermediate-comment-source-line.galgas", 19)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";---------\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 20)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioLLVMcode.plusAssign_operation(GALGAS_string (";--------- ").add_operation (object->mAttribute_mSourceLocation.getter_line (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_string (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (object->mAttribute_mSourceLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).getter_lastPathComponent (SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("intermediate-comment-source-line.galgas", 22)) ;
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

